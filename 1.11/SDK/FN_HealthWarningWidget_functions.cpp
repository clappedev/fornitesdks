// Fortnite (1.11) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HealthWarningWidget.HealthWarningWidget_C.SetupShowTimer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UHealthWarningWidget_C::SetupShowTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function HealthWarningWidget.HealthWarningWidget_C.SetupShowTimer");

	UHealthWarningWidget_C_SetupShowTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HealthWarningWidget.HealthWarningWidget_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UHealthWarningWidget_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function HealthWarningWidget.HealthWarningWidget_C.OnActivated");

	UHealthWarningWidget_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HealthWarningWidget.HealthWarningWidget_C.HandleShowTimerComplete
// (BlueprintCallable, BlueprintEvent)

void UHealthWarningWidget_C::HandleShowTimerComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function HealthWarningWidget.HealthWarningWidget_C.HandleShowTimerComplete");

	UHealthWarningWidget_C_HandleShowTimerComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HealthWarningWidget.HealthWarningWidget_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHealthWarningWidget_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HealthWarningWidget.HealthWarningWidget_C.Destruct");

	UHealthWarningWidget_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HealthWarningWidget.HealthWarningWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHealthWarningWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HealthWarningWidget.HealthWarningWidget_C.Construct");

	UHealthWarningWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HealthWarningWidget.HealthWarningWidget_C.AddIconToScreen
// (Event, Public, BlueprintEvent)
// Parameters:
// class UCommonLazyImage**       Image                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHealthWarningWidget_C::AddIconToScreen(class UCommonLazyImage** Image)
{
	static auto fn = UObject::FindObject<UFunction>("Function HealthWarningWidget.HealthWarningWidget_C.AddIconToScreen");

	UHealthWarningWidget_C_AddIconToScreen_Params params;
	params.Image = Image;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HealthWarningWidget.HealthWarningWidget_C.ExecuteUbergraph_HealthWarningWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHealthWarningWidget_C::ExecuteUbergraph_HealthWarningWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HealthWarningWidget.HealthWarningWidget_C.ExecuteUbergraph_HealthWarningWidget");

	UHealthWarningWidget_C_ExecuteUbergraph_HealthWarningWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HealthWarningWidget.HealthWarningWidget_C.HealthWarningCompleted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UHealthWarningWidget_C::HealthWarningCompleted__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HealthWarningWidget.HealthWarningWidget_C.HealthWarningCompleted__DelegateSignature");

	UHealthWarningWidget_C_HealthWarningCompleted__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
