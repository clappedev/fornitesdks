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

// Function B_HeldObject_Parent.B_HeldObject_Parent_C.OnRep_IsSocketed
struct AB_HeldObject_Parent_C_OnRep_IsSocketed_Params
{
};

// Function B_HeldObject_Parent.B_HeldObject_Parent_C.BlueprintGetInteractionString
struct AB_HeldObject_Parent_C_BlueprintGetInteractionString_Params
{
	class AFortPawn*                                   InteractingPawn;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInteractionBeingAttempted>            InteractionBeingAttempted;                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function B_HeldObject_Parent.B_HeldObject_Parent_C.OnRep_IsHeld
struct AB_HeldObject_Parent_C_OnRep_IsHeld_Params
{
};

// Function B_HeldObject_Parent.B_HeldObject_Parent_C.BlueprintCanInteract
struct AB_HeldObject_Parent_C_BlueprintCanInteract_Params
{
	class AFortPawn*                                   InteractingPawn;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInteractionBeingAttempted>            InteractionBeingAttempted;                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETInteractionType>                     InteractionType;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function B_HeldObject_Parent.B_HeldObject_Parent_C.BlueprintOnInteract
struct AB_HeldObject_Parent_C_BlueprintOnInteract_Params
{
	class AFortPawn*                                   InteractingPawn;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInteractionBeingAttempted>            InteractionBeingAttempted;                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_HeldObject_Parent.B_HeldObject_Parent_C.ReceiveBeginPlay
struct AB_HeldObject_Parent_C_ReceiveBeginPlay_Params
{
};

// Function B_HeldObject_Parent.B_HeldObject_Parent_C.ExecuteUbergraph_B_HeldObject_Parent
struct AB_HeldObject_Parent_C_ExecuteUbergraph_B_HeldObject_Parent_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
