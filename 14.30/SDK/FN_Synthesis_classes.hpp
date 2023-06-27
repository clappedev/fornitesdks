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

// Class Synthesis.ModularSynthPresetBank
// 0x0010 (0x0038 - 0x0028)
class UModularSynthPresetBank : public UObject
{
public:
	TArray<struct FModularSynthPresetBankEntry>        Presets;                                                  // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class Synthesis.ModularSynthPresetBank");
		
		return ptr;
	}

};


// Class Synthesis.ModularSynthLibrary
// 0x0000 (0x0028 - 0x0028)
class UModularSynthLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class Synthesis.ModularSynthLibrary");
		
		return ptr;
	}


	void STATIC_AddModularSynthPresetToBankAsset(class UModularSynthPresetBank* InBank, const struct FModularSynthPreset& Preset, const struct FString& PresetName);
};


// Class Synthesis.ModularSynthComponent
// 0x06C0 (0x0D90 - 0x06D0)
class UModularSynthComponent : public USynthComponent
{
public:
	int                                                VoiceCount;                                               // 0x06D0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6BC];                                     // 0x06D4(0x06BC) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class Synthesis.ModularSynthComponent");
		
		return ptr;
	}


	void SetSynthPreset(const struct FModularSynthPreset& SynthPreset);
	void SetSustainGain(float SustainGain);
	void SetStereoDelayWetlevel(float DelayWetlevel);
	void SetStereoDelayTime(float DelayTimeMsec);
	void SetStereoDelayRatio(float DelayRatio);
	void SetStereoDelayMode(ESynthStereoDelayMode StereoDelayMode);
	void SetStereoDelayIsEnabled(bool StereoDelayEnabled);
	void SetStereoDelayFeedback(float DelayFeedback);
	void SetSpread(float Spread);
	void SetReleaseTime(float ReleaseTimeMsec);
	void SetPortamento(float Portamento);
	void SetPitchBend(float PitchBend);
	void SetPan(float Pan);
	void SetOscType(int OscIndex, ESynth1OscType OscType);
	void SetOscSync(bool bIsSynced);
	void SetOscSemitones(int OscIndex, float Semitones);
	void SetOscPulsewidth(int OscIndex, float Pulsewidth);
	void SetOscOctave(int OscIndex, float Octave);
	void SetOscGainMod(int OscIndex, float OscGainMod);
	void SetOscGain(int OscIndex, float OscGain);
	void SetOscFrequencyMod(int OscIndex, float OscFreqMod);
	void SetOscCents(int OscIndex, float Cents);
	void SetModEnvSustainGain(float SustainGain);
	void SetModEnvReleaseTime(float Release);
	void SetModEnvPatch(ESynthModEnvPatch InPatchType);
	void SetModEnvInvert(bool bInvert);
	void SetModEnvDepth(float Depth);
	void SetModEnvDecayTime(float DecayTimeMsec);
	void SetModEnvBiasPatch(ESynthModEnvBiasPatch InPatchType);
	void SetModEnvBiasInvert(bool bInvert);
	void SetModEnvAttackTime(float AttackTimeMsec);
	void SetLFOType(int LFOIndex, ESynthLFOType LFOType);
	void SetLFOPatch(int LFOIndex, ESynthLFOPatchType LFOPatchType);
	void SetLFOMode(int LFOIndex, ESynthLFOMode LFOMode);
	void SetLFOGainMod(int LFOIndex, float GainMod);
	void SetLFOGain(int LFOIndex, float Gain);
	void SetLFOFrequencyMod(int LFOIndex, float FrequencyModHz);
	void SetLFOFrequency(int LFOIndex, float FrequencyHz);
	void SetGainDb(float GainDb);
	void SetFilterType(ESynthFilterType FilterType);
	void SetFilterQMod(float FilterQ);
	void SetFilterQ(float FilterQ);
	void SetFilterFrequencyMod(float FilterFrequencyHz);
	void SetFilterFrequency(float FilterFrequencyHz);
	void SetFilterAlgorithm(ESynthFilterAlgorithm FilterAlgorithm);
	void SetEnableUnison(bool EnableUnison);
	void SetEnableRetrigger(bool RetriggerEnabled);
	void SetEnablePolyphony(bool bEnablePolyphony);
	bool SetEnablePatch(const struct FPatchId& PatchId, bool bIsEnabled);
	void SetEnableLegato(bool LegatoEnabled);
	void SetDecayTime(float DecayTimeMsec);
	void SetChorusFrequency(float Frequency);
	void SetChorusFeedback(float Feedback);
	void SetChorusEnabled(bool EnableChorus);
	void SetChorusDepth(float Depth);
	void SetAttackTime(float AttackTimeMsec);
	void NoteOn(float Note, int Velocity, float Duration);
	void NoteOff(float Note, bool bAllNotesOff, bool bKillAllNotes);
	struct FPatchId CreatePatch(ESynth1PatchSource PatchSource, TArray<struct FSynth1PatchCable> PatchCables, bool bEnableByDefault);
};


