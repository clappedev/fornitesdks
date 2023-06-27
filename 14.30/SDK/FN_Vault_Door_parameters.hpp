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

// Function Vault_Door.Vault_Door_C.ShouldDie
struct AVault_Door_C_ShouldDie_Params
{
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 EventInstigator;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Vault_Door.Vault_Door_C.OnRep_HasBeenOpening
struct AVault_Door_C_OnRep_HasBeenOpening_Params
{
};

// Function Vault_Door.Vault_Door_C.BlueprintCanInteract
struct AVault_Door_C_BlueprintCanInteract_Params
{
	class AFortPawn*                                   InteractingPawn;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInteractionBeingAttempted>            InteractionBeingAttempted;                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETInteractionType>                     InteractionType;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Vault_Door.Vault_Door_C.Open__FinishedFunc
struct AVault_Door_C_Open__FinishedFunc_Params
{
};

// Function Vault_Door.Vault_Door_C.Open__UpdateFunc
struct AVault_Door_C_Open__UpdateFunc_Params
{
};

// Function Vault_Door.Vault_Door_C.Open__Trigger Light__EventFunc
struct AVault_Door_C_Open__Trigger_Light__EventFunc_Params
{
};

// Function Vault_Door.Vault_Door_C.ReceiveBeginPlay
struct AVault_Door_C_ReceiveBeginPlay_Params
{
};

// Function Vault_Door.Vault_Door_C.VaultOpen
struct AVault_Door_C_VaultOpen_Params
{
};

// Function Vault_Door.Vault_Door_C.OpeningTimeline
struct AVault_Door_C_OpeningTimeline_Params
{
};

// Function Vault_Door.Vault_Door_C.ExecuteUbergraph_Vault_Door
struct AVault_Door_C_ExecuteUbergraph_Vault_Door_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
