using UnityEngine;

public class AudioFXMenu : MonoBehaviour
{
    [SerializeField] private AudioClip _ckick;

    private AudioSource _audioSource;


    private void Start()
    {
        _audioSource = GetComponent<AudioSource>();
    }
    public void PlayAudioClick()
    {
        _audioSource.PlayOneShot(_ckick);
    }
}
