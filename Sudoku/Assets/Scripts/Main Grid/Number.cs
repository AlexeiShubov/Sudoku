using UnityEngine;
using UnityEngine.UI;

public class Number : MonoBehaviour
{
    [SerializeField] private int _numberButton;

    private AudioFX _audioSource;

    private bool _selectNumber;
    private bool _mabyNumber;

    private void Start()
    {
        _audioSource = FindObjectOfType<AudioFX>();
        GameEvents.buttonNumberSetEvent.AddListener(SetSelectNumber);
        GameEvents.buttonNumberSetColorEvent.AddListener(SetButtonNumberColor);
        GameEvents.buttonMabyNumberEvent.AddListener(SetMabyNumber);
    }

    private bool GetSelectNumber() => _selectNumber;
    private void SetSelectNumber(bool selectNumber) => _selectNumber = selectNumber;

    private bool GetMabyNumber() => _mabyNumber;
    private void SetMabyNumber(bool mabyNumber) => _mabyNumber = mabyNumber;

    private void SetButtonNumberColor()
    {
        if ((GetSelectNumber() && Cell.numberButton != _numberButton) || (GetMabyNumber() && GetSelectNumber()))
        {
            GetComponent<Image>().color = Color.cyan;
        }
        else
        {
            GetComponent<Image>().color = Color.white;
        }
    }

    public void SelectButtonNumber()
    {
        _audioSource.PlayAudioSetNumber();

        GameEvents.buttonSomeNumberEvent.Invoke(false);
        GameEvents.setColorButtonSomeNumberEvent.Invoke();
        GameEvents.buttonNumberSetEvent.Invoke(false);
        SetSelectNumber(true);
        GameEvents.buttonNumberSetColorEvent.Invoke();
        GameEvents.buttonClearEvent.Invoke(false);
        GameEvents.setColorClearButtonEvent.Invoke();

        if (GetSelectNumber() && !GetMabyNumber() && Cell.numberButton != _numberButton)
        {
            Cell.numberButton = _numberButton;
            GameEvents.setCanBeSetPlayerNumberEvent.Invoke(true);
            GameEvents.setCellColorEvent.Invoke();
        }
        else if (GetMabyNumber() && GetSelectNumber())
        {
            Cell.numberButton = _numberButton;
            GameEvents.setCanBeSetPlayerNumberEvent.Invoke(false);
            GameEvents.setCellColorEvent.Invoke();
        }
        else
        {
            Cell.numberButton = 0;

            GameEvents.setCanBeSetPlayerNumberEvent.Invoke(false);
            GameEvents.setCellColorEvent.Invoke();
        }
    }
}
