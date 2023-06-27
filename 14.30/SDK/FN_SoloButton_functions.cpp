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

// Function SoloButton.SoloButton_C.SetText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)

void USoloButton_C::SetText(const struct FText& Text)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SoloButton.SoloButton_C.SetText");

	USoloButton_C_SetText_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SoloButton.SoloButton_C.HandleSize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void USoloButton_C::HandleSize()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SoloButton.SoloButton_C.HandleSize");

	USoloButton_C_HandleSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SoloButton.SoloButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void USoloButton_C::Construct()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SoloButton.SoloButton_C.Construct");

	USoloButton_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SoloButton.SoloButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USoloButton_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SoloButton.SoloButton_C.PreConstruct");

	USoloButton_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SoloButton.SoloButton_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)

void USoloButton_C::BP_OnHovered()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SoloButton.SoloButton_C.BP_OnHovered");

	USoloButton_C_BP_OnHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SoloButton.SoloButton_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)

void USoloButton_C::BP_OnUnhovered()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SoloButton.SoloButton_C.BP_OnUnhovered");

	USoloButton_C_BP_OnUnhovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SoloButton.SoloButton_C.BP_OnClicked
// (Event, Protected, BlueprintEvent)

void USoloButton_C::BP_OnClicked()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SoloButton.SoloButton_C.BP_OnClicked");

	USoloButton_C_BP_OnClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SoloButton.SoloButton_C.BP_OnDisabled
// (Event, Protected, BlueprintEvent)

void USoloButton_C::BP_OnDisabled()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SoloButton.SoloButton_C.BP_OnDisabled");

	USoloButton_C_BP_OnDisabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SoloButton.SoloButton_C.BP_OnEnabled
// (Event, Protected, BlueprintEvent)

void USoloButton_C::BP_OnEnabled()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SoloButton.SoloButton_C.BP_OnEnabled");

	USoloButton_C_BP_OnEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SoloButton.SoloButton_C.ExecuteUbergraph_SoloButton
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USoloButton_C::ExecuteUbergraph_SoloButton(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SoloButton.SoloButton_C.ExecuteUbergraph_SoloButton");

	USoloButton_C_ExecuteUbergraph_SoloButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
