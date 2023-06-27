// Fortnite (14.30) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Com_ThanksForVotingMessage.Com_ThanksForVotingMessage_C.TapToClose
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UCom_ThanksForVotingMessage_C::TapToClose(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Com_ThanksForVotingMessage.Com_ThanksForVotingMessage_C.TapToClose");

	UCom_ThanksForVotingMessage_C_TapToClose_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Com_ThanksForVotingMessage.Com_ThanksForVotingMessage_C.FadeOutPopup
// (Event, Protected, BlueprintEvent)

void UCom_ThanksForVotingMessage_C::FadeOutPopup()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Com_ThanksForVotingMessage.Com_ThanksForVotingMessage_C.FadeOutPopup");

	UCom_ThanksForVotingMessage_C_FadeOutPopup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Com_ThanksForVotingMessage.Com_ThanksForVotingMessage_C.FadeInPopup
// (Event, Protected, BlueprintEvent)

void UCom_ThanksForVotingMessage_C::FadeInPopup()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Com_ThanksForVotingMessage.Com_ThanksForVotingMessage_C.FadeInPopup");

	UCom_ThanksForVotingMessage_C_FadeInPopup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Com_ThanksForVotingMessage.Com_ThanksForVotingMessage_C.ExecuteUbergraph_Com_ThanksForVotingMessage
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCom_ThanksForVotingMessage_C::ExecuteUbergraph_Com_ThanksForVotingMessage(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Com_ThanksForVotingMessage.Com_ThanksForVotingMessage_C.ExecuteUbergraph_Com_ThanksForVotingMessage");

	UCom_ThanksForVotingMessage_C_ExecuteUbergraph_Com_ThanksForVotingMessage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
