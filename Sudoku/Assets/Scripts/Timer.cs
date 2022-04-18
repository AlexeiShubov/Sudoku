using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class Timer : MonoBehaviour
{
    private Text _timer;

    private int _fullSeconds;
    private int _sec;
    private int _min;
    private int _hour;

    private string _time;

    private void Start()
    {
        _timer = GetComponent<Text>();
        StartCoroutine(Time());
        GameEvents.setBestScore.AddListener(SetBestScore);
    }

    IEnumerator Time()
    {
        while (true)
        {
            _fullSeconds++;
            _sec++;

            if (_sec >= 59)
            {
                _min++;
                _sec = 0;
            }
            if (_min >= 59)
            {
                _hour++;
                _min = 0;
            }

            _time = _hour.ToString("D2") + ":" + _min.ToString("D2") + ":" + _sec.ToString("D2");
            _timer.text = _time;

            yield return new WaitForSeconds(1f);
        }
    }

    public void SetBestScore()
    {
        switch (MenuManager.lvl)
        {
            case "easy":
                {
                    if(MenuManager.fullSecondsEasyScore > _fullSeconds || MenuManager.fullSecondsEasyScore == 0)
                    {
                        MenuManager.easyScore = _time;
                        MenuManager.fullSecondsEasyScore = _fullSeconds;
                    }

                    break;
                }
            case "medium":
                {
                    if (MenuManager.fullSecondsMediumScore > _fullSeconds || MenuManager.fullSecondsMediumScore == 0)
                    {
                        MenuManager.mediumScore = _time;
                        MenuManager.fullSecondsMediumScore = _fullSeconds;
                    }

                    break;
                }
            case "hard":
                {
                    if (MenuManager.fullSecondsHardScore > _fullSeconds || MenuManager.fullSecondsHardScore == 0)
                    {
                        MenuManager.hardScore = _time;
                        MenuManager.fullSecondsHardScore = _fullSeconds;
                    }

                    break;
                }
        }

        MenuManager.SaveScore();
    }
}
