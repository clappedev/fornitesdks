#pragma once

// Name: Fortnite, Version: 1.9.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AudioMixer.SoundEffectLowPassFilterSettings
// 0x0008
struct FSoundEffectLowPassFilterSettings
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct AudioMixer.SubmixEffectTestSettings
// 0x0004
struct FSubmixEffectTestSettings
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
};

// ScriptStruct AudioMixer.SubmixEffectSubmixEQSettings
// 0x0001
struct FSubmixEffectSubmixEQSettings
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct AudioMixer.SubmixEffectReverbSettings
// 0x0008
struct FSubmixEffectReverbSettings
{
	class UReverbEffect*                               ReverbEffect;                                             // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
