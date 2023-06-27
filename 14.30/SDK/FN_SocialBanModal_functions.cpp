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

// Function SocialBanModal.SocialBanModal_C.OnDisplayModeSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bIsBanned                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USocialBanModal_C::OnDisplayModeSet(bool bIsBanned)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SocialBanModal.SocialBanModal_C.OnDisplayModeSet");

	USocialBanModal_C_OnDisplayModeSet_Params params;
	params.bIsBanned = bIsBanned;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SocialBanModal.SocialBanModal_C.ExecuteUbergraph_SocialBanModal
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USocialBanModal_C::ExecuteUbergraph_SocialBanModal(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SocialBanModal.SocialBanModal_C.ExecuteUbergraph_SocialBanModal");

	USocialBanModal_C_ExecuteUbergraph_SocialBanModal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SocialBanModal.SocialBanModal_C.OnCloseSucceeded__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void USocialBanModal_C::OnCloseSucceeded__DelegateSignature()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SocialBanModal.SocialBanModal_C.OnCloseSucceeded__DelegateSignature");

	USocialBanModal_C_OnCloseSucceeded__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
