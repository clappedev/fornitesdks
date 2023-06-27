// Fortnite (8.51) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EmbeddedCommunicationJSBridge.EmbeddedCommunicationJSBridge.SetEventListener
// (Final, Native, Public)
// Parameters:
// struct FWebJSFunction          Callback                       (Parm)

void UEmbeddedCommunicationJSBridge::SetEventListener(struct FWebJSFunction Callback)
{
	static auto fn = UObject::FindObject<UFunction>("Function EmbeddedCommunicationJSBridge.EmbeddedCommunicationJSBridge.SetEventListener");

	UEmbeddedCommunicationJSBridge_SetEventListener_Params params;
	params.Callback = Callback;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbeddedCommunicationJSBridge.EmbeddedCommunicationJSBridge.RunCommand
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FName                   Subsystem                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FString                 Command                        (Parm, ZeroConstructor)
// struct FString                 JsonParams                     (Parm, ZeroConstructor)
// struct FWebJSResponse          Response                       (Parm)

void UEmbeddedCommunicationJSBridge::RunCommand(struct FName Subsystem, struct FString Command, struct FString JsonParams, struct FWebJSResponse Response)
{
	static auto fn = UObject::FindObject<UFunction>("Function EmbeddedCommunicationJSBridge.EmbeddedCommunicationJSBridge.RunCommand");

	UEmbeddedCommunicationJSBridge_RunCommand_Params params;
	params.Subsystem = Subsystem;
	params.Command = Command;
	params.JsonParams = JsonParams;
	params.Response = Response;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EmbeddedCommunicationJSBridge.EmbeddedCommunicationJSBridge.PostMessage
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FString                 ID                             (Parm, ZeroConstructor)
// struct FName                   Subsystem                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FString                 Command                        (Parm, ZeroConstructor)
// struct FString                 JsonParams                     (Parm, ZeroConstructor)

void UEmbeddedCommunicationJSBridge::PostMessage(struct FString ID, struct FName Subsystem, struct FString Command, struct FString JsonParams)
{
	static auto fn = UObject::FindObject<UFunction>("Function EmbeddedCommunicationJSBridge.EmbeddedCommunicationJSBridge.PostMessage");

	UEmbeddedCommunicationJSBridge_PostMessage_Params params;
	params.ID = ID;
	params.Subsystem = Subsystem;
	params.Command = Command;
	params.JsonParams = JsonParams;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
