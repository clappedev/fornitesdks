#pragma once

// Fortnite (14.30) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class AudioMixer.SynthComponent
// 0x04D0 (0x06D0 - 0x0200)
class USynthComponent : public USceneComponent
{
public:
	class USoundAttenuation*                           AttenuationSettings;                                      // 0x0200(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FSoundAttenuationSettings                   AttenuationOverrides;                                     // 0x0208(0x03A0) (Edit, BlueprintVisible)
	class USoundConcurrency*                           ConcurrencySettings;                                      // 0x05A8(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData00[0x50];                                      // 0x05B0(0x0050) UNKNOWN PROPERTY: SetProperty AudioMixer.SynthComponent.ConcurrencySet
	class USoundClass*                                 SoundClass;                                               // 0x0600(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class USoundEffectSourcePresetChain*               SourceEffectChain;                                        // 0x0608(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class USoundSubmixBase*                            SoundSubmix;                                              // 0x0610(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FSoundSubmixSendInfo>                SoundSubmixSends;                                         // 0x0618(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FSoundSourceBusSendInfo>             BusSends;                                                 // 0x0628(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FSoundSourceBusSendInfo>             PreEffectBusSends;                                        // 0x0638(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      bIsUISound : 1;                                           // 0x0648(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bIsPreviewSound : 1;                                      // 0x0648(0x0001)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0649(0x0003) MISSED OFFSET
	int                                                EnvelopeFollowerAttackTime;                               // 0x064C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EnvelopeFollowerReleaseTime;                              // 0x0650(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0654(0x0004) MISSED OFFSET
	unsigned char                                      UnknownData03[0x10];                                      // 0x0654(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty AudioMixer.SynthComponent.OnAudioEnvelopeValue
	unsigned char                                      UnknownData04[0x20];                                      // 0x0668(0x0020) MISSED OFFSET
	class USynthSound*                                 Synth;                                                    // 0x0688(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UAudioComponent*                             AudioComponent;                                           // 0x0690(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData05[0x38];                                      // 0x0698(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class AudioMixer.SynthComponent");
		
		return ptr;
	}


	void Stop();
	void Start();
	void SetVolumeMultiplier(float VolumeMultiplier);
	void SetSubmixSend(class USoundSubmixBase* Submix, float SendLevel);
	void SetLowPassFilterFrequency(float InLowPassFilterFrequency);
	void SetLowPassFilterEnabled(bool InLowPassFilterEnabled);
	bool IsPlaying();
};


// Class AudioMixer.AudioGenerator
// 0x0080 (0x00A8 - 0x0028)
class UAudioGenerator : public UObject
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0028(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class AudioMixer.AudioGenerator");
		
		return ptr;
	}

};


// Class AudioMixer.AudioMixerBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UAudioMixerBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class AudioMixer.AudioMixerBlueprintLibrary");
		
		return ptr;
	}


	float STATIC_TrimAudioCache(float InMegabytesToFree);
	class USoundWave* STATIC_StopRecordingOutput(class UObject* WorldContextObject, EAudioRecordingExportType ExportType, const struct FString& Name, const struct FString& Path, class USoundSubmix* SubmixToRecord, class USoundWave* ExistingSoundWaveToOverwrite);
	void STATIC_StopAudioBus(class UObject* WorldContextObject, class UAudioBus* AudioBus);
	void STATIC_StopAnalyzingOutput(class UObject* WorldContextObject, class USoundSubmix* SubmixToStopAnalyzing);
	void STATIC_StartRecordingOutput(class UObject* WorldContextObject, float ExpectedDuration, class USoundSubmix* SubmixToRecord);
	void STATIC_StartAudioBus(class UObject* WorldContextObject, class UAudioBus* AudioBus);
	void STATIC_StartAnalyzingOutput(class UObject* WorldContextObject, class USoundSubmix* SubmixToAnalyze, EFFTSize FFTSize, EFFTPeakInterpolationMethod InterpolationMethod, EFFTWindowType WindowType, float HopSize, EAudioSpectrumType SpectrumType);
	void STATIC_SetBypassSourceEffectChainEntry(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain, int EntryIndex, bool bBypassed);
	void STATIC_ResumeRecordingOutput(class UObject* WorldContextObject, class USoundSubmix* SubmixToPause);
	void STATIC_ReplaceSoundEffectSubmix(class UObject* WorldContextObject, class USoundSubmix* InSoundSubmix, int SubmixChainIndex, class USoundEffectSubmixPreset* SubmixEffectPreset);
	void STATIC_RemoveSubmixEffectPresetAtIndex(class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, int SubmixChainIndex);
	void STATIC_RemoveSubmixEffectPreset(class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, class USoundEffectSubmixPreset* SubmixEffectPreset);
	void STATIC_RemoveSourceEffectFromPresetChain(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain, int EntryIndex);
	void STATIC_RemoveMasterSubmixEffect(class UObject* WorldContextObject, class USoundEffectSubmixPreset* SubmixEffectPreset);
	void STATIC_PrimeSoundForPlayback(class USoundWave* SoundWave, const struct FScriptDelegate& OnLoadCompletion);
	void STATIC_PrimeSoundCueForPlayback(class USoundCue* SoundCue);
	void STATIC_PauseRecordingOutput(class UObject* WorldContextObject, class USoundSubmix* SubmixToPause);
	TArray<struct FSoundSubmixSpectralAnalysisBandSettings> STATIC_MakePresetSpectralAnalysisBandSettings(EAudioSpectrumBandPresetType InBandPresetType, int InNumBands, int InAttackTimeMsec, int InReleaseTimeMsec);
	TArray<struct FSoundSubmixSpectralAnalysisBandSettings> STATIC_MakeMusicalSpectralAnalysisBandSettings(int InNumSemitones, EMusicalNoteName InStartingMusicalNote, int InStartingOctave, int InAttackTimeMsec, int InReleaseTimeMsec);
	TArray<struct FSoundSubmixSpectralAnalysisBandSettings> STATIC_MakeFullSpectrumSpectralAnalysisBandSettings(int InNumBands, float InMinimumFrequency, float InMaximumFrequency, int InAttackTimeMsec, int InReleaseTimeMsec);
	bool STATIC_IsAudioBusActive(class UObject* WorldContextObject, class UAudioBus* AudioBus);
	void STATIC_GetPhaseForFrequencies(class UObject* WorldContextObject, TArray<float> Frequencies, class USoundSubmix* SubmixToAnalyze, TArray<float>* Phases);
	int STATIC_GetNumberOfEntriesInSourceEffectChain(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain);
	void STATIC_GetMagnitudeForFrequencies(class UObject* WorldContextObject, TArray<float> Frequencies, class USoundSubmix* SubmixToAnalyze, TArray<float>* Magnitudes);
	void STATIC_ClearSubmixEffects(class UObject* WorldContextObject, class USoundSubmix* SoundSubmix);
	void STATIC_ClearMasterSubmixEffects(class UObject* WorldContextObject);
	int STATIC_AddSubmixEffect(class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, class USoundEffectSubmixPreset* SubmixEffectPreset);
	void STATIC_AddSourceEffectToPresetChain(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain, const struct FSourceEffectChainEntry& Entry);
	void STATIC_AddMasterSubmixEffect(class UObject* WorldContextObject, class USoundEffectSubmixPreset* SubmixEffectPreset);
};