// Class Synthesis.MotoSynthPreset
// 0x0068 (0x0090 - 0x0028)
class UMotoSynthPreset : public UObject
{
public:
	struct FMotoSynthRuntimeSettings                   Settings;                                                 // 0x0028(0x0068) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class Synthesis.MotoSynthPreset");
		
		return ptr;
	}

};


// Class Synthesis.MotoSynthSource
// 0x00D0 (0x00F8 - 0x0028)
class UMotoSynthSource : public UObject
{
public:
	bool                                               bConvertTo8Bit;                                           // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	float                                              DownSampleFactor;                                         // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRuntimeFloatCurve                          RPMCurve;                                                 // 0x0030(0x0088) (Edit, BlueprintVisible)
	TArray<float>                                      SourceData;                                               // 0x00B8(0x0010) (ZeroConstructor, Deprecated)
	TArray<int16_t>                                    SourceDataPCM;                                            // 0x00C8(0x0010) (ZeroConstructor)
	int                                                SourceSampleRate;                                         // 0x00D8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00DC(0x0004) MISSED OFFSET
	TArray<struct FGrainTableEntry>                    GrainTable;                                               // 0x00E0(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData02[0x8];                                       // 0x00F0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class Synthesis.MotoSynthSource");
		
		return ptr;
	}

};


// Class Synthesis.SourceEffectBitCrusherPreset
// 0x0068 (0x00D0 - 0x0068)
class USourceEffectBitCrusherPreset : public USoundEffectSourcePreset
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0068(0x0048) MISSED OFFSET
	struct FSourceEffectBitCrusherSettings             Settings;                                                 // 0x00B0(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class Synthesis.SourceEffectBitCrusherPreset");
		
		return ptr;
	}


	void SetSettings(const struct FSourceEffectBitCrusherSettings& InSettings);
	void SetSampleRateModulator(const struct FSoundModulationDestinationSettings& InModulatorSettings);
	void SetBitModulator(const struct FSoundModulationDestinationSettings& InModulatorSettings);
};


// Class Synthesis.SourceEffectChorusPreset
// 0x0148 (0x01B0 - 0x0068)
class USourceEffectChorusPreset : public USoundEffectSourcePreset
{
public:
	unsigned char                                      UnknownData00[0xB8];                                      // 0x0068(0x00B8) MISSED OFFSET
	struct FSourceEffectChorusSettings                 Settings;                                                 // 0x0120(0x0090) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class Synthesis.SourceEffectChorusPreset");
		
		return ptr;
	}


	void SetWetModulator(const struct FSoundModulationDestinationSettings& InModulatorSettings);
	void SetSpreadModulator(const struct FSoundModulationDestinationSettings& InModulatorSettings);
	void SetSettings(const struct FSourceEffectChorusSettings& InSettings);
	void SetFrequencyModulator(const struct FSoundModulationDestinationSettings& InModulatorSettings);
	void SetFeedbackModulator(const struct FSoundModulationDestinationSettings& InModulatorSettings);
	void SetDryModulator(const struct FSoundModulationDestinationSettings& InModulatorSettings);
	void SetDepthModulator(const struct FSoundModulationDestinationSettings& InModulatorSettings);
};


// Class Synthesis.SourceEffectDynamicsProcessorPreset
// 0x0078 (0x00E0 - 0x0068)
class USourceEffectDynamicsProcessorPreset : public USoundEffectSourcePreset
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0068(0x0050) MISSED OFFSET
	struct FSourceEffectDynamicsProcessorSettings      Settings;                                                 // 0x00B8(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class Synthesis.SourceEffectDynamicsProcessorPreset");
		
		return ptr;
	}


	void SetSettings(const struct FSourceEffectDynamicsProcessorSettings& InSettings);
};


