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

// Function RejoinWindow.RejoinWindow_C.OnRequestRejoinRetry__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void URejoinWindow_C::OnRequestRejoinRetry__DelegateSignature()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function RejoinWindow.RejoinWindow_C.OnRequestRejoinRetry__DelegateSignature");

	URejoinWindow_C_OnRequestRejoinRetry__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RejoinWindow.RejoinWindow_C.OnRequestAbandon__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void URejoinWindow_C::OnRequestAbandon__DelegateSignature()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function RejoinWindow.RejoinWindow_C.OnRequestAbandon__DelegateSignature");

	URejoinWindow_C_OnRequestAbandon__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
