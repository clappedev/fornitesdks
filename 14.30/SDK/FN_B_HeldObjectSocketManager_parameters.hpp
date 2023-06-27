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

// Function B_HeldObjectSocketManager.B_HeldObjectSocketManager_C.OnRep_CombinationCorrect
struct AB_HeldObjectSocketManager_C_OnRep_CombinationCorrect_Params
{
};

// Function B_HeldObjectSocketManager.B_HeldObjectSocketManager_C.CheckTagMatches
struct AB_HeldObjectSocketManager_C_CheckTagMatches_Params
{
};

// Function B_HeldObjectSocketManager.B_HeldObjectSocketManager_C.VerifyHeldObjectTags
struct AB_HeldObjectSocketManager_C_VerifyHeldObjectTags_Params
{
	TArray<struct FGameplayTagContainer>               CorrectTags;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<struct FGameplayTagContainer>               CurrentTags;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               OrderMatters;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsValidMatch;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function B_HeldObjectSocketManager.B_HeldObjectSocketManager_C.UpdateHeldObjectTags
struct AB_HeldObjectSocketManager_C_UpdateHeldObjectTags_Params
{
	class AB_HeldObjectSocket_C*                       ChangedSocket;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_HeldObjectSocketManager.B_HeldObjectSocketManager_C.ReceiveBeginPlay
struct AB_HeldObjectSocketManager_C_ReceiveBeginPlay_Params
{
};

// Function B_HeldObjectSocketManager.B_HeldObjectSocketManager_C.OnCombinationCorrect
struct AB_HeldObjectSocketManager_C_OnCombinationCorrect_Params
{
};

// Function B_HeldObjectSocketManager.B_HeldObjectSocketManager_C.ExecuteUbergraph_B_HeldObjectSocketManager
struct AB_HeldObjectSocketManager_C_ExecuteUbergraph_B_HeldObjectSocketManager_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
