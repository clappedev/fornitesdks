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

// Function Com_ThanksForVotingMessage.Com_ThanksForVotingMessage_C.TapToClose
struct UCom_ThanksForVotingMessage_C_TapToClose_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Com_ThanksForVotingMessage.Com_ThanksForVotingMessage_C.FadeOutPopup
struct UCom_ThanksForVotingMessage_C_FadeOutPopup_Params
{
};

// Function Com_ThanksForVotingMessage.Com_ThanksForVotingMessage_C.FadeInPopup
struct UCom_ThanksForVotingMessage_C_FadeInPopup_Params
{
};

// Function Com_ThanksForVotingMessage.Com_ThanksForVotingMessage_C.ExecuteUbergraph_Com_ThanksForVotingMessage
struct UCom_ThanksForVotingMessage_C_ExecuteUbergraph_Com_ThanksForVotingMessage_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
