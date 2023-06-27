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

// Function BGA_Athena_Keycard_Lock_Parent.BGA_Athena_Keycard_Lock_Parent_C.BlueprintGetInteractionString
struct ABGA_Athena_Keycard_Lock_Parent_C_BlueprintGetInteractionString_Params
{
	class AFortPawn*                                   InteractingPawn;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInteractionBeingAttempted>            InteractionBeingAttempted;                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BGA_Athena_Keycard_Lock_Parent.BGA_Athena_Keycard_Lock_Parent_C.BlueprintCanInteract
struct ABGA_Athena_Keycard_Lock_Parent_C_BlueprintCanInteract_Params
{
	class AFortPawn*                                   InteractingPawn;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInteractionBeingAttempted>            InteractionBeingAttempted;                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETInteractionType>                     InteractionType;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BGA_Athena_Keycard_Lock_Parent.BGA_Athena_Keycard_Lock_Parent_C.LockCheck
struct ABGA_Athena_Keycard_Lock_Parent_C_LockCheck_Params
{
	class AFortPawn*                                   InteractingPawn;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInteractionBeingAttempted>            InteractionBeingAttempted;                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CheckPassed;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BGA_Athena_Keycard_Lock_Parent.BGA_Athena_Keycard_Lock_Parent_C.ApplyFailCheckEffect
struct ABGA_Athena_Keycard_Lock_Parent_C_ApplyFailCheckEffect_Params
{
};

// Function BGA_Athena_Keycard_Lock_Parent.BGA_Athena_Keycard_Lock_Parent_C.CallOpenVault
struct ABGA_Athena_Keycard_Lock_Parent_C_CallOpenVault_Params
{
};

// Function BGA_Athena_Keycard_Lock_Parent.BGA_Athena_Keycard_Lock_Parent_C.BlueprintOnInteract
struct ABGA_Athena_Keycard_Lock_Parent_C_BlueprintOnInteract_Params
{
	class AFortPawn*                                   InteractingPawn;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInteractionBeingAttempted>            InteractionBeingAttempted;                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BGA_Athena_Keycard_Lock_Parent.BGA_Athena_Keycard_Lock_Parent_C.ReceiveBeginPlay
struct ABGA_Athena_Keycard_Lock_Parent_C_ReceiveBeginPlay_Params
{
};

// Function BGA_Athena_Keycard_Lock_Parent.BGA_Athena_Keycard_Lock_Parent_C.ShowSuccessScreen
struct ABGA_Athena_Keycard_Lock_Parent_C_ShowSuccessScreen_Params
{
};

// Function BGA_Athena_Keycard_Lock_Parent.BGA_Athena_Keycard_Lock_Parent_C.ShowFailScreen
struct ABGA_Athena_Keycard_Lock_Parent_C_ShowFailScreen_Params
{
};

// Function BGA_Athena_Keycard_Lock_Parent.BGA_Athena_Keycard_Lock_Parent_C.HideAndKill
struct ABGA_Athena_Keycard_Lock_Parent_C_HideAndKill_Params
{
};

// Function BGA_Athena_Keycard_Lock_Parent.BGA_Athena_Keycard_Lock_Parent_C.SetLock
struct ABGA_Athena_Keycard_Lock_Parent_C_SetLock_Params
{
	TEnumAsByte<Enum_Athena_Lock>                      LockState;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BGA_Athena_Keycard_Lock_Parent.BGA_Athena_Keycard_Lock_Parent_C.ExecuteUbergraph_BGA_Athena_Keycard_Lock_Parent
struct ABGA_Athena_Keycard_Lock_Parent_C_ExecuteUbergraph_BGA_Athena_Keycard_Lock_Parent_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
