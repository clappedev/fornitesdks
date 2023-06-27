#pragma once

// Fortnite (9.1) SDK
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

// Function ChallengeImageGridTreeEntry_Challenge.ChallengeImageGridTreeEntry_Challenge_C.BndEvt__Button_PartyAssist_K2Node_ComponentBoundEvent
struct UChallengeImageGridTreeEntry_Challenge_C_BndEvt__Button_PartyAssist_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ChallengeImageGridTreeEntry_Challenge.ChallengeImageGridTreeEntry_Challenge_C.OnPartyAssistEnabledChanged
struct UChallengeImageGridTreeEntry_Challenge_C_OnPartyAssistEnabledChanged_Params
{
	bool                                               bIsPartyAssistEnabled;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ChallengeImageGridTreeEntry_Challenge.ChallengeImageGridTreeEntry_Challenge_C.OnMouseEnter
struct UChallengeImageGridTreeEntry_Challenge_C_OnMouseEnter_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function ChallengeImageGridTreeEntry_Challenge.ChallengeImageGridTreeEntry_Challenge_C.OnMouseLeave
struct UChallengeImageGridTreeEntry_Challenge_C_OnMouseLeave_Params
{
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function ChallengeImageGridTreeEntry_Challenge.ChallengeImageGridTreeEntry_Challenge_C.OnChallengeInfoSet
struct UChallengeImageGridTreeEntry_Challenge_C_OnChallengeInfoSet_Params
{
	bool                                               bIsComplete;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsLocked;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bCompact;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               HideRewards;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ChallengeImageGridTreeEntry_Challenge.ChallengeImageGridTreeEntry_Challenge_C.Construct
struct UChallengeImageGridTreeEntry_Challenge_C_Construct_Params
{
};

// Function ChallengeImageGridTreeEntry_Challenge.ChallengeImageGridTreeEntry_Challenge_C.StartHighlight
struct UChallengeImageGridTreeEntry_Challenge_C_StartHighlight_Params
{
};

// Function ChallengeImageGridTreeEntry_Challenge.ChallengeImageGridTreeEntry_Challenge_C.EndHighlight
struct UChallengeImageGridTreeEntry_Challenge_C_EndHighlight_Params
{
};

// Function ChallengeImageGridTreeEntry_Challenge.ChallengeImageGridTreeEntry_Challenge_C.ExecuteUbergraph_ChallengeImageGridTreeEntry_Challenge
struct UChallengeImageGridTreeEntry_Challenge_C_ExecuteUbergraph_ChallengeImageGridTreeEntry_Challenge_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
