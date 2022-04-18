using UnityEngine;
using UnityEngine.UI;

public class Cell : MonoBehaviour
{
    [SerializeField] private Text _playerNumber;
    [SerializeField] private Text _mabyNumberText;

    private ParticleSystem _particleSystem;
    
    private OpenSomeCell _someNumber;
    private GridGenerator _gameManager;
    private AudioFX _audioSource;

    private int _trueNumber;
    
    private bool _block;
    private bool _canBeSetPlayerNumber;
    private bool _buttonSomeNumber;
    private bool _buttonMabyNumber;
    private bool _buttonClear;

    public static int numberButton;

    public Cell(int trueNumber)
    {
        _trueNumber = trueNumber;
    }

    private void Start()
    {
        if (_block)
        {
            SetPlayerNumber(_trueNumber);
            GetComponent<Button>().enabled = false;
        }

        _someNumber = FindObjectOfType<OpenSomeCell>();
        _audioSource = FindObjectOfType<AudioFX>();
        _gameManager = FindObjectOfType<GridGenerator>();
        _particleSystem = GetComponentInChildren<ParticleSystem>();

        GameEvents.setCanBeSetPlayerNumberEvent.AddListener(SetCanBeSetPlayerNumber);
        GameEvents.setCellColorEvent.AddListener(SetCellColor);
        GameEvents.buttonMabyNumberEvent.AddListener(SetButtonMabyNumber);
        GameEvents.buttonClearEvent.AddListener(SetButtonClear);
        GameEvents.buttonSomeNumberEvent.AddListener(SetButtonSomeNumber);
    }

    public bool GetButtonSomeNumber() => _buttonSomeNumber;
    public void SetButtonSomeNumber(bool buttonNumber) => _buttonSomeNumber = buttonNumber;

    public bool GetButtonMabyNumber() => _buttonMabyNumber;
    public void SetButtonMabyNumber(bool buttonNumber) => _buttonMabyNumber = buttonNumber;

    public int GetPlayerNumber() => int.Parse(_playerNumber.text);
    public void SetPlayerNumber(int playerNumber) => _playerNumber.text = playerNumber.ToString();
    public void SetPlayerNumber() => _playerNumber.text = "";

    public int GetMabyNumberText() => int.Parse(_mabyNumberText.text);
    public void SetMabyNumberText(int mabyNumberText) => _mabyNumberText.text = mabyNumberText.ToString();
    public void SetMabyNumberText() => _mabyNumberText.text = "";

    public int GetTrueNumber() => _trueNumber;
    public void SetTrueNumber(int trueNumber) => _trueNumber = trueNumber;

    public bool GetBlock() => _block;
    public void SetBlock(bool block) => _block = block;

    public void SetCanBeSetPlayerNumber(bool canBeSetPlayerNumber) => _canBeSetPlayerNumber = canBeSetPlayerNumber;
    public bool GetCanBeSetPlayerNumber() => _canBeSetPlayerNumber;

    public bool GetButtonClear() => _buttonClear;
    public void SetButtonClear(bool buttonClear) => _buttonClear = buttonClear;


    public void ClickOnCell()
    {
        _audioSource.PlayAudioSetNumber();

        if (GetCanBeSetPlayerNumber() && !GetButtonSomeNumber() && !GetButtonMabyNumber() && !GetButtonClear())
        {
            SetPlayerNumber(numberButton);
            SetNumber();
        }
        else if (GetButtonSomeNumber() && !GetCanBeSetPlayerNumber() && !GetButtonMabyNumber() && !GetButtonClear())
        {
            SetPlayerNumber(GetTrueNumber());
            SetNumber();
            _someNumber.SetCountCanBeOpenCells();
        }
        else if(GetButtonMabyNumber() && !GetButtonSomeNumber() && !GetCanBeSetPlayerNumber() && !GetButtonClear())
        {
            if(numberButton == 0)
            {
                GameEvents.setCellColorEvent.Invoke();
            }
            else
            {
                SetMabyNumberText(numberButton);
                GameEvents.buttonMabyNumberEvent.Invoke(false);
                GameEvents.buttonNumberSetEvent.Invoke(false);
                GameEvents.buttonNumberSetColorEvent.Invoke();
                GameEvents.setCellColorEvent.Invoke();
                GameEvents.setColorMabyNumberButtonEvent.Invoke();

                numberButton = 0;
            }
        }
        else if(GetButtonClear())
        {
            ClearWrongNumberOrMabyNumber();
        }
    }

    private void ClearWrongNumberOrMabyNumber()
    {
        SetMabyNumberText();
        SetPlayerNumber();
        GameEvents.buttonClearEvent.Invoke(false);
        GameEvents.setColorClearButtonEvent.Invoke();
        GameEvents.setCellColorEvent.Invoke();
    }
    private void SetNumber()
    {
        if (GetTrueNumber() == GetPlayerNumber())
        {
            _particleSystem.Play();
            _playerNumber.color = Color.black;
            SetBlock(true);
            GetComponent<Button>().enabled = false;
            _gameManager.SetOpenCountCells();
            SetMabyNumberText();
        }
        else
        {
            _playerNumber.color = Color.red;
            _gameManager.SetDamage();
        }

        numberButton = 0;

        GameEvents.buttonNumberSetEvent.Invoke(false);
        GameEvents.buttonNumberSetColorEvent.Invoke();

        GameEvents.buttonSomeNumberEvent.Invoke(false);
        GameEvents.setColorButtonSomeNumberEvent.Invoke();

        GameEvents.setCanBeSetPlayerNumberEvent.Invoke(false);
        GameEvents.setCellColorEvent.Invoke();
    }
    private void SetCellColor()
    {
        if ((GetCanBeSetPlayerNumber() && !GetBlock()) || (GetButtonSomeNumber() && !GetBlock()) || (GetButtonMabyNumber() && !GetBlock()))
        {
            gameObject.GetComponent<Image>().color = Color.cyan;
        }
        else if (!GetBlock() && GetButtonClear())
        {
            gameObject.GetComponent<Image>().color = Color.cyan;
        }
        else
        {
            gameObject.GetComponent<Image>().color = Color.white;
        }
    }
}
