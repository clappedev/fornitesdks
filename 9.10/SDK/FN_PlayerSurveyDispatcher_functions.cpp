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

// Function PlayerSurveyDispatcher.PlayerSurveyDispatcher_C.DoStartSurveyIntro
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortPlayerSurveyPanelBase* Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UPlayerSurveyDispatcher_C::DoStartSurveyIntro(class UFortPlayerSurveyPanelBase* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerSurveyDispatcher.PlayerSurveyDispatcher_C.DoStartSurveyIntro");

	UPlayerSurveyDispatcher_C_DoStartSurveyIntro_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerSurveyDispatcher.PlayerSurveyDispatcher_C.DisplaySurveyWidget
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortPlayerSurveyPanelBase* Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UPlayerSurveyDispatcher_C::DisplaySurveyWidget(class UFortPlayerSurveyPanelBase* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerSurveyDispatcher.PlayerSurveyDispatcher_C.DisplaySurveyWidget");

	UPlayerSurveyDispatcher_C_DisplaySurveyWidget_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerSurveyDispatcher.PlayerSurveyDispatcher_C.RemoveSurveyWidget
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortPlayerSurveyPanelBase* Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UPlayerSurveyDispatcher_C::RemoveSurveyWidget(class UFortPlayerSurveyPanelBase* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerSurveyDispatcher.PlayerSurveyDispatcher_C.RemoveSurveyWidget");

	UPlayerSurveyDispatcher_C_RemoveSurveyWidget_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerSurveyDispatcher.PlayerSurveyDispatcher_C.StartSurveyIntro
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortPlayerSurveyPanelBase* Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UPlayerSurveyDispatcher_C::StartSurveyIntro(class UFortPlayerSurveyPanelBase* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerSurveyDispatcher.PlayerSurveyDispatcher_C.StartSurveyIntro");

	UPlayerSurveyDispatcher_C_StartSurveyIntro_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerSurveyDispatcher.PlayerSurveyDispatcher_C.HandleFirstActivation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonActivatablePanel* Panel                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UPlayerSurveyDispatcher_C::HandleFirstActivation(class UCommonActivatablePanel* Panel)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerSurveyDispatcher.PlayerSurveyDispatcher_C.HandleFirstActivation");

	UPlayerSurveyDispatcher_C_HandleFirstActivation_Params params;
	params.Panel = Panel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerSurveyDispatcher.PlayerSurveyDispatcher_C.ExecuteUbergraph_PlayerSurveyDispatcher
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerSurveyDispatcher_C::ExecuteUbergraph_PlayerSurveyDispatcher(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerSurveyDispatcher.PlayerSurveyDispatcher_C.ExecuteUbergraph_PlayerSurveyDispatcher");

	UPlayerSurveyDispatcher_C_ExecuteUbergraph_PlayerSurveyDispatcher_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
