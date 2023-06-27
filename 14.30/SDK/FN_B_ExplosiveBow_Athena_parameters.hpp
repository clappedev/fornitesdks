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

// Function B_ExplosiveBow_Athena.B_ExplosiveBow_Athena_C.StopDrawAudio
struct AB_ExplosiveBow_Athena_C_StopDrawAudio_Params
{
};

// Function B_ExplosiveBow_Athena.B_ExplosiveBow_Athena_C.StartDrawAudio
struct AB_ExplosiveBow_Athena_C_StartDrawAudio_Params
{
};

// Function B_ExplosiveBow_Athena.B_ExplosiveBow_Athena_C.SetupProjectileVariables
struct AB_ExplosiveBow_Athena_C_SetupProjectileVariables_Params
{
	struct FVector                                     StartLocation;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     InitialVelocity;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              ProjectileVelocity;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    OutRotation;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function B_ExplosiveBow_Athena.B_ExplosiveBow_Athena_C.CalculateVelocity
struct AB_ExplosiveBow_Athena_C_CalculateVelocity_Params
{
	float                                              Velocity;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function B_ExplosiveBow_Athena.B_ExplosiveBow_Athena_C.CalculateTrajectorySpline
struct AB_ExplosiveBow_Athena_C_CalculateTrajectorySpline_Params
{
};

// Function B_ExplosiveBow_Athena.B_ExplosiveBow_Athena_C.SetDummyVariables
struct AB_ExplosiveBow_Athena_C_SetDummyVariables_Params
{
};

// Function B_ExplosiveBow_Athena.B_ExplosiveBow_Athena_C.SetupTrajectoryProjectile
struct AB_ExplosiveBow_Athena_C_SetupTrajectoryProjectile_Params
{
};

// Function B_ExplosiveBow_Athena.B_ExplosiveBow_Athena_C.OnReachedMinCharge
struct AB_ExplosiveBow_Athena_C_OnReachedMinCharge_Params
{
};

// Function B_ExplosiveBow_Athena.B_ExplosiveBow_Athena_C.OnStartCharge
struct AB_ExplosiveBow_Athena_C_OnStartCharge_Params
{
};

// Function B_ExplosiveBow_Athena.B_ExplosiveBow_Athena_C.OnPlayWeaponFireFX
struct AB_ExplosiveBow_Athena_C_OnPlayWeaponFireFX_Params
{
	bool                                               bPersistentFire;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSecondaryFire;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_ExplosiveBow_Athena.B_ExplosiveBow_Athena_C.EndOfCharge
struct AB_ExplosiveBow_Athena_C_EndOfCharge_Params
{
};

// Function B_ExplosiveBow_Athena.B_ExplosiveBow_Athena_C.K2_OnUnEquip
struct AB_ExplosiveBow_Athena_C_K2_OnUnEquip_Params
{
};

// Function B_ExplosiveBow_Athena.B_ExplosiveBow_Athena_C.OnChargeDown
struct AB_ExplosiveBow_Athena_C_OnChargeDown_Params
{
};

// Function B_ExplosiveBow_Athena.B_ExplosiveBow_Athena_C.OnChargeUp
struct AB_ExplosiveBow_Athena_C_OnChargeUp_Params
{
};

// Function B_ExplosiveBow_Athena.B_ExplosiveBow_Athena_C.OnEndCharge
struct AB_ExplosiveBow_Athena_C_OnEndCharge_Params
{
};

// Function B_ExplosiveBow_Athena.B_ExplosiveBow_Athena_C.ResetCharge
struct AB_ExplosiveBow_Athena_C_ResetCharge_Params
{
};

// Function B_ExplosiveBow_Athena.B_ExplosiveBow_Athena_C.IncreaseDrawStrength
struct AB_ExplosiveBow_Athena_C_IncreaseDrawStrength_Params
{
};

// Function B_ExplosiveBow_Athena.B_ExplosiveBow_Athena_C.OnWeaponAttached
struct AB_ExplosiveBow_Athena_C_OnWeaponAttached_Params
{
};

// Function B_ExplosiveBow_Athena.B_ExplosiveBow_Athena_C.ReceiveTick
struct AB_ExplosiveBow_Athena_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_ExplosiveBow_Athena.B_ExplosiveBow_Athena_C.OnReachedMaxCharge
struct AB_ExplosiveBow_Athena_C_OnReachedMaxCharge_Params
{
};

// Function B_ExplosiveBow_Athena.B_ExplosiveBow_Athena_C.ExecuteUbergraph_B_ExplosiveBow_Athena
struct AB_ExplosiveBow_Athena_C_ExecuteUbergraph_B_ExplosiveBow_Athena_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
