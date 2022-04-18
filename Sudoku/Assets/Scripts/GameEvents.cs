using UnityEngine.Events;
using UnityEngine;

public class GameEvents : MonoBehaviour
{
    public static UnityEvent buttonNumberSetColorEvent = new UnityEvent();
    public static UnityEvent setCellColorEvent = new UnityEvent();
    public static UnityEvent setColorButtonSomeNumberEvent = new UnityEvent();
    public static UnityEvent setColorMabyNumberButtonEvent = new UnityEvent();
    public static UnityEvent setColorClearButtonEvent = new UnityEvent();

    public static UnityEvent<bool> buttonNumberSetEvent = new UnityEvent<bool>();
    public static UnityEvent<bool> buttonSomeNumberEvent = new UnityEvent<bool>();
    public static UnityEvent<bool> setCanBeSetPlayerNumberEvent = new UnityEvent<bool>();
    public static UnityEvent<bool> buttonMabyNumberEvent = new UnityEvent<bool>();
    public static UnityEvent<bool> buttonClearEvent = new UnityEvent<bool>();

    public static UnityEvent setBestScore = new UnityEvent();
}
