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

// Function ChallengeInGameTreeEntry_Header.ChallengeInGameTreeEntry_Header_C.OnMouseEnter
struct UChallengeInGameTreeEntry_Header_C_OnMouseEnter_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function ChallengeInGameTreeEntry_Header.ChallengeInGameTreeEntry_Header_C.OnMouseLeave
struct UChallengeInGameTreeEntry_Header_C_OnMouseLeave_Params
{
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function ChallengeInGameTreeEntry_Header.ChallengeInGameTreeEntry_Header_C.BP_OnItemExpansionChanged
struct UChallengeInGameTreeEntry_Header_C_BP_OnItemExpansionChanged_Params
{
	bool                                               bIsExpanded;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ChallengeInGameTreeEntry_Header.ChallengeInGameTreeEntry_Header_C.OnChallengeSetEstablished
struct UChallengeInGameTreeEntry_Header_C_OnChallengeSetEstablished_Params
{
	struct FFortChallengeSetStyle                      DisplayStyle;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function ChallengeInGameTreeEntry_Header.ChallengeInGameTreeEntry_Header_C.ExecuteUbergraph_ChallengeInGameTreeEntry_Header
struct UChallengeInGameTreeEntry_Header_C_ExecuteUbergraph_ChallengeInGameTreeEntry_Header_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