// Class Synthesis.EnvelopeFollowerListener
// 0x0020 (0x00D0 - 0x00B0)
class UEnvelopeFollowerListener : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00B0(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty Synthesis.EnvelopeFollowerListener.OnEnvelopeFollowerUpdate
	unsigned char                                      UnknownData01[0x10];                                      // 0x00C0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class Synthesis.EnvelopeFollowerListener");
		
		return ptr;
	}

};


// Class Synthesis.SourceEffectEnvelopeFollowerPreset
// 0x0040 (0x00A8 - 0x0068)
class USourceEffectEnvelopeFollowerPreset : public USoundEffectSourcePreset
{
public:
	unsigned char                                      UnknownData00[0x34];                                      // 0x0068(0x0034) MISSED OFFSET
	struct FSourceEffectEnvelopeFollowerSettings       Settings;                                                 // 0x009C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class Synthesis.SourceEffectEnvelopeFollowerPreset");
		
		return ptr;
	}


	void UnregisterEnvelopeFollowerListener(class UEnvelopeFollowerListener* EnvelopeFollowerListener);
	void SetSettings(const struct FSourceEffectEnvelopeFollowerSettings& InSettings);
	void RegisterEnvelopeFollowerListener(class UEnvelopeFollowerListener* EnvelopeFollowerListener);
};


// Class Synthesis.SourceEffectEQPreset
// 0x0048 (0x00B0 - 0x0068)
class USourceEffectEQPreset : public USoundEffectSourcePreset
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0068(0x0038) MISSED OFFSET
	struct FSourceEffectEQSettings                     Settings;                                                 // 0x00A0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class Synthesis.SourceEffectEQPreset");
		
		return ptr;
	}


	void SetSettings(const struct FSourceEffectEQSettings& InSettings);
};


// Class Synthesis.SourceEffectFilterPreset
// 0x0068 (0x00D0 - 0x0068)
class USourceEffectFilterPreset : public USoundEffectSourcePreset
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0068(0x0048) MISSED OFFSET
	struct FSourceEffectFilterSettings                 Settings;                                                 // 0x00B0(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class Synthesis.SourceEffectFilterPreset");
		
		return ptr;
	}


	void SetSettings(const struct FSourceEffectFilterSettings& InSettings);
};


// Class Synthesis.SourceEffectFoldbackDistortionPreset
// 0x0040 (0x00A8 - 0x0068)
class USourceEffectFoldbackDistortionPreset : public USoundEffectSourcePreset
{
public:
	unsigned char                                      UnknownData00[0x34];                                      // 0x0068(0x0034) MISSED OFFSET
	struct FSourceEffectFoldbackDistortionSettings     Settings;                                                 // 0x009C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class Synthesis.SourceEffectFoldbackDistortionPreset");
		
		return ptr;
	}


	void SetSettings(const struct FSourceEffectFoldbackDistortionSettings& InSettings);
};


// Class Synthesis.SourceEffectMidSideSpreaderPreset
// 0x0038 (0x00A0 - 0x0068)
class USourceEffectMidSideSpreaderPreset : public USoundEffectSourcePreset
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0068(0x0030) MISSED OFFSET
	struct FSourceEffectMidSideSpreaderSettings        Settings;                                                 // 0x0098(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class Synthesis.SourceEffectMidSideSpreaderPreset");
		
		return ptr;
	}


	void SetSettings(const struct FSourceEffectMidSideSpreaderSettings& InSettings);
};


// Class Synthesis.SourceEffectPannerPreset
// 0x0038 (0x00A0 - 0x0068)
class USourceEffectPannerPreset : public USoundEffectSourcePreset
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0068(0x0030) MISSED OFFSET
	struct FSourceEffectPannerSettings                 Settings;                                                 // 0x0098(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class Synthesis.SourceEffectPannerPreset");
		
		return ptr;
	}


	void SetSettings(const struct FSourceEffectPannerSettings& InSettings);
};


// Class Synthesis.SourceEffectPhaserPreset
// 0x0048 (0x00B0 - 0x0068)
class USourceEffectPhaserPreset : public USoundEffectSourcePreset
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0068(0x0038) MISSED OFFSET
	struct FSourceEffectPhaserSettings                 Settings;                                                 // 0x00A0(0x0010) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class Synthesis.SourceEffectPhaserPreset");
		
		return ptr;
	}


	void SetSettings(const struct FSourceEffectPhaserSettings& InSettings);
};


