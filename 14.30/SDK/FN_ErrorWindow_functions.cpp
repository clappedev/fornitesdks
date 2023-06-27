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

// Function ErrorWindow.ErrorWindow_C.OnAnalogValueChanged
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FAnalogInputEvent       InAnalogInputEvent             (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UErrorWindow_C::OnAnalogValueChanged(const struct FGeometry& MyGeometry, const struct FAnalogInputEvent& InAnalogInputEvent)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ErrorWindow.ErrorWindow_C.OnAnalogValueChanged");

	UErrorWindow_C_OnAnalogValueChanged_Params params;
	params.MyGeometry = MyGeometry;
	params.InAnalogInputEvent = InAnalogInputEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ErrorWindow.ErrorWindow_C.Initialize Close Button
// (Public, BlueprintCallable, BlueprintEvent)

void UErrorWindow_C::Initialize_Close_Button()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ErrorWindow.ErrorWindow_C.Initialize Close Button");

	UErrorWindow_C_Initialize_Close_Button_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ErrorWindow.ErrorWindow_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UErrorWindow_C::Construct()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ErrorWindow.ErrorWindow_C.Construct");

	UErrorWindow_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ErrorWindow.ErrorWindow_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UErrorWindow_C::Destruct()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ErrorWindow.ErrorWindow_C.Destruct");

	UErrorWindow_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ErrorWindow.ErrorWindow_C.OnBeginOutro
// (Event, Protected, BlueprintEvent)

void UErrorWindow_C::OnBeginOutro()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ErrorWindow.ErrorWindow_C.OnBeginOutro");

	UErrorWindow_C_OnBeginOutro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ErrorWindow.ErrorWindow_C.OnBeginIntro
// (Event, Protected, BlueprintEvent)

void UErrorWindow_C::OnBeginIntro()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ErrorWindow.ErrorWindow_C.OnBeginIntro");

	UErrorWindow_C_OnBeginIntro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ErrorWindow.ErrorWindow_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)

void UErrorWindow_C::BP_OnActivated()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ErrorWindow.ErrorWindow_C.BP_OnActivated");

	UErrorWindow_C_BP_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ErrorWindow.ErrorWindow_C.HandleLlamaAnimFinish
// (BlueprintCallable, BlueprintEvent)

void UErrorWindow_C::HandleLlamaAnimFinish()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ErrorWindow.ErrorWindow_C.HandleLlamaAnimFinish");

	UErrorWindow_C_HandleLlamaAnimFinish_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ErrorWindow.ErrorWindow_C.LlamaReverse
// (BlueprintCallable, BlueprintEvent)

void UErrorWindow_C::LlamaReverse()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ErrorWindow.ErrorWindow_C.LlamaReverse");

	UErrorWindow_C_LlamaReverse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ErrorWindow.ErrorWindow_C.HandleLlamaCycleFinished
// (BlueprintCallable, BlueprintEvent)

void UErrorWindow_C::HandleLlamaCycleFinished()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ErrorWindow.ErrorWindow_C.HandleLlamaCycleFinished");

	UErrorWindow_C_HandleLlamaCycleFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ErrorWindow.ErrorWindow_C.PlayRandomAmbientLlama
// (BlueprintCallable, BlueprintEvent)

void UErrorWindow_C::PlayRandomAmbientLlama()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ErrorWindow.ErrorWindow_C.PlayRandomAmbientLlama");

	UErrorWindow_C_PlayRandomAmbientLlama_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ErrorWindow.ErrorWindow_C.StartAmbientLlamaSequence
// (BlueprintCallable, BlueprintEvent)

void UErrorWindow_C::StartAmbientLlamaSequence()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ErrorWindow.ErrorWindow_C.StartAmbientLlamaSequence");

	UErrorWindow_C_StartAmbientLlamaSequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ErrorWindow.ErrorWindow_C.ResetLlamas
// (BlueprintCallable, BlueprintEvent)

void UErrorWindow_C::ResetLlamas()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ErrorWindow.ErrorWindow_C.ResetLlamas");

	UErrorWindow_C_ResetLlamas_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ErrorWindow.ErrorWindow_C.OnOverrideCloseButtonText
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   OverrideText                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UErrorWindow_C::OnOverrideCloseButtonText(const struct FText& OverrideText)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ErrorWindow.ErrorWindow_C.OnOverrideCloseButtonText");

	UErrorWindow_C_OnOverrideCloseButtonText_Params params;
	params.OverrideText = OverrideText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ErrorWindow.ErrorWindow_C.ExecuteUbergraph_ErrorWindow
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UErrorWindow_C::ExecuteUbergraph_ErrorWindow(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ErrorWindow.ErrorWindow_C.ExecuteUbergraph_ErrorWindow");

	UErrorWindow_C_ExecuteUbergraph_ErrorWindow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
