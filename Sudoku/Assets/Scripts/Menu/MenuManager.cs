using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class MenuManager : MonoBehaviour
{
    [SerializeField] private Text _yeasyScoreText;
    [SerializeField] private Text _mediumScoreText;
    [SerializeField] private Text _hardScoreText;

    public static string easyScore;
    public static string mediumScore;
    public static string hardScore;
    public static string lvl;

    public static int fullSecondsEasyScore;
    public static int fullSecondsMediumScore;
    public static int fullSecondsHardScore;


    private void Start()
    {
        LoadScore();
        SetScore();
    }

    private void LoadScore()
    {
        easyScore = PlayerPrefs.GetString("easyScore", "00:00:00");
        mediumScore = PlayerPrefs.GetString("mediumScore", "00:00:00");
        hardScore = PlayerPrefs.GetString("hardScore", "00:00:00");

        fullSecondsEasyScore = PlayerPrefs.GetInt("fullSecondsEasyScore");
        fullSecondsMediumScore = PlayerPrefs.GetInt("fullSecondsMediumScore");
        fullSecondsHardScore = PlayerPrefs.GetInt("fullSecondsHardScore");
    }
    private void SetScore()
    {
        _yeasyScoreText.text = easyScore;
        _mediumScoreText.text = mediumScore;
        _hardScoreText.text = hardScore;
    }

    public static void SaveScore()
    {
        PlayerPrefs.SetString("easyScore", easyScore);
        PlayerPrefs.SetString("mediumScore", mediumScore);
        PlayerPrefs.SetString("hardScore", hardScore);

        PlayerPrefs.SetInt("fullSecondsEasyScore", fullSecondsEasyScore);
        PlayerPrefs.SetInt("fullSecondsMediumScore", fullSecondsMediumScore);
        PlayerPrefs.SetInt("fullSecondsHardScore", fullSecondsHardScore);
    }

    public void DeleteAllScore()
    {
        PlayerPrefs.DeleteAll();
        LoadScore();
        SetScore();
    }
    public void LoadGameSceneEasy()
    {
        lvl = "easy";
        SceneManager.LoadScene(1);
    }
    public void LoadGameSceneMedium()
    {
        lvl = "medium";
        SceneManager.LoadScene(1);
    }
    public void LoadGameSceneHard()
    {
        lvl = "hard";
        SceneManager.LoadScene(1);
    }
}