// Class Synthesis.SourceEffectRingModulationPreset
// 0x0068 (0x00D0 - 0x0068)
class USourceEffectRingModulationPreset : public USoundEffectSourcePreset
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0068(0x0048) MISSED OFFSET
	struct FSourceEffectRingModulationSettings         Settings;                                                 // 0x00B0(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class Synthesis.SourceEffectRingModulationPreset");
		
		return ptr;
	}


	void SetSettings(const struct FSourceEffectRingModulationSettings& InSettings);
};


// Class Synthesis.SourceEffectSimpleDelayPreset
// 0x0058 (0x00C0 - 0x0068)
class USourceEffectSimpleDelayPreset : public USoundEffectSourcePreset
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0068(0x0040) MISSED OFFSET
	struct FSourceEffectSimpleDelaySettings            Settings;                                                 // 0x00A8(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class Synthesis.SourceEffectSimpleDelayPreset");
		
		return ptr;
	}


	void SetSettings(const struct FSourceEffectSimpleDelaySettings& InSettings);
};


// Class Synthesis.SourceEffectStereoDelayPreset
// 0x0070 (0x00D8 - 0x0068)
class USourceEffectStereoDelayPreset : public USoundEffectSourcePreset
{
public:
	unsigned char                                      UnknownData00[0x4C];                                      // 0x0068(0x004C) MISSED OFFSET
	struct FSourceEffectStereoDelaySettings            Settings;                                                 // 0x00B4(0x0024) (Edit, BlueprintVisible, BlueprintReadOnly)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class Synthesis.SourceEffectStereoDelayPreset");
		
		return ptr;
	}


	void SetSettings(const struct FSourceEffectStereoDelaySettings& InSettings);
};


// Class Synthesis.SourceEffectWaveShaperPreset
// 0x0038 (0x00A0 - 0x0068)
class USourceEffectWaveShaperPreset : public USoundEffectSourcePreset
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0068(0x0030) MISSED OFFSET
	struct FSourceEffectWaveShaperSettings             Settings;                                                 // 0x0098(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class Synthesis.SourceEffectWaveShaperPreset");
		
		return ptr;
	}


	void SetSettings(const struct FSourceEffectWaveShaperSettings& InSettings);
};


// Class Synthesis.AudioImpulseResponse
// 0x0030 (0x0058 - 0x0028)
class UAudioImpulseResponse : public UObject
{
public:
	TArray<float>                                      ImpulseResponse;                                          // 0x0028(0x0010) (ZeroConstructor)
	int                                                NumChannels;                                              // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SampleRate;                                               // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              NormalizationVolumeDb;                                    // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	TArray<float>                                      IRData;                                                   // 0x0048(0x0010) (ZeroConstructor, Deprecated)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class Synthesis.AudioImpulseResponse");
		
		return ptr;
	}

};


// Class Synthesis.SubmixEffectConvolutionReverbPreset
// 0x0078 (0x00E0 - 0x0068)
class USubmixEffectConvolutionReverbPreset : public USoundEffectSubmixPreset
{
public:
	struct FSubmixEffectConvolutionReverbSettings      Settings;                                                 // 0x0068(0x0020) (Edit, BlueprintVisible)
	class UAudioImpulseResponse*                       ImpulseResponse;                                          // 0x0088(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ESubmixEffectConvolutionReverbBlockSize            BlockSize;                                                // 0x0090(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableHardwareAcceleration;                              // 0x0091(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4E];                                      // 0x0092(0x004E) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class Synthesis.SubmixEffectConvolutionReverbPreset");
		
		return ptr;
	}


	void SetSettings(const struct FSubmixEffectConvolutionReverbSettings& InSettings);
	void SetImpulseResponse(class UAudioImpulseResponse* InImpulseResponse);
};


// Class Synthesis.SubmixEffectDelayPreset
// 0x0050 (0x00B8 - 0x0068)
class USubmixEffectDelayPreset : public USoundEffectSubmixPreset
{
public:
	unsigned char                                      UnknownData00[0x34];                                      // 0x0068(0x0034) MISSED OFFSET
	struct FSubmixEffectDelaySettings                  Settings;                                                 // 0x009C(0x000C) (Edit, BlueprintVisible)
	struct FSubmixEffectDelaySettings                  DynamicSettings;                                          // 0x00A8(0x000C) (Transient)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00B4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class Synthesis.SubmixEffectDelayPreset");
		
