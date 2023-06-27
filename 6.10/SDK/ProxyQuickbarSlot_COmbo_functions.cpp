#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function ProxyQuickbarSlot_COmbo.ProxyQuickbarSlot_Combo_C.BP_GetPropertyValue
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// int32                              PropertyIndex                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_ByteToFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UProxyQuickbarSlot_Combo_C::BP_GetPropertyValue(int32 PropertyIndex, bool K2Node_SwitchInteger_CmpSuccess, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_ByteToFloat_ReturnValue)
{
	static auto Func = Class->GetFunction("ProxyQuickbarSlot_Combo_C", "BP_GetPropertyValue");

	Params::UProxyQuickbarSlot_Combo_C_BP_GetPropertyValue_Params Parms;
	Parms.PropertyIndex = PropertyIndex;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Conv_ByteToFloat_ReturnValue = CallFunc_Conv_ByteToFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
	return Parms.ReturnValue;

}

// Function ProxyQuickbarSlot_COmbo.ProxyQuickbarSlot_Combo_C.SetSlotIndex
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewIndex                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              ()
// class UWidget*                     K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     K2Node_Select1_Default                                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProxyQuickbarSlot_Combo_C::SetSlotIndex(int32 NewIndex, int32 Temp_int_Variable, bool Temp_bool_Variable, class FText CallFunc_Conv_IntToText_ReturnValue, class UWidget* K2Node_Select_Default, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UWidget* K2Node_Select1_Default)
{
	static auto Func = Class->GetFunction("ProxyQuickbarSlot_Combo_C", "SetSlotIndex");

	Params::UProxyQuickbarSlot_Combo_C_SetSlotIndex_Params Parms;
	Parms.NewIndex = NewIndex;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;

	UObject::ProcessEvent(Func, &Parms);
}

// Function ProxyQuickbarSlot_COmbo.ProxyQuickbarSlot_Combo_C.SetSlotType
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// uint8                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EComboSlotType          Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EComboSlotType          Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select1_Default                                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     ()

void UProxyQuickbarSlot_Combo_C::SetSlotType(uint8 Value, enum class EComboSlotType Temp_byte_Variable, uint8 CallFunc_GetValidValue_ReturnValue, enum class EComboSlotType Temp_byte_Variable1, class UWidget* K2Node_Select_Default, const struct FLinearColor& K2Node_Select1_Default, const struct FSlateColor& K2Node_MakeStruct_SlateColor)
{
	static auto Func = Class->GetFunction("ProxyQuickbarSlot_Combo_C", "SetSlotType");

	Params::UProxyQuickbarSlot_Combo_C_SetSlotType_Params Parms;
	Parms.Value = Value;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;

	UObject::ProcessEvent(Func, &Parms);
}

// Function ProxyQuickbarSlot_COmbo.ProxyQuickbarSlot_Combo_C.BP_GetMultiOptionLabels
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// int32                              PropertyIndex                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FText>                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm)
// TArray<class FText>                K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

TArray<class FText> UProxyQuickbarSlot_Combo_C::BP_GetMultiOptionLabels(int32 PropertyIndex, TArray<class FText>& K2Node_MakeArray_Array, bool K2Node_SwitchInteger_CmpSuccess)
{
	static auto Func = Class->GetFunction("ProxyQuickbarSlot_Combo_C", "BP_GetMultiOptionLabels");

	Params::UProxyQuickbarSlot_Combo_C_BP_GetMultiOptionLabels_Params Parms;
	Parms.PropertyIndex = PropertyIndex;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);
	return Parms.ReturnValue;

}

// Function ProxyQuickbarSlot_COmbo.ProxyQuickbarSlot_Combo_C.BP_GetPropertyName
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// int32                              PropertyIndex                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               ()
// class FText                        Temp_text_Variable1                                              ()
// class FText                        K2Node_Select_Default                                            ()

class FText UProxyQuickbarSlot_Combo_C::BP_GetPropertyName(int32 PropertyIndex, int32 Temp_int_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable1, class FText K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("ProxyQuickbarSlot_Combo_C", "BP_GetPropertyName");

	Params::UProxyQuickbarSlot_Combo_C_BP_GetPropertyName_Params Parms;
	Parms.PropertyIndex = PropertyIndex;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable1 = Temp_text_Variable1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);
	return Parms.ReturnValue;

}

