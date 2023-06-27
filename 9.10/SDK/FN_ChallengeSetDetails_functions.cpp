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

// Function ChallengeSetDetails.ChallengeSetDetails_C.GetWidgetForFramingViewedItem
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UChallengeSetDetails_C::GetWidgetForFramingViewedItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeSetDetails.ChallengeSetDetails_C.GetWidgetForFramingViewedItem");

	UChallengeSetDetails_C_GetWidgetForFramingViewedItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ChallengeSetDetails.ChallengeSetDetails_C.SetDynamicColors
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                  DetailsDynamicMaterialTarget   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FFortChallengeSetStyle  FortChallengeSetStyle          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UChallengeSetDetails_C::SetDynamicColors(class UImage* DetailsDynamicMaterialTarget, struct FFortChallengeSetStyle FortChallengeSetStyle)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeSetDetails.ChallengeSetDetails_C.SetDynamicColors");

	UChallengeSetDetails_C_SetDynamicColors_Params params;
	params.DetailsDynamicMaterialTarget = DetailsDynamicMaterialTarget;
	params.FortChallengeSetStyle = FortChallengeSetStyle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChallengeSetDetails.ChallengeSetDetails_C.HandleBack
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           PassThrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UChallengeSetDetails_C::HandleBack(bool* PassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeSetDetails.ChallengeSetDetails_C.HandleBack");

	UChallengeSetDetails_C_HandleBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PassThrough != nullptr)
		*PassThrough = params.PassThrough;
}


// Function ChallengeSetDetails.ChallengeSetDetails_C.OnChallengeSetEstablished
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FFortChallengeSetStyle  DisplayStyle                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           bIsComplete                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChallengeSetDetails_C::OnChallengeSetEstablished(struct FFortChallengeSetStyle DisplayStyle, bool bIsComplete)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeSetDetails.ChallengeSetDetails_C.OnChallengeSetEstablished");

	UChallengeSetDetails_C_OnChallengeSetEstablished_Params params;
	params.DisplayStyle = DisplayStyle;
	params.bIsComplete = bIsComplete;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChallengeSetDetails.ChallengeSetDetails_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UChallengeSetDetails_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeSetDetails.ChallengeSetDetails_C.Construct");

	UChallengeSetDetails_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChallengeSetDetails.ChallengeSetDetails_C.BndEvt__MobileCloseButton_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UChallengeSetDetails_C::BndEvt__MobileCloseButton_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeSetDetails.ChallengeSetDetails_C.BndEvt__MobileCloseButton_K2Node_ComponentBoundEvent");

	UChallengeSetDetails_C_BndEvt__MobileCloseButton_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChallengeSetDetails.ChallengeSetDetails_C.ExecuteUbergraph_ChallengeSetDetails
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChallengeSetDetails_C::ExecuteUbergraph_ChallengeSetDetails(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeSetDetails.ChallengeSetDetails_C.ExecuteUbergraph_ChallengeSetDetails");

	UChallengeSetDetails_C_ExecuteUbergraph_ChallengeSetDetails_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
