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

// Function CloseButton.CloseButton_C.SetText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UCloseButton_C::SetText(const struct FText& Text)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CloseButton.CloseButton_C.SetText");

	UCloseButton_C_SetText_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CloseButton.CloseButton_C.HandleSize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UCloseButton_C::HandleSize()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CloseButton.CloseButton_C.HandleSize");

	UCloseButton_C_HandleSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CloseButton.CloseButton_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)

void UCloseButton_C::BP_OnHovered()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CloseButton.CloseButton_C.BP_OnHovered");

	UCloseButton_C_BP_OnHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CloseButton.CloseButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCloseButton_C::Construct()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CloseButton.CloseButton_C.Construct");

	UCloseButton_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CloseButton.CloseButton_C.ExecuteUbergraph_CloseButton
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCloseButton_C::ExecuteUbergraph_CloseButton(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CloseButton.CloseButton_C.ExecuteUbergraph_CloseButton");

	UCloseButton_C_ExecuteUbergraph_CloseButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
