using UnityEngine;

public class AudioFX : MonoBehaviour
{
    [SerializeField] private AudioSource _audioSource;
    [SerializeField] private AudioClip _setNumber;
    [SerializeField] private AudioClip _startGame;
    [SerializeField] private AudioClip _gameOver;
    [SerializeField] private AudioClip _finishGame;

    public void PlayAudioSetNumber()
    {
        _audioSource.PlayOneShot(_setNumber);
    }
    public void PlayAudioGameOver()
    {
        _audioSource.PlayOneShot(_gameOver);
    }
    public void PlayAudioFinishGame()
    {
        _audioSource.PlayOneShot(_finishGame);
    }
}
