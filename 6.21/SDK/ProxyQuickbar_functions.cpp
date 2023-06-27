#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function ProxyQuickbar.ProxyQuickbar_C.BP_GetNumOfProperties
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UProxyQuickbar_C::BP_GetNumOfProperties()
{
	static auto Func = Class->GetFunction("ProxyQuickbar_C", "BP_GetNumOfProperties");

	Params::UProxyQuickbar_C_BP_GetNumOfProperties_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
	return Parms.ReturnValue;

}

// Function ProxyQuickbar.ProxyQuickbar_C.BP_GetPropertyType
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// int32                              PropertyIndex                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ELayoutPropertyType     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ELayoutPropertyType     Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ELayoutPropertyType     Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ELayoutPropertyType     K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class ELayoutPropertyType UProxyQuickbar_C::BP_GetPropertyType(int32 PropertyIndex, int32 Temp_int_Variable, enum class ELayoutPropertyType Temp_byte_Variable, enum class ELayoutPropertyType Temp_byte_Variable1, enum class ELayoutPropertyType K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("ProxyQuickbar_C", "BP_GetPropertyType");

	Params::UProxyQuickbar_C_BP_GetPropertyType_Params Parms;
	Parms.PropertyIndex = PropertyIndex;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);
	return Parms.ReturnValue;

}

// Function ProxyQuickbar.ProxyQuickbar_C.BP_GetPropertyName
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// int32                              PropertyIndex                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               ()
// class FText                        Temp_text_Variable1                                              ()
// class FText                        K2Node_Select_Default                                            ()

class FText UProxyQuickbar_C::BP_GetPropertyName(int32 PropertyIndex, int32 Temp_int_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable1, class FText K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("ProxyQuickbar_C", "BP_GetPropertyName");

	Params::UProxyQuickbar_C_BP_GetPropertyName_Params Parms;
	Parms.PropertyIndex = PropertyIndex;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable1 = Temp_text_Variable1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);
	return Parms.ReturnValue;

}

// Function ProxyQuickbar.ProxyQuickbar_C.BP_GetPropertyValue
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// int32                              PropertyIndex                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

float UProxyQuickbar_C::BP_GetPropertyValue(int32 PropertyIndex, bool K2Node_SwitchInteger_CmpSuccess)
{
	static auto Func = Class->GetFunction("ProxyQuickbar_C", "BP_GetPropertyValue");

	Params::UProxyQuickbar_C_BP_GetPropertyValue_Params Parms;
	Parms.PropertyIndex = PropertyIndex;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);
	return Parms.ReturnValue;

}

// Function ProxyQuickbar.ProxyQuickbar_C.BP_GetPropertyRange
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// int32                              PropertyIndex                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              OutMin                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              OutMax                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UProxyQuickbar_C::BP_GetPropertyRange(int32 PropertyIndex, float* OutMin, float* OutMax, bool K2Node_SwitchInteger_CmpSuccess)
{
	static auto Func = Class->GetFunction("ProxyQuickbar_C", "BP_GetPropertyRange");

	Params::UProxyQuickbar_C_BP_GetPropertyRange_Params Parms;
	Parms.PropertyIndex = PropertyIndex;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);
	if (OutMin != nullptr)
		*OutMin = Parms.OutMin;

	if (OutMax != nullptr)
		*OutMax = Parms.OutMax;

}

// Function ProxyQuickbar.ProxyQuickbar_C.SetQuickbarHeight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              NewHeight                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NearlyEqual_FloatFloat_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProxyQuickbar_C::SetQuickbarHeight(float NewHeight, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue)
{
	static auto Func = Class->GetFunction("ProxyQuickbar_C", "SetQuickbarHeight");

	Params::UProxyQuickbar_C_SetQuickbarHeight_Params Parms;
	Parms.NewHeight = NewHeight;
	Parms.CallFunc_NearlyEqual_FloatFloat_ReturnValue = CallFunc_NearlyEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

// Function ProxyQuickbar.ProxyQuickbar_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UProxyQuickbar_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("ProxyQuickbar_C", "PreConstruct");

	Params::UProxyQuickbar_C_PreConstruct_Params Parms;
	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

// Function ProxyQuickbar.ProxyQuickbar_C.BP_SetPropertyValue
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              PropertyIndex                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProxyQuickbar_C::BP_SetPropertyValue(int32 PropertyIndex, float NewValue)
{
	static auto Func = Class->GetFunction("ProxyQuickbar_C", "BP_SetPropertyValue");

	Params::UProxyQuickbar_C_BP_SetPropertyValue_Params Parms;
	Parms.PropertyIndex = PropertyIndex;
	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);
}

// Function ProxyQuickbar.ProxyQuickbar_C.ExecuteUbergraph_ProxyQuickbar
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Event_PropertyIndex                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_NewValue                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UProxyQuickbar_C::ExecuteUbergraph_ProxyQuickbar(int32 EntryPoint, bool K2Node_Event_IsDesignTime, int32 K2Node_Event_PropertyIndex, float K2Node_Event_NewValue, bool K2Node_SwitchInteger_CmpSuccess)
{
	static auto Func = Class->GetFunction("ProxyQuickbar_C", "ExecuteUbergraph_ProxyQuickbar");

	Params::UProxyQuickbar_C_ExecuteUbergraph_ProxyQuickbar_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_Event_PropertyIndex = K2Node_Event_PropertyIndex;
	Parms.K2Node_Event_NewValue = K2Node_Event_NewValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
