#pragma once

// Fortnite (14.30) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct FortSoundCueTemplates.GliderThrustData
// 0x0020
struct FGliderThrustData
{
	struct FName                                       ParameterName;                                            // 0x0000(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	struct FVector2D                                   PitchOutput;                                              // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   VolumeOutput;                                             // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class USoundWave*                                  Sound;                                                    // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
