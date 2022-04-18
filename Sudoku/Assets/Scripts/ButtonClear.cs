using UnityEngine;
using UnityEngine.UI;

public class ButtonClear : MonoBehaviour
{
    private bool _buttonActive;

    private AudioFX _audioSource;

    private void Start()
    {
        _audioSource = FindObjectOfType<AudioFX>();

        GameEvents.buttonClearEvent.AddListener(SetButtonActive);
        GameEvents.setColorClearButtonEvent.AddListener(SetButtonClearColor);
    }

    private void SetButtonActive(bool buttonClear) => _buttonActive = buttonClear;
    private bool GetButtonActive() => _buttonActive;


    public void ClickOnClearButton()
    {
        _audioSource.PlayAudioSetNumber();
        SetButtonActive(!GetButtonActive());
        SetButtonClearColor();

        Cell.numberButton = 0;

        GameEvents.setCanBeSetPlayerNumberEvent.Invoke(false);
        GameEvents.buttonMabyNumberEvent.Invoke(false);
        GameEvents.buttonSomeNumberEvent.Invoke(false);
        GameEvents.buttonNumberSetEvent.Invoke(false);
        GameEvents.buttonClearEvent.Invoke(GetButtonActive());
        GameEvents.setColorButtonSomeNumberEvent.Invoke();
        GameEvents.setColorMabyNumberButtonEvent.Invoke();
        GameEvents.buttonNumberSetColorEvent.Invoke();
        GameEvents.setCellColorEvent.Invoke();
    }

    private void SetButtonClearColor()
    {
        if (GetButtonActive())
        {
            gameObject.GetComponent<Image>().color = Color.cyan;
        }
        else
        {
            gameObject.GetComponent<Image>().color = Color.white;
        }
    }
}
