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

// UserDefinedStruct PawnHighlight.PawnHighlight
// 0x0030
struct FPawnHighlight
{
	float                                              Priority_28_E2E1B5344846E187B9C11B863A7F0698;             // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Inner_21_4CC2801147EA190DE16F59B34F36853E;                // 0x0004(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Outer_22_5A1D7D0543D303E8B54B66A7F7BD2E2E;                // 0x0014(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FresnelBrightness_23_52B0F96447FF640F47DF2895B0602E92;    // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FresnelExponent_24_B427CF0C441AA37ED49833BF7579DE6D;      // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              UsesPulse_25_E29229F64E540F0617E4C4987AD77605;            // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
