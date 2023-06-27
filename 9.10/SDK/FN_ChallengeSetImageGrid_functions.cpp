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

// Function ChallengeSetImageGrid.ChallengeSetImageGrid_C.ChangeSortFunction
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           PassThrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UChallengeSetImageGrid_C::ChangeSortFunction(bool* PassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeSetImageGrid.ChallengeSetImageGrid_C.ChangeSortFunction");

	UChallengeSetImageGrid_C_ChangeSortFunction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PassThrough != nullptr)
		*PassThrough = params.PassThrough;
}


// Function ChallengeSetImageGrid.ChallengeSetImageGrid_C.GetWidgetForFramingViewedItem
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UChallengeSetImageGrid_C::GetWidgetForFramingViewedItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeSetImageGrid.ChallengeSetImageGrid_C.GetWidgetForFramingViewedItem");

	UChallengeSetImageGrid_C_GetWidgetForFramingViewedItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ChallengeSetImageGrid.ChallengeSetImageGrid_C.SetDynamicColors
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                  DetailsDynamicMaterialTarget   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FFortChallengeSetStyle  FortChallengeSetStyle          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UChallengeSetImageGrid_C::SetDynamicColors(class UImage* DetailsDynamicMaterialTarget, struct FFortChallengeSetStyle FortChallengeSetStyle)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeSetImageGrid.ChallengeSetImageGrid_C.SetDynamicColors");

	UChallengeSetImageGrid_C_SetDynamicColors_Params params;
	params.DetailsDynamicMaterialTarget = DetailsDynamicMaterialTarget;
	params.FortChallengeSetStyle = FortChallengeSetStyle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChallengeSetImageGrid.ChallengeSetImageGrid_C.HandleBack
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           PassThrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UChallengeSetImageGrid_C::HandleBack(bool* PassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeSetImageGrid.ChallengeSetImageGrid_C.HandleBack");

	UChallengeSetImageGrid_C_HandleBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PassThrough != nullptr)
		*PassThrough = params.PassThrough;
}


// Function ChallengeSetImageGrid.ChallengeSetImageGrid_C.OnChallengeSetEstablished
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FFortChallengeSetStyle  DisplayStyle                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           bIsComplete                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChallengeSetImageGrid_C::OnChallengeSetEstablished(struct FFortChallengeSetStyle DisplayStyle, bool bIsComplete)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeSetImageGrid.ChallengeSetImageGrid_C.OnChallengeSetEstablished");

	UChallengeSetImageGrid_C_OnChallengeSetEstablished_Params params;
	params.DisplayStyle = DisplayStyle;
	params.bIsComplete = bIsComplete;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChallengeSetImageGrid.ChallengeSetImageGrid_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UChallengeSetImageGrid_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeSetImageGrid.ChallengeSetImageGrid_C.Construct");

	UChallengeSetImageGrid_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChallengeSetImageGrid.ChallengeSetImageGrid_C.BndEvt__MobileCloseButton_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UChallengeSetImageGrid_C::BndEvt__MobileCloseButton_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeSetImageGrid.ChallengeSetImageGrid_C.BndEvt__MobileCloseButton_K2Node_ComponentBoundEvent");

	UChallengeSetImageGrid_C_BndEvt__MobileCloseButton_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChallengeSetImageGrid.ChallengeSetImageGrid_C.ExecuteUbergraph_ChallengeSetImageGrid
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChallengeSetImageGrid_C::ExecuteUbergraph_ChallengeSetImageGrid(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeSetImageGrid.ChallengeSetImageGrid_C.ExecuteUbergraph_ChallengeSetImageGrid");

	UChallengeSetImageGrid_C_ExecuteUbergraph_ChallengeSetImageGrid_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
