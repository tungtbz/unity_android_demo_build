package com.unity3d.player;

import android.app.Activity;
import android.content.ClipboardManager;
import android.content.Context;
import android.content.Intent;
import android.util.Log;

import com.bz.idolworld.library.LibHelper;
import com.bzsdk.bzloginmodule.LinkAccountActivity;
import com.bzsdk.bzloginmodule.LoginActivity;
import com.bzsdk.bzloginmodule.LoginService;
import com.rofi.core.BuildConfig;
import com.rofi.core.network.Constants;
import com.rofi.core.network.EvaiModes;
import com.rofi.core.network.NetworkService;
import com.rofi.messaging.RofiMessagingHelper;
import com.rofi.referral.RofiReferralHelper;

public class SdkBridge {

    public static void setClipboard(String text) {
        Context context = UnityPlayer.currentActivity.getApplicationContext();
        if(android.os.Build.VERSION.SDK_INT < android.os.Build.VERSION_CODES.HONEYCOMB) {
            android.text.ClipboardManager clipboard = (android.text.ClipboardManager) context.getSystemService(Context.CLIPBOARD_SERVICE);
            clipboard.setText(text);
        } else {
            android.content.ClipboardManager clipboard = (android.content.ClipboardManager) context.getSystemService(Context.CLIPBOARD_SERVICE);
            android.content.ClipData clip = android.content.ClipData.newPlainText("Copied Text", text);
            clipboard.setPrimaryClip(clip);
        }
    }
    public static void OpenLoginScene(){
        Activity activity = UnityPlayer.currentActivity;

        //Show Login Activity
        Intent myIntent = new Intent(activity, LoginActivity.class);
        activity.startActivity(myIntent);
    }

    public static void OpenLinkAccountScene(){
        Activity activity = UnityPlayer.currentActivity;
        //Show Login Activity
        Intent myIntent = new Intent(activity, LinkAccountActivity.class);
        activity.startActivity(myIntent);
    }

    public static void GetUserInfo(String accessToken){
        LoginService.getInstance().getCurrentUserInfo(accessToken, new NetworkService.GetUserInfoCallback() {
            @Override
            public void onSuccess(String jsonStr) {
                UnityPlayer.UnitySendMessage("RofiSdkHelper", "OnGetUserInfo", jsonStr);
            }

            @Override
            public void onError(String message) {
                UnityPlayer.UnitySendMessage("RofiSdkHelper", "OnGetUserInfoFailed", message);
            }
        });
    }

    public static void WarmUp() {
        Activity activity = UnityPlayer.currentActivity;
        LoginService.getInstance().setCampaignCodeCached(activity.getString(R.string.campaign_code));
        LoginService.getInstance().setGameCodeCached(activity.getString(R.string.game_code));
        LoginService.getInstance().Init(activity.getApplicationContext());
        LoginService.getInstance().setGoogleWebClientId(activity.getString(R.string.default_web_client_id));
        NetworkService.getInstance().SetDebug(true);
        NetworkService.getInstance().Init(activity);
        LoginService.getInstance().setSignInListener(data -> {
            Log.d("", "OpenLoginScene: " + data);
            UnityPlayer.UnitySendMessage("RofiSdkHelper", "OnLoginComplete", data);
        });
        RofiMessagingHelper.getInstance().Init();
    }

    public static void SetDebug(boolean isDebug){
        NetworkService.getInstance().SetDebug(isDebug);
    }

    public static void RefCheckIn(String accessToken, String refCode){
        String gameCode = LoginService.getInstance().getGameCodeCached();
        String campaignCode = LoginService.getInstance().getCampaignCodeCached();
        RofiReferralHelper.getInstance().RequestCheckInRefCode(accessToken, campaignCode, gameCode, refCode, new RofiReferralHelper.CheckInCallback() {
            @Override
            public void onSuccess(String userId) {
                UnityPlayer.UnitySendMessage("RofiSdkHelper", "OnRefCheckInSuccess", userId);
            }

            @Override
            public void onError(String data) {
                UnityPlayer.UnitySendMessage("RofiSdkHelper", "OnRefCheckInFail", data);
            }
        });
    }

    public static void JoinCampaign(String accessToken) {
        String campaignCode = LoginService.getInstance().getCampaignCodeCached();
        RofiReferralHelper.getInstance().JoinCampaign(accessToken, campaignCode, new RofiReferralHelper.RefLinkCallback() {
            @Override
            public void onSuccess(String refLinkData) {
                UnityPlayer.UnitySendMessage("RofiSdkHelper", "OnGetRefDataSuccess", refLinkData);
            }

            @Override
            public void onError(String s) {
                UnityPlayer.UnitySendMessage("RofiSdkHelper", "OnGetRefDataFail", s);
            }
        });
    }

    public static String GetCurrentAccessToken() {
        return LoginService.getInstance().getCurrentToken();
    }

    public static void SetRefCodeCached(String refCodeCached) {
        RofiReferralHelper.getInstance().SetRefCodeToCache(refCodeCached);
    }

    public static void SetDebug(int mode){
//        NetworkService.getInstance().SetMode(EvaiModes.fromInt(mode));
    }

    public static int GetSDKVersionCode(){
        return Constants.VERSION_CODE;
    }

    public static String GetSDKVersionName(){
        return Constants.VERSION_NAME;
    }

    public static void Logout(){
        Activity activity = UnityPlayer.currentActivity;
        LoginService.getInstance().Clean(activity.getApplicationContext());
    }

    public static void AutoLogin(){

        if(LoginService.getInstance().HasRefreshToken())
        {
            Activity activity = UnityPlayer.currentActivity;
            LoginService.getInstance().AutoLogin(activity.getApplicationContext());
        }
    }

    public static void ShowRewardAds(String placement, int reqCode){
        LibHelper.getInstance().getmAdsService().ShowAds();
    }


}