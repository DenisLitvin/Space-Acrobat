using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using System.Collections.Generic;

public class GameController : PersistableObject
{
    public GameObject[] SpaceshipPrefabs;

    public GameObject UiInterface;

    public Image LockImage;
    public Button LeftButton;
    public Button RightButton;
    public Button PlayButton;

    public Text CoinsCollectedText;
    public Text DaysInGameText;
    public Text MissilesCollapsedText;

    public GameObject player;
    public MissileSpawner missileSpawner;
    public PlanetSpawner planetSpawner;
    public IncentiveSpawner IncentiveSpawner;

    public PersistentStorage persistentStorage;

    private PlayerController playerControllerScript;

    private int level = 1;
    private int coins;
    private int daysInGame;
    private int missilesCollapsed;
    private int currentShipPrefab;
    private bool isPlaying = false;
    private bool firstRun = true;
    private float savedShipSpeed;

    private void Start()
    {
        playerControllerScript = player.GetComponent<PlayerController>();
        Application.targetFrameRate = 60;
        StopGame();

        if (persistentStorage.SaveFileExist())
        {
            persistentStorage.Load(this);
        }
        daysInGame += 1;

        SpawnShip(currentShipPrefab);

        ShowArrowButtonsIfNeeded();
        ShowLockOnShipIfNeeded();
    }

    private void Update()
    {
        CoinsCollectedText.text = coins.ToString();
        DaysInGameText.text = daysInGame.ToString();
        MissilesCollapsedText.text = missilesCollapsed.ToString();
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

        DestroyShip();
        SpawnShip(currentShipPrefab);
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

    public void HandleDestroyShip()
    {
        DestroyMissiles();
        StopGame();
        persistentStorage.Save(this);
    }

    public void HandleCoinCollect()
    {
        coins++;
    }

    private void SpawnShip(int id)
    {
        GameObject shipPrefab = SpaceshipPrefabs[id];
        GameObject ship = Instantiate(shipPrefab, shipPrefab.transform.localPosition, shipPrefab.transform.localRotation);
        ship.transform.SetParent(player.transform, false);
    }

    private void StartGame()
    {
        level = 2;
        savedShipSpeed = playerControllerScript.Speed;

        isPlaying = true;
        UiInterface.SetActive(false);
        playerControllerScript.SetPlayingMode(true);
        planetSpawner.SetPlayingMode(true);
        StartCoroutine("SpawnMissiles");
        StartCoroutine("SpawnIncentives");
    }

    private void StopGame()
    {
        if (!firstRun)
        {
            playerControllerScript.Speed = 0f;
            planetSpawner.SetPlayingMode(false);
        }
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
        if (!firstRun && isPlaying)
        {
            isPlaying = false;
            SpawnShip(currentShipPrefab);
            playerControllerScript.Speed = savedShipSpeed;
            planetSpawner.SetPlayingMode(true);
            UiInterface.SetActive(true);
        }
        firstRun = false;
        yield break;
    }

    private void DestroyShip()
    {
        int i = 0;
        while (i < player.transform.childCount)
        {
            Transform child = player.transform.GetChild(i);
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
            missileSpawner.SpawnMissiles(level);
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
    }

    public override void Load(GameDataReader reader)
    {
        currentShipPrefab = reader.ReadInt();
        coins = reader.ReadInt();
        daysInGame = reader.ReadInt();
        missilesCollapsed = reader.ReadInt();
    }
}
