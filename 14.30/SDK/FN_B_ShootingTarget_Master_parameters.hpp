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

// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.GetMeshComponents
struct AB_ShootingTarget_Master_C_GetMeshComponents_Params
{
	TArray<class UMeshComponent*>                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.GetCollisionStaticMesh
struct AB_ShootingTarget_Master_C_GetCollisionStaticMesh_Params
{
	class UStaticMesh*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.OnRep_TargetMeshSetting
struct AB_ShootingTarget_Master_C_OnRep_TargetMeshSetting_Params
{
};

// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.RestoreToMaxHealth
struct AB_ShootingTarget_Master_C_RestoreToMaxHealth_Params
{
};

// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.WeakPointArrayContainsItems
struct AB_ShootingTarget_Master_C_WeakPointArrayContainsItems_Params
{
	bool                                               ArrayContainsItems;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.GetWeaponDataFromDamageCauser
struct AB_ShootingTarget_Master_C_GetWeaponDataFromDamageCauser_Params
{
	class UObject*                                     DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UFortWeaponItemDefinition*                   OutWeaponData;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.CalculateDamageFromWeaponData
struct AB_ShootingTarget_Master_C_CalculateDamageFromWeaponData_Params
{
	class UFortWeaponItemDefinition*                   WeaponData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              InDamage;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              OutDamage;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.IsWithinWeakpointBounds
struct AB_ShootingTarget_Master_C_IsWithinWeakpointBounds_Params
{
	struct FVector                                     Impact_Location;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Component;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.UpdateHealthBarVisibility
struct AB_ShootingTarget_Master_C_UpdateHealthBarVisibility_Params
{
	bool                                               ShouldShowBar;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.BlueprintModifyIncomingDamage
struct AB_ShootingTarget_Master_C_BlueprintModifyIncomingDamage_Params
{
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer                       InTags;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayEffectContextHandle                EffectContext;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class AController*                                 EventInstigator;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.SetAimAssistEnabled
struct AB_ShootingTarget_Master_C_SetAimAssistEnabled_Params
{
	bool                                               NewType;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.CreateWeakPointArray
struct AB_ShootingTarget_Master_C_CreateWeakPointArray_Params
{
};

// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.CheckIfShouldHop
struct AB_ShootingTarget_Master_C_CheckIfShouldHop_Params
{
};

// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.SetBunnyHopTimer
struct AB_ShootingTarget_Master_C_SetBunnyHopTimer_Params
{
};

// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.ClearBunnyHopTimer
struct AB_ShootingTarget_Master_C_ClearBunnyHopTimer_Params
{
};

// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.InitializeHideTargetTimer
struct AB_ShootingTarget_Master_C_InitializeHideTargetTimer_Params
{
};

// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.HideTarget
struct AB_ShootingTarget_Master_C_HideTarget_Params
{
};

// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.SetMaxHealth
struct AB_ShootingTarget_Master_C_SetMaxHealth_Params
{
	float                                              NewMaxHealth;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.TargetShouldFall
struct AB_ShootingTarget_Master_C_TargetShouldFall_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.SetStartingPosition
struct AB_ShootingTarget_Master_C_SetStartingPosition_Params
{
};

// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.MinigameIsRunning
struct AB_ShootingTarget_Master_C_MinigameIsRunning_Params
{
	bool                                               MinigameIsRunning;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.ShouldTriggerTarget
struct AB_ShootingTarget_Master_C_ShouldTriggerTarget_Params
{
	class UObject*                                     Overlapping_Actor;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         Overlapping_Component;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.AwardScore
struct AB_ShootingTarget_Master_C_AwardScore_Params
{
	class AFortPlayerController*                       FortPlayerController;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ScoreAwarded;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                TeamAwardedPoints;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.CalculateScore
struct AB_ShootingTarget_Master_C_CalculateScore_Params
{
	int                                                ScoreToAward;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.PrepareChosenTarget
struct AB_ShootingTarget_Master_C_PrepareChosenTarget_Params
{
	class UStaticMeshComponent*                        StaticMeshComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPrimitiveComponent*                         WeakPointComponent_1;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPrimitiveComponent*                         WeakPointComponent2;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.WeakPointWasHit
struct AB_ShootingTarget_Master_C_WeakPointWasHit_Params
{
	struct FHitResult                                  Hit_Result;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class UPrimitiveComponent*                         HitComponent;                                             // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.ResetWeakPoints
struct AB_ShootingTarget_Master_C_ResetWeakPoints_Params
{
};

// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.CanPopUp
struct AB_ShootingTarget_Master_C_CanPopUp_Params
{
	bool                                               MinigameJustStartedOrStopped;                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CanPopUp;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.PopUpTimeline__FinishedFunc
struct AB_ShootingTarget_Master_C_PopUpTimeline__FinishedFunc_Params
{
};

// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.PopUpTimeline__UpdateFunc
struct AB_ShootingTarget_Master_C_PopUpTimeline__UpdateFunc_Params
{
};

// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.KnockDownTimeline__FinishedFunc
struct AB_ShootingTarget_Master_C_KnockDownTimeline__FinishedFunc_Params
{
};

// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.KnockDownTimeline__UpdateFunc
struct AB_ShootingTarget_Master_C_KnockDownTimeline__UpdateFunc_Params
{
};

// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.Timeline_2__FinishedFunc
struct AB_ShootingTarget_Master_C_Timeline_2__FinishedFunc_Params
{
};

// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.Timeline_2__UpdateFunc
struct AB_ShootingTarget_Master_C_Timeline_2__UpdateFunc_Params
{
};

// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.OnReady_A57ED5A14BEB6A98DB20D88D1582D58A
struct AB_ShootingTarget_Master_C_OnReady_A57ED5A14BEB6A98DB20D88D1582D58A_Params
{
};

// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.OnLoaded_068F5161459B8B1AEAD4A0B19781287D
struct AB_ShootingTarget_Master_C_OnLoaded_068F5161459B8B1AEAD4A0B19781287D_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.BndEvt__FortMinigameProgress_K2Node_ComponentBoundEvent_0_SimpleDynamicMulticastDelegate__DelegateSignature
struct AB_ShootingTarget_Master_C_BndEvt__FortMinigameProgress_K2Node_ComponentBoundEvent_0_SimpleDynamicMulticastDelegate__DelegateSignature_Params
{
};

// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_1_AnyPropertyChangedDelegate__DelegateSignature
struct AB_ShootingTarget_Master_C_BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_1_AnyPropertyChangedDelegate__DelegateSignature_Params
{
};

// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.PopUpTarget
struct AB_ShootingTarget_Master_C_PopUpTarget_Params
{
	bool                                               MinigameJustStartedOrStopped;                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_2_AnyPropertyChangedDelegate__DelegateSignature
struct AB_ShootingTarget_Master_C_BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_2_AnyPropertyChangedDelegate__DelegateSignature_Params
{
};

// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.BndEvt__ProximityTrigger_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature
struct AB_ShootingTarget_Master_C_BndEvt__ProximityTrigger_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.KnockdownTarget
struct AB_ShootingTarget_Master_C_KnockdownTarget_Params
{
};

// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.OnDamageServer
struct AB_ShootingTarget_Master_C_OnDamageServer_Params
{
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer                       DamageTags;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FVector                                     Momentum;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitInfo;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayEffectContextHandle                EffectContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.ReceiveBeginPlay
struct AB_ShootingTarget_Master_C_ReceiveBeginPlay_Params
{
};

// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.BndEvt__FortMinigameProgress_K2Node_ComponentBoundEvent_4_SimpleDynamicMulticastDelegate__DelegateSignature
struct AB_ShootingTarget_Master_C_BndEvt__FortMinigameProgress_K2Node_ComponentBoundEvent_4_SimpleDynamicMulticastDelegate__DelegateSignature_Params
{
};

// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.PickMeshFromSettings
struct AB_ShootingTarget_Master_C_PickMeshFromSettings_Params
{
};

// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.InitializeSettings
struct AB_ShootingTarget_Master_C_InitializeSettings_Params
{
};

// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.ResetFromSettings
struct AB_ShootingTarget_Master_C_ResetFromSettings_Params
{
};

// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.HideTargetTimerEvent
struct AB_ShootingTarget_Master_C_HideTargetTimerEvent_Params
{
};

// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.SetHideTargetTimer
struct AB_ShootingTarget_Master_C_SetHideTargetTimer_Params
{
	float                                              TimerDuration;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.Hop
struct AB_ShootingTarget_Master_C_Hop_Params
{
	bool                                               InJumpUpPosition;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.HopTimerEvent
struct AB_ShootingTarget_Master_C_HopTimerEvent_Params
{
};

// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.SetHopTimer
struct AB_ShootingTarget_Master_C_SetHopTimer_Params
{
};

// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.Knock Down Audio
struct AB_ShootingTarget_Master_C_Knock_Down_Audio_Params
{
	bool                                               Knocked_Down_;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.Impact Audio
struct AB_ShootingTarget_Master_C_Impact_Audio_Params
{
	int                                                Check_for_Positive_Score;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 Instigator;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.SpawnWeakpointFX
struct AB_ShootingTarget_Master_C_SpawnWeakpointFX_Params
{
	struct FTransform                                  ImpactTransform;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.Target Movement Audio
struct AB_ShootingTarget_Master_C_Target_Movement_Audio_Params
{
	bool                                               Jump_Up_;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.PopUpTargetTimerEvent
struct AB_ShootingTarget_Master_C_PopUpTargetTimerEvent_Params
{
};

// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.PostFinishSpawning
struct AB_ShootingTarget_Master_C_PostFinishSpawning_Params
{
};

// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.ExecuteUbergraph_B_ShootingTarget_Master
struct AB_ShootingTarget_Master_C_ExecuteUbergraph_B_ShootingTarget_Master_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.TargetPopUpDispatcher__DelegateSignature
struct AB_ShootingTarget_Master_C_TargetPopUpDispatcher__DelegateSignature_Params
{
};

// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.TargetKnockedDownDispatcher__DelegateSignature
struct AB_ShootingTarget_Master_C_TargetKnockedDownDispatcher__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
