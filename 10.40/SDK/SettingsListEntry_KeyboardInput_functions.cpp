#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function SettingsListEntry_KeyboardInput.SettingsListEntry_KeyboardInput_C.OnUpdateKeyText
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        PrimaryKeyText                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FText                        SecondaryKeyText                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void USettingsListEntry_KeyboardInput_C::OnUpdateKeyText(class FText& PrimaryKeyText, class FText& SecondaryKeyText)
{
	static auto Func = Class->GetFunction("SettingsListEntry_KeyboardInput_C", "OnUpdateKeyText");

	Params::USettingsListEntry_KeyboardInput_C_OnUpdateKeyText_Params Parms;
	Parms.PrimaryKeyText = PrimaryKeyText;
	Parms.SecondaryKeyText = SecondaryKeyText;

	UObject::ProcessEvent(Func, &Parms);
}

// Function SettingsListEntry_KeyboardInput.SettingsListEntry_KeyboardInput_C.ExecuteUbergraph_SettingsListEntry_KeyboardInput
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScrollingTextButton_C*      K2Node_DynamicCast_AsScrolling_Text_Button                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Event_PrimaryKeyText                                      (ConstParm)
// class FText                        K2Node_Event_SecondaryKeyText                                    (ConstParm)
// class UScrollingTextButton_C*      K2Node_DynamicCast_AsScrolling_Text_Button_1                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void USettingsListEntry_KeyboardInput_C::ExecuteUbergraph_SettingsListEntry_KeyboardInput(int32 EntryPoint, class UScrollingTextButton_C* K2Node_DynamicCast_AsScrolling_Text_Button, bool K2Node_DynamicCast_bSuccess, class FText K2Node_Event_PrimaryKeyText, class FText K2Node_Event_SecondaryKeyText, class UScrollingTextButton_C* K2Node_DynamicCast_AsScrolling_Text_Button_1, bool K2Node_DynamicCast_bSuccess_1)
{
	static auto Func = Class->GetFunction("SettingsListEntry_KeyboardInput_C", "ExecuteUbergraph_SettingsListEntry_KeyboardInput");

	Params::USettingsListEntry_KeyboardInput_C_ExecuteUbergraph_SettingsListEntry_KeyboardInput_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_DynamicCast_AsScrolling_Text_Button = K2Node_DynamicCast_AsScrolling_Text_Button;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Event_PrimaryKeyText = K2Node_Event_PrimaryKeyText;
	Parms.K2Node_Event_SecondaryKeyText = K2Node_Event_SecondaryKeyText;
	Parms.K2Node_DynamicCast_AsScrolling_Text_Button_1 = K2Node_DynamicCast_AsScrolling_Text_Button_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
