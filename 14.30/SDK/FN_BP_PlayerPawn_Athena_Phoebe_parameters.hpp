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

// Function BP_PlayerPawn_Athena_Phoebe.BP_PlayerPawn_Athena_Phoebe_C.OnLaunched
struct ABP_PlayerPawn_Athena_Phoebe_C_OnLaunched_Params
{
	struct FVector                                     LaunchVelocity;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bXYOverride;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bZOverride;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerPawn_Athena_Phoebe.BP_PlayerPawn_Athena_Phoebe_C.ExecuteUbergraph_BP_PlayerPawn_Athena_Phoebe
struct ABP_PlayerPawn_Athena_Phoebe_C_ExecuteUbergraph_BP_PlayerPawn_Athena_Phoebe_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
