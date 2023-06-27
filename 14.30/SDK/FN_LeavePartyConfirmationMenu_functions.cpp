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

// Function LeavePartyConfirmationMenu.LeavePartyConfirmationMenu_C.OnOpened
// (Event, Protected, BlueprintEvent)

void ULeavePartyConfirmationMenu_C::OnOpened()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function LeavePartyConfirmationMenu.LeavePartyConfirmationMenu_C.OnOpened");

	ULeavePartyConfirmationMenu_C_OnOpened_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LeavePartyConfirmationMenu.LeavePartyConfirmationMenu_C.ExecuteUbergraph_LeavePartyConfirmationMenu
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULeavePartyConfirmationMenu_C::ExecuteUbergraph_LeavePartyConfirmationMenu(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function LeavePartyConfirmationMenu.LeavePartyConfirmationMenu_C.ExecuteUbergraph_LeavePartyConfirmationMenu");

	ULeavePartyConfirmationMenu_C_ExecuteUbergraph_LeavePartyConfirmationMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
