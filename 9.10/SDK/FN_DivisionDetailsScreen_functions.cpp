// Fortnite (9.1) SDK
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

// Function DivisionDetailsScreen.DivisionDetailsScreen_C.RightShoulderButton
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Handled                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UDivisionDetailsScreen_C::RightShoulderButton(bool* Handled)
{
	static auto fn = UObject::FindObject<UFunction>("Function DivisionDetailsScreen.DivisionDetailsScreen_C.RightShoulderButton");

	UDivisionDetailsScreen_C_RightShoulderButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Handled != nullptr)
		*Handled = params.Handled;
}


// Function DivisionDetailsScreen.DivisionDetailsScreen_C.LeftShoulderButton
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Handled                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UDivisionDetailsScreen_C::LeftShoulderButton(bool* Handled)
{
	static auto fn = UObject::FindObject<UFunction>("Function DivisionDetailsScreen.DivisionDetailsScreen_C.LeftShoulderButton");

	UDivisionDetailsScreen_C_LeftShoulderButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Handled != nullptr)
		*Handled = params.Handled;
}


// Function DivisionDetailsScreen.DivisionDetailsScreen_C.EmptyFunction
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Handled                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UDivisionDetailsScreen_C::EmptyFunction(bool* Handled)
{
	static auto fn = UObject::FindObject<UFunction>("Function DivisionDetailsScreen.DivisionDetailsScreen_C.EmptyFunction");

	UDivisionDetailsScreen_C_EmptyFunction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Handled != nullptr)
		*Handled = params.Handled;
}


// Function DivisionDetailsScreen.DivisionDetailsScreen_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UDivisionDetailsScreen_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function DivisionDetailsScreen.DivisionDetailsScreen_C.OnActivated");

	UDivisionDetailsScreen_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DivisionDetailsScreen.DivisionDetailsScreen_C.BndEvt__NextButton_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UDivisionDetailsScreen_C::BndEvt__NextButton_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function DivisionDetailsScreen.DivisionDetailsScreen_C.BndEvt__NextButton_K2Node_ComponentBoundEvent");

	UDivisionDetailsScreen_C_BndEvt__NextButton_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DivisionDetailsScreen.DivisionDetailsScreen_C.BndEvt__BackButton_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UDivisionDetailsScreen_C::BndEvt__BackButton_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function DivisionDetailsScreen.DivisionDetailsScreen_C.BndEvt__BackButton_K2Node_ComponentBoundEvent");

	UDivisionDetailsScreen_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DivisionDetailsScreen.DivisionDetailsScreen_C.ExecuteUbergraph_DivisionDetailsScreen
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDivisionDetailsScreen_C::ExecuteUbergraph_DivisionDetailsScreen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DivisionDetailsScreen.DivisionDetailsScreen_C.ExecuteUbergraph_DivisionDetailsScreen");

	UDivisionDetailsScreen_C_ExecuteUbergraph_DivisionDetailsScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
