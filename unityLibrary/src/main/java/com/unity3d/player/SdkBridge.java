package com.unity3d.player;

import android.app.Activity;
import android.content.Intent;

import com.bzsdk.bzloginmodule.LoginActivity;
import com.bzsdk.bzloginmodule.LoginService;
import com.rofi.core.network.NetworkService;
import com.rofi.referral.RofiReferralHelper;

public class SdkBridge {

    public static void OpenLoginScene(){
        Activity activity = UnityPlayer.currentActivity;
        LoginService.getInstance().setSignInListener(data -> {
            UnityPlayer.UnitySendMessage("RofiSdkHelper", "OnLoginComplete", data);
        });
        //Show Login Activity
        Intent myIntent = new Intent(activity, LoginActivity.class);
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

        LoginService.getInstance().setGoogleWebClientId(activity.getString(R.string.default_web_client_id));
        NetworkService.getInstance().Init(activity);
    }

    public static void SetDebug(boolean isDebug){
        NetworkService.getInstance().SetDebug(isDebug);
    }

    public static void RefCheckIn(String accessToken, String refCode){
        String gameCode = LoginService.getInstance().getGameCodeCached();
        String campaignCode = LoginService.getInstance().getCampaignCodeCached();
        RofiReferralHelper.getInstance().RequestCheckInRefCode(accessToken, campaignCode, gameCode, refCode, new NetworkService.BaseCallback() {
            @Override
            public void onSuccess() {
                UnityPlayer.UnitySendMessage("RofiSdkHelper", "OnRefCheckInSuccess", "");
            }

            @Override
            public void onError(String s) {
                UnityPlayer.UnitySendMessage("RofiSdkHelper", "OnRefCheckInFail", s);
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
}