using UnityEngine;
using UnityEngine.UI;

public class SetMabyNumber : MonoBehaviour
{
    private bool _buttonMabyNumber;

    private AudioFX _audioSource;

    private void Start()
    {
        _audioSource = FindObjectOfType<AudioFX>();
        GameEvents.buttonMabyNumberEvent.AddListener(SetButtonMabyNumber);
        GameEvents.setColorMabyNumberButtonEvent.AddListener(SetColorButunMabyNumber);
    }

    private bool GetButtonMabyNumber() => _buttonMabyNumber;
    private void SetButtonMabyNumber(bool buttonMabyNumber) => _buttonMabyNumber = buttonMabyNumber;

    private void SetColorButunMabyNumber()
    {
        if (GetButtonMabyNumber())
        {
            GetComponent<Image>().color = Color.cyan;
        }
        else
        {
            GetComponent<Image>().color = Color.white;
        }
    }

    public void ClickOnButtonMabyNumber()
    {
        _audioSource.PlayAudioSetNumber();

        GameEvents.buttonClearEvent.Invoke(false);
        GameEvents.setColorClearButtonEvent.Invoke();

        SetButtonMabyNumber(!GetButtonMabyNumber());

        if (GetButtonMabyNumber())
        {
            GameEvents.buttonNumberSetEvent.Invoke(false);
            GameEvents.setCanBeSetPlayerNumberEvent.Invoke(false);
            GameEvents.buttonSomeNumberEvent.Invoke(false);
            GameEvents.setCanBeSetPlayerNumberEvent.Invoke(false);
            GameEvents.buttonMabyNumberEvent.Invoke(true);
            GameEvents.setColorButtonSomeNumberEvent.Invoke();
            GameEvents.buttonNumberSetColorEvent.Invoke();
            GameEvents.setCellColorEvent.Invoke();

            SetColorButunMabyNumber();
        }
        else
        {
            GameEvents.buttonMabyNumberEvent.Invoke(false);
            GameEvents.buttonNumberSetEvent.Invoke(false);
            GameEvents.buttonNumberSetColorEvent.Invoke();
            GameEvents.setCellColorEvent.Invoke();

            SetColorButunMabyNumber();
        }

        Cell.numberButton = 0;
    }
}