		return ptr;
	}


	void SetSettings(const struct FSubmixEffectDelaySettings& InSettings);
	void SetInterpolationTime(float Time);
	void SetDelay(float Length);
	float GetMaxDelayInMilliseconds();
};


// Class Synthesis.SubmixEffectFilterPreset
// 0x0040 (0x00A8 - 0x0068)
class USubmixEffectFilterPreset : public USoundEffectSubmixPreset
{
public:
	unsigned char                                      UnknownData00[0x34];                                      // 0x0068(0x0034) MISSED OFFSET
	struct FSubmixEffectFilterSettings                 Settings;                                                 // 0x009C(0x000C) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class Synthesis.SubmixEffectFilterPreset");
		
		return ptr;
	}


	void SetSettings(const struct FSubmixEffectFilterSettings& InSettings);
	void SetFilterType(ESubmixFilterType InType);
	void SetFilterQMod(float InQ);
	void SetFilterQ(float InQ);
	void SetFilterCutoffFrequencyMod(float InFrequency);
	void SetFilterCutoffFrequency(float InFrequency);
	void SetFilterAlgorithm(ESubmixFilterAlgorithm InAlgorithm);
};


// Class Synthesis.SubmixEffectFlexiverbPreset
// 0x0048 (0x00B0 - 0x0068)
class USubmixEffectFlexiverbPreset : public USoundEffectSubmixPreset
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0068(0x0038) MISSED OFFSET
	struct FSubmixEffectFlexiverbSettings              Settings;                                                 // 0x00A0(0x0010) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class Synthesis.SubmixEffectFlexiverbPreset");
		
		return ptr;
	}


	void SetSettings(const struct FSubmixEffectFlexiverbSettings& InSettings);
};


// Class Synthesis.SubmixEffectMultibandCompressorPreset
// 0x0068 (0x00D0 - 0x0068)
class USubmixEffectMultibandCompressorPreset : public USoundEffectSubmixPreset
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0068(0x0048) MISSED OFFSET
	struct FSubmixEffectMultibandCompressorSettings    Settings;                                                 // 0x00B0(0x0020) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class Synthesis.SubmixEffectMultibandCompressorPreset");
		
		return ptr;
	}


	void SetSettings(const struct FSubmixEffectMultibandCompressorSettings& InSettings);
};


// Class Synthesis.SubmixEffectStereoDelayPreset
// 0x0070 (0x00D8 - 0x0068)
class USubmixEffectStereoDelayPreset : public USoundEffectSubmixPreset
{
public:
	unsigned char                                      UnknownData00[0x4C];                                      // 0x0068(0x004C) MISSED OFFSET
	struct FSubmixEffectStereoDelaySettings            Settings;                                                 // 0x00B4(0x0024) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class Synthesis.SubmixEffectStereoDelayPreset");
		
		return ptr;
	}


	void SetSettings(const struct FSubmixEffectStereoDelaySettings& InSettings);
};


// Class Synthesis.SubmixEffectTapDelayPreset
// 0x0070 (0x00D8 - 0x0068)
class USubmixEffectTapDelayPreset : public USoundEffectSubmixPreset
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0068(0x0040) MISSED OFFSET
	struct FSubmixEffectTapDelaySettings               Settings;                                                 // 0x00A8(0x0018) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData01[0x18];                                      // 0x00C0(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class Synthesis.SubmixEffectTapDelayPreset");
		
		return ptr;
	}


	void SetTap(int TapId, const struct FTapDelayInfo& TapInfo);
	void SetSettings(const struct FSubmixEffectTapDelaySettings& InSettings);
	void SetInterpolationTime(float Time);
	void RemoveTap(int TapId);
	void GetTapIds(TArray<int>* TapIds);
	void GetTap(int TapId, struct FTapDelayInfo* TapInfo);
	float GetMaxDelayInMilliseconds();
	void AddTap(int* TapId);
};


// Class Synthesis.Synth2DSlider
// 0x0370 (0x0478 - 0x0108)
class USynth2DSlider : public UWidget
{
public:
	float                                              ValueX;                                                   // 0x0108(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ValueY;                                                   // 0x010C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             ValueXDelegate;                                           // 0x0110(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             ValueYDelegate;                                           // 0x0120(0x0010) (ZeroConstructor, InstancedReference)
	struct FSynth2DSliderStyle                         WidgetStyle;                                              // 0x0130(0x02B8) (Edit, BlueprintVisible)
	struct FLinearColor                                SliderHandleColor;                                        // 0x03E8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IndentHandle;                                             // 0x03F8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               Locked;                                                   // 0x03F9(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x03FA(0x0002) MISSED OFFSET
	float                                              StepSize;                                                 // 0x03FC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IsFocusable;                                              // 0x0400(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0401(0x0007) MISSED OFFSET
	unsigned char                                      UnknownData02[0x10];                                      // 0x0401(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty Synthesis.Synth2DSlider.OnMouseCaptureBegin
	unsigned char                                      UnknownData03[0x10];                                      // 0x0418(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty Synthesis.Synth2DSlider.OnMouseCaptureEnd
	unsigned char                                      UnknownData04[0x10];                                      // 0x0428(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty Synthesis.Synth2DSlider.OnControllerCaptureBegin
	unsigned char                                      UnknownData05[0x10];                                      // 0x0438(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty Synthesis.Synth2DSlider.OnControllerCaptureEnd
	unsigned char                                      UnknownData06[0x10];                                      // 0x0448(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty Synthesis.Synth2DSlider.OnValueChangedX
	unsigned char                                      UnknownData07[0x10];                                      // 0x0458(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty Synthesis.Synth2DSlider.OnValueChangedY
	unsigned char                                      UnknownData08[0x10];                                      // 0x0468(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class Synthesis.Synth2DSlider");
		
		return ptr;
	}


	void SetValue(const struct FVector2D& InValue);
	void SetStepSize(float InValue);
	void SetSliderHandleColor(const struct FLinearColor& InValue);
	void SetLocked(bool InValue);
	void SetIndentHandle(bool InValue);
	struct FVector2D GetValue();
};


// Class Synthesis.GranularSynth
// 0x03C0 (0x0A90 - 0x06D0)
class UGranularSynth : public USynthComponent
{
public:
	class USoundWave*                                  GranulatedSoundWave;                                      // 0x06D0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3B8];                                     // 0x06D8(0x03B8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class Synthesis.GranularSynth");
		
		return ptr;
	}


	void SetSustainGain(float SustainGain);
	void SetSoundWave(class USoundWave* InSoundWave);
	void SetScrubMode(bool bScrubMode);
	void SetReleaseTimeMsec(float ReleaseTimeMsec);
	void SetPlayheadTime(float InPositionSec, float LerpTimeSec, EGranularSynthSeekType SeekType);
	void SetPlaybackSpeed(float InPlayheadRate);
	void SetGrainVolume(float BaseVolume, const struct FVector2D& VolumeRange);
	void SetGrainsPerSecond(float InGrainsPerSecond);
	void SetGrainProbability(float InGrainProbability);
	void SetGrainPitch(float BasePitch, const struct FVector2D& PitchRange);
	void SetGrainPan(float BasePan, const struct FVector2D& PanRange);
	void SetGrainEnvelopeType(EGranularSynthEnvelopeType EnvelopeType);
	void SetGrainDuration(float BaseDurationMsec, const struct FVector2D& DurationRange);
	void SetDecayTime(float DecayTimeMsec);
	void SetAttackTime(float AttackTimeMsec);
	void NoteOn(float Note, int Velocity, float Duration);
	void NoteOff(float Note, bool bKill);
	bool IsLoaded();
	float GetSampleDuration();
	float GetCurrentPlayheadTime();
};


// Class Synthesis.MonoWaveTableSynthPreset
// 0x0148 (0x0170 - 0x0028)
class UMonoWaveTableSynthPreset : public UObject
{
public:
	struct FString                                     PresetName;                                               // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      bLockKeyframesToGridBool : 1;                             // 0x0038(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	int                                                LockKeyframesToGrid;                                      // 0x003C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                WaveTableResolution;                                      // 0x0040(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	TArray<struct FRuntimeFloatCurve>                  WaveTable;                                                // 0x0048(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      bNormalizeWaveTables : 1;                                 // 0x0058(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData02[0x117];                                     // 0x0059(0x0117) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class Synthesis.MonoWaveTableSynthPreset");
		
		return ptr;
	}

};


// Class Synthesis.SynthComponentMonoWaveTable
// 0x0740 (0x0E10 - 0x06D0)
class USynthComponentMonoWaveTable : public USynthComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x06D0(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty Synthesis.SynthComponentMonoWaveTable.OnTableAltered
	unsigned char                                      UnknownData01[0x10];                                      // 0x06E0(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty Synthesis.SynthComponentMonoWaveTable.OnNumTablesChanged
	class UMonoWaveTableSynthPreset*                   CurrentPreset;                                            // 0x06F0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x718];                                     // 0x06F8(0x0718) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class Synthesis.SynthComponentMonoWaveTable");
		
		return ptr;
	}


	void SetWaveTablePosition(float InPosition);
	void SetSustainPedalState(bool InSustainPedalState);
	void SetPosLfoType(ESynthLFOType InLfoType);
	void SetPosLfoFrequency(float InLfoFrequency);
	void SetPosLfoDepth(float InLfoDepth);
	void SetPositionEnvelopeSustainGain(float InSustainGain);
	void SetPositionEnvelopeReleaseTime(float InReleaseTimeMsec);
	void SetPositionEnvelopeInvert(bool bInInvert);
	void SetPositionEnvelopeDepth(float InDepth);
	void SetPositionEnvelopeDecayTime(float InDecayTimeMsec);
	void SetPositionEnvelopeBiasInvert(bool bInBiasInvert);
	void SetPositionEnvelopeBiasDepth(float InDepth);
	void SetPositionEnvelopeAttackTime(float InAttackTimeMsec);
	void SetLowPassFilterResonance(float InNewQ);
	void SetFrequencyWithMidiNote(float InMidiNote);
	void SetFrequencyPitchBend(float FrequencyOffsetCents);
	void SetFrequency(float FrequencyHz);
	void SetFilterEnvelopeSustainGain(float InSustainGain);
	void SetFilterEnvelopeReleaseTime(float InReleaseTimeMsec);
	void SetFilterEnvelopenDecayTime(float InDecayTimeMsec);
	void SetFilterEnvelopeInvert(bool bInInvert);
	void SetFilterEnvelopeDepth(float InDepth);
	void SetFilterEnvelopeBiasInvert(bool bInBiasInvert);
	void SetFilterEnvelopeBiasDepth(float InDepth);
	void SetFilterEnvelopeAttackTime(float InAttackTimeMsec);
	bool SetCurveValue(int TableIndex, int KeyframeIndex, float NewValue);
	bool SetCurveTangent(int TableIndex, float InNewTangent);
	bool SetCurveInterpolationType(ECurveInterpolationType InterpolationType, int TableIndex);
	void SetAmpEnvelopeSustainGain(float InSustainGain);
	void SetAmpEnvelopeReleaseTime(float InReleaseTimeMsec);
	void SetAmpEnvelopeInvert(bool bInInvert);
	void SetAmpEnvelopeDepth(float InDepth);
	void SetAmpEnvelopeDecayTime(float InDecayTimeMsec);
	void SetAmpEnvelopeBiasInvert(bool bInBiasInvert);
	void SetAmpEnvelopeBiasDepth(float InDepth);
	void SetAmpEnvelopeAttackTime(float InAttackTimeMsec);
	void RefreshWaveTable(int Index);
	void RefreshAllWaveTables();
	void NoteOn(float InMidiNote, float InVelocity);
	void NoteOff(float InMidiNote);
	int GetNumTableEntries();
	int GetMaxTableIndex();
	TArray<float> GetKeyFrameValuesForTable(float TableIndex);
	float GetCurveTangent(int TableIndex);
};


// Class Synthesis.SynthComponentMoto
// 0x00C0 (0x0790 - 0x06D0)
class USynthComponentMoto : public USynthComponent
{
public:
	class UMotoSynthPreset*                            MotoSynthPreset;                                          // 0x06D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RPM;                                                      // 0x06D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xB4];                                      // 0x06DC(0x00B4) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class Synthesis.SynthComponentMoto");
		
