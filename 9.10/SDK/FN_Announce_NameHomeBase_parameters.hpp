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

// Function Announce_NameHomeBase.Announce_NameHomeBase_C.InitAnnouncement
struct AAnnounce_NameHomeBase_C_InitAnnouncement_Params
{
};

// Function Announce_NameHomeBase.Announce_NameHomeBase_C.HandleSentenceStart_UI
struct AAnnounce_NameHomeBase_C_HandleSentenceStart_UI_Params
{
	int                                                SentenceIdx;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Announce_NameHomeBase.Announce_NameHomeBase_C.HandleSentenceStop_UI
struct AAnnounce_NameHomeBase_C_HandleSentenceStop_UI_Params
{
	int                                                SentenceIdx;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Announce_NameHomeBase.Announce_NameHomeBase_C.ExecuteUbergraph_Announce_NameHomeBase
struct AAnnounce_NameHomeBase_C_ExecuteUbergraph_Announce_NameHomeBase_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
