using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using System.Collections.Generic;

public class GameController : PersistableObject
{
    public GameObject[] SpaceshipPrefabs;
    public GameObject ScorePlusPrefab;

    public GameObject UiInterface;

    public Image LockImage;
    public Button LeftButton;
    public Button RightButton;
    public Button PlayButton;
    public Text ShipDescription;

    public Text CoinsCollectedText;
    public Text DaysInGameText;
    public Text ScoreText;
    public Text MissilesCollapsedText;

    public GameObject Player;
    public MissileSpawner MissileSpawner;
    public PlanetSpawner PlanetSpawner;
    public IncentiveSpawner IncentiveSpawner;

    public PersistentStorage PersistentStorage;

    private PlayerController playerControllerScript;
    private GameObject canvas;

    private int score;
    private int topScore;
    private float nextScoreUpdateTime;

    private int level = 1;
    private int coins;
    private int daysInGame;
    private float missilesCollapsed;
    private int currentShipPrefab;
    private bool isPlaying;
    private bool firstRun = true;
    private float savedShipSpeed;

    private void Start()
    {
        canvas = GameObject.FindGameObjectWithTag("Canvas");
        playerControllerScript = Player.GetComponent<PlayerController>();
        Application.targetFrameRate = 60;
        StopGame();

        if (PersistentStorage.SaveFileExist())
        {
            PersistentStorage.Load(this);
        }
        daysInGame += 1;
        score = topScore;
        SpawnShip(currentShipPrefab);

        ShowArrowButtonsIfNeeded();
        ShowLockOnShipIfNeeded();
        ShowPlayButtonOnShipIfNeeded();
        UpdateShipDescriptionText();
    }

    private void Update()
    {
        CoinsCollectedText.text = coins.ToString();
        DaysInGameText.text = daysInGame.ToString();
        MissilesCollapsedText.text = missilesCollapsed.ToString();
        ScoreText.text = score.ToString();

        if (isPlaying && Time.time > nextScoreUpdateTime)
        {
            score += 1;
            nextScoreUpdateTime = Time.time + 1f;
            var scorePlus = Instantiate(ScorePlusPrefab);
            scorePlus.transform.SetParent(canvas.transform, false);
        }
    }

    public void HandlePlayButton()
    {
        StartGame();
    }

    public void HandleLeftArrowButton()
    {
        if (currentShipPrefab <= 0) return;
        currentShipPrefab--;

        ShowArrowButtonsIfNeeded();
        ShowLockOnShipIfNeeded();
        ShowPlayButtonOnShipIfNeeded();
        UpdateShipDescriptionText();

        DestroyShip();
        SpawnShip(currentShipPrefab);
    }

    public void HandleRightArrowButton()
    {
        if (currentShipPrefab >= SpaceshipPrefabs.Length - 1) return;
        currentShipPrefab++;

        ShowArrowButtonsIfNeeded();
        ShowLockOnShipIfNeeded();
        ShowPlayButtonOnShipIfNeeded();
        UpdateShipDescriptionText();

        DestroyShip();
        SpawnShip(currentShipPrefab);
    }

    private void UpdateShipDescriptionText()
    {
        ShipDescription.text = currentShipPrefab.ToString();
        var requirements = SpaceshipPrefabs[currentShipPrefab].GetComponent<ShipRequirementsController>().requirements;

        string str = "";

        if (requirements.Coins > 0 && requirements.Coins > coins)
        {
            str += "coins collected            " + coins.ToString() + "/" + requirements.Coins.ToString() + "\n";
        }
        if (requirements.Days > 0 && requirements.Days > daysInGame)
        {
            str += "consecutive days played    " + daysInGame.ToString() + "/" + requirements.Days.ToString() + "\n"; 
        }
        if (requirements.MissilesCollapsed > 0 && requirements.MissilesCollapsed > missilesCollapsed)
        {
            str += "missiles collapsed         " + missilesCollapsed.ToString() + "/" + requirements.MissilesCollapsed.ToString() + "\n";
        }

        ShipDescription.text = str;
    }

    private void ShowPlayButtonOnShipIfNeeded()
    {
        PlayButton.interactable = CurrentShipAvailable();
    }

