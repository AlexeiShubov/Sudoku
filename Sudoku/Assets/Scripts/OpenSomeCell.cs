using UnityEngine;
using UnityEngine.UI;

public class OpenSomeCell : MonoBehaviour
{
    [SerializeField] private int _countCanBeOpenCells;
    [SerializeField] private UnityAds _unityAds;
    [SerializeField] private Text _countCanBeOpenCellsText;

    private AudioFX _audioSource;

    private bool _buttonSomeNumber;

    private void Start()
    {
        _audioSource = FindObjectOfType<AudioFX>();
        SetCountCanBeOpenCellsText();
        GameEvents.buttonSomeNumberEvent.AddListener(SetButtonSomeNumber);
        GameEvents.setColorButtonSomeNumberEvent.AddListener(SetColorButunSomeNumber);
    }

    private void SetButtonSomeNumber(bool buttonSomeNumber) => _buttonSomeNumber = buttonSomeNumber;
    private bool GetButtonSomeNumber() => _buttonSomeNumber;
    private void SetCountCanBeOpenCellsText() => _countCanBeOpenCellsText.text = _countCanBeOpenCells.ToString();
    public int GetCountCanBeOpenCells() => _countCanBeOpenCells;

    private void SetColorButunSomeNumber()
    {
        if (GetButtonSomeNumber())
        {
            GetComponent<Image>().color = Color.cyan;
        }
        else
        {
            GetComponent<Image>().color = Color.white;
        }
    }

    public void SetCountCanBeOpenCells()
    {
        _countCanBeOpenCells--;
        SetCountCanBeOpenCellsText();

        if(GetCountCanBeOpenCells() == 0)
        {
            GetComponent<Button>().interactable = false;
        }
    }

    public void GetBonus()
    {
        _countCanBeOpenCells++;
        SetCountCanBeOpenCellsText();

        if (GetCountCanBeOpenCells() > 0)
        {
            GetComponent<Button>().interactable = true;
        }
    }

    public void ClickOnButtonSomeNumber()
    {
        _audioSource.PlayAudioSetNumber();
        _unityAds.LoarRewardedAds();

        GameEvents.buttonClearEvent.Invoke(false);
        GameEvents.setColorClearButtonEvent.Invoke();

        SetButtonSomeNumber(!GetButtonSomeNumber());

        if (GetButtonSomeNumber())
        {
            GameEvents.buttonNumberSetEvent.Invoke(false);
            GameEvents.setCanBeSetPlayerNumberEvent.Invoke(false);
            GameEvents.buttonSomeNumberEvent.Invoke(true);
            GameEvents.buttonMabyNumberEvent.Invoke(false);
            GameEvents.setColorMabyNumberButtonEvent.Invoke();
            GameEvents.setCellColorEvent.Invoke();
            GameEvents.buttonNumberSetColorEvent.Invoke();

            SetColorButunSomeNumber();
        }
        else
        {
            GameEvents.buttonSomeNumberEvent.Invoke(false);
            GameEvents.setCellColorEvent.Invoke();

            SetColorButunSomeNumber();
        }

        Cell.numberButton = 0;
    }
}
