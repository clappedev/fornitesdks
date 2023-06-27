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

// Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.ShouldOnlyShowTrajectoryOnUse
struct UGA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C_ShouldOnlyShowTrajectoryOnUse_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.SpawnTrajectoryIndicator
struct UGA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C_SpawnTrajectoryIndicator_Params
{
	bool                                               bSpawnOnEquip;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AFortProjectileTrajectory*                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.GetProjectileTrajectoryPoints
struct UGA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C_GetProjectileTrajectoryPoints_Params
{
	TArray<struct FVector>                             OutSplinePoints;                                          // (Parm, OutParm)
	TArray<struct FVector>                             OutSplineTangents;                                        // (Parm, OutParm)
	struct FHitResult                                  OutHitResult;                                             // (Parm, OutParm, IsPlainOldData)
};

// Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.GetProjectileTrajectoryActor
struct UGA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C_GetProjectileTrajectoryActor_Params
{
	class AFortProjectileTrajectory*                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.CanBeDropped
struct UGA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C_CanBeDropped_Params
{
	bool                                               Yes;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.UpdateTrajectorySpline
struct UGA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C_UpdateTrajectorySpline_Params
{
};

// Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.GetOwningPlayer
struct UGA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C_GetOwningPlayer_Params
{
	class AFortPlayerPawn*                             Player_Pawn;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.CalcProjectileSpeedFromPitch
struct UGA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C_CalcProjectileSpeedFromPitch_Params
{
	float                                              AimPitch;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              GrenadeSpeed;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.SetupDummyProjectile
struct UGA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C_SetupDummyProjectile_Params
{
};

// Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.SpawnLocationAndRotation
struct UGA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C_SpawnLocationAndRotation_Params
{
	struct FVector                                     OutLoc;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    OutRot;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.Completed_11EB7D0B4C52CC25C785B3A1EA90B008
struct UGA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C_Completed_11EB7D0B4C52CC25C785B3A1EA90B008_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.Cancelled_11EB7D0B4C52CC25C785B3A1EA90B008
struct UGA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C_Cancelled_11EB7D0B4C52CC25C785B3A1EA90B008_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.Triggered_11EB7D0B4C52CC25C785B3A1EA90B008
struct UGA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C_Triggered_11EB7D0B4C52CC25C785B3A1EA90B008_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.OnCancelled_D12FE2DE4501EC495B89AAA1271D8CC2
struct UGA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C_OnCancelled_D12FE2DE4501EC495B89AAA1271D8CC2_Params
{
};

// Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.OnInterrupted_D12FE2DE4501EC495B89AAA1271D8CC2
struct UGA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C_OnInterrupted_D12FE2DE4501EC495B89AAA1271D8CC2_Params
{
};

// Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.OnBlendOut_D12FE2DE4501EC495B89AAA1271D8CC2
struct UGA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C_OnBlendOut_D12FE2DE4501EC495B89AAA1271D8CC2_Params
{
};

// Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.OnCompleted_D12FE2DE4501EC495B89AAA1271D8CC2
struct UGA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C_OnCompleted_D12FE2DE4501EC495B89AAA1271D8CC2_Params
{
};

// Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.OnFinish_4303A6684F8456517B7D258D8BA1CE9B
struct UGA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C_OnFinish_4303A6684F8456517B7D258D8BA1CE9B_Params
{
};

// Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.EventReceived_37ED270D4E5065DF6944ECB72BFD05A2
struct UGA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C_EventReceived_37ED270D4E5065DF6944ECB72BFD05A2_Params
{
	struct FGameplayEventData                          Payload;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.OnSync_9DBAE13E407ED891AB4EECA2ADF75C8D
struct UGA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C_OnSync_9DBAE13E407ED891AB4EECA2ADF75C8D_Params
{
};

// Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.EventReceived_526561A640EC49D3EEBA449BC71450EF
struct UGA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C_EventReceived_526561A640EC49D3EEBA449BC71450EF_Params
{
	struct FGameplayEventData                          Payload;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.K2_ActivateAbility
struct UGA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C_K2_ActivateAbility_Params
{
};

// Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.OnAbilityInputReleased
struct UGA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C_OnAbilityInputReleased_Params
{
};

// Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.K2_OnEndAbility
struct UGA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C_K2_OnEndAbility_Params
{
	bool                                               bWasCancelled;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.CleanupTrajectoryDisplay
struct UGA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C_CleanupTrajectoryDisplay_Params
{
};

// Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.ThrowConsumable
struct UGA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C_ThrowConsumable_Params
{
};

// Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.InitTrajectoryVariables
struct UGA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C_InitTrajectoryVariables_Params
{
};

// Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.CleanupTrajectoryIndicatorOnUnequip
struct UGA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C_CleanupTrajectoryIndicatorOnUnequip_Params
{
};

// Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.Cleanup Trajectory Display On End
struct UGA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C_Cleanup_Trajectory_Display_On_End_Params
{
};

// Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.UpdateTrajectory
struct UGA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C_UpdateTrajectory_Params
{
};

// Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.UpdateSpawnedBGA(ServerOnly)
struct UGA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C_UpdateSpawnedBGA_ServerOnly__Params
{
};

// Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.SpawnBGA(ServerOnly)
struct UGA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C_SpawnBGA_ServerOnly__Params
{
};

// Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.RemoveItemFromQuickBar
struct UGA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C_RemoveItemFromQuickBar_Params
{
};

// Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.UpdateDummyProjectileBGA
struct UGA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C_UpdateDummyProjectileBGA_Params
{
};

// Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.SendGameplayEventsAndQuestUpdate
struct UGA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C_SendGameplayEventsAndQuestUpdate_Params
{
};

// Function GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent.GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C.ExecuteUbergraph_GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent
struct UGA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_C_ExecuteUbergraph_GA_Athena_Consumable_ThrowWithTrajectoryAsHeldObjectBGA_Parent_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