    private void ShowLockOnShipIfNeeded() {
        var color = LockImage.color;
        color.a = CurrentShipAvailable() ? 0f : 1f;
        LockImage.color = color;
    }

    private bool CurrentShipAvailable()
    {
        var controller = SpaceshipPrefabs[currentShipPrefab].GetComponent<ShipRequirementsController>();
        return controller.requirements.Days <= daysInGame
            && controller.requirements.Coins <= coins
            && controller.requirements.MissilesCollapsed <= missilesCollapsed;
    }

    private void ShowArrowButtonsIfNeeded() 
    {
        LeftButton.interactable = currentShipPrefab > 0;
        RightButton.interactable = currentShipPrefab < SpaceshipPrefabs.Length - 1;
    }

    public void HandleMissileCollapse()
    {
        missilesCollapsed += 0.5f;
    }

    public void HandleShipDestroy()
    {
        DestroyMissiles();
        StopGame();
        PersistentStorage.Save(this);
    }

    public void HandleCoinCollect()
    {
        coins++;
    }

    private void SpawnShip(int id)
    {
        GameObject shipPrefab = SpaceshipPrefabs[id];
        GameObject ship = Instantiate(shipPrefab, shipPrefab.transform.localPosition, shipPrefab.transform.localRotation);
        ship.transform.SetParent(Player.transform, false);
    }

    private void StartGame()
    {
        isPlaying = true;

        level = 2;
        score = 0;
        savedShipSpeed = playerControllerScript.Speed;

        UiInterface.SetActive(false);
        playerControllerScript.SetPlayingMode(true);
        PlanetSpawner.SetPlayingMode(true);
        StartCoroutine("SpawnMissiles");
        StartCoroutine("SpawnIncentives");
    }

    private void StopGame()
    {
        if (!firstRun)
        {
            playerControllerScript.Speed = 0f;
            PlanetSpawner.SetPlayingMode(false);
        }

        isPlaying = false;
        topScore = Mathf.Max(topScore, score);

        playerControllerScript.SetPlayingMode(false);
        DestroyShip();
        DestroyCoins();
        StopCoroutine("SpawnMissiles");
        StopCoroutine("SpawnIncentives");
        StartCoroutine("ActivateInterface");
    }

    IEnumerator ActivateInterface()
    {
        yield return new WaitForSeconds(2f);
        if (!firstRun)
        {
            //isPlaying = false;
            score = topScore;
            SpawnShip(currentShipPrefab);
            playerControllerScript.Speed = savedShipSpeed;
            PlanetSpawner.SetPlayingMode(true);
            UiInterface.SetActive(true);
        }
        firstRun = false;
        yield break;
    }

    private void DestroyShip()
    {
        int i = 0;
        while (i < Player.transform.childCount)
        {
            Transform child = Player.transform.GetChild(i);
            Destroy(child.gameObject);
            i++;
        }
    }

    private IEnumerator SpawnIncentives()
    {
        while (true)
        {
            IncentiveSpawner.SpawnIncentive();
            yield return new WaitForSeconds(10f);
        }
    }

    private IEnumerator SpawnMissiles()
    {
        while (true)
        {
            DestroyMissiles();
            MissileSpawner.SpawnMissiles(level);
            level += 1;
            yield return new WaitForSeconds(10f);
        }
    }

    private void DestroyMissiles()
    {
        GameObject[] missiles = GameObject.FindGameObjectsWithTag("Missile");
        foreach (GameObject missile in missiles)
        {
            MissileController controller = missile.GetComponent<MissileController>();
            controller.Destroy();
        }
    }
    private void DestroyCoins()
    {
        GameObject[] objc = GameObject.FindGameObjectsWithTag("Coin");
        foreach (GameObject coin in objc)
        {
            Destroy(coin);
        }
    }

    //PersistableObject
    public override void Save(GameDataWriter writer)
    {
        writer.Write(currentShipPrefab);
        writer.Write(coins);
        writer.Write(daysInGame);
        writer.Write(missilesCollapsed);
        writer.Write(topScore);
    }

    public override void Load(GameDataReader reader)
    {
        currentShipPrefab = reader.ReadInt();
        coins = reader.ReadInt();
        daysInGame = reader.ReadInt();
        missilesCollapsed = reader.ReadFloat();
        topScore = reader.ReadInt();
    }
}
