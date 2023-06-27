#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function HUDLayoutToolPropertyWidget.HUDLayoutToolPropertyWidget_C.SetPropertyType
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class ELayoutPropertyType     NewPropertyType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHUDLayoutToolPropertyWidget_C::SetPropertyType(enum class ELayoutPropertyType NewPropertyType)
{
	static auto Func = Class->GetFunction("HUDLayoutToolPropertyWidget_C", "SetPropertyType");

	Params::UHUDLayoutToolPropertyWidget_C_SetPropertyType_Params Parms;
	Parms.NewPropertyType = NewPropertyType;

	UObject::ProcessEvent(Func, &Parms);
}

// Function HUDLayoutToolPropertyWidget.HUDLayoutToolPropertyWidget_C.SetBoolValue
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bNewValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UHUDLayoutToolPropertyWidget_C::SetBoolValue(bool bNewValue)
{
	static auto Func = Class->GetFunction("HUDLayoutToolPropertyWidget_C", "SetBoolValue");

	Params::UHUDLayoutToolPropertyWidget_C_SetBoolValue_Params Parms;
	Parms.bNewValue = bNewValue;

	UObject::ProcessEvent(Func, &Parms);
}

// Function HUDLayoutToolPropertyWidget.HUDLayoutToolPropertyWidget_C.BndEvt__Button_BoolToggle_K2Node_ComponentBoundEvent_139_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UHUDLayoutToolPropertyWidget_C::BndEvt__Button_BoolToggle_K2Node_ComponentBoundEvent_139_OnButtonPressedEvent__DelegateSignature()
{
	static auto Func = Class->GetFunction("HUDLayoutToolPropertyWidget_C", "BndEvt__Button_BoolToggle_K2Node_ComponentBoundEvent_139_OnButtonPressedEvent__DelegateSignature");

	Params::UHUDLayoutToolPropertyWidget_C_BndEvt__Button_BoolToggle_K2Node_ComponentBoundEvent_139_OnButtonPressedEvent__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function HUDLayoutToolPropertyWidget.HUDLayoutToolPropertyWidget_C.ExecuteUbergraph_HUDLayoutToolPropertyWidget
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetCurrentValueAsBool_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ELayoutPropertyType     Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ELayoutPropertyType     K2Node_Event_NewPropertyType                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bNewValue                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_Select1_Default                                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHUDLayoutToolPropertyWidget_C::ExecuteUbergraph_HUDLayoutToolPropertyWidget(int32 EntryPoint, bool CallFunc_GetCurrentValueAsBool_ReturnValue, enum class ELayoutPropertyType Temp_byte_Variable, bool CallFunc_Not_PreBool_ReturnValue, bool Temp_bool_Variable, enum class ELayoutPropertyType K2Node_Event_NewPropertyType, bool K2Node_Event_bNewValue, class UWidget* K2Node_Select_Default, class UWidget* K2Node_Select1_Default)
{
	static auto Func = Class->GetFunction("HUDLayoutToolPropertyWidget_C", "ExecuteUbergraph_HUDLayoutToolPropertyWidget");

	Params::UHUDLayoutToolPropertyWidget_C_ExecuteUbergraph_HUDLayoutToolPropertyWidget_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetCurrentValueAsBool_ReturnValue = CallFunc_GetCurrentValueAsBool_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Event_NewPropertyType = K2Node_Event_NewPropertyType;
	Parms.K2Node_Event_bNewValue = K2Node_Event_bNewValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
