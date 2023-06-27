#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function GameSettingsDetailView.GameSettingsDetailView_C.GatherDetailExtensions
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortSetting*                InSetting                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<TSoftClassPtr<class UFortSettingDetailExtension>>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, UObjectWrapper)
// TArray<TSoftClassPtr<class UFortSettingDetailExtension>>K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class UFortSettingControllerInput* K2Node_DynamicCast_AsFort_Setting_Controller_Input               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortSettingValueDiscrete*   K2Node_DynamicCast_AsFort_Setting_Value_Discrete                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<TSoftClassPtr<class UFortSettingDetailExtension>>K2Node_MakeArray_Array_1                                         (ZeroConstructor, ReferenceParm)

TArray<TSoftClassPtr<class UFortSettingDetailExtension>> UGameSettingsDetailView_C::GatherDetailExtensions(class UFortSetting* InSetting, TArray<TSoftClassPtr<class UFortSettingDetailExtension>>& K2Node_MakeArray_Array, class UFortSettingControllerInput* K2Node_DynamicCast_AsFort_Setting_Controller_Input, bool K2Node_DynamicCast_bSuccess, class UFortSettingValueDiscrete* K2Node_DynamicCast_AsFort_Setting_Value_Discrete, bool K2Node_DynamicCast_bSuccess_1, TArray<TSoftClassPtr<class UFortSettingDetailExtension>>& K2Node_MakeArray_Array_1)
{
	static auto Func = Class->GetFunction("GameSettingsDetailView_C", "GatherDetailExtensions");

	Params::UGameSettingsDetailView_C_GatherDetailExtensions_Params Parms;
	Parms.InSetting = InSetting;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_DynamicCast_AsFort_Setting_Controller_Input = K2Node_DynamicCast_AsFort_Setting_Controller_Input;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsFort_Setting_Value_Discrete = K2Node_DynamicCast_AsFort_Setting_Value_Discrete;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;

	UObject::ProcessEvent(Func, &Parms);
	return Parms.ReturnValue;

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
