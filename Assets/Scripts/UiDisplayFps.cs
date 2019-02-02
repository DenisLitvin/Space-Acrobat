using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class UiDisplayFps : MonoBehaviour
{
    public string formatedString = "{value} FPS";
    public Text txtFps;

    public float updateRateSeconds = 4.0F;

    private int frameCount = 0;
    private float dt = 0.0F;
    private float fps = 0.0F;

    void Update()
    {
        frameCount++;
        dt += Time.unscaledDeltaTime;
        if (dt > 1.0 / updateRateSeconds)
        {
            fps = frameCount / dt;
            frameCount = 0;
            dt -= 1.0F / updateRateSeconds;
        }
        txtFps.text = formatedString.Replace("{value}", System.Math.Round(fps, 1).ToString("0.0"));
    }
}