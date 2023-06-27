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

// Function MissedInvitesActionMenu.MissedInvitesActionMenu_C.OnKeyUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent               InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UMissedInvitesActionMenu_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function MissedInvitesActionMenu.MissedInvitesActionMenu_C.OnKeyUp");

	UMissedInvitesActionMenu_C_OnKeyUp_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MissedInvitesActionMenu.MissedInvitesActionMenu_C.OnOpened
// (Event, Protected, BlueprintEvent)

void UMissedInvitesActionMenu_C::OnOpened()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function MissedInvitesActionMenu.MissedInvitesActionMenu_C.OnOpened");

	UMissedInvitesActionMenu_C_OnOpened_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissedInvitesActionMenu.MissedInvitesActionMenu_C.ExecuteUbergraph_MissedInvitesActionMenu
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMissedInvitesActionMenu_C::ExecuteUbergraph_MissedInvitesActionMenu(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function MissedInvitesActionMenu.MissedInvitesActionMenu_C.ExecuteUbergraph_MissedInvitesActionMenu");

	UMissedInvitesActionMenu_C_ExecuteUbergraph_MissedInvitesActionMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
