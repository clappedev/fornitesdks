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

// Function ToastWidgetDonut.ToastWidgetDonut_C.SetupAnimBindings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Unbind                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UToastWidgetDonut_C::SetupAnimBindings(bool Unbind)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ToastWidgetDonut.ToastWidgetDonut_C.SetupAnimBindings");

	UToastWidgetDonut_C_SetupAnimBindings_Params params;
	params.Unbind = Unbind;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ToastWidgetDonut.ToastWidgetDonut_C.ApplyAdditionalStyling
// (Public, BlueprintCallable, BlueprintEvent)

void UToastWidgetDonut_C::ApplyAdditionalStyling()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ToastWidgetDonut.ToastWidgetDonut_C.ApplyAdditionalStyling");

	UToastWidgetDonut_C_ApplyAdditionalStyling_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ToastWidgetDonut.ToastWidgetDonut_C.SetImage
// (Public, BlueprintCallable, BlueprintEvent)

void UToastWidgetDonut_C::SetImage()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ToastWidgetDonut.ToastWidgetDonut_C.SetImage");

	UToastWidgetDonut_C_SetImage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ToastWidgetDonut.ToastWidgetDonut_C.GetOpenButtonVisibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UToastWidgetDonut_C::GetOpenButtonVisibility()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ToastWidgetDonut.ToastWidgetDonut_C.GetOpenButtonVisibility");

	UToastWidgetDonut_C_GetOpenButtonVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ToastWidgetDonut.ToastWidgetDonut_C.StartIntro
// (Public, BlueprintCallable, BlueprintEvent)

void UToastWidgetDonut_C::StartIntro()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ToastWidgetDonut.ToastWidgetDonut_C.StartIntro");

	UToastWidgetDonut_C_StartIntro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ToastWidgetDonut.ToastWidgetDonut_C.ShowText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class UCommonTextBlock*        TextBlock                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UToastWidgetDonut_C::ShowText(const struct FText& Text, class UCommonTextBlock* TextBlock)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ToastWidgetDonut.ToastWidgetDonut_C.ShowText");

	UToastWidgetDonut_C_ShowText_Params params;
	params.Text = Text;
	params.TextBlock = TextBlock;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ToastWidgetDonut.ToastWidgetDonut_C.SetToast
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUINotification*     Toast                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UToastWidgetDonut_C::SetToast(class UFortUINotification* Toast)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ToastWidgetDonut.ToastWidgetDonut_C.SetToast");

	UToastWidgetDonut_C_SetToast_Params params;
	params.Toast = Toast;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ToastWidgetDonut.ToastWidgetDonut_C.PlayOutro
// (BlueprintCallable, BlueprintEvent)

void UToastWidgetDonut_C::PlayOutro()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ToastWidgetDonut.ToastWidgetDonut_C.PlayOutro");

	UToastWidgetDonut_C_PlayOutro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ToastWidgetDonut.ToastWidgetDonut_C.BndEvt__OpenButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UToastWidgetDonut_C::BndEvt__OpenButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ToastWidgetDonut.ToastWidgetDonut_C.BndEvt__OpenButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature");

	UToastWidgetDonut_C_BndEvt__OpenButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ToastWidgetDonut.ToastWidgetDonut_C.HandleOutroFinished
// (BlueprintCallable, BlueprintEvent)

void UToastWidgetDonut_C::HandleOutroFinished()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ToastWidgetDonut.ToastWidgetDonut_C.HandleOutroFinished");

	UToastWidgetDonut_C_HandleOutroFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ToastWidgetDonut.ToastWidgetDonut_C.HandleIntroFinished
// (BlueprintCallable, BlueprintEvent)

void UToastWidgetDonut_C::HandleIntroFinished()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ToastWidgetDonut.ToastWidgetDonut_C.HandleIntroFinished");

	UToastWidgetDonut_C_HandleIntroFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ToastWidgetDonut.ToastWidgetDonut_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UToastWidgetDonut_C::Construct()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ToastWidgetDonut.ToastWidgetDonut_C.Construct");

	UToastWidgetDonut_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ToastWidgetDonut.ToastWidgetDonut_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UToastWidgetDonut_C::Destruct()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ToastWidgetDonut.ToastWidgetDonut_C.Destruct");

	UToastWidgetDonut_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ToastWidgetDonut.ToastWidgetDonut_C.OnSetToast
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortUINotification*     ToastNotification              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UToastWidgetDonut_C::OnSetToast(class UFortUINotification* ToastNotification)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ToastWidgetDonut.ToastWidgetDonut_C.OnSetToast");

	UToastWidgetDonut_C_OnSetToast_Params params;
	params.ToastNotification = ToastNotification;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ToastWidgetDonut.ToastWidgetDonut_C.OnPlayOpenAnimation
// (Event, Protected, BlueprintEvent)

void UToastWidgetDonut_C::OnPlayOpenAnimation()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ToastWidgetDonut.ToastWidgetDonut_C.OnPlayOpenAnimation");

	UToastWidgetDonut_C_OnPlayOpenAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ToastWidgetDonut.ToastWidgetDonut_C.ExecuteUbergraph_ToastWidgetDonut
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UToastWidgetDonut_C::ExecuteUbergraph_ToastWidgetDonut(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ToastWidgetDonut.ToastWidgetDonut_C.ExecuteUbergraph_ToastWidgetDonut");

	UToastWidgetDonut_C_ExecuteUbergraph_ToastWidgetDonut_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ToastWidgetDonut.ToastWidgetDonut_C.OnFinishedToast__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UToastWidgetDonut_C::OnFinishedToast__DelegateSignature()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ToastWidgetDonut.ToastWidgetDonut_C.OnFinishedToast__DelegateSignature");

	UToastWidgetDonut_C_OnFinishedToast__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
