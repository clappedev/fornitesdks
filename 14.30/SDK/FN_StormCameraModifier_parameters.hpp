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

// Function StormCameraModifier.StormCameraModifier_C.BlueprintModifyPostProcess
struct UStormCameraModifier_C_BlueprintModifyPostProcess_Params
{
	float                                              DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              PostProcessBlendWeight;                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FPostProcessSettings                        PostProcessSettings;                                      // (Parm, OutParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
