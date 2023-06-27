#pragma once

// Fortnite (14.30) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum AudioMixer.EMusicalNoteName
enum class EMusicalNoteName : uint8_t
{
	C                              = 0,
	Db                             = 1,
	D                              = 2,
	Eb                             = 3,
	E                              = 4,
	F                              = 5,
	Gb                             = 6,
	G                              = 7,
	Ab                             = 8,
	A                              = 9,
	Bb                             = 10,
	B                              = 11,
	EMusicalNoteName_MAX           = 12
};


// Enum AudioMixer.ESubmixEffectDynamicsChannelLinkMode
enum class ESubmixEffectDynamicsChannelLinkMode : uint8_t
{
	Disabled                       = 0,
	Average                        = 1,
	Peak                           = 2,
	Count                          = 3,
	ESubmixEffectDynamicsChannelLinkMode_MAX = 4
};


// Enum AudioMixer.ESubmixEffectDynamicsPeakMode
enum class ESubmixEffectDynamicsPeakMode : uint8_t
{
	MeanSquared                    = 0,
	RootMeanSquared                = 1,
	Peak                           = 2,
	Count                          = 3,
	ESubmixEffectDynamicsPeakMode_MAX = 4
};


// Enum AudioMixer.ESubmixEffectDynamicsProcessorType
enum class ESubmixEffectDynamicsProcessorType : uint8_t
{
	Compressor                     = 0,
	Limiter                        = 1,
	Expander                       = 2,
	Gate                           = 3,
	Count                          = 4,
	ESubmixEffectDynamicsProcessorType_MAX = 5
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AudioMixer.SubmixEffectDynamicProcessorFilterSettings
// 0x000C
struct FSubmixEffectDynamicProcessorFilterSettings
{
	unsigned char                                      bEnabled : 1;                                             // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              Cutoff;                                                   // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GainDb;                                                   // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AudioMixer.SubmixEffectDynamicsProcessorSettings
// 0x0050
struct FSubmixEffectDynamicsProcessorSettings
{
	ESubmixEffectDynamicsProcessorType                 DynamicsProcessorType;                                    // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ESubmixEffectDynamicsPeakMode                      PeakMode;                                                 // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ESubmixEffectDynamicsChannelLinkMode               LinkMode;                                                 // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0003(0x0001) MISSED OFFSET
	float                                              InputGainDb;                                              // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ThresholdDb;                                              // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Ratio;                                                    // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              KneeBandwidthDb;                                          // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LookAheadMsec;                                            // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AttackTimeMsec;                                           // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ReleaseTimeMsec;                                          // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundSubmix*                                ExternalSubmix;                                           // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bChannelLinked : 1;                                       // 0x0028(0x0001) (Deprecated)
	unsigned char                                      bAnalogMode : 1;                                          // 0x0028(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bKeyAudition : 1;                                         // 0x0028(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	float                                              KeyGainDb;                                                // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OutputGainDb;                                             // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FSubmixEffectDynamicProcessorFilterSettings KeyHighshelf;                                             // 0x0034(0x000C) (Edit, BlueprintVisible)
	struct FSubmixEffectDynamicProcessorFilterSettings KeyLowshelf;                                              // 0x0040(0x000C) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData02[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
};

// ScriptStruct AudioMixer.SubmixEffectEQBand
// 0x0010
struct FSubmixEffectEQBand
{
	float                                              Frequency;                                                // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Bandwidth;                                                // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GainDb;                                                   // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bEnabled : 1;                                             // 0x000C(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
};

// ScriptStruct AudioMixer.SubmixEffectSubmixEQSettings
// 0x0010
struct FSubmixEffectSubmixEQSettings
{
	TArray<struct FSubmixEffectEQBand>                 EQBands;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct AudioMixer.SubmixEffectReverbSettings
// 0x0034
struct FSubmixEffectReverbSettings
{
	float                                              Density;                                                  // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Diffusion;                                                // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Gain;                                                     // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GainHF;                                                   // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DecayTime;                                                // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DecayHFRatio;                                             // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ReflectionsGain;                                          // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ReflectionsDelay;                                         // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LateGain;                                                 // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LateDelay;                                                // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AirAbsorptionGainHF;                                      // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WetLevel;                                                 // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DryLevel;                                                 // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AudioMixer.SubmixEffectReverbFastSettings
// 0x0038
struct FSubmixEffectReverbFastSettings
{
	bool                                               bBypass;                                                  // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              Density;                                                  // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Diffusion;                                                // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Gain;                                                     // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GainHF;                                                   // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DecayTime;                                                // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DecayHFRatio;                                             // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ReflectionsGain;                                          // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ReflectionsDelay;                                         // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LateGain;                                                 // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LateDelay;                                                // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AirAbsorptionGainHF;                                      // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WetLevel;                                                 // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DryLevel;                                                 // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
