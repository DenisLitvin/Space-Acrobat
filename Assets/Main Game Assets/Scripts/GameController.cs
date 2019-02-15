using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using System.Collections.Generic;

public class GameController : PersistableObject
{
    public GameObject[] spaceshipPrefabs;

    public GameObject uiInterface;

    public Text coinText;

    public GameObject player;
    public MissileSpawner missileSpawner;
    public PlanetSpawner planetSpawner;

    public PersistentStorage persistentStorage;

    private PlayerController playerControllerScript;

    private int level = 1;
    private int coins = 0;
    private int currentShipPrefab = 0;
    private bool isPlaying = false;
    private bool firstRun = true;
    private float savedShipSpeed;
    private float savedPlanetsSpeed;

    private void Start()
    {
        playerControllerScript = player.GetComponent<PlayerController>();
        Application.targetFrameRate = 60;
        StopGame();

        if (persistentStorage.SaveFileExist())
        {
            persistentStorage.Load(this);
        }
        SpawnShip(currentShipPrefab);
    }

    private void Update()
    {
        coinText.text = coins.ToString();
    }

    public void HandlePlayButton()
    {
        StartGame();
    }

    public void HandleLeftArrowButton()
    {
        if (currentShipPrefab <= 0) return;
        DestroyShip();
        currentShipPrefab--;
        SpawnShip(currentShipPrefab);
    }

    public void HandleRightArrowButton()
    {
        if (currentShipPrefab >= spaceshipPrefabs.Length - 1) return;
        DestroyShip();
        currentShipPrefab++;
        SpawnShip(currentShipPrefab);
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
        GameObject shipPrefab = spaceshipPrefabs[id];
        GameObject ship = Instantiate(shipPrefab, shipPrefab.transform.localPosition, shipPrefab.transform.localRotation);
        ship.transform.SetParent(player.transform, false);
    }

    private void StartGame()
    {
        level = 2;
        savedShipSpeed = playerControllerScript.speed;
        savedPlanetsSpeed = planetSpawner.speed;

        isPlaying = true;
        uiInterface.SetActive(false);
        playerControllerScript.SetPlayingMode(true);
        StartCoroutine("SpawnMissiles");
    }

    private void StopGame()
    {
        if (!firstRun)
        {
            playerControllerScript.speed = 0f;
            planetSpawner.speed = 0f;
        }
        playerControllerScript.SetPlayingMode(false);
        DestroyShip();
        DestroyCoins();
        StopCoroutine("SpawnMissiles");
        StartCoroutine("ActivateInterface");
    }

    IEnumerator ActivateInterface()
    {
        yield return new WaitForSeconds(2f);
        if (!firstRun && isPlaying)
        {
            isPlaying = false;
            SpawnShip(currentShipPrefab);
            playerControllerScript.speed = savedShipSpeed;
            planetSpawner.speed = savedPlanetsSpeed;
            uiInterface.SetActive(true);
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

    private IEnumerator SpawnMissiles()
    {
        while (true)
        {
            DestroyMissiles();
            missileSpawner.SpawnMissile(level);
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
    }

    public override void Load(GameDataReader reader)
    {
        currentShipPrefab = reader.ReadInt();
        coins = reader.ReadInt();
    }
}
