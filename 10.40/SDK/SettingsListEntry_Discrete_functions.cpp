#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function SettingsListEntry_Discrete.SettingsListEntry_Discrete_C.GetPrimaryGamepadFocusWidget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* USettingsListEntry_Discrete_C::GetPrimaryGamepadFocusWidget()
{
	static auto Func = Class->GetFunction("SettingsListEntry_Discrete_C", "GetPrimaryGamepadFocusWidget");

	Params::USettingsListEntry_Discrete_C_GetPrimaryGamepadFocusWidget_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
	return Parms.ReturnValue;

}

// Function SettingsListEntry_Discrete.SettingsListEntry_Discrete_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void USettingsListEntry_Discrete_C::Construct()
{
	static auto Func = Class->GetFunction("SettingsListEntry_Discrete_C", "Construct");

	Params::USettingsListEntry_Discrete_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function SettingsListEntry_Discrete.SettingsListEntry_Discrete_C.OnMouseEnteredChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsEnterEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USettingsListEntry_Discrete_C::OnMouseEnteredChanged(bool IsEnterEvent)
{
	static auto Func = Class->GetFunction("SettingsListEntry_Discrete_C", "OnMouseEnteredChanged");

	Params::USettingsListEntry_Discrete_C_OnMouseEnteredChanged_Params Parms;
	Parms.IsEnterEvent = IsEnterEvent;

	UObject::ProcessEvent(Func, &Parms);
}

// Function SettingsListEntry_Discrete.SettingsListEntry_Discrete_C.ExecuteUbergraph_SettingsListEntry_Discrete
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_IsEnterEvent                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void USettingsListEntry_Discrete_C::ExecuteUbergraph_SettingsListEntry_Discrete(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, bool K2Node_CustomEvent_IsEnterEvent)
{
	static auto Func = Class->GetFunction("SettingsListEntry_Discrete_C", "ExecuteUbergraph_SettingsListEntry_Discrete");

	Params::USettingsListEntry_Discrete_C_ExecuteUbergraph_SettingsListEntry_Discrete_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.K2Node_CustomEvent_IsEnterEvent = K2Node_CustomEvent_IsEnterEvent;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
