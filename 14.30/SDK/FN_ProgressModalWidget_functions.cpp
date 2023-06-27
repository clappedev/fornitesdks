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

// Function ProgressModalWidget.ProgressModalWidget_C.OnAnalogValueChanged
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FAnalogInputEvent       InAnalogInputEvent             (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UProgressModalWidget_C::OnAnalogValueChanged(const struct FGeometry& MyGeometry, const struct FAnalogInputEvent& InAnalogInputEvent)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ProgressModalWidget.ProgressModalWidget_C.OnAnalogValueChanged");

	UProgressModalWidget_C_OnAnalogValueChanged_Params params;
	params.MyGeometry = MyGeometry;
	params.InAnalogInputEvent = InAnalogInputEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ProgressModalWidget.ProgressModalWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UProgressModalWidget_C::Construct()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ProgressModalWidget.ProgressModalWidget_C.Construct");

	UProgressModalWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProgressModalWidget.ProgressModalWidget_C.HandleIntroEnded
// (BlueprintCallable, BlueprintEvent)

void UProgressModalWidget_C::HandleIntroEnded()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ProgressModalWidget.ProgressModalWidget_C.HandleIntroEnded");

	UProgressModalWidget_C_HandleIntroEnded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProgressModalWidget.ProgressModalWidget_C.HandleOutroEnded
// (BlueprintCallable, BlueprintEvent)

void UProgressModalWidget_C::HandleOutroEnded()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ProgressModalWidget.ProgressModalWidget_C.HandleOutroEnded");

	UProgressModalWidget_C_HandleOutroEnded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProgressModalWidget.ProgressModalWidget_C.OnBeginIntro
// (Event, Protected, BlueprintEvent)

void UProgressModalWidget_C::OnBeginIntro()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ProgressModalWidget.ProgressModalWidget_C.OnBeginIntro");

	UProgressModalWidget_C_OnBeginIntro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProgressModalWidget.ProgressModalWidget_C.OnBeginOutro
// (Event, Protected, BlueprintEvent)

void UProgressModalWidget_C::OnBeginOutro()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ProgressModalWidget.ProgressModalWidget_C.OnBeginOutro");

	UProgressModalWidget_C_OnBeginOutro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProgressModalWidget.ProgressModalWidget_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UProgressModalWidget_C::Destruct()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ProgressModalWidget.ProgressModalWidget_C.Destruct");

	UProgressModalWidget_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProgressModalWidget.ProgressModalWidget_C.ExecuteUbergraph_ProgressModalWidget
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UProgressModalWidget_C::ExecuteUbergraph_ProgressModalWidget(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ProgressModalWidget.ProgressModalWidget_C.ExecuteUbergraph_ProgressModalWidget");

	UProgressModalWidget_C_ExecuteUbergraph_ProgressModalWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
