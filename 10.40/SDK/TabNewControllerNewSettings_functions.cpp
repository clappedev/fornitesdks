#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function TabNewControllerNewSettings.TabNewControllerNewSettings_C.SettingValueChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabNewControllerNewSettings_C::SettingValueChanged(float Value)
{
	static auto Func = Class->GetFunction("TabNewControllerNewSettings_C", "SettingValueChanged");

	Params::UTabNewControllerNewSettings_C_SettingValueChanged_Params Parms;
	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}

// Function TabNewControllerNewSettings.TabNewControllerNewSettings_C.CenterOnTab
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTabNewControllerNewSettings_C::CenterOnTab()
{
	static auto Func = Class->GetFunction("TabNewControllerNewSettings_C", "CenterOnTab");

	Params::UTabNewControllerNewSettings_C_CenterOnTab_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function TabNewControllerNewSettings.TabNewControllerNewSettings_C.ExecuteUbergraph_TabNewControllerNewSettings
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Value                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabNewControllerNewSettings_C::ExecuteUbergraph_TabNewControllerNewSettings(int32 EntryPoint, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, float K2Node_CustomEvent_Value)
{
	static auto Func = Class->GetFunction("TabNewControllerNewSettings_C", "ExecuteUbergraph_TabNewControllerNewSettings");

	Params::UTabNewControllerNewSettings_C_ExecuteUbergraph_TabNewControllerNewSettings_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;
	Parms.K2Node_CustomEvent_Value = K2Node_CustomEvent_Value;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
