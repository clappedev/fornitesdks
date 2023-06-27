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

// Function BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C.GetFocusedSocketLocation
struct ABGA_Athena_PurpleMouse_Jumper_C_GetFocusedSocketLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C.CanBeSavedToCreativeVolume
struct ABGA_Athena_PurpleMouse_Jumper_C_CanBeSavedToCreativeVolume_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C.GetAllPawns
struct ABGA_Athena_PurpleMouse_Jumper_C_GetAllPawns_Params
{
	TArray<class AActor*>                              _Array;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class AActor*>                              _Result;                                                  // (Parm, OutParm)
};

// Function BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C.Is in Infiltration Mode
struct ABGA_Athena_PurpleMouse_Jumper_C_Is_in_Infiltration_Mode_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C.BlueprintGetInteractionTime
struct ABGA_Athena_PurpleMouse_Jumper_C_BlueprintGetInteractionTime_Params
{
	class AFortPawn*                                   InteractingPawn;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              OutInteractionTime;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInteractionBeingAttempted>            InteractionBeingAttempted;                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C.Init
struct ABGA_Athena_PurpleMouse_Jumper_C_Init_Params
{
	struct FVector                                     GravHitNormal;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C.FilterByLOS
struct ABGA_Athena_PurpleMouse_Jumper_C_FilterByLOS_Params
{
	TArray<class AActor*>                              _Array;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class AActor*>                              _Result;                                                  // (Parm, OutParm)
};

// Function BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C.CheckLOSAgain
struct ABGA_Athena_PurpleMouse_Jumper_C_CheckLOSAgain_Params
{
	class AActor*                                      ActorToCheckLOSAgainst;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C.BlueprintGetInteractionString
struct ABGA_Athena_PurpleMouse_Jumper_C_BlueprintGetInteractionString_Params
{
	class AFortPawn*                                   InteractingPawn;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInteractionBeingAttempted>            InteractionBeingAttempted;                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C.BlueprintCanInteract
struct ABGA_Athena_PurpleMouse_Jumper_C_BlueprintCanInteract_Params
{
	class AFortPawn*                                   InteractingPawn;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInteractionBeingAttempted>            InteractionBeingAttempted;                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETInteractionType>                     InteractionType;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C.Launch
struct ABGA_Athena_PurpleMouse_Jumper_C_Launch_Params
{
	struct FVector                                     LaunchSource;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C.UserConstructionScript
struct ABGA_Athena_PurpleMouse_Jumper_C_UserConstructionScript_Params
{
};

// Function BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C.JumpOut__FinishedFunc
struct ABGA_Athena_PurpleMouse_Jumper_C_JumpOut__FinishedFunc_Params
{
};

// Function BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C.JumpOut__UpdateFunc
struct ABGA_Athena_PurpleMouse_Jumper_C_JumpOut__UpdateFunc_Params
{
};

// Function BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C.ReceiveBeginPlay
struct ABGA_Athena_PurpleMouse_Jumper_C_ReceiveBeginPlay_Params
{
};

// Function BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C.BndEvt__ExplosionTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct ABGA_Athena_PurpleMouse_Jumper_C_BndEvt__ExplosionTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C.JumpIntoExplosion
struct ABGA_Athena_PurpleMouse_Jumper_C_JumpIntoExplosion_Params
{
};

// Function BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C.OnDamageServer
struct ABGA_Athena_PurpleMouse_Jumper_C_OnDamageServer_Params
{
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer                       DamageTags;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FVector                                     Momentum;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitInfo;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayEffectContextHandle                EffectContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C.BlueprintOnInteract
struct ABGA_Athena_PurpleMouse_Jumper_C_BlueprintOnInteract_Params
{
	class AFortPawn*                                   InteractingPawn;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInteractionBeingAttempted>            InteractionBeingAttempted;                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C.SpawnFXSounds
struct ABGA_Athena_PurpleMouse_Jumper_C_SpawnFXSounds_Params
{
};

// Function BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C.BndEvt__ExplosionTrigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
struct ABGA_Athena_PurpleMouse_Jumper_C_BndEvt__ExplosionTrigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C.Beep
struct ABGA_Athena_PurpleMouse_Jumper_C_Beep_Params
{
	struct FName                                       EventName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              EmitterTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Velocity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C.TriggerBeep
struct ABGA_Athena_PurpleMouse_Jumper_C_TriggerBeep_Params
{
};

// Function BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C.DetachAndLaunch
struct ABGA_Athena_PurpleMouse_Jumper_C_DetachAndLaunch_Params
{
};

// Function BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C.Explode
struct ABGA_Athena_PurpleMouse_Jumper_C_Explode_Params
{
};

// Function BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C.TriggerJumpTimeline
struct ABGA_Athena_PurpleMouse_Jumper_C_TriggerJumpTimeline_Params
{
};

// Function BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C.Destroyed
struct ABGA_Athena_PurpleMouse_Jumper_C_Destroyed_Params
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

// Function BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C.BndEvt__BeepBlinkTrigger_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
struct ABGA_Athena_PurpleMouse_Jumper_C_BndEvt__BeepBlinkTrigger_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C.BndEvt__BeepBlinkTrigger_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature
struct ABGA_Athena_PurpleMouse_Jumper_C_BndEvt__BeepBlinkTrigger_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C.StopBeep
struct ABGA_Athena_PurpleMouse_Jumper_C_StopBeep_Params
{
};

// Function BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C.Damaged
struct ABGA_Athena_PurpleMouse_Jumper_C_Damaged_Params
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

// Function BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C.ResetExplosionTimer
struct ABGA_Athena_PurpleMouse_Jumper_C_ResetExplosionTimer_Params
{
};

// Function BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C.BndEvt__FortWaterInteraction_K2Node_ComponentBoundEvent_4_WaterInteractionOnEnterWater__DelegateSignature
struct ABGA_Athena_PurpleMouse_Jumper_C_BndEvt__FortWaterInteraction_K2Node_ComponentBoundEvent_4_WaterInteractionOnEnterWater__DelegateSignature_Params
{
	class AFortWaterBodyActor*                         WaterBody;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UFortWaterInteractionComponent*              WaterInteractionComponent;                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bIsFirstBody;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C.StopSim
struct ABGA_Athena_PurpleMouse_Jumper_C_StopSim_Params
{
	struct FHitResult                                  Hit;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C.Pushback
struct ABGA_Athena_PurpleMouse_Jumper_C_Pushback_Params
{
	struct FVector                                     V;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C.OnInstigatorDied
struct ABGA_Athena_PurpleMouse_Jumper_C_OnInstigatorDied_Params
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

// Function BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C.SetMyTeam
struct ABGA_Athena_PurpleMouse_Jumper_C_SetMyTeam_Params
{
	unsigned char                                      Team;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C.ExecuteUbergraph_BGA_Athena_PurpleMouse_Jumper
struct ABGA_Athena_PurpleMouse_Jumper_C_ExecuteUbergraph_BGA_Athena_PurpleMouse_Jumper_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
