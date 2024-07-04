using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.PlayerLoop;
using Random = UnityEngine.Random;

public class AudioManager : MonoBehaviour
{
    public static AudioManager instance;

    [Header("#BGM")]
    public AudioClip bgmClip;
    public float bgmVolume;
    AudioSource bgmPlayer;
    AudioHighPassFilter bgmEffact;

    [Header("#SFX")]
    public AudioClip[] sfxClip;
    public float sfxVolume;
    public int channels;
    AudioSource[] sfxPlayer;
    int channelIndex;

    public enum Sfx { Dead, Hit, LevelUp=3, Lose, Melee, Range=7, Select, Win};



    void Awake()
    {
        instance = this;
        Init();
    }

    void Init()
    {
        //배경음 플레이어 초기화
        GameObject bgmObject = new GameObject("BgmPlayer");
        bgmObject.transform.parent = transform;
        bgmPlayer = bgmObject.AddComponent<AudioSource>();
        bgmPlayer.playOnAwake = false;
        bgmPlayer.loop = true;
        bgmPlayer.volume = bgmVolume;
        bgmPlayer.clip = bgmClip;
        bgmEffact = Camera.main.GetComponent<AudioHighPassFilter>();

        //효과음 플레이어 초기화
        GameObject sfxObject = new GameObject("SfxPlayer");
        sfxObject.transform.parent = transform;
        sfxPlayer = new AudioSource[channels];

        for (int index=0; index < sfxPlayer.Length; index++) {
            sfxPlayer[index] = sfxObject.AddComponent<AudioSource>();
            sfxPlayer[index].playOnAwake = false;
            sfxPlayer[index].bypassListenerEffects = true;
            sfxPlayer[index].volume = sfxVolume;
        }
    }    

    public void PlayBgm(bool isPlay)
    {
        if (isPlay) {
            bgmPlayer.Play();
        }
        else{
            bgmPlayer.Stop();
        }
    }

    public void EffecBgm(bool isPlay)
    {
        bgmEffact.enabled = isPlay;
    }

    public void PlaySfx(Sfx sfx)
    {
        for (int index=0; index < sfxPlayer.Length; index++) {
            int loopIndex = (index + channelIndex) % sfxPlayer.Length;

            if (sfxPlayer[loopIndex].isPlaying)
            continue;

            int ranIndex = 0;
            if (sfx == Sfx.Hit || sfx == Sfx.Melee) {
                ranIndex = Random.Range(0, 2);
            }

            channelIndex = loopIndex;
            sfxPlayer[loopIndex].clip = sfxClip[(int)sfx + ranIndex];
            sfxPlayer[loopIndex].Play();
            break;
        }
        

    }
}
