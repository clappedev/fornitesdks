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

// Function B_HeldObjectSocket.B_HeldObjectSocket_C.ValidateHeldObject
struct AB_HeldObjectSocket_C_ValidateHeldObject_Params
{
	class AB_HeldObject_Parent_C*                      HeldObject_Input;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AB_HeldObject_Parent_C*                      HeldObject_Output;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               IsValid;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function B_HeldObjectSocket.B_HeldObjectSocket_C.OnRep_SocketIsFilled
struct AB_HeldObjectSocket_C_OnRep_SocketIsFilled_Params
{
};

// Function B_HeldObjectSocket.B_HeldObjectSocket_C.ReceiveBeginPlay
struct AB_HeldObjectSocket_C_ReceiveBeginPlay_Params
{
};

// Function B_HeldObjectSocket.B_HeldObjectSocket_C.OnHitHeldObject
struct AB_HeldObjectSocket_C_OnHitHeldObject_Params
{
	class AActor*                                      SelfActor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function B_HeldObjectSocket.B_HeldObjectSocket_C.EventOnSocketFilled
struct AB_HeldObjectSocket_C_EventOnSocketFilled_Params
{
};

// Function B_HeldObjectSocket.B_HeldObjectSocket_C.EventOnSocketEmptied
struct AB_HeldObjectSocket_C_EventOnSocketEmptied_Params
{
};

// Function B_HeldObjectSocket.B_HeldObjectSocket_C.ExecuteUbergraph_B_HeldObjectSocket
struct AB_HeldObjectSocket_C_ExecuteUbergraph_B_HeldObjectSocket_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
