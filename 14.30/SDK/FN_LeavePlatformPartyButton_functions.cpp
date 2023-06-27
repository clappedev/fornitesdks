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

// Function LeavePlatformPartyButton.LeavePlatformPartyButton_C.SetText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   New_Text                       (BlueprintVisible, BlueprintReadOnly, Parm)

void ULeavePlatformPartyButton_C::SetText(const struct FText& New_Text)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function LeavePlatformPartyButton.LeavePlatformPartyButton_C.SetText");

	ULeavePlatformPartyButton_C_SetText_Params params;
	params.New_Text = New_Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LeavePlatformPartyButton.LeavePlatformPartyButton_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)

void ULeavePlatformPartyButton_C::BP_OnHovered()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function LeavePlatformPartyButton.LeavePlatformPartyButton_C.BP_OnHovered");

	ULeavePlatformPartyButton_C_BP_OnHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LeavePlatformPartyButton.LeavePlatformPartyButton_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)

void ULeavePlatformPartyButton_C::BP_OnUnhovered()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function LeavePlatformPartyButton.LeavePlatformPartyButton_C.BP_OnUnhovered");

	ULeavePlatformPartyButton_C_BP_OnUnhovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LeavePlatformPartyButton.LeavePlatformPartyButton_C.ExecuteUbergraph_LeavePlatformPartyButton
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULeavePlatformPartyButton_C::ExecuteUbergraph_LeavePlatformPartyButton(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function LeavePlatformPartyButton.LeavePlatformPartyButton_C.ExecuteUbergraph_LeavePlatformPartyButton");

	ULeavePlatformPartyButton_C_ExecuteUbergraph_LeavePlatformPartyButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
