// Fortnite SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Announce_NameHomeBase.Announce_NameHomeBase_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAnnounce_NameHomeBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Announce_NameHomeBase.Announce_NameHomeBase_C.UserConstructionScript");

	AAnnounce_NameHomeBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Announce_NameHomeBase.Announce_NameHomeBase_C.InitAnnouncement
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAnnounce_NameHomeBase_C::InitAnnouncement()
{
	static auto fn = UObject::FindObject<UFunction>("Function Announce_NameHomeBase.Announce_NameHomeBase_C.InitAnnouncement");

	AAnnounce_NameHomeBase_C_InitAnnouncement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Announce_NameHomeBase.Announce_NameHomeBase_C.HandleSentenceStart_UI
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int*                           SentenceIdx                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AAnnounce_NameHomeBase_C::HandleSentenceStart_UI(int* SentenceIdx)
{
	static auto fn = UObject::FindObject<UFunction>("Function Announce_NameHomeBase.Announce_NameHomeBase_C.HandleSentenceStart_UI");

	AAnnounce_NameHomeBase_C_HandleSentenceStart_UI_Params params;
	params.SentenceIdx = SentenceIdx;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Announce_NameHomeBase.Announce_NameHomeBase_C.HandleSentenceStop_UI
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int*                           SentenceIdx                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AAnnounce_NameHomeBase_C::HandleSentenceStop_UI(int* SentenceIdx)
{
	static auto fn = UObject::FindObject<UFunction>("Function Announce_NameHomeBase.Announce_NameHomeBase_C.HandleSentenceStop_UI");

	AAnnounce_NameHomeBase_C_HandleSentenceStop_UI_Params params;
	params.SentenceIdx = SentenceIdx;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Announce_NameHomeBase.Announce_NameHomeBase_C.ExecuteUbergraph_Announce_NameHomeBase
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AAnnounce_NameHomeBase_C::ExecuteUbergraph_Announce_NameHomeBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Announce_NameHomeBase.Announce_NameHomeBase_C.ExecuteUbergraph_Announce_NameHomeBase");

	AAnnounce_NameHomeBase_C_ExecuteUbergraph_Announce_NameHomeBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
