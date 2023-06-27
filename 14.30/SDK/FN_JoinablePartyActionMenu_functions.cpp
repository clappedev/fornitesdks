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

// Function JoinablePartyActionMenu.JoinablePartyActionMenu_C.OnToggleConfirmation
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bIsVisible                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UJoinablePartyActionMenu_C::OnToggleConfirmation(bool bIsVisible)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function JoinablePartyActionMenu.JoinablePartyActionMenu_C.OnToggleConfirmation");

	UJoinablePartyActionMenu_C_OnToggleConfirmation_Params params;
	params.bIsVisible = bIsVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JoinablePartyActionMenu.JoinablePartyActionMenu_C.OnOpened
// (Event, Protected, BlueprintEvent)

void UJoinablePartyActionMenu_C::OnOpened()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function JoinablePartyActionMenu.JoinablePartyActionMenu_C.OnOpened");

	UJoinablePartyActionMenu_C_OnOpened_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JoinablePartyActionMenu.JoinablePartyActionMenu_C.ExecuteUbergraph_JoinablePartyActionMenu
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UJoinablePartyActionMenu_C::ExecuteUbergraph_JoinablePartyActionMenu(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function JoinablePartyActionMenu.JoinablePartyActionMenu_C.ExecuteUbergraph_JoinablePartyActionMenu");

	UJoinablePartyActionMenu_C_ExecuteUbergraph_JoinablePartyActionMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
