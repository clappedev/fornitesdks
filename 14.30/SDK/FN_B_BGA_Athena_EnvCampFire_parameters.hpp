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

// Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.DisableIfBelowFlood
struct AB_BGA_Athena_EnvCampFire_C_DisableIfBelowFlood_Params
{
};

// Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.ShouldPlayNativeCurieFX
struct AB_BGA_Athena_EnvCampFire_C_ShouldPlayNativeCurieFX_Params
{
	EFortCurieNativeFXType                             FXType;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FFortNativeCurieFXResponse                  OutResponse;                                              // (Parm, OutParm)
};

// Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.HasInfiniteResources
struct AB_BGA_Athena_EnvCampFire_C_HasInfiniteResources_Params
{
	class APawn*                                       Pawn;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               HasInfiniteResources;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.OnRep_Stoked
struct AB_BGA_Athena_EnvCampFire_C_OnRep_Stoked_Params
{
};

// Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.BlueprintGetFailedInteractionString
struct AB_BGA_Athena_EnvCampFire_C_BlueprintGetFailedInteractionString_Params
{
	class AFortPawn*                                   InteractingPawn;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInteractionBeingAttempted>            InteractionBeingAttempted;                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.GetCostReActivate
struct AB_BGA_Athena_EnvCampFire_C_GetCostReActivate_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.OnRep_LitRepBool
struct AB_BGA_Athena_EnvCampFire_C_OnRep_LitRepBool_Params
{
};

// Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.OnRep_Destroyed
struct AB_BGA_Athena_EnvCampFire_C_OnRep_Destroyed_Params
{
};

// Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.CheckIfUserIsSpecialS7
struct AB_BGA_Athena_EnvCampFire_C_CheckIfUserIsSpecialS7_Params
{
	class AFortPawn*                                   PawnWhoLitFire;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               UserIsSpecial;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.RowToBool
struct AB_BGA_Athena_EnvCampFire_C_RowToBool_Params
{
	struct FScalableFloat                              Input;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.SetSheetValues
struct AB_BGA_Athena_EnvCampFire_C_SetSheetValues_Params
{
};

// Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.BlueprintGetInteractionString
struct AB_BGA_Athena_EnvCampFire_C_BlueprintGetInteractionString_Params
{
	class AFortPawn*                                   InteractingPawn;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInteractionBeingAttempted>            InteractionBeingAttempted;                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.BlueprintCanInteract
struct AB_BGA_Athena_EnvCampFire_C_BlueprintCanInteract_Params
{
	class AFortPawn*                                   InteractingPawn;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInteractionBeingAttempted>            InteractionBeingAttempted;                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETInteractionType>                     InteractionType;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.OnReady_9F4554BE40FCB41157835B9AD897EE69
struct AB_BGA_Athena_EnvCampFire_C_OnReady_9F4554BE40FCB41157835B9AD897EE69_Params
{
	class AFortGameStateAthena*                        GameState;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UFortPlaylist*                               Playlist;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer                       PlaylistContextTags;                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.OnCurieActive_A24E3C804D14344FC0E5E0B5CDB4FF55
struct AB_BGA_Athena_EnvCampFire_C_OnCurieActive_A24E3C804D14344FC0E5E0B5CDB4FF55_Params
{
};

// Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.BlueprintOnInteract
struct AB_BGA_Athena_EnvCampFire_C_BlueprintOnInteract_Params
{
	class AFortPawn*                                   InteractingPawn;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInteractionBeingAttempted>            InteractionBeingAttempted;                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.Light
struct AB_BGA_Athena_EnvCampFire_C_Light_Params
{
};

// Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.GoOut
struct AB_BGA_Athena_EnvCampFire_C_GoOut_Params
{
};

// Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.ReceiveBeginPlay
struct AB_BGA_Athena_EnvCampFire_C_ReceiveBeginPlay_Params
{
};

// Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.Start
struct AB_BGA_Athena_EnvCampFire_C_Start_Params
{
};

// Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.BuildingActorDestroyedCleanUp
struct AB_BGA_Athena_EnvCampFire_C_BuildingActorDestroyedCleanUp_Params
{
	class AActor*                                      DamagedActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         FHitComponent;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Momentum;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.BindToFloor
struct AB_BGA_Athena_EnvCampFire_C_BindToFloor_Params
{
};

// Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.HandleBoundDestroyed
struct AB_BGA_Athena_EnvCampFire_C_HandleBoundDestroyed_Params
{
};

// Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.CheckDestroyDisabled
struct AB_BGA_Athena_EnvCampFire_C_CheckDestroyDisabled_Params
{
};

// Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.SpecialS7LightsFireAfterOut
struct AB_BGA_Athena_EnvCampFire_C_SpecialS7LightsFireAfterOut_Params
{
};

// Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.KillDouseSmokeWisp
struct AB_BGA_Athena_EnvCampFire_C_KillDouseSmokeWisp_Params
{
};

// Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.Server_QuestObjectiveUpdated
struct AB_BGA_Athena_EnvCampFire_C_Server_QuestObjectiveUpdated_Params
{
	class AFortPlayerController*                       Controller;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UFortQuestItemDefinition*                    QuestDef;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       BackendName;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                CompletionCount;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ObjectiveCompleted;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               QuestCompleted;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.HandleCharacterVariantTransition
struct AB_BGA_Athena_EnvCampFire_C_HandleCharacterVariantTransition_Params
{
	class AFortPawn*                                   TransitioningPawn;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.PayLightCost
struct AB_BGA_Athena_EnvCampFire_C_PayLightCost_Params
{
	class AFortPawn*                                   InteractingPawn;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.PayStokeCost
struct AB_BGA_Athena_EnvCampFire_C_PayStokeCost_Params
{
	class AFortPawn*                                   InteractingPawn;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.CheckReplaceCampfire
struct AB_BGA_Athena_EnvCampFire_C_CheckReplaceCampfire_Params
{
};

// Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct AB_BGA_Athena_EnvCampFire_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
struct AB_BGA_Athena_EnvCampFire_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.EndFireInteract
struct AB_BGA_Athena_EnvCampFire_C_EndFireInteract_Params
{
};

// Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.OnCurieElementAttached_BP
struct AB_BGA_Athena_EnvCampFire_C_OnCurieElementAttached_BP_Params
{
	struct FCurieContainerHandle                       CurieContainerHandle;                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ElementTag;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.OnCurieElementDetached_BP
struct AB_BGA_Athena_EnvCampFire_C_OnCurieElementDetached_BP_Params
{
	struct FCurieContainerHandle                       CurieContainerHandle;                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ElementTag;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.ReceiveDestroyed
struct AB_BGA_Athena_EnvCampFire_C_ReceiveDestroyed_Params
{
};

// Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.CheckInitialOverlappingActors
struct AB_BGA_Athena_EnvCampFire_C_CheckInitialOverlappingActors_Params
{
};

// Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.ExecuteUbergraph_B_BGA_Athena_EnvCampFire
struct AB_BGA_Athena_EnvCampFire_C_ExecuteUbergraph_B_BGA_Athena_EnvCampFire_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
