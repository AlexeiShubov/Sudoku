using UnityEngine;

public class PauseGame : MonoBehaviour
{
    [SerializeField] private GameObject _pausePanel;
    [SerializeField] private GameObject _mainGrid;

    private bool _pauseStatus;

    private bool GetPauseStatus() => _pauseStatus;
    private void SetPauseStatus(bool pauseStatus) => _pauseStatus = pauseStatus;

    public void PauseUnPause()
    {
        SetPauseStatus(!GetPauseStatus());

        if (GetPauseStatus())
        {
            SetGamePause();
            _pausePanel.SetActive(true);
        }
        else
        {
            SetGameUnPause();
            _pausePanel.SetActive(false);
        }
    }

    private void SetGamePause()
    {
        Time.timeScale = 0f;
        _mainGrid.SetActive(false);
    }
    private void SetGameUnPause()
    {
        Time.timeScale = 1f;
        _mainGrid.SetActive(true);
    }
}
