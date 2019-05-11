using UnityEngine;
using UnityEngine.UI;
using System.Collections;
//using System.Collections.Generic;

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
    public Text SpeedText;
    public Text SteeringText;
    public Image SpeedImage;
    public Image SteeringImage;

    public Text CoinsCollectedText;
    //public Text DaysInGameText;
    public Text ScoreText;
    //public Text MissilesCollapsedText;

    public GameObject Player;
    public MissileSpawner MissileSpawner;
    public PlanetSpawner PlanetSpawner;
    public IncentiveSpawner IncentiveSpawner;
    public AdManager AdManager;
    public PersistentStorage PersistentStorage;

    private PlayerController playerController;
    private GameObject canvas;

    private int topScore;
    private float nextScoreUpdateTime;

    private int level = 1;
    private int coins;
    private int score;
    private float missilesCollapsed;
    private int currentShipPrefab;
    private bool isPlaying;
    private bool firstRun = true;
    private float savedShipSpeed;

    private float baseSpeed;
    private float baseSteering;

    private void Start()
    {
        canvas = GameObject.FindGameObjectWithTag("Canvas");
        playerController = Player.GetComponent<PlayerController>();
        Application.targetFrameRate = 60;
        StopGame();

        if (PersistentStorage.SaveFileExist())
        {
            PersistentStorage.Load(this);
        }
        score = topScore;
        baseSteering = playerController.Steering;
        baseSpeed = playerController.Speed;
        SpawnShip(currentShipPrefab);

        ShowArrowButtonsIfNeeded();
        ShowLockOnShipIfNeeded();
        ShowPlayButtonOnShipIfNeeded();
        UpdateShipDescriptionText();
        UpdateShipSpecInterface();
        UpdateShipSpecs();
    }

    private void Update()
    {
        UpdateText();
    }

    private void UpdateText()
    {
        CoinsCollectedText.text = coins.ToString();
        //DaysInGameText.text = score.ToString();
        //MissilesCollapsedText.text = missilesCollapsed.ToString();
        ScoreText.text = score.ToString();

        if (isPlaying && Time.time > nextScoreUpdateTime)
        {
            score += 1;
            nextScoreUpdateTime = Time.time + 1f;
            SpawnScorePlusOne();
        }
    }

    private bool HasMissiles()
    {
        return GameObject.FindGameObjectsWithTag("Missile").Length > 0;
    }

    private void SpawnScorePlusOne()
    {
        var scorePlus = Instantiate(ScorePlusPrefab);
        scorePlus.transform.SetParent(canvas.transform, false);
        Destroy(scorePlus, 3f);
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
        UpdateShipSpecInterface();
        UpdateShipSpecs();

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
        UpdateShipSpecInterface();
        UpdateShipSpecs();

        DestroyShip();
        SpawnShip(currentShipPrefab);
    }

    private void UpdateShipSpecs()
    {
        var specs = SpaceshipPrefabs[currentShipPrefab].GetComponent<ShipInfoController>().specs;
        playerController.Speed = baseSpeed + baseSpeed * specs.Speed;
        playerController.Steering = baseSteering + baseSteering * specs.Steering;
    }

    private void UpdateShipSpecInterface()
    {
        var specs = SpaceshipPrefabs[currentShipPrefab].GetComponent<ShipInfoController>().specs;
        if (specs.Speed > 0)
        {
            SpeedText.color = Color.white;
            SpeedImage.color = Color.white;
            SpeedText.text = "+" + (specs.Speed * 100f).ToString() + "%";
        }
        else
        {
            SpeedText.color = Color.clear;
            SpeedImage.color = Color.clear;
        }

        if (specs.Steering > 0)
        {
            SteeringText.color = Color.white;
            SteeringImage.color = Color.white;
            SteeringText.text = "+" + (specs.Steering * 100f).ToString() + "%";
        }
        else
        {
            SteeringText.color = Color.clear;
            SteeringImage.color = Color.clear;
        }
    }

    private void UpdateShipDescriptionText()
    {
        var requirements = SpaceshipPrefabs[currentShipPrefab].GetComponent<ShipInfoController>().requirements;

        string str = "";

        if (requirements.Coins > 0 && requirements.Coins > coins)
        {
            str += "coins collected          " + coins.ToString() + "/" + requirements.Coins.ToString() + "\n";
        }
        if (requirements.Score > 0 && requirements.Score > topScore)
        {
            str += "top score reached        " + topScore.ToString() + "/" + requirements.Score.ToString() + "\n";
        }
        if (requirements.MissilesCollapsed > 0 && requirements.MissilesCollapsed > (int)missilesCollapsed)
        {
            str += "missiles collapsed       " + missilesCollapsed.ToString() + "/" + requirements.MissilesCollapsed.ToString() + "\n";
        }

        ShipDescription.text = str;
    }

    private void ShowPlayButtonOnShipIfNeeded()
    {
        PlayButton.interactable = CurrentShipAvailable();
    }

    private void ShowLockOnShipIfNeeded()
    {
        var color = LockImage.color;
        color.a = CurrentShipAvailable() ? 0f : 1f;
        LockImage.color = color;
    }

    private bool CurrentShipAvailable()
    {
        var controller = SpaceshipPrefabs[currentShipPrefab].GetComponent<ShipInfoController>();
        return controller.requirements.Score <= score
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

        level = 1;
        score = 0;
        savedShipSpeed = playerController.Speed;

        UiInterface.SetActive(false);
        playerController.SetPlayingMode(true);
        PlanetSpawner.SetPlayingMode(true);
        StartCoroutine("SpawnMissiles");
        StartCoroutine("SpawnIncentives");
    }

    private void StopGame()
    {
        if (!firstRun)
        {
            playerController.Speed = 0f;
            PlanetSpawner.SetPlayingMode(false);
        }

        isPlaying = false;
        topScore = Mathf.Max(topScore, score);

        playerController.SetPlayingMode(false);
        DestroyMissiles();
        DestroyIncentives();
        DestroyShip();
        StopCoroutine("SpawnMissiles");
        MissileSpawner.StopSpawning();
        StopCoroutine("SpawnIncentives");
        StartCoroutine("ActivateInterface");
        AdManager.ShowInterstitial();
    }

    IEnumerator ActivateInterface()
    {
        yield return new WaitForSeconds(2f);
        if (!firstRun)
        {
            score = topScore;
            SpawnShip(currentShipPrefab);
            playerController.Speed = savedShipSpeed;
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
            if (Random.Range(0f, 1f) > 0.5)
            {
                IncentiveSpawner.SpawnIncentive();
            }
            yield return new WaitForSeconds(15f);
        }
    }

    private IEnumerator SpawnMissiles()
    {
        while (true)
        {
            DestroyMissiles();
            int missiles = level / 2;
            if (missiles % 2 > 0)
            {
                missiles += 1;
            }
            MissileSpawner.SpawnMissiles(Mathf.Clamp(missiles + 2, 1, 10));
            level += 1;
            if (level < 3)
            {
                yield return new WaitForSeconds(5f);
            }
            else
            {
                yield return new WaitForSeconds(10f);
            }
        }
    }

    private void DestroyIncentives()
    {
        foreach (GameObject coin in GameObject.FindGameObjectsWithTag("Coin"))
        {
            Destroy(coin);
        }
        foreach (GameObject boost in GameObject.FindGameObjectsWithTag("Boost"))
        {
            Destroy(boost);
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

    //PersistableObject
    public override void Save(GameDataWriter writer)
    {
        writer.Write(currentShipPrefab);
        writer.Write(coins);
        writer.Write(missilesCollapsed);
        writer.Write(topScore);
    }

    public override void Load(GameDataReader reader)
    {
        currentShipPrefab = reader.ReadInt();
        coins = reader.ReadInt();
        missilesCollapsed = reader.ReadFloat();
        topScore = reader.ReadInt();
    }
}
