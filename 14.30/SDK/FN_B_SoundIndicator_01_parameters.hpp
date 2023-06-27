#pragma once

// Fortnite (14.30) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function B_SoundIndicator_01.B_SoundIndicator_01_C.GetStrengthCurveForActiveType
struct AB_SoundIndicator_01_C_GetStrengthCurveForActiveType_Params
{
	struct FRuntimeFloatCurve                          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function B_SoundIndicator_01.B_SoundIndicator_01_C.GetDefaultTint
struct AB_SoundIndicator_01_C_GetDefaultTint_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function B_SoundIndicator_01.B_SoundIndicator_01_C.GetDefaultIcon
struct AB_SoundIndicator_01_C_GetDefaultIcon_Params
{
	class UTexture*                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function B_SoundIndicator_01.B_SoundIndicator_01_C.GetWeaponCurve
struct AB_SoundIndicator_01_C_GetWeaponCurve_Params
{
	struct FRuntimeFloatCurve                          ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function B_SoundIndicator_01.B_SoundIndicator_01_C.ExecuteUbergraph_B_SoundIndicator_01
struct AB_SoundIndicator_01_C_ExecuteUbergraph_B_SoundIndicator_01_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
