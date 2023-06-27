#pragma once

// Fortnite (8.51) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ChallengeInGameTreeEntry_Challenge.ChallengeInGameTreeEntry_Challenge_C.BndEvt__Button_PartyAssist_K2Node_ComponentBoundEvent
struct UChallengeInGameTreeEntry_Challenge_C_BndEvt__Button_PartyAssist_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ChallengeInGameTreeEntry_Challenge.ChallengeInGameTreeEntry_Challenge_C.OnPartyAssistEnabledChanged
struct UChallengeInGameTreeEntry_Challenge_C_OnPartyAssistEnabledChanged_Params
{
	bool                                               bIsPartyAssistEnabled;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ChallengeInGameTreeEntry_Challenge.ChallengeInGameTreeEntry_Challenge_C.OnMouseEnter
struct UChallengeInGameTreeEntry_Challenge_C_OnMouseEnter_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function ChallengeInGameTreeEntry_Challenge.ChallengeInGameTreeEntry_Challenge_C.OnMouseLeave
struct UChallengeInGameTreeEntry_Challenge_C_OnMouseLeave_Params
{
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function ChallengeInGameTreeEntry_Challenge.ChallengeInGameTreeEntry_Challenge_C.OnChallengeInfoSet
struct UChallengeInGameTreeEntry_Challenge_C_OnChallengeInfoSet_Params
{
	bool                                               bIsComplete;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsLocked;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ChallengeInGameTreeEntry_Challenge.ChallengeInGameTreeEntry_Challenge_C.ExecuteUbergraph_ChallengeInGameTreeEntry_Challenge
struct UChallengeInGameTreeEntry_Challenge_C_ExecuteUbergraph_ChallengeInGameTreeEntry_Challenge_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
