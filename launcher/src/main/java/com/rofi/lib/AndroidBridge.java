package com.rofi.lib;
import com.unity3d.player.SdkBridge;

public class AndroidBridge {

    public static void WarmUp(){
        SdkBridge.WarmUp();
    }
    public static void CopyTextToClipBoard(String text){
        SdkBridge.setClipboard(text);
    }
    public static void SetDebug(boolean isDebug){
        SdkBridge.SetDebug(isDebug);
    }
    public static void SetMode(int mode){
        SdkBridge.SetDebug(mode);
    }

    public static void OpenLoginScene() {
        SdkBridge.OpenLoginScene();
    }

    public static void OpenLinkAccountScene() {
        SdkBridge.OpenLinkAccountScene();
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

    public static void Logout(){
        SdkBridge.Logout();
    }

    public static void AutoLogin(){
        SdkBridge.AutoLogin();
    }

    public static void ShowVideoAds(String placement, int reqCode){
        SdkBridge.ShowRewardAds(placement, reqCode);
    }

//    public


}