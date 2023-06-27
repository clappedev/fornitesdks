#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x8 (0x30 - 0x28)
// Class TimeSynth.TimeSynthVolumeGroup
class UTimeSynthVolumeGroup : public UObject
{
public:
	float                                        DefaultVolume;                                     // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13C7[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TimeSynthVolumeGroup");
		return Clss;
	}

};

// 0x40 (0x68 - 0x28)
// Class TimeSynth.TimeSynthClip
class UTimeSynthClip : public UObject
{
public:
	TArray<struct FTimeSynthClipSound>           Sounds;                                            // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FVector2D                             VolumeScaleDb;                                     // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             PitchScaleSemitones;                               // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTimeSynthTimeDef                     FadeInTime;                                        // 0x48(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bApplyFadeOut;                                     // 0x50(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13C8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimeSynthTimeDef                     FadeOutTime;                                       // 0x54(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FTimeSynthTimeDef                     ClipDuration;                                      // 0x5C(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	enum class ETimeSynthEventClipQuantization   ClipQuantization;                                  // 0x64(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13C9[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TimeSynthClip");
		return Clss;
	}

};

// 0x9A0 (0xFD0 - 0x630)
// Class TimeSynth.TimeSynthComponent
class UTimeSynthComponent : public USynthComponent
{
public:
	struct FTimeSynthQuantizationSettings        QuantizationSettings;                              // 0x630(0x14)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        bEnableSpectralAnalysis : 1;                       // Mask : 0x1 0x644(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13D2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                FrequenciesToAnalyze;                              // 0x648(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class ETimeSynthFFTSize                 FFTSize;                                           // 0x658(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13D3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastInlineDelegateProperty_            OnPlaybackTime;                                    // 0x660(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        bIsFilterAEnabled : 1;                             // Mask : 0x1 0x670(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIsFilterBEnabled : 1;                             // Mask : 0x2 0x670(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13D4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimeSynthFilterSettings              FilterASettings;                                   // 0x674(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTimeSynthFilterSettings              FilterBSettings;                                   // 0x680(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        bIsEnvelopeFollowerEnabled : 1;                    // Mask : 0x1 0x68C(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13D5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimeSynthEnvelopeFollowerSettings    EnvelopeFollowerSettings;                          // 0x690(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        MaxPoolSize;                                       // 0x69C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13D6[0x930];                                   // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TimeSynthComponent");
		return Clss;
	}

	void StopSoundsOnVolumeGroupWithFadeOverride(class UTimeSynthVolumeGroup* InVolumeGroup, enum class ETimeSynthEventClipQuantization EventQuantization, struct FTimeSynthTimeDef& FadeTime);
	void StopSoundsOnVolumeGroup(class UTimeSynthVolumeGroup* InVolumeGroup, enum class ETimeSynthEventClipQuantization EventQuantization);
	void StopClipWithFadeOverride(const struct FTimeSynthClipHandle& InClipHandle, enum class ETimeSynthEventClipQuantization EventQuantization, struct FTimeSynthTimeDef& FadeTime);
	void StopClip(const struct FTimeSynthClipHandle& InClipHandle, enum class ETimeSynthEventClipQuantization EventQuantization);
	void SetVolumeGroup(class UTimeSynthVolumeGroup* InVolumeGroup, float VolumeDb, float FadeTimeSec);
	void SetSeed(int32 InSeed);
	void SetQuantizationSettings(struct FTimeSynthQuantizationSettings& InQuantizationSettings);
	void SetFilterSettings(enum class ETimeSynthFilter Filter, struct FTimeSynthFilterSettings& InSettings);
	void SetFilterEnabled(enum class ETimeSynthFilter Filter, bool bIsEnabled);
	void SetFFTSize(enum class ETimeSynthFFTSize InFFTSize);
	void SetEnvelopeFollowerSettings(struct FTimeSynthEnvelopeFollowerSettings& InSettings);
	void SetEnvelopeFollowerEnabled(bool bInIsEnabled);
	void SetBPM(float BeatsPerMinute);
	void ResetSeed();
	struct FTimeSynthClipHandle PlayClip(class UTimeSynthClip* InClip, class UTimeSynthVolumeGroup* InVolumeGroup);
	TArray<struct FTimeSynthSpectralData> GetSpectralData();
	float GetEnvelopeFollowerValue();
	int32 GetBPM();
	void AddQuantizationEventDelegate(enum class ETimeSynthEventQuantization QuantizationType, UDelegateProperty_& OnQuantizationEvent);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
