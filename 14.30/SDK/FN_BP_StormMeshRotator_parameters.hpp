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

// Function BP_StormMeshRotator.BP_StormMeshRotator_C.UserConstructionScript
struct ABP_StormMeshRotator_C_UserConstructionScript_Params
{
};

// Function BP_StormMeshRotator.BP_StormMeshRotator_C.ReceiveBeginPlay
struct ABP_StormMeshRotator_C_ReceiveBeginPlay_Params
{
};

// Function BP_StormMeshRotator.BP_StormMeshRotator_C.OnStormEffectsEnabled
struct ABP_StormMeshRotator_C_OnStormEffectsEnabled_Params
{
	bool                                               bEnabled;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_StormMeshRotator.BP_StormMeshRotator_C.ToggleStormMeshesVisibility
struct ABP_StormMeshRotator_C_ToggleStormMeshesVisibility_Params
{
	bool                                               bEnabled;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_StormMeshRotator.BP_StormMeshRotator_C.ExecuteUbergraph_BP_StormMeshRotator
struct ABP_StormMeshRotator_C_ExecuteUbergraph_BP_StormMeshRotator_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
