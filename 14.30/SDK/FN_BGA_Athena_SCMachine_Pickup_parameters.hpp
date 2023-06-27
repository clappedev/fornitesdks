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

// Function BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.OnRep_HideAndKill
struct ABGA_Athena_SCMachine_Pickup_C_OnRep_HideAndKill_Params
{
};

// Function BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.ConsiderPositionCorrection
struct ABGA_Athena_SCMachine_Pickup_C_ConsiderPositionCorrection_Params
{
};

// Function BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.DetermineStopLocation
struct ABGA_Athena_SCMachine_Pickup_C_DetermineStopLocation_Params
{
};

// Function BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.ShouldDie
struct ABGA_Athena_SCMachine_Pickup_C_ShouldDie_Params
{
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 EventInstigator;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.BlueprintGetInteractionString
struct ABGA_Athena_SCMachine_Pickup_C_BlueprintGetInteractionString_Params
{
	class AFortPawn*                                   InteractingPawn;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInteractionBeingAttempted>            InteractionBeingAttempted;                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.BlueprintCanInteract
struct ABGA_Athena_SCMachine_Pickup_C_BlueprintCanInteract_Params
{
	class AFortPawn*                                   InteractingPawn;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInteractionBeingAttempted>            InteractionBeingAttempted;                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETInteractionType>                     InteractionType;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.OnRep_UnHide
struct ABGA_Athena_SCMachine_Pickup_C_OnRep_UnHide_Params
{
};

// Function BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.ReceiveBeginPlay
struct ABGA_Athena_SCMachine_Pickup_C_ReceiveBeginPlay_Params
{
};

// Function BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.DestroyPickup
struct ABGA_Athena_SCMachine_Pickup_C_DestroyPickup_Params
{
};

// Function BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.BlueprintOnInteract
struct ABGA_Athena_SCMachine_Pickup_C_BlueprintOnInteract_Params
{
	class AFortPawn*                                   InteractingPawn;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInteractionBeingAttempted>            InteractionBeingAttempted;                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.CollectPickup
struct ABGA_Athena_SCMachine_Pickup_C_CollectPickup_Params
{
};

// Function BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.OnDestroyPickup
struct ABGA_Athena_SCMachine_Pickup_C_OnDestroyPickup_Params
{
};

// Function BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.SpawnSound
struct ABGA_Athena_SCMachine_Pickup_C_SpawnSound_Params
{
};

// Function BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.OnDeathServer
struct ABGA_Athena_SCMachine_Pickup_C_OnDeathServer_Params
{
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer                       DamageTags;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FVector                                     Momentum;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitInfo;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayEffectContextHandle                EffectContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.HideAndKillPickup
struct ABGA_Athena_SCMachine_Pickup_C_HideAndKillPickup_Params
{
};

// Function BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.ExecuteUbergraph_BGA_Athena_SCMachine_Pickup
struct ABGA_Athena_SCMachine_Pickup_C_ExecuteUbergraph_BGA_Athena_SCMachine_Pickup_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
