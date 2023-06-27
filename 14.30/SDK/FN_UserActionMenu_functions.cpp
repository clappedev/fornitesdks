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

// Function UserActionMenu.UserActionMenu_C.OnToggleConfirmation
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bIsVisible                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUserActionMenu_C::OnToggleConfirmation(bool bIsVisible)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function UserActionMenu.UserActionMenu_C.OnToggleConfirmation");

	UUserActionMenu_C_OnToggleConfirmation_Params params;
	params.bIsVisible = bIsVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserActionMenu.UserActionMenu_C.OnOpened
// (Event, Protected, BlueprintEvent)

void UUserActionMenu_C::OnOpened()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function UserActionMenu.UserActionMenu_C.OnOpened");

	UUserActionMenu_C_OnOpened_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserActionMenu.UserActionMenu_C.ExecuteUbergraph_UserActionMenu
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUserActionMenu_C::ExecuteUbergraph_UserActionMenu(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function UserActionMenu.UserActionMenu_C.ExecuteUbergraph_UserActionMenu");

	UUserActionMenu_C_ExecuteUbergraph_UserActionMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
