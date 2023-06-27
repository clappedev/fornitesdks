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

// Function MissionAlertIndicator.MissionAlertIndicator_C.Config
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortMissionAlertCategory      inCategory                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMissionAlertIndicator_C::Config(EFortMissionAlertCategory inCategory)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionAlertIndicator.MissionAlertIndicator_C.Config");

	UMissionAlertIndicator_C_Config_Params params;
	params.inCategory = inCategory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionAlertIndicator.MissionAlertIndicator_C.Update
// (Public, BlueprintCallable, BlueprintEvent)

void UMissionAlertIndicator_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionAlertIndicator.MissionAlertIndicator_C.Update");

	UMissionAlertIndicator_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionAlertIndicator.MissionAlertIndicator_C.ToggleTimer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsEnabled                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMissionAlertIndicator_C::ToggleTimer(bool IsEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionAlertIndicator.MissionAlertIndicator_C.ToggleTimer");

	UMissionAlertIndicator_C_ToggleTimer_Params params;
	params.IsEnabled = IsEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
