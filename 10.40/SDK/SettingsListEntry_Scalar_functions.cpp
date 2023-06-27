#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function SettingsListEntry_Scalar.SettingsListEntry_Scalar_C.GetPrimaryGamepadFocusWidget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* USettingsListEntry_Scalar_C::GetPrimaryGamepadFocusWidget()
{
	static auto Func = Class->GetFunction("SettingsListEntry_Scalar_C", "GetPrimaryGamepadFocusWidget");

	Params::USettingsListEntry_Scalar_C_GetPrimaryGamepadFocusWidget_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
	return Parms.ReturnValue;

}

// Function SettingsListEntry_Scalar.SettingsListEntry_Scalar_C.OnValueChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USettingsListEntry_Scalar_C::OnValueChanged(float Value)
{
	static auto Func = Class->GetFunction("SettingsListEntry_Scalar_C", "OnValueChanged");

	Params::USettingsListEntry_Scalar_C_OnValueChanged_Params Parms;
	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}

// Function SettingsListEntry_Scalar.SettingsListEntry_Scalar_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void USettingsListEntry_Scalar_C::Construct()
{
	static auto Func = Class->GetFunction("SettingsListEntry_Scalar_C", "Construct");

	Params::USettingsListEntry_Scalar_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function SettingsListEntry_Scalar.SettingsListEntry_Scalar_C.OnMouseEnteredChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsEnterEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USettingsListEntry_Scalar_C::OnMouseEnteredChanged(bool IsEnterEvent)
{
	static auto Func = Class->GetFunction("SettingsListEntry_Scalar_C", "OnMouseEnteredChanged");

	Params::USettingsListEntry_Scalar_C_OnMouseEnteredChanged_Params Parms;
	Parms.IsEnterEvent = IsEnterEvent;

	UObject::ProcessEvent(Func, &Parms);
}

// Function SettingsListEntry_Scalar.SettingsListEntry_Scalar_C.OnDefaultValueChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              DefaultValue                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USettingsListEntry_Scalar_C::OnDefaultValueChanged(float DefaultValue)
{
	static auto Func = Class->GetFunction("SettingsListEntry_Scalar_C", "OnDefaultValueChanged");

	Params::USettingsListEntry_Scalar_C_OnDefaultValueChanged_Params Parms;
	Parms.DefaultValue = DefaultValue;

	UObject::ProcessEvent(Func, &Parms);
}

// Function SettingsListEntry_Scalar.SettingsListEntry_Scalar_C.ExecuteUbergraph_SettingsListEntry_Scalar
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DefaultValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Value                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               K2Node_CustomEvent_IsEnterEvent                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USettingsListEntry_Scalar_C::ExecuteUbergraph_SettingsListEntry_Scalar(int32 EntryPoint, float K2Node_Event_DefaultValue, float K2Node_Event_Value, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_CustomEvent_IsEnterEvent, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue)
{
	static auto Func = Class->GetFunction("SettingsListEntry_Scalar_C", "ExecuteUbergraph_SettingsListEntry_Scalar");

	Params::USettingsListEntry_Scalar_C_ExecuteUbergraph_SettingsListEntry_Scalar_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DefaultValue = K2Node_Event_DefaultValue;
	Parms.K2Node_Event_Value = K2Node_Event_Value;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_IsEnterEvent = K2Node_CustomEvent_IsEnterEvent;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
