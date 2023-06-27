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

// Class ResonanceAudio.ResonanceAudioSoundfieldSettings
// 0x0008 (0x0030 - 0x0028)
class UResonanceAudioSoundfieldSettings : public USoundfieldEncodingSettingsBase
{
public:
	EResonanceRenderMode                               RenderMode;                                               // 0x0028(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class ResonanceAudio.ResonanceAudioSoundfieldSettings");
		
		return ptr;
	}

};


// Class ResonanceAudio.ResonanceAudioBlueprintFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UResonanceAudioBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class ResonanceAudio.ResonanceAudioBlueprintFunctionLibrary");
		
		return ptr;
	}


	void STATIC_SetGlobalReverbPreset(class UResonanceAudioReverbPluginPreset* InPreset);
	class UResonanceAudioReverbPluginPreset* STATIC_GetGlobalReverbPreset();
};


// Class ResonanceAudio.ResonanceAudioDirectivityVisualizer
// 0x0080 (0x02A0 - 0x0220)
class AResonanceAudioDirectivityVisualizer : public AActor
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0220(0x0070) MISSED OFFSET
	class UMaterial*                                   Material;                                                 // 0x0290(0x0008) (ZeroConstructor, IsPlainOldData)
	class UResonanceAudioSpatializationSourceSettings* Settings;                                                 // 0x0298(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class ResonanceAudio.ResonanceAudioDirectivityVisualizer");
		
		return ptr;
	}

};


// Class ResonanceAudio.ResonanceAudioReverbPluginPreset
// 0x00C8 (0x0130 - 0x0068)
class UResonanceAudioReverbPluginPreset : public USoundEffectSubmixPreset
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0068(0x0078) MISSED OFFSET
	struct FResonanceAudioReverbPluginSettings         Settings;                                                 // 0x00E0(0x0050) (Edit)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class ResonanceAudio.ResonanceAudioReverbPluginPreset");
		
		return ptr;
	}


	void SetRoomRotation(const struct FQuat& InRotation);
	void SetRoomPosition(const struct FVector& InPosition);
	void SetRoomMaterials(TArray<ERaMaterialName> InMaterials);
	void SetRoomDimensions(const struct FVector& InDimensions);
	void SetReverbTimeModifier(float InReverbTimeModifier);
	void SetReverbGain(float InReverbGain);
	void SetReverbBrightness(float InReverbBrightness);
	void SetReflectionScalar(float InReflectionScalar);
	void SetEnableRoomEffects(bool bInEnableRoomEffects);
};


// Class ResonanceAudio.ResonanceAudioSettings
// 0x0050 (0x0078 - 0x0028)
class UResonanceAudioSettings : public UObject
{
public:
	struct FSoftObjectPath                             OutputSubmix;                                             // 0x0028(0x0018) (Edit, ZeroConstructor, Config, GlobalConfig)
	ERaQualityMode                                     QualityMode;                                              // 0x0040(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0041(0x0007) MISSED OFFSET
	struct FSoftObjectPath                             GlobalReverbPreset;                                       // 0x0048(0x0018) (Edit, ZeroConstructor, Config, GlobalConfig)
	struct FSoftObjectPath                             GlobalSourcePreset;                                       // 0x0060(0x0018) (Edit, ZeroConstructor, Config, GlobalConfig)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class ResonanceAudio.ResonanceAudioSettings");
		
		return ptr;
	}

};


// Class ResonanceAudio.ResonanceAudioSpatializationSourceSettings
// 0x0028 (0x0050 - 0x0028)
class UResonanceAudioSpatializationSourceSettings : public USpatializationPluginSourceSettingsBase
{
public:
	ERaSpatializationMethod                            SpatializationMethod;                                     // 0x0028(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	float                                              Pattern;                                                  // 0x002C(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	float                                              Sharpness;                                                // 0x0030(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	bool                                               bToggleVisualization;                                     // 0x0034(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0035(0x0003) MISSED OFFSET
	float                                              Scale;                                                    // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Spread;                                                   // 0x003C(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	ERaDistanceRolloffModel                            Rolloff;                                                  // 0x0040(0x0001) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0041(0x0003) MISSED OFFSET
	float                                              MinDistance;                                              // 0x0044(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	float                                              MaxDistance;                                              // 0x0048(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x004C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class ResonanceAudio.ResonanceAudioSpatializationSourceSettings");
		
		return ptr;
	}


	void SetSoundSourceSpread(float InSpread);
	void SetSoundSourceDirectivity(float InPattern, float InSharpness);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
