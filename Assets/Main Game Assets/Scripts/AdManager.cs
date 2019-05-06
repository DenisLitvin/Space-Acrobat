using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using GoogleMobileAds.Api;

public class AdManager : MonoBehaviour
{
    private InterstitialAd interstitial;

    public void Start()
    {

#if UNITY_ANDROID
        string appId = "ca-app-pub-3940256099942544~3347511713";
#elif UNITY_IOS
        string appId = "ca-app-pub-5093627727358595~8235073586";
#else
        string appId = "unexpected_platform";
#endif

        MobileAds.SetiOSAppPauseOnBackground(true);

        MobileAds.Initialize(appId);

        RequestInterstitial();
    }


    private void RequestInterstitial()
    {
        // These ad units are configured to always serve test ads.
#if UNITY_ANDROID
        string adUnitId = "ca-app-pub-5093627727358595/8674057282";
#elif UNITY_IOS
        string adUnitId = "ca-app-pub-5093627727358595/4283865069";
#else
        string adUnitId = "unexpected_platform";
#endif

        // Clean up interstitial ad before creating a new one.
        if (this.interstitial != null)
        {
            this.interstitial.Destroy();
        }

        // Create an interstitial.
        this.interstitial = new InterstitialAd(adUnitId);

        // Register for ad events.
        //this.interstitial.OnAdLoaded += this.HandleInterstitialLoaded;
        //this.interstitial.OnAdFailedToLoad += this.HandleInterstitialFailedToLoad;
        //this.interstitial.OnAdOpening += this.HandleInterstitialOpened;
        //this.interstitial.OnAdClosed += this.HandleInterstitialClosed;
        //this.interstitial.OnAdLeavingApplication += this.HandleInterstitialLeftApplication;

        // Load an interstitial ad.
        this.interstitial.LoadAd(this.CreateAdRequest());
    }

    public void ShowInterstitial()
    {
        StopCoroutine("ShowWhenReady");
        StartCoroutine("ShowWhenReady");
    }
    private IEnumerator ShowWhenReady()
    {
        if (this.interstitial.IsLoaded())
        {
            this.interstitial.Show();
            MonoBehaviour.print("Interstitial is showed");
        }
        else
        {
            MonoBehaviour.print("Interstitial is not ready yet");
            yield return new WaitForSeconds(1f);
        }
    }
    private AdRequest CreateAdRequest()
    {
        return new AdRequest.Builder()
            //.AddTestDevice(AdRequest.TestDeviceSimulator)
            //.AddTestDevice("0123456789ABCDEF0123456789ABCDEF")
            .AddKeyword("game")
            .SetGender(Gender.Male)
            .AddTestDevice("cc1eeadafc81e0b1ddce7dbd969f3917")
            //.SetBirthday(new DateTime(1985, 1, 1))
            //.TagForChildDirectedTreatment(false)
            //.AddExtra("color_bg", "9B30FF")
            .Build();
    }


}
