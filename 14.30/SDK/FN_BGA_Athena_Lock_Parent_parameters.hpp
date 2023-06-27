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

// Function BGA_Athena_Lock_Parent.BGA_Athena_Lock_Parent_C.Lock Set Interact Collision
struct ABGA_Athena_Lock_Parent_C_Lock_Set_Interact_Collision_Params
{
	bool                                               On;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BGA_Athena_Lock_Parent.BGA_Athena_Lock_Parent_C.ShouldDie
struct ABGA_Athena_Lock_Parent_C_ShouldDie_Params
{
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 EventInstigator;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BGA_Athena_Lock_Parent.BGA_Athena_Lock_Parent_C.LockCheck
struct ABGA_Athena_Lock_Parent_C_LockCheck_Params
{
	class AFortPawn*                                   InteractingPawn;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInteractionBeingAttempted>            InteractionBeingAttempted;                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CheckPassed;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BGA_Athena_Lock_Parent.BGA_Athena_Lock_Parent_C.OnRep_EverInteractSetLock
struct ABGA_Athena_Lock_Parent_C_OnRep_EverInteractSetLock_Params
{
};

// Function BGA_Athena_Lock_Parent.BGA_Athena_Lock_Parent_C.OnRep_LockState
struct ABGA_Athena_Lock_Parent_C_OnRep_LockState_Params
{
};

// Function BGA_Athena_Lock_Parent.BGA_Athena_Lock_Parent_C.BlueprintCanInteract
struct ABGA_Athena_Lock_Parent_C_BlueprintCanInteract_Params
{
	class AFortPawn*                                   InteractingPawn;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInteractionBeingAttempted>            InteractionBeingAttempted;                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETInteractionType>                     InteractionType;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BGA_Athena_Lock_Parent.BGA_Athena_Lock_Parent_C.BlueprintGetInteractionTime
struct ABGA_Athena_Lock_Parent_C_BlueprintGetInteractionTime_Params
{
	class AFortPawn*                                   InteractingPawn;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              OutInteractionTime;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInteractionBeingAttempted>            InteractionBeingAttempted;                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BGA_Athena_Lock_Parent.BGA_Athena_Lock_Parent_C.BlueprintGetInteractionString
struct ABGA_Athena_Lock_Parent_C_BlueprintGetInteractionString_Params
{
	class AFortPawn*                                   InteractingPawn;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInteractionBeingAttempted>            InteractionBeingAttempted;                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BGA_Athena_Lock_Parent.BGA_Athena_Lock_Parent_C.OnReady_19560710434050E125B3ADA0163CD609
struct ABGA_Athena_Lock_Parent_C_OnReady_19560710434050E125B3ADA0163CD609_Params
{
	class AFortGameStateAthena*                        GameState;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UFortPlaylist*                               Playlist;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer                       PlaylistContextTags;                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BGA_Athena_Lock_Parent.BGA_Athena_Lock_Parent_C.OnSecondInteract
struct ABGA_Athena_Lock_Parent_C_OnSecondInteract_Params
{
	class AFortPawn*                                   InteractingPawn;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BGA_Athena_Lock_Parent.BGA_Athena_Lock_Parent_C.OnFirstInteract
struct ABGA_Athena_Lock_Parent_C_OnFirstInteract_Params
{
	class AFortPawn*                                   InteractingPawn;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BGA_Athena_Lock_Parent.BGA_Athena_Lock_Parent_C.OnLocked
struct ABGA_Athena_Lock_Parent_C_OnLocked_Params
{
};

// Function BGA_Athena_Lock_Parent.BGA_Athena_Lock_Parent_C.OnUnLocked
struct ABGA_Athena_Lock_Parent_C_OnUnLocked_Params
{
};

// Function BGA_Athena_Lock_Parent.BGA_Athena_Lock_Parent_C.BndEvt__FortLinkToActor_K2Node_ComponentBoundEvent_0_OnLinkedActorDestroyed__DelegateSignature
struct ABGA_Athena_Lock_Parent_C_BndEvt__FortLinkToActor_K2Node_ComponentBoundEvent_0_OnLinkedActorDestroyed__DelegateSignature_Params
{
};

// Function BGA_Athena_Lock_Parent.BGA_Athena_Lock_Parent_C.HideAndKill
struct ABGA_Athena_Lock_Parent_C_HideAndKill_Params
{
};

// Function BGA_Athena_Lock_Parent.BGA_Athena_Lock_Parent_C.ApplyFailCheckEffect
struct ABGA_Athena_Lock_Parent_C_ApplyFailCheckEffect_Params
{
};

// Function BGA_Athena_Lock_Parent.BGA_Athena_Lock_Parent_C.SetLock
struct ABGA_Athena_Lock_Parent_C_SetLock_Params
{
	TEnumAsByte<Enum_Athena_Lock>                      LockState;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BGA_Athena_Lock_Parent.BGA_Athena_Lock_Parent_C.TimedRelock
struct ABGA_Athena_Lock_Parent_C_TimedRelock_Params
{
};

// Function BGA_Athena_Lock_Parent.BGA_Athena_Lock_Parent_C.BlueprintOnInteract
struct ABGA_Athena_Lock_Parent_C_BlueprintOnInteract_Params
{
	class AFortPawn*                                   InteractingPawn;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInteractionBeingAttempted>            InteractionBeingAttempted;                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BGA_Athena_Lock_Parent.BGA_Athena_Lock_Parent_C.ReceiveBeginPlay
struct ABGA_Athena_Lock_Parent_C_ReceiveBeginPlay_Params
{
};

// Function BGA_Athena_Lock_Parent.BGA_Athena_Lock_Parent_C.OpenContainers
struct ABGA_Athena_Lock_Parent_C_OpenContainers_Params
{
};

// Function BGA_Athena_Lock_Parent.BGA_Athena_Lock_Parent_C.LockCloseDoor
struct ABGA_Athena_Lock_Parent_C_LockCloseDoor_Params
{
};

// Function BGA_Athena_Lock_Parent.BGA_Athena_Lock_Parent_C.UnlockOpenDoor
struct ABGA_Athena_Lock_Parent_C_UnlockOpenDoor_Params
{
};

// Function BGA_Athena_Lock_Parent.BGA_Athena_Lock_Parent_C.NotEnabled
struct ABGA_Athena_Lock_Parent_C_NotEnabled_Params
{
};

// Function BGA_Athena_Lock_Parent.BGA_Athena_Lock_Parent_C.ParentActorDied
struct ABGA_Athena_Lock_Parent_C_ParentActorDied_Params
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

// Function BGA_Athena_Lock_Parent.BGA_Athena_Lock_Parent_C.ExecuteUbergraph_BGA_Athena_Lock_Parent
struct ABGA_Athena_Lock_Parent_C_ExecuteUbergraph_BGA_Athena_Lock_Parent_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BGA_Athena_Lock_Parent.BGA_Athena_Lock_Parent_C.OnLockedDispatcher__DelegateSignature
struct ABGA_Athena_Lock_Parent_C_OnLockedDispatcher__DelegateSignature_Params
{
};

// Function BGA_Athena_Lock_Parent.BGA_Athena_Lock_Parent_C.OnUnlockedDispatcher__DelegateSignature
struct ABGA_Athena_Lock_Parent_C_OnUnlockedDispatcher__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
