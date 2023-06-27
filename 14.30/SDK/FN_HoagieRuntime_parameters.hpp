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

// Function HoagieRuntime.FortHoagieAudioController.Update
struct AFortHoagieAudioController_Update_Params
{
};

// Function HoagieRuntime.FortHoagieAudioController.CacheHoagieVehicle
struct AFortHoagieAudioController_CacheHoagieVehicle_Params
{
	class AFortHoagieVehicle*                          InVehicle;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HoagieRuntime.FortHoagieAudioController.CacheAudioComponents
struct AFortHoagieAudioController_CacheAudioComponents_Params
{
	class UFortLayeredAudioComponent*                  InEngine;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFortLayeredAudioComponent*                  InRotor;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function HoagieRuntime.FortHoagieVehicle.UpdateDamageStateNative
struct AFortHoagieVehicle_UpdateDamageStateNative_Params
{
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HoagieRuntime.FortHoagieVehicle.SetTailRotorRotation
struct AFortHoagieVehicle_SetTailRotorRotation_Params
{
	float                                              Degrees;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HoagieRuntime.FortHoagieVehicle.SetRotorWashActive
struct AFortHoagieVehicle_SetRotorWashActive_Params
{
	bool                                               bActive;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HoagieRuntime.FortHoagieVehicle.SetMainRotorRotation
struct AFortHoagieVehicle_SetMainRotorRotation_Params
{
	float                                              Degrees;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HoagieRuntime.FortHoagieVehicle.ServerUpdateControlState
struct AFortHoagieVehicle_ServerUpdateControlState_Params
{
	struct FReplicatedHeliControlState                 InControlState;                                           // (Parm)
};

// Function HoagieRuntime.FortHoagieVehicle.OnTickRotors
struct AFortHoagieVehicle_OnTickRotors_Params
{
	float                                              RotorAngleDegrees;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HoagieRuntime.FortHoagieVehicle.OnStartupEnd
struct AFortHoagieVehicle_OnStartupEnd_Params
{
};

// Function HoagieRuntime.FortHoagieVehicle.OnStartupBegin
struct AFortHoagieVehicle_OnStartupBegin_Params
{
};

// Function HoagieRuntime.FortHoagieVehicle.OnStartCriticalHealth
struct AFortHoagieVehicle_OnStartCriticalHealth_Params
{
};

// Function HoagieRuntime.FortHoagieVehicle.OnRotorsStop
struct AFortHoagieVehicle_OnRotorsStop_Params
{
};

// Function HoagieRuntime.FortHoagieVehicle.OnRotorDamagePlayer
struct AFortHoagieVehicle_OnRotorDamagePlayer_Params
{
	struct FHitResult                                  Impact;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function HoagieRuntime.FortHoagieVehicle.OnRotorDamageDealtOuter
struct AFortHoagieVehicle_OnRotorDamageDealtOuter_Params
{
	struct FHitResult                                  Impact;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function HoagieRuntime.FortHoagieVehicle.OnRotorDamageDealtInner
struct AFortHoagieVehicle_OnRotorDamageDealtInner_Params
{
	struct FHitResult                                  Impact;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function HoagieRuntime.FortHoagieVehicle.OnRotorDamageDealt
struct AFortHoagieVehicle_OnRotorDamageDealt_Params
{
	struct FHitResult                                  Impact;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               bInner;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HoagieRuntime.FortHoagieVehicle.OnRep_IsUsingNewFuelSystemState
struct AFortHoagieVehicle_OnRep_IsUsingNewFuelSystemState_Params
{
};

// Function HoagieRuntime.FortHoagieVehicle.OnRep_HoagieState
struct AFortHoagieVehicle_OnRep_HoagieState_Params
{
};

// Function HoagieRuntime.FortHoagieVehicle.OnRep_ControlState
struct AFortHoagieVehicle_OnRep_ControlState_Params
{
};

// Function HoagieRuntime.FortHoagieVehicle.OnRefueledFromEmpty
struct AFortHoagieVehicle_OnRefueledFromEmpty_Params
{
};

// Function HoagieRuntime.FortHoagieVehicle.OnImpactWhileCritical
struct AFortHoagieVehicle_OnImpactWhileCritical_Params
{
};

// Function HoagieRuntime.FortHoagieVehicle.OnImpactOtherHoagie
struct AFortHoagieVehicle_OnImpactOtherHoagie_Params
{
	struct FVector                                     HitLocation;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function HoagieRuntime.FortHoagieVehicle.OnExplode
struct AFortHoagieVehicle_OnExplode_Params
{
};

// Function HoagieRuntime.FortHoagieVehicle.OnCritRotor
struct AFortHoagieVehicle_OnCritRotor_Params
{
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ImpactLocation;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class AController*                                 DamageInstigator;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bMainRotor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HoagieRuntime.FortHoagieVehicle.OnBoostStarted
struct AFortHoagieVehicle_OnBoostStarted_Params
{
};

// Function HoagieRuntime.FortHoagieVehicle.OnBoostReady
struct AFortHoagieVehicle_OnBoostReady_Params
{
};

// Function HoagieRuntime.FortHoagieVehicle.OnBoostFinished
struct AFortHoagieVehicle_OnBoostFinished_Params
{
};

// Function HoagieRuntime.FortHoagieVehicle.OnBoostFailed
struct AFortHoagieVehicle_OnBoostFailed_Params
{
};

// Function HoagieRuntime.FortHoagieVehicle.MulticastRotorImpulse
struct AFortHoagieVehicle_MulticastRotorImpulse_Params
{
	struct FHitResult                                  RotorHit;                                                 // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
};

// Function HoagieRuntime.FortHoagieVehicle.IsStartingUp
struct AFortHoagieVehicle_IsStartingUp_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HoagieRuntime.FortHoagieVehicle.IsShuttingDown
struct AFortHoagieVehicle_IsShuttingDown_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HoagieRuntime.FortHoagieVehicle.IsScrapingBottom
struct AFortHoagieVehicle_IsScrapingBottom_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HoagieRuntime.FortHoagieVehicle.GetVerticalSpeedKmh
struct AFortHoagieVehicle_GetVerticalSpeedKmh_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HoagieRuntime.FortHoagieVehicle.GetThrustDirection
struct AFortHoagieVehicle_GetThrustDirection_Params
{
	bool                                               bWorldSpace;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HoagieRuntime.FortHoagieVehicle.GetStrafeAlpha
struct AFortHoagieVehicle_GetStrafeAlpha_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HoagieRuntime.FortHoagieVehicle.GetSteerAlpha
struct AFortHoagieVehicle_GetSteerAlpha_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HoagieRuntime.FortHoagieVehicle.GetShutdownTimeLeft
struct AFortHoagieVehicle_GetShutdownTimeLeft_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HoagieRuntime.FortHoagieVehicle.GetRotorSpeedPercent
struct AFortHoagieVehicle_GetRotorSpeedPercent_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HoagieRuntime.FortHoagieVehicle.GetRotorSpeed
struct AFortHoagieVehicle_GetRotorSpeed_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HoagieRuntime.FortHoagieVehicle.GetRotorCenterPosition
struct AFortHoagieVehicle_GetRotorCenterPosition_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HoagieRuntime.FortHoagieVehicle.GetRotorAngleDegrees
struct AFortHoagieVehicle_GetRotorAngleDegrees_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HoagieRuntime.FortHoagieVehicle.GetMaxBoostCooldown
struct AFortHoagieVehicle_GetMaxBoostCooldown_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HoagieRuntime.FortHoagieVehicle.GetMaxAltitude
struct AFortHoagieVehicle_GetMaxAltitude_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HoagieRuntime.FortHoagieVehicle.GetLiftAlpha
struct AFortHoagieVehicle_GetLiftAlpha_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HoagieRuntime.FortHoagieVehicle.GetIsEngineOn
struct AFortHoagieVehicle_GetIsEngineOn_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HoagieRuntime.FortHoagieVehicle.GetIsCriticalHealth
struct AFortHoagieVehicle_GetIsCriticalHealth_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HoagieRuntime.FortHoagieVehicle.GetForwardAlpha
struct AFortHoagieVehicle_GetForwardAlpha_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HoagieRuntime.FortHoagieVehicle.GetDistanceToGround
struct AFortHoagieVehicle_GetDistanceToGround_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HoagieRuntime.FortHoagieVehicle.GetBoostTimeLeft
struct AFortHoagieVehicle_GetBoostTimeLeft_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HoagieRuntime.FortHoagieVehicle.GetBoostDuration
struct AFortHoagieVehicle_GetBoostDuration_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HoagieRuntime.FortHoagieVehicle.GetBoostDirection
struct AFortHoagieVehicle_GetBoostDirection_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HoagieRuntime.FortHoagieVehicle.GetBoostCooldown
struct AFortHoagieVehicle_GetBoostCooldown_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HoagieRuntime.FortHoagieVehicle.GetAltitude
struct AFortHoagieVehicle_GetAltitude_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