		return ptr;
	}


	void SetSettings(const struct FMotoSynthRuntimeSettings& InSettings);
	void SetRPM(float InRPM, float InTimeSec);
	bool IsEnabled();
	void GetRPMRange(float* OutMinRPM, float* OutMaxRPM);
};


// Class Synthesis.SynthComponentToneGenerator
// 0x0020 (0x06F0 - 0x06D0)
class USynthComponentToneGenerator : public USynthComponent
{
public:
	float                                              Frequency;                                                // 0x06D0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Volume;                                                   // 0x06D4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x06D8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class Synthesis.SynthComponentToneGenerator");
		
		return ptr;
	}


	void SetVolume(float InVolume);
	void SetFrequency(float InFrequency);
};


// Class Synthesis.SynthSamplePlayer
// 0x0130 (0x0800 - 0x06D0)
class USynthSamplePlayer : public USynthComponent
{
public:
	class USoundWave*                                  SoundWave;                                                // 0x06D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x06D8(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty Synthesis.SynthSamplePlayer.OnSampleLoaded
	unsigned char                                      UnknownData01[0x10];                                      // 0x06E8(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty Synthesis.SynthSamplePlayer.OnSamplePlaybackProgress
	unsigned char                                      UnknownData02[0x108];                                     // 0x06F8(0x0108) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class Synthesis.SynthSamplePlayer");
		
		return ptr;
	}


	void SetSoundWave(class USoundWave* InSoundWave);
	void SetScrubTimeWidth(float InScrubTimeWidthSec);
	void SetScrubMode(bool bScrubMode);
	void SetPitch(float InPitch, float TimeSec);
	void SeekToTime(float TimeSec, ESamplePlayerSeekType SeekType, bool bWrap);
	bool IsLoaded();
	float GetSampleDuration();
	float GetCurrentPlaybackProgressTime();
	float GetCurrentPlaybackProgressPercent();
};


// Class Synthesis.SynthesisUtilitiesBlueprintFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class USynthesisUtilitiesBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class Synthesis.SynthesisUtilitiesBlueprintFunctionLibrary");
		
		return ptr;
	}


	float STATIC_GetLogFrequency(float InLinearValue, float InDomainMin, float InDomainMax, float InRangeMin, float InRangeMax);
	float STATIC_GetLinearFrequency(float InLogFrequencyValue, float InDomainMin, float InDomainMax, float InRangeMin, float InRangeMax);
};


// Class Synthesis.SynthKnob
// 0x02F8 (0x0400 - 0x0108)
class USynthKnob : public UWidget
{
public:
	float                                              Value;                                                    // 0x0108(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              StepSize;                                                 // 0x010C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MouseSpeed;                                               // 0x0110(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MouseFineTuneSpeed;                                       // 0x0114(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ShowTooltipInfo : 1;                                      // 0x0118(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0119(0x0007) MISSED OFFSET
	struct FText                                       ParameterName;                                            // 0x0120(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FText                                       ParameterUnits;                                           // 0x0138(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FScriptDelegate                             ValueDelegate;                                            // 0x0150(0x0010) (ZeroConstructor, InstancedReference)
	struct FSynthKnobStyle                             WidgetStyle;                                              // 0x0160(0x0238) (Edit, BlueprintVisible)
	bool                                               Locked;                                                   // 0x0398(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IsFocusable;                                              // 0x0399(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x039A(0x0006) MISSED OFFSET
	unsigned char                                      UnknownData02[0x10];                                      // 0x039A(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty Synthesis.SynthKnob.OnMouseCaptureBegin
	unsigned char                                      UnknownData03[0x10];                                      // 0x03B0(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty Synthesis.SynthKnob.OnMouseCaptureEnd
	unsigned char                                      UnknownData04[0x10];                                      // 0x03C0(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty Synthesis.SynthKnob.OnControllerCaptureBegin
	unsigned char                                      UnknownData05[0x10];                                      // 0x03D0(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty Synthesis.SynthKnob.OnControllerCaptureEnd
	unsigned char                                      UnknownData06[0x10];                                      // 0x03E0(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty Synthesis.SynthKnob.OnValueChanged
	unsigned char                                      UnknownData07[0x10];                                      // 0x03F0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class Synthesis.SynthKnob");
		
		return ptr;
	}


	void SetValue(float InValue);
	void SetStepSize(float InValue);
	void SetLocked(bool InValue);
	float GetValue();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
