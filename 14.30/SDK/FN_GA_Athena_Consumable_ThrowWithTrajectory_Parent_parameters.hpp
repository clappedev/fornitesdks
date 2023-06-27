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

// Function GA_Athena_Consumable_ThrowWithTrajectory_Parent.GA_Athena_Consumable_ThrowWithTrajectory_Parent_C.ShouldOnlyShowTrajectoryOnUse
struct UGA_Athena_Consumable_ThrowWithTrajectory_Parent_C_ShouldOnlyShowTrajectoryOnUse_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GA_Athena_Consumable_ThrowWithTrajectory_Parent.GA_Athena_Consumable_ThrowWithTrajectory_Parent_C.SpawnTrajectoryIndicator
struct UGA_Athena_Consumable_ThrowWithTrajectory_Parent_C_SpawnTrajectoryIndicator_Params
{
	bool                                               bSpawnOnEquip;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AFortProjectileTrajectory*                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GA_Athena_Consumable_ThrowWithTrajectory_Parent.GA_Athena_Consumable_ThrowWithTrajectory_Parent_C.GetProjectileTrajectoryPoints
struct UGA_Athena_Consumable_ThrowWithTrajectory_Parent_C_GetProjectileTrajectoryPoints_Params
{
	TArray<struct FVector>                             OutSplinePoints;                                          // (Parm, OutParm)
	TArray<struct FVector>                             OutSplineTangents;                                        // (Parm, OutParm)
	struct FHitResult                                  OutHitResult;                                             // (Parm, OutParm, IsPlainOldData)
};

// Function GA_Athena_Consumable_ThrowWithTrajectory_Parent.GA_Athena_Consumable_ThrowWithTrajectory_Parent_C.GetProjectileTrajectoryActor
struct UGA_Athena_Consumable_ThrowWithTrajectory_Parent_C_GetProjectileTrajectoryActor_Params
{
	class AFortProjectileTrajectory*                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GA_Athena_Consumable_ThrowWithTrajectory_Parent.GA_Athena_Consumable_ThrowWithTrajectory_Parent_C.CanBeDropped
struct UGA_Athena_Consumable_ThrowWithTrajectory_Parent_C_CanBeDropped_Params
{
	bool                                               Yes;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GA_Athena_Consumable_ThrowWithTrajectory_Parent.GA_Athena_Consumable_ThrowWithTrajectory_Parent_C.GetProjectileDataFromWeaponID
struct UGA_Athena_Consumable_ThrowWithTrajectory_Parent_C_GetProjectileDataFromWeaponID_Params
{
};

// Function GA_Athena_Consumable_ThrowWithTrajectory_Parent.GA_Athena_Consumable_ThrowWithTrajectory_Parent_C.UpdateTrajectorySpline
struct UGA_Athena_Consumable_ThrowWithTrajectory_Parent_C_UpdateTrajectorySpline_Params
{
};

// Function GA_Athena_Consumable_ThrowWithTrajectory_Parent.GA_Athena_Consumable_ThrowWithTrajectory_Parent_C.GetOwningPlayer
struct UGA_Athena_Consumable_ThrowWithTrajectory_Parent_C_GetOwningPlayer_Params
{
	class AFortPlayerPawn*                             Player_Pawn;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GA_Athena_Consumable_ThrowWithTrajectory_Parent.GA_Athena_Consumable_ThrowWithTrajectory_Parent_C.CalcProjectileSpeedFromPitch
struct UGA_Athena_Consumable_ThrowWithTrajectory_Parent_C_CalcProjectileSpeedFromPitch_Params
{
	float                                              AimPitch;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              GrenadeSpeed;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GA_Athena_Consumable_ThrowWithTrajectory_Parent.GA_Athena_Consumable_ThrowWithTrajectory_Parent_C.SetupDummyProjectile
struct UGA_Athena_Consumable_ThrowWithTrajectory_Parent_C_SetupDummyProjectile_Params
{
};

// Function GA_Athena_Consumable_ThrowWithTrajectory_Parent.GA_Athena_Consumable_ThrowWithTrajectory_Parent_C.SpawnLocationAndRotation
struct UGA_Athena_Consumable_ThrowWithTrajectory_Parent_C_SpawnLocationAndRotation_Params
{
	struct FVector                                     OutLoc;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    OutRot;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GA_Athena_Consumable_ThrowWithTrajectory_Parent.GA_Athena_Consumable_ThrowWithTrajectory_Parent_C.Destroyed_810B87EA424E705019D253BCBCE0A171
struct UGA_Athena_Consumable_ThrowWithTrajectory_Parent_C_Destroyed_810B87EA424E705019D253BCBCE0A171_Params
{
	struct FProjectileEventData                        ProjectileData;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GA_Athena_Consumable_ThrowWithTrajectory_Parent.GA_Athena_Consumable_ThrowWithTrajectory_Parent_C.Exploded_810B87EA424E705019D253BCBCE0A171
struct UGA_Athena_Consumable_ThrowWithTrajectory_Parent_C_Exploded_810B87EA424E705019D253BCBCE0A171_Params
{
	struct FProjectileEventData                        ProjectileData;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GA_Athena_Consumable_ThrowWithTrajectory_Parent.GA_Athena_Consumable_ThrowWithTrajectory_Parent_C.Stopped_810B87EA424E705019D253BCBCE0A171
struct UGA_Athena_Consumable_ThrowWithTrajectory_Parent_C_Stopped_810B87EA424E705019D253BCBCE0A171_Params
{
	struct FProjectileEventData                        ProjectileData;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GA_Athena_Consumable_ThrowWithTrajectory_Parent.GA_Athena_Consumable_ThrowWithTrajectory_Parent_C.Bounced_810B87EA424E705019D253BCBCE0A171
struct UGA_Athena_Consumable_ThrowWithTrajectory_Parent_C_Bounced_810B87EA424E705019D253BCBCE0A171_Params
{
	struct FProjectileEventData                        ProjectileData;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GA_Athena_Consumable_ThrowWithTrajectory_Parent.GA_Athena_Consumable_ThrowWithTrajectory_Parent_C.Touched_810B87EA424E705019D253BCBCE0A171
struct UGA_Athena_Consumable_ThrowWithTrajectory_Parent_C_Touched_810B87EA424E705019D253BCBCE0A171_Params
{
	struct FProjectileEventData                        ProjectileData;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GA_Athena_Consumable_ThrowWithTrajectory_Parent.GA_Athena_Consumable_ThrowWithTrajectory_Parent_C.Created_810B87EA424E705019D253BCBCE0A171
struct UGA_Athena_Consumable_ThrowWithTrajectory_Parent_C_Created_810B87EA424E705019D253BCBCE0A171_Params
{
	struct FProjectileEventData                        ProjectileData;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GA_Athena_Consumable_ThrowWithTrajectory_Parent.GA_Athena_Consumable_ThrowWithTrajectory_Parent_C.Completed_B7154AE349A61FA4A5545D97B125C031
struct UGA_Athena_Consumable_ThrowWithTrajectory_Parent_C_Completed_B7154AE349A61FA4A5545D97B125C031_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Athena_Consumable_ThrowWithTrajectory_Parent.GA_Athena_Consumable_ThrowWithTrajectory_Parent_C.Cancelled_B7154AE349A61FA4A5545D97B125C031
struct UGA_Athena_Consumable_ThrowWithTrajectory_Parent_C_Cancelled_B7154AE349A61FA4A5545D97B125C031_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Athena_Consumable_ThrowWithTrajectory_Parent.GA_Athena_Consumable_ThrowWithTrajectory_Parent_C.Triggered_B7154AE349A61FA4A5545D97B125C031
struct UGA_Athena_Consumable_ThrowWithTrajectory_Parent_C_Triggered_B7154AE349A61FA4A5545D97B125C031_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Athena_Consumable_ThrowWithTrajectory_Parent.GA_Athena_Consumable_ThrowWithTrajectory_Parent_C.OnFinish_3698CE084DFBBB65C54A74B61C442258
struct UGA_Athena_Consumable_ThrowWithTrajectory_Parent_C_OnFinish_3698CE084DFBBB65C54A74B61C442258_Params
{
};

// Function GA_Athena_Consumable_ThrowWithTrajectory_Parent.GA_Athena_Consumable_ThrowWithTrajectory_Parent_C.OnFinish_37708BDA4A053044298FDD8A986CE91D
struct UGA_Athena_Consumable_ThrowWithTrajectory_Parent_C_OnFinish_37708BDA4A053044298FDD8A986CE91D_Params
{
};

// Function GA_Athena_Consumable_ThrowWithTrajectory_Parent.GA_Athena_Consumable_ThrowWithTrajectory_Parent_C.OnCancelled_9B7908404C52FEE66F1ED5B2A4DFC261
struct UGA_Athena_Consumable_ThrowWithTrajectory_Parent_C_OnCancelled_9B7908404C52FEE66F1ED5B2A4DFC261_Params
{
};

// Function GA_Athena_Consumable_ThrowWithTrajectory_Parent.GA_Athena_Consumable_ThrowWithTrajectory_Parent_C.OnInterrupted_9B7908404C52FEE66F1ED5B2A4DFC261
struct UGA_Athena_Consumable_ThrowWithTrajectory_Parent_C_OnInterrupted_9B7908404C52FEE66F1ED5B2A4DFC261_Params
{
};

// Function GA_Athena_Consumable_ThrowWithTrajectory_Parent.GA_Athena_Consumable_ThrowWithTrajectory_Parent_C.OnBlendOut_9B7908404C52FEE66F1ED5B2A4DFC261
struct UGA_Athena_Consumable_ThrowWithTrajectory_Parent_C_OnBlendOut_9B7908404C52FEE66F1ED5B2A4DFC261_Params
{
};

// Function GA_Athena_Consumable_ThrowWithTrajectory_Parent.GA_Athena_Consumable_ThrowWithTrajectory_Parent_C.OnCompleted_9B7908404C52FEE66F1ED5B2A4DFC261
struct UGA_Athena_Consumable_ThrowWithTrajectory_Parent_C_OnCompleted_9B7908404C52FEE66F1ED5B2A4DFC261_Params
{
};

// Function GA_Athena_Consumable_ThrowWithTrajectory_Parent.GA_Athena_Consumable_ThrowWithTrajectory_Parent_C.OnFinish_CF0A57844174C8A87D0024B17D96B713
struct UGA_Athena_Consumable_ThrowWithTrajectory_Parent_C_OnFinish_CF0A57844174C8A87D0024B17D96B713_Params
{
};

// Function GA_Athena_Consumable_ThrowWithTrajectory_Parent.GA_Athena_Consumable_ThrowWithTrajectory_Parent_C.EventReceived_13E531C84957E69360FC6EB6E9818D90
struct UGA_Athena_Consumable_ThrowWithTrajectory_Parent_C_EventReceived_13E531C84957E69360FC6EB6E9818D90_Params
{
	struct FGameplayEventData                          Payload;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Athena_Consumable_ThrowWithTrajectory_Parent.GA_Athena_Consumable_ThrowWithTrajectory_Parent_C.OnSync_F83BC34A45D86702B453A1BFE1D7F7E1
struct UGA_Athena_Consumable_ThrowWithTrajectory_Parent_C_OnSync_F83BC34A45D86702B453A1BFE1D7F7E1_Params
{
};

// Function GA_Athena_Consumable_ThrowWithTrajectory_Parent.GA_Athena_Consumable_ThrowWithTrajectory_Parent_C.EventReceived_D907E28A43BC498803B5B0AD054E5FC1
struct UGA_Athena_Consumable_ThrowWithTrajectory_Parent_C_EventReceived_D907E28A43BC498803B5B0AD054E5FC1_Params
{
	struct FGameplayEventData                          Payload;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Athena_Consumable_ThrowWithTrajectory_Parent.GA_Athena_Consumable_ThrowWithTrajectory_Parent_C.K2_ActivateAbility
struct UGA_Athena_Consumable_ThrowWithTrajectory_Parent_C_K2_ActivateAbility_Params
{
};

// Function GA_Athena_Consumable_ThrowWithTrajectory_Parent.GA_Athena_Consumable_ThrowWithTrajectory_Parent_C.Server_SpawnProjectile
struct UGA_Athena_Consumable_ThrowWithTrajectory_Parent_C_Server_SpawnProjectile_Params
{
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Direction;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GA_Athena_Consumable_ThrowWithTrajectory_Parent.GA_Athena_Consumable_ThrowWithTrajectory_Parent_C.OnAbilityInputReleased
struct UGA_Athena_Consumable_ThrowWithTrajectory_Parent_C_OnAbilityInputReleased_Params
{
};

// Function GA_Athena_Consumable_ThrowWithTrajectory_Parent.GA_Athena_Consumable_ThrowWithTrajectory_Parent_C.K2_OnEndAbility
struct UGA_Athena_Consumable_ThrowWithTrajectory_Parent_C_K2_OnEndAbility_Params
{
	bool                                               bWasCancelled;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GA_Athena_Consumable_ThrowWithTrajectory_Parent.GA_Athena_Consumable_ThrowWithTrajectory_Parent_C.CleanupTrajectoryDisplay
struct UGA_Athena_Consumable_ThrowWithTrajectory_Parent_C_CleanupTrajectoryDisplay_Params
{
};

// Function GA_Athena_Consumable_ThrowWithTrajectory_Parent.GA_Athena_Consumable_ThrowWithTrajectory_Parent_C.ThrowConsumable
struct UGA_Athena_Consumable_ThrowWithTrajectory_Parent_C_ThrowConsumable_Params
{
};

// Function GA_Athena_Consumable_ThrowWithTrajectory_Parent.GA_Athena_Consumable_ThrowWithTrajectory_Parent_C.InitTrajectoryVariables
struct UGA_Athena_Consumable_ThrowWithTrajectory_Parent_C_InitTrajectoryVariables_Params
{
};

// Function GA_Athena_Consumable_ThrowWithTrajectory_Parent.GA_Athena_Consumable_ThrowWithTrajectory_Parent_C.CleanupTrajectoryIndicatorOnUnequip
struct UGA_Athena_Consumable_ThrowWithTrajectory_Parent_C_CleanupTrajectoryIndicatorOnUnequip_Params
{
};

// Function GA_Athena_Consumable_ThrowWithTrajectory_Parent.GA_Athena_Consumable_ThrowWithTrajectory_Parent_C.Cleanup Trajectory Display On End
struct UGA_Athena_Consumable_ThrowWithTrajectory_Parent_C_Cleanup_Trajectory_Display_On_End_Params
{
};

// Function GA_Athena_Consumable_ThrowWithTrajectory_Parent.GA_Athena_Consumable_ThrowWithTrajectory_Parent_C.UpdateTrajectory
struct UGA_Athena_Consumable_ThrowWithTrajectory_Parent_C_UpdateTrajectory_Params
{
};

// Function GA_Athena_Consumable_ThrowWithTrajectory_Parent.GA_Athena_Consumable_ThrowWithTrajectory_Parent_C.ExecuteUbergraph_GA_Athena_Consumable_ThrowWithTrajectory_Parent
struct UGA_Athena_Consumable_ThrowWithTrajectory_Parent_C_ExecuteUbergraph_GA_Athena_Consumable_ThrowWithTrajectory_Parent_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
