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

// Function EmbeddedCommunicationJSBridge.EmbeddedCommunicationJSBridge.SetEventListener
struct UEmbeddedCommunicationJSBridge_SetEventListener_Params
{
	struct FWebJSFunction                              Callback;                                                 // (Parm)
};

// Function EmbeddedCommunicationJSBridge.EmbeddedCommunicationJSBridge.RunCommand
struct UEmbeddedCommunicationJSBridge_RunCommand_Params
{
	struct FName                                       Subsystem;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FString                                     Command;                                                  // (Parm, ZeroConstructor)
	struct FString                                     JsonParams;                                               // (Parm, ZeroConstructor)
	struct FWebJSResponse                              Response;                                                 // (Parm)
};

// Function EmbeddedCommunicationJSBridge.EmbeddedCommunicationJSBridge.PostMessage
struct UEmbeddedCommunicationJSBridge_PostMessage_Params
{
	struct FString                                     ID;                                                       // (Parm, ZeroConstructor)
	struct FName                                       Subsystem;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FString                                     Command;                                                  // (Parm, ZeroConstructor)
	struct FString                                     JsonParams;                                               // (Parm, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