// Class AudioMixer.SubmixEffectDynamicsProcessorPreset
// 0x00C8 (0x0130 - 0x0068)
class USubmixEffectDynamicsProcessorPreset : public USoundEffectSubmixPreset
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0068(0x0078) MISSED OFFSET
	struct FSubmixEffectDynamicsProcessorSettings      Settings;                                                 // 0x00E0(0x0050) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class AudioMixer.SubmixEffectDynamicsProcessorPreset");
		
		return ptr;
	}


	void SetSettings(const struct FSubmixEffectDynamicsProcessorSettings& Settings);
	void SetExternalSubmix(class USoundSubmix* Submix);
};


// Class AudioMixer.SubmixEffectSubmixEQPreset
// 0x0048 (0x00B0 - 0x0068)
class USubmixEffectSubmixEQPreset : public USoundEffectSubmixPreset
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0068(0x0038) MISSED OFFSET
	struct FSubmixEffectSubmixEQSettings               Settings;                                                 // 0x00A0(0x0010) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class AudioMixer.SubmixEffectSubmixEQPreset");
		
		return ptr;
	}


	void SetSettings(const struct FSubmixEffectSubmixEQSettings& InSettings);
};


// Class AudioMixer.SubmixEffectReverbPreset
// 0x0090 (0x00F8 - 0x0068)
class USubmixEffectReverbPreset : public USoundEffectSubmixPreset
{
public:
	unsigned char                                      UnknownData00[0x5C];                                      // 0x0068(0x005C) MISSED OFFSET
	struct FSubmixEffectReverbSettings                 Settings;                                                 // 0x00C4(0x0034) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class AudioMixer.SubmixEffectReverbPreset");
		
		return ptr;
	}


	void SetSettingsWithReverbEffect(class UReverbEffect* InReverbEffect, float WetLevel, float DryLevel);
	void SetSettings(const struct FSubmixEffectReverbSettings& InSettings);
};


// Class AudioMixer.SubmixEffectReverbFastPreset
// 0x0098 (0x0100 - 0x0068)
class USubmixEffectReverbFastPreset : public USoundEffectSubmixPreset
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0068(0x0060) MISSED OFFSET
	struct FSubmixEffectReverbFastSettings             Settings;                                                 // 0x00C8(0x0038) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class AudioMixer.SubmixEffectReverbFastPreset");
		
		return ptr;
	}


	void SetSettingsWithReverbEffect(class UReverbEffect* InReverbEffect, float WetLevel, float DryLevel);
	void SetSettings(const struct FSubmixEffectReverbFastSettings& InSettings);
};


// Class AudioMixer.SynthSound
// 0x0020 (0x03C0 - 0x03A0)
class USynthSound : public USoundWaveProcedural
{
public:
	class USynthComponent*                             OwningSynthComponent;                                     // 0x03A0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x03A8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class AudioMixer.SynthSound");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
