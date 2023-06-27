#pragma once

// Name: Fortnite, Version: 1.9.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class AudioMixer.SoundEffectLowPassFilterPreset
// 0x0008 (0x0048 - 0x0040)
class USoundEffectLowPassFilterPreset : public USoundEffectSourcePreset
{
public:
	struct FSoundEffectLowPassFilterSettings           Settings;                                                 // 0x0040(0x0008) (Edit, BlueprintVisible, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AudioMixer.SoundEffectLowPassFilterPreset");
		return ptr;
	}

};


// Class AudioMixer.SubmixEffectTestPreset
// 0x0008 (0x0048 - 0x0040)
class USubmixEffectTestPreset : public USoundEffectSubmixPreset
{
public:
	struct FSubmixEffectTestSettings                   Settings;                                                 // 0x0040(0x0004) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AudioMixer.SubmixEffectTestPreset");
		return ptr;
	}

};


// Class AudioMixer.SynthComponent
// 0x0190 (0x0420 - 0x0290)
class USynthComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x190];                                     // 0x0290(0x0190) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AudioMixer.SynthComponent");
		return ptr;
	}

};


// Class AudioMixer.SubmixEffectSubmixEQPreset
// 0x0008 (0x0048 - 0x0040)
class USubmixEffectSubmixEQPreset : public USoundEffectSubmixPreset
{
public:
	struct FSubmixEffectSubmixEQSettings               Settings;                                                 // 0x0040(0x0001) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0041(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AudioMixer.SubmixEffectSubmixEQPreset");
		return ptr;
	}

};


// Class AudioMixer.SynthSound
// 0x0020 (0x0310 - 0x02F0)
class USynthSound : public USoundWaveProcedural
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x02F0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AudioMixer.SynthSound");
		return ptr;
	}

};


// Class AudioMixer.SubmixEffectReverbPreset
// 0x0008 (0x0048 - 0x0040)
class USubmixEffectReverbPreset : public USoundEffectSubmixPreset
{
public:
	struct FSubmixEffectReverbSettings                 Settings;                                                 // 0x0040(0x0008) (Edit, BlueprintVisible, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AudioMixer.SubmixEffectReverbPreset");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
