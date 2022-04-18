using UnityEngine;
using UnityEngine.Advertisements;

public class UnityAds : MonoBehaviour, IUnityAdsInitializationListener
{
    [SerializeField] private string _androidGameID = "4712697";
    [SerializeField] private string _iOSGameID = "4712696";
    [SerializeField] private bool _testMode = false;

    private InterstitialAds _interstitialAds;
    private RewardedAd _rewardedAd;

    private string _gameID;

    private void Awake()
    {
        InitializeAds();
    }
    private void Start()
    {
        _interstitialAds = GetComponent<InterstitialAds>();
        _rewardedAd = GetComponent<RewardedAd>();
    }

    private void InitializeAds()
    {
        _gameID = (Application.platform == RuntimePlatform.IPhonePlayer) ? _iOSGameID : _androidGameID;
        Advertisement.Initialize(_gameID, _testMode, this);
    }

    public void OnInitializationComplete()
    {
        _rewardedAd.LoadAd();
    }

    public void OnInitializationFailed(UnityAdsInitializationError error, string message)
    {
        Debug.Log($"Unity Ads initialization is not complete.{error.ToString()} = {message}");
    }
    public void PlayInterstitialAd()
    {
        _interstitialAds.ShowAd();
    }
    public void PlayRewardedAd()
    {
        _rewardedAd.ShowAd();
    }
    public void LoarRewardedAds()
    {
        _rewardedAd.LoadAd();
    }
}
