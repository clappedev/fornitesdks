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

// Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.DetermineFishLootTierNameAndSetLootForSpawner
struct APrj_Athena_FloppingRabbit_C_DetermineFishLootTierNameAndSetLootForSpawner_Params
{
	bool                                               bIsExplosion;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.IgnoreTetherablePawn
struct APrj_Athena_FloppingRabbit_C_IgnoreTetherablePawn_Params
{
	class AActor*                                      HitActor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               isIgnored;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.UnRegisterWithGoalManager
struct APrj_Athena_FloppingRabbit_C_UnRegisterWithGoalManager_Params
{
};

// Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.RegisterWithGoalManager
struct APrj_Athena_FloppingRabbit_C_RegisterWithGoalManager_Params
{
};

// Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.AttemptTether
struct APrj_Athena_FloppingRabbit_C_AttemptTether_Params
{
	class AActor*                                      HitActor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bTethered;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.GetSheetVals
struct APrj_Athena_FloppingRabbit_C_GetSheetVals_Params
{
};

// Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.BigBob__FinishedFunc
struct APrj_Athena_FloppingRabbit_C_BigBob__FinishedFunc_Params
{
};

// Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.BigBob__UpdateFunc
struct APrj_Athena_FloppingRabbit_C_BigBob__UpdateFunc_Params
{
};

// Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.Timeline_0__FinishedFunc
struct APrj_Athena_FloppingRabbit_C_Timeline_0__FinishedFunc_Params
{
};

// Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.Timeline_0__UpdateFunc
struct APrj_Athena_FloppingRabbit_C_Timeline_0__UpdateFunc_Params
{
};

// Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.ReceiveHit
struct APrj_Athena_FloppingRabbit_C_ReceiveHit_Params
{
	class UPrimitiveComponent*                         MyComp;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      Other;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bSelfMoved;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitNormal;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
struct APrj_Athena_FloppingRabbit_C_BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.FullDip
struct APrj_Athena_FloppingRabbit_C_FullDip_Params
{
	bool                                               InWorldSpawner;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.CatchWindow
struct APrj_Athena_FloppingRabbit_C_CatchWindow_Params
{
};

// Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.TryCatch
struct APrj_Athena_FloppingRabbit_C_TryCatch_Params
{
};

// Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.HideAndKill
struct APrj_Athena_FloppingRabbit_C_HideAndKill_Params
{
};

// Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.ReceiveBeginPlay
struct APrj_Athena_FloppingRabbit_C_ReceiveBeginPlay_Params
{
};

// Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.DistanceCheck
struct APrj_Athena_FloppingRabbit_C_DistanceCheck_Params
{
};

// Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.ForceKill
struct APrj_Athena_FloppingRabbit_C_ForceKill_Params
{
};

// Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.OnExploded
struct APrj_Athena_FloppingRabbit_C_OnExploded_Params
{
	TArray<class AActor*>                              HitActors;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<struct FHitResult>                          HitResults;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.HitWater
struct APrj_Athena_FloppingRabbit_C_HitWater_Params
{
	bool                                               FishSpawner;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.ReceiveDestroyed
struct APrj_Athena_FloppingRabbit_C_ReceiveDestroyed_Params
{
};

// Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.CheckForDip
struct APrj_Athena_FloppingRabbit_C_CheckForDip_Params
{
};

// Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.CheckForHighTierSpawner
struct APrj_Athena_FloppingRabbit_C_CheckForHighTierSpawner_Params
{
};

// Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.SpawnItemsFX
struct APrj_Athena_FloppingRabbit_C_SpawnItemsFX_Params
{
};

// Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.CustomPickupAttach
struct APrj_Athena_FloppingRabbit_C_CustomPickupAttach_Params
{
	class AFortPickup*                                 FortPickup;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.WriteNothingCaughtFishingAnalytic
struct APrj_Athena_FloppingRabbit_C_WriteNothingCaughtFishingAnalytic_Params
{
};

// Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnExitWater__DelegateSignature
struct APrj_Athena_FloppingRabbit_C_BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnExitWater__DelegateSignature_Params
{
	class AFortWaterBodyActor*                         WaterBody;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UFortWaterInteractionComponent*              WaterInteractionComponent;                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bIsLastBody;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.ReelIn
struct APrj_Athena_FloppingRabbit_C_ReelIn_Params
{
};

// Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.ServerAttemptTether
struct APrj_Athena_FloppingRabbit_C_ServerAttemptTether_Params
{
	class APawn*                                       TetherActor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.Minigame_MoveBobber
struct APrj_Athena_FloppingRabbit_C_Minigame_MoveBobber_Params
{
};

// Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.DipFx
struct APrj_Athena_FloppingRabbit_C_DipFx_Params
{
};

// Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.ReceiveTick
struct APrj_Athena_FloppingRabbit_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.ClientReelIn
struct APrj_Athena_FloppingRabbit_C_ClientReelIn_Params
{
};

// Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.ToggleMiniGameSplashLoop
struct APrj_Athena_FloppingRabbit_C_ToggleMiniGameSplashLoop_Params
{
	bool                                               On;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.ExecuteUbergraph_Prj_Athena_FloppingRabbit
struct APrj_Athena_FloppingRabbit_C_ExecuteUbergraph_Prj_Athena_FloppingRabbit_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
