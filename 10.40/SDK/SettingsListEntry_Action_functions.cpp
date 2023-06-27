#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function SettingsListEntry_Action.SettingsListEntry_Action_C.GetPrimaryGamepadFocusWidget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* USettingsListEntry_Action_C::GetPrimaryGamepadFocusWidget()
{
	static auto Func = Class->GetFunction("SettingsListEntry_Action_C", "GetPrimaryGamepadFocusWidget");

	Params::USettingsListEntry_Action_C_GetPrimaryGamepadFocusWidget_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
	return Parms.ReturnValue;

}

// Function SettingsListEntry_Action.SettingsListEntry_Action_C.OnSettingAssigned
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        ActionText                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void USettingsListEntry_Action_C::OnSettingAssigned(class FText& ActionText)
{
	static auto Func = Class->GetFunction("SettingsListEntry_Action_C", "OnSettingAssigned");

	Params::USettingsListEntry_Action_C_OnSettingAssigned_Params Parms;
	Parms.ActionText = ActionText;

	UObject::ProcessEvent(Func, &Parms);
}

// Function SettingsListEntry_Action.SettingsListEntry_Action_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void USettingsListEntry_Action_C::Construct()
{
	static auto Func = Class->GetFunction("SettingsListEntry_Action_C", "Construct");

	Params::USettingsListEntry_Action_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function SettingsListEntry_Action.SettingsListEntry_Action_C.OnMouseEnteredChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsEnterEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USettingsListEntry_Action_C::OnMouseEnteredChanged(bool IsEnterEvent)
{
	static auto Func = Class->GetFunction("SettingsListEntry_Action_C", "OnMouseEnteredChanged");

	Params::USettingsListEntry_Action_C_OnMouseEnteredChanged_Params Parms;
	Parms.IsEnterEvent = IsEnterEvent;

	UObject::ProcessEvent(Func, &Parms);
}

// Function SettingsListEntry_Action.SettingsListEntry_Action_C.ExecuteUbergraph_SettingsListEntry_Action
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Event_ActionText                                          (ConstParm)
// class UIconTextButton_C*           K2Node_DynamicCast_AsIcon_Text_Button                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               K2Node_CustomEvent_IsEnterEvent                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void USettingsListEntry_Action_C::ExecuteUbergraph_SettingsListEntry_Action(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class FText K2Node_Event_ActionText, class UIconTextButton_C* K2Node_DynamicCast_AsIcon_Text_Button, bool K2Node_DynamicCast_bSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_CustomEvent_IsEnterEvent)
{
	static auto Func = Class->GetFunction("SettingsListEntry_Action_C", "ExecuteUbergraph_SettingsListEntry_Action");

	Params::USettingsListEntry_Action_C_ExecuteUbergraph_SettingsListEntry_Action_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.K2Node_Event_ActionText = K2Node_Event_ActionText;
	Parms.K2Node_DynamicCast_AsIcon_Text_Button = K2Node_DynamicCast_AsIcon_Text_Button;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_IsEnterEvent = K2Node_CustomEvent_IsEnterEvent;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
