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

// Function GA_Athena_Instance_PlaysetGrenadeWithTrajectory.GA_Athena_Instance_PlaysetGrenadeWithTrajectory_C.GetActivePlaysetData
struct UGA_Athena_Instance_PlaysetGrenadeWithTrajectory_C_GetActivePlaysetData_Params
{
	class UFortPlaysetItemDefinition*                  OutData;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GA_Athena_Instance_PlaysetGrenadeWithTrajectory.GA_Athena_Instance_PlaysetGrenadeWithTrajectory_C.K2_ActivateAbility
struct UGA_Athena_Instance_PlaysetGrenadeWithTrajectory_C_K2_ActivateAbility_Params
{
};

// Function GA_Athena_Instance_PlaysetGrenadeWithTrajectory.GA_Athena_Instance_PlaysetGrenadeWithTrajectory_C.K2_OnEndAbility
struct UGA_Athena_Instance_PlaysetGrenadeWithTrajectory_C_K2_OnEndAbility_Params
{
	bool                                               bWasCancelled;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GA_Athena_Instance_PlaysetGrenadeWithTrajectory.GA_Athena_Instance_PlaysetGrenadeWithTrajectory_C.SetPlaysetData
struct UGA_Athena_Instance_PlaysetGrenadeWithTrajectory_C_SetPlaysetData_Params
{
	class AFortProjectileBase*                         Projectile_Reference;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GA_Athena_Instance_PlaysetGrenadeWithTrajectory.GA_Athena_Instance_PlaysetGrenadeWithTrajectory_C.SetActivePlaysetOnPlayer
struct UGA_Athena_Instance_PlaysetGrenadeWithTrajectory_C_SetActivePlaysetOnPlayer_Params
{
};

// Function GA_Athena_Instance_PlaysetGrenadeWithTrajectory.GA_Athena_Instance_PlaysetGrenadeWithTrajectory_C.ExecuteUbergraph_GA_Athena_Instance_PlaysetGrenadeWithTrajectory
struct UGA_Athena_Instance_PlaysetGrenadeWithTrajectory_C_ExecuteUbergraph_GA_Athena_Instance_PlaysetGrenadeWithTrajectory_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
