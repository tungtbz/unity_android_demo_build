package com.rofi.lib;
import com.unity3d.player.SdkBridge;

public class AndroidBridge {

    public static void WarmUp(){
        SdkBridge.WarmUp();
    }

    public static void SetDebug(boolean isDebug){
        SdkBridge.SetDebug(isDebug);
    }

    public static void OpenLoginScene() {
        SdkBridge.OpenLoginScene();
    }

    public static void GetUserInfo(String accessToken) {
        SdkBridge.GetUserInfo(accessToken);
    }

    public static void RefCheckIn(String accessToken, String refCode){
        SdkBridge.RefCheckIn(accessToken,refCode);
    }

    public static String GetCurrentAccessToken(){
        return SdkBridge.GetCurrentAccessToken();
    }

    public static void SetRefCodeCached(String refCodeCached){
        SdkBridge.SetRefCodeCached(refCodeCached);
    }

    public static void JoinCampaign(String accessToken){
        SdkBridge.JoinCampaign(accessToken);
    }
}