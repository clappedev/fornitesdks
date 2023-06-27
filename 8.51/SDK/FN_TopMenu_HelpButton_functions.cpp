// Fortnite (8.51) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TopMenu_HelpButton.TopMenu_HelpButton_C.GetButtonVisibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UTopMenu_HelpButton_C::GetButtonVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function TopMenu_HelpButton.TopMenu_HelpButton_C.GetButtonVisibility");

	UTopMenu_HelpButton_C_GetButtonVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TopMenu_HelpButton.TopMenu_HelpButton_C.OnLoaded_A64379784E473AB391B349B478F10865
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTopMenu_HelpButton_C::OnLoaded_A64379784E473AB391B349B478F10865(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function TopMenu_HelpButton.TopMenu_HelpButton_C.OnLoaded_A64379784E473AB391B349B478F10865");

	UTopMenu_HelpButton_C_OnLoaded_A64379784E473AB391B349B478F10865_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TopMenu_HelpButton.TopMenu_HelpButton_C.BndEvt__Leave_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTopMenu_HelpButton_C::BndEvt__Leave_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function TopMenu_HelpButton.TopMenu_HelpButton_C.BndEvt__Leave_K2Node_ComponentBoundEvent");

	UTopMenu_HelpButton_C_BndEvt__Leave_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TopMenu_HelpButton.TopMenu_HelpButton_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UTopMenu_HelpButton_C::OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function TopMenu_HelpButton.TopMenu_HelpButton_C.OnMouseEnter");

	UTopMenu_HelpButton_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TopMenu_HelpButton.TopMenu_HelpButton_C.BndEvt__HelpButtonInner_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTopMenu_HelpButton_C::BndEvt__HelpButtonInner_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function TopMenu_HelpButton.TopMenu_HelpButton_C.BndEvt__HelpButtonInner_K2Node_ComponentBoundEvent");

	UTopMenu_HelpButton_C_BndEvt__HelpButtonInner_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TopMenu_HelpButton.TopMenu_HelpButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTopMenu_HelpButton_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TopMenu_HelpButton.TopMenu_HelpButton_C.Construct");

	UTopMenu_HelpButton_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TopMenu_HelpButton.TopMenu_HelpButton_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTopMenu_HelpButton_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TopMenu_HelpButton.TopMenu_HelpButton_C.Destruct");

	UTopMenu_HelpButton_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TopMenu_HelpButton.TopMenu_HelpButton_C.ExecuteUbergraph_TopMenu_HelpButton
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTopMenu_HelpButton_C::ExecuteUbergraph_TopMenu_HelpButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TopMenu_HelpButton.TopMenu_HelpButton_C.ExecuteUbergraph_TopMenu_HelpButton");

	UTopMenu_HelpButton_C_ExecuteUbergraph_TopMenu_HelpButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TopMenu_HelpButton.TopMenu_HelpButton_C.OnButtonHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTopMenu_HelpButton_C::OnButtonHovered__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function TopMenu_HelpButton.TopMenu_HelpButton_C.OnButtonHovered__DelegateSignature");

	UTopMenu_HelpButton_C_OnButtonHovered__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TopMenu_HelpButton.TopMenu_HelpButton_C.OnUpdateVisibility__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visibility                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTopMenu_HelpButton_C::OnUpdateVisibility__DelegateSignature(bool Visibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function TopMenu_HelpButton.TopMenu_HelpButton_C.OnUpdateVisibility__DelegateSignature");

	UTopMenu_HelpButton_C_OnUpdateVisibility__DelegateSignature_Params params;
	params.Visibility = Visibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TopMenu_HelpButton.TopMenu_HelpButton_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UTopMenu_HelpButton_C::OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TopMenu_HelpButton.TopMenu_HelpButton_C.OnClicked__DelegateSignature");

	UTopMenu_HelpButton_C_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