// Function ProxyQuickbarSlot_COmbo.ProxyQuickbarSlot_Combo_C.BP_GetNumOfProperties
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UProxyQuickbarSlot_Combo_C::BP_GetNumOfProperties()
{
	static auto Func = Class->GetFunction("ProxyQuickbarSlot_Combo_C", "BP_GetNumOfProperties");

	Params::UProxyQuickbarSlot_Combo_C_BP_GetNumOfProperties_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
	return Parms.ReturnValue;

}

// Function ProxyQuickbarSlot_COmbo.ProxyQuickbarSlot_Combo_C.BP_GetPropertyRange
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// int32                              PropertyIndex                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              OutMin                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              OutMax                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UProxyQuickbarSlot_Combo_C::BP_GetPropertyRange(int32 PropertyIndex, float* OutMin, float* OutMax, bool K2Node_SwitchInteger_CmpSuccess)
{
	static auto Func = Class->GetFunction("ProxyQuickbarSlot_Combo_C", "BP_GetPropertyRange");

	Params::UProxyQuickbarSlot_Combo_C_BP_GetPropertyRange_Params Parms;
	Parms.PropertyIndex = PropertyIndex;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);
	if (OutMin != nullptr)
		*OutMin = Parms.OutMin;

	if (OutMax != nullptr)
		*OutMax = Parms.OutMax;

}

// Function ProxyQuickbarSlot_COmbo.ProxyQuickbarSlot_Combo_C.BP_GetPropertyType
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// int32                              PropertyIndex                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ELayoutPropertyType     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ELayoutPropertyType     Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ELayoutPropertyType     Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ELayoutPropertyType     K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class ELayoutPropertyType UProxyQuickbarSlot_Combo_C::BP_GetPropertyType(int32 PropertyIndex, int32 Temp_int_Variable, enum class ELayoutPropertyType Temp_byte_Variable, enum class ELayoutPropertyType Temp_byte_Variable1, enum class ELayoutPropertyType K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("ProxyQuickbarSlot_Combo_C", "BP_GetPropertyType");

	Params::UProxyQuickbarSlot_Combo_C_BP_GetPropertyType_Params Parms;
	Parms.PropertyIndex = PropertyIndex;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);
	return Parms.ReturnValue;

}

// Function ProxyQuickbarSlot_COmbo.ProxyQuickbarSlot_Combo_C.BP_SetPropertyValue
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              PropertyIndex                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProxyQuickbarSlot_Combo_C::BP_SetPropertyValue(int32 PropertyIndex, float NewValue)
{
	static auto Func = Class->GetFunction("ProxyQuickbarSlot_Combo_C", "BP_SetPropertyValue");

	Params::UProxyQuickbarSlot_Combo_C_BP_SetPropertyValue_Params Parms;
	Parms.PropertyIndex = PropertyIndex;
	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);
}

// Function ProxyQuickbarSlot_COmbo.ProxyQuickbarSlot_Combo_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UProxyQuickbarSlot_Combo_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("ProxyQuickbarSlot_Combo_C", "PreConstruct");

	Params::UProxyQuickbarSlot_Combo_C_PreConstruct_Params Parms;
	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

// Function ProxyQuickbarSlot_COmbo.ProxyQuickbarSlot_Combo_C.ExecuteUbergraph_ProxyQuickbarSlot_Combo
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_PropertyIndex                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_NewValue                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Round_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Round_ReturnValue1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UProxyQuickbarSlot_Combo_C::ExecuteUbergraph_ProxyQuickbarSlot_Combo(int32 EntryPoint, int32 K2Node_Event_PropertyIndex, float K2Node_Event_NewValue, bool K2Node_Event_IsDesignTime, int32 CallFunc_Round_ReturnValue, int32 CallFunc_Round_ReturnValue1, uint8 CallFunc_Conv_IntToByte_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess)
{
	static auto Func = Class->GetFunction("ProxyQuickbarSlot_Combo_C", "ExecuteUbergraph_ProxyQuickbarSlot_Combo");

	Params::UProxyQuickbarSlot_Combo_C_ExecuteUbergraph_ProxyQuickbarSlot_Combo_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_PropertyIndex = K2Node_Event_PropertyIndex;
	Parms.K2Node_Event_NewValue = K2Node_Event_NewValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_Round_ReturnValue = CallFunc_Round_ReturnValue;
	Parms.CallFunc_Round_ReturnValue1 = CallFunc_Round_ReturnValue1;
	Parms.CallFunc_Conv_IntToByte_ReturnValue = CallFunc_Conv_IntToByte_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
