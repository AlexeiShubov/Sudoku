using System.Collections;
using UnityEngine;
using UnityEngine.Advertisements;
using UnityEngine.UI;

public class RewardedAd : MonoBehaviour, IUnityAdsLoadListener, IUnityAdsShowListener
{
    [SerializeField] private string _androidAdID = "Rewarded_Android";
    [SerializeField] private string _iOSAdID = "Rewarded_iOS";
    [SerializeField] private Button _buttonPlus;
    [SerializeField] private OpenSomeCell _openSomeCell;

    private string _adID;


    private void Awake()
    {
        _adID = (Application.platform == RuntimePlatform.IPhonePlayer) ? _iOSAdID : _androidAdID;
        _buttonPlus.interactable = false;
    }

    public void LoadAd()
    {
        Advertisement.Load(_adID, this);
    }

    public void ShowAd()
    {
        _buttonPlus.interactable = false;
        Advertisement.Show(_adID, this);
    }

    public void OnUnityAdsShowFailure(string placementId, UnityAdsShowError error, string message)
    {
        throw new System.NotImplementedException();
    }

    public void OnUnityAdsShowStart(string placementId)
    {
        LoadAd();
    }

    public void OnUnityAdsShowClick(string placementId)
    {
        throw new System.NotImplementedException();
    }

    public void OnUnityAdsShowComplete(string placementId, UnityAdsShowCompletionState showCompletionState)
    {
        if (placementId.Equals(_adID) && showCompletionState.Equals(UnityAdsShowCompletionState.COMPLETED))
        {
            _openSomeCell.GetBonus();
        }
    }

    public void OnUnityAdsAdLoaded(string placementId)
    {
        if (placementId.Equals(_adID))
        {
            _buttonPlus.onClick.AddListener(ShowAd);
            _buttonPlus.interactable = true;
        }
    }

    public void OnUnityAdsFailedToLoad(string placementId, UnityAdsLoadError error, string message)
    {
        throw new System.NotImplementedException();
    }
}
