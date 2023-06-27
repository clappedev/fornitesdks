#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function OptionsMenuSetting.OptionsMenuSetting_C.GetListItemObject
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UObject* UOptionsMenuSetting_C::GetListItemObject()
{
	static auto Func = Class->GetFunction("OptionsMenuSetting_C", "GetListItemObject");

	Params::UOptionsMenuSetting_C_GetListItemObject_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
	return Parms.ReturnValue;

}

// Function OptionsMenuSetting.OptionsMenuSetting_C.UpdateVisuals
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_GetValue_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_ConvertSliderValueToSettingsValue_SettingsValue         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_FloatToText_ReturnValue                            ()

void UOptionsMenuSetting_C::UpdateVisuals(float CallFunc_GetValue_ReturnValue, float CallFunc_ConvertSliderValueToSettingsValue_SettingsValue, class FText CallFunc_Conv_FloatToText_ReturnValue)
{
	static auto Func = Class->GetFunction("OptionsMenuSetting_C", "UpdateVisuals");

	Params::UOptionsMenuSetting_C_UpdateVisuals_Params Parms;
	Parms.CallFunc_GetValue_ReturnValue = CallFunc_GetValue_ReturnValue;
	Parms.CallFunc_ConvertSliderValueToSettingsValue_SettingsValue = CallFunc_ConvertSliderValueToSettingsValue_SettingsValue;
	Parms.CallFunc_Conv_FloatToText_ReturnValue = CallFunc_Conv_FloatToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

// Function OptionsMenuSetting.OptionsMenuSetting_C.ConvertSettingsValueToSliderValue
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              SettingsValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              SliderValue                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionsMenuSetting_C::ConvertSettingsValueToSliderValue(float SettingsValue, float* SliderValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue1, float CallFunc_Divide_FloatFloat_ReturnValue)
{
	static auto Func = Class->GetFunction("OptionsMenuSetting_C", "ConvertSettingsValueToSliderValue");

	Params::UOptionsMenuSetting_C_ConvertSettingsValueToSliderValue_Params Parms;
	Parms.SettingsValue = SettingsValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue1 = CallFunc_Subtract_FloatFloat_ReturnValue1;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
	if (SliderValue != nullptr)
		*SliderValue = Parms.SliderValue;

}

// Function OptionsMenuSetting.OptionsMenuSetting_C.UpdateSliderTexture
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_GetValue_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionsMenuSetting_C::UpdateSliderTexture(float CallFunc_GetValue_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue)
{
	static auto Func = Class->GetFunction("OptionsMenuSetting_C", "UpdateSliderTexture");

	Params::UOptionsMenuSetting_C_UpdateSliderTexture_Params Parms;
	Parms.CallFunc_GetValue_ReturnValue = CallFunc_GetValue_ReturnValue;
	Parms.CallFunc_MakeLiteralName_ReturnValue = CallFunc_MakeLiteralName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

// Function OptionsMenuSetting.OptionsMenuSetting_C.ConvertSliderValueToSettingsValue
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              SliderValue                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              SettingsValue                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionsMenuSetting_C::ConvertSliderValueToSettingsValue(float SliderValue, float* SettingsValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue)
{
	static auto Func = Class->GetFunction("OptionsMenuSetting_C", "ConvertSliderValueToSettingsValue");

	Params::UOptionsMenuSetting_C_ConvertSliderValueToSettingsValue_Params Parms;
	Parms.SliderValue = SliderValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
	if (SettingsValue != nullptr)
		*SettingsValue = Parms.SettingsValue;

}

// Function OptionsMenuSetting.OptionsMenuSetting_C.SetDarkTabStyle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionsMenuSetting_C::SetDarkTabStyle()
{
	static auto Func = Class->GetFunction("OptionsMenuSetting_C", "SetDarkTabStyle");

	Params::UOptionsMenuSetting_C_SetDarkTabStyle_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function OptionsMenuSetting.OptionsMenuSetting_C.SetSliderTextRenderScale
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Scale_Normalized                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetMinYResolutionFor3DView_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetResolutionScaleInformationEx_CurrentScaleNormalized  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetResolutionScaleInformationEx_CurrentScaleValue       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetResolutionScaleInformationEx_MinScaleValue           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetResolutionScaleInformationEx_MaxScaleValue           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EWindowMode             CallFunc_GetFullscreenMode_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_FloatToText_ReturnValue                            ()
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FIntPoint                   CallFunc_GetScreenResolution_ReturnValue                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FIntPoint                   CallFunc_GetDesktopResolution_ReturnValue                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectInt_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectInt_ReturnValue1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FMax_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_IntFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_IntFloat_ReturnValue1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_FloatToText_ReturnValue1                           ()
// class FText                        CallFunc_Conv_FloatToText_ReturnValue2                           ()
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData1                            (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData2                            (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      ()

void UOptionsMenuSetting_C::SetSliderTextRenderScale(float Scale_Normalized, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetMinYResolutionFor3DView_ReturnValue, float CallFunc_GetResolutionScaleInformationEx_CurrentScaleNormalized, float CallFunc_GetResolutionScaleInformationEx_CurrentScaleValue, float CallFunc_GetResolutionScaleInformationEx_MinScaleValue, float CallFunc_GetResolutionScaleInformationEx_MaxScaleValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Lerp_ReturnValue, enum class EWindowMode CallFunc_GetFullscreenMode_ReturnValue, class FText CallFunc_Conv_FloatToText_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, float CallFunc_Divide_FloatFloat_ReturnValue, const struct FIntPoint& CallFunc_GetScreenResolution_ReturnValue, const struct FIntPoint& CallFunc_GetDesktopResolution_ReturnValue, int32 CallFunc_SelectInt_ReturnValue, int32 CallFunc_SelectInt_ReturnValue1, float CallFunc_Conv_IntToFloat_ReturnValue1, float CallFunc_Divide_FloatFloat_ReturnValue1, float CallFunc_FClamp_ReturnValue, float CallFunc_FMax_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue1, class FText CallFunc_Conv_FloatToText_ReturnValue1, class FText CallFunc_Conv_FloatToText_ReturnValue2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static auto Func = Class->GetFunction("OptionsMenuSetting_C", "SetSliderTextRenderScale");

	Params::UOptionsMenuSetting_C_SetSliderTextRenderScale_Params Parms;
	Parms.Scale_Normalized = Scale_Normalized;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_GetMinYResolutionFor3DView_ReturnValue = CallFunc_GetMinYResolutionFor3DView_ReturnValue;
	Parms.CallFunc_GetResolutionScaleInformationEx_CurrentScaleNormalized = CallFunc_GetResolutionScaleInformationEx_CurrentScaleNormalized;
	Parms.CallFunc_GetResolutionScaleInformationEx_CurrentScaleValue = CallFunc_GetResolutionScaleInformationEx_CurrentScaleValue;
	Parms.CallFunc_GetResolutionScaleInformationEx_MinScaleValue = CallFunc_GetResolutionScaleInformationEx_MinScaleValue;
	Parms.CallFunc_GetResolutionScaleInformationEx_MaxScaleValue = CallFunc_GetResolutionScaleInformationEx_MaxScaleValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_GetFullscreenMode_ReturnValue = CallFunc_GetFullscreenMode_ReturnValue;
	Parms.CallFunc_Conv_FloatToText_ReturnValue = CallFunc_Conv_FloatToText_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue1 = CallFunc_EqualEqual_ByteByte_ReturnValue1;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_GetScreenResolution_ReturnValue = CallFunc_GetScreenResolution_ReturnValue;
	Parms.CallFunc_GetDesktopResolution_ReturnValue = CallFunc_GetDesktopResolution_ReturnValue;
	Parms.CallFunc_SelectInt_ReturnValue = CallFunc_SelectInt_ReturnValue;
	Parms.CallFunc_SelectInt_ReturnValue1 = CallFunc_SelectInt_ReturnValue1;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue1 = CallFunc_Conv_IntToFloat_ReturnValue1;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue1 = CallFunc_Divide_FloatFloat_ReturnValue1;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_FMax_ReturnValue = CallFunc_FMax_ReturnValue;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue1 = CallFunc_Multiply_IntFloat_ReturnValue1;
	Parms.CallFunc_Conv_FloatToText_ReturnValue1 = CallFunc_Conv_FloatToText_ReturnValue1;
	Parms.CallFunc_Conv_FloatToText_ReturnValue2 = CallFunc_Conv_FloatToText_ReturnValue2;
	Parms.K2Node_MakeStruct_FormatArgumentData1 = K2Node_MakeStruct_FormatArgumentData1;
	Parms.K2Node_MakeStruct_FormatArgumentData2 = K2Node_MakeStruct_FormatArgumentData2;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

// Function OptionsMenuSetting.OptionsMenuSetting_C.Hide Tooltip
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionsMenuSetting_C::Hide_Tooltip()
{
	static auto Func = Class->GetFunction("OptionsMenuSetting_C", "Hide Tooltip");

	Params::UOptionsMenuSetting_C_Hide_Tooltip_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function OptionsMenuSetting.OptionsMenuSetting_C.Show Tooltip
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionsMenuSetting_C::Show_Tooltip()
{
	static auto Func = Class->GetFunction("OptionsMenuSetting_C", "Show Tooltip");

	Params::UOptionsMenuSetting_C_Show_Tooltip_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function OptionsMenuSetting.OptionsMenuSetting_C.OnGetMenuContent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTooltip_Basic_S_C*          CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UOptionsMenuSetting_C::OnGetMenuContent(class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UTooltip_Basic_S_C* CallFunc_Create_ReturnValue)
{
	static auto Func = Class->GetFunction("OptionsMenuSetting_C", "OnGetMenuContent");

	Params::UOptionsMenuSetting_C_OnGetMenuContent_Params Parms;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
	return Parms.ReturnValue;

}

// Function OptionsMenuSetting.OptionsMenuSetting_C.HandlePawnSet
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bRCPawn                                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortRemoteControlledPawnAthena*K2Node_DynamicCast_AsFort_Remote_Controlled_Pawn_Athena          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UOptionsMenuSetting_C::HandlePawnSet(bool bRCPawn, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_Not_PreBool_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, class AFortRemoteControlledPawnAthena* K2Node_DynamicCast_AsFort_Remote_Controlled_Pawn_Athena, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("OptionsMenuSetting_C", "HandlePawnSet");

	Params::UOptionsMenuSetting_C_HandlePawnSet_Params Parms;
	Parms.bRCPawn = bRCPawn;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Remote_Controlled_Pawn_Athena = K2Node_DynamicCast_AsFort_Remote_Controlled_Pawn_Athena;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);
}

// Function OptionsMenuSetting.OptionsMenuSetting_C.UpdateSize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   LargeSize                                                        (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   SmallSize                                                        (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   Temp_struct_Variable                                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Temp_struct_Variable1                                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsBROnly_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsBROnly_ReturnValue1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   K2Node_Select1_Default                                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionsMenuSetting_C::UpdateSize(const struct FVector2D& LargeSize, const struct FVector2D& SmallSize, bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable1, bool Temp_bool_Variable1, const struct FVector2D& Temp_struct_Variable, const struct FVector2D& Temp_struct_Variable1, bool CallFunc_IsBROnly_ReturnValue, bool CallFunc_IsBROnly_ReturnValue1, float K2Node_Select_Default, const struct FVector2D& K2Node_Select1_Default)
{
	static auto Func = Class->GetFunction("OptionsMenuSetting_C", "UpdateSize");

	Params::UOptionsMenuSetting_C_UpdateSize_Params Parms;
	Parms.LargeSize = LargeSize;
	Parms.SmallSize = SmallSize;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_float_Variable1 = Temp_float_Variable1;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable1 = Temp_struct_Variable1;
	Parms.CallFunc_IsBROnly_ReturnValue = CallFunc_IsBROnly_ReturnValue;
	Parms.CallFunc_IsBROnly_ReturnValue1 = CallFunc_IsBROnly_ReturnValue1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;

	UObject::ProcessEvent(Func, &Parms);
}

// Function OptionsMenuSetting.OptionsMenuSetting_C.BP_OnEntryReleased
// (Event, Protected, BlueprintEvent)
// Parameters:

void UOptionsMenuSetting_C::BP_OnEntryReleased()
{
	static auto Func = Class->GetFunction("OptionsMenuSetting_C", "BP_OnEntryReleased");

	Params::UOptionsMenuSetting_C_BP_OnEntryReleased_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function OptionsMenuSetting.OptionsMenuSetting_C.BP_OnItemExpansionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsExpanded                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UOptionsMenuSetting_C::BP_OnItemExpansionChanged(bool bIsExpanded)
{
	static auto Func = Class->GetFunction("OptionsMenuSetting_C", "BP_OnItemExpansionChanged");

	Params::UOptionsMenuSetting_C_BP_OnItemExpansionChanged_Params Parms;
	Parms.bIsExpanded = bIsExpanded;

	UObject::ProcessEvent(Func, &Parms);
}

// Function OptionsMenuSetting.OptionsMenuSetting_C.BP_OnItemSelectionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsSelected                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UOptionsMenuSetting_C::BP_OnItemSelectionChanged(bool bIsSelected)
{
	static auto Func = Class->GetFunction("OptionsMenuSetting_C", "BP_OnItemSelectionChanged");

	Params::UOptionsMenuSetting_C_BP_OnItemSelectionChanged_Params Parms;
	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);
}

// Function OptionsMenuSetting.OptionsMenuSetting_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UOptionsMenuSetting_C::Construct()
{
	static auto Func = Class->GetFunction("OptionsMenuSetting_C", "Construct");

	Params::UOptionsMenuSetting_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function OptionsMenuSetting.OptionsMenuSetting_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UOptionsMenuSetting_C::OnMouseLeave(struct FPointerEvent& MouseEvent)
{
	static auto Func = Class->GetFunction("OptionsMenuSetting_C", "OnMouseLeave");

	Params::UOptionsMenuSetting_C_OnMouseLeave_Params Parms;
	Parms.MouseEvent = MouseEvent;

	UObject::ProcessEvent(Func, &Parms);
}

// Function OptionsMenuSetting.OptionsMenuSetting_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UOptionsMenuSetting_C::OnMouseEnter(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent)
{
	static auto Func = Class->GetFunction("OptionsMenuSetting_C", "OnMouseEnter");

	Params::UOptionsMenuSetting_C_OnMouseEnter_Params Parms;
	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;

	UObject::ProcessEvent(Func, &Parms);
}

// Function OptionsMenuSetting.OptionsMenuSetting_C.BndEvt__MenuSlider_K2Node_ComponentBoundEvent_124_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionsMenuSetting_C::BndEvt__MenuSlider_K2Node_ComponentBoundEvent_124_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static auto Func = Class->GetFunction("OptionsMenuSetting_C", "BndEvt__MenuSlider_K2Node_ComponentBoundEvent_124_OnFloatValueChangedEvent__DelegateSignature");

	Params::UOptionsMenuSetting_C_BndEvt__MenuSlider_K2Node_ComponentBoundEvent_124_OnFloatValueChangedEvent__DelegateSignature_Params Parms;
	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}

// Function OptionsMenuSetting.OptionsMenuSetting_C.OnListItemObjectSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UObject*                     ListItemObject                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionsMenuSetting_C::OnListItemObjectSet(class UObject* ListItemObject)
{
	static auto Func = Class->GetFunction("OptionsMenuSetting_C", "OnListItemObjectSet");

	Params::UOptionsMenuSetting_C_OnListItemObjectSet_Params Parms;
	Parms.ListItemObject = ListItemObject;

	UObject::ProcessEvent(Func, &Parms);
}

// Function OptionsMenuSetting.OptionsMenuSetting_C.BndEvt__MenuAnchorSettingDescription_K2Node_ComponentBoundEvent_22_OnMenuOpenChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bIsOpen                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UOptionsMenuSetting_C::BndEvt__MenuAnchorSettingDescription_K2Node_ComponentBoundEvent_22_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen)
{
	static auto Func = Class->GetFunction("OptionsMenuSetting_C", "BndEvt__MenuAnchorSettingDescription_K2Node_ComponentBoundEvent_22_OnMenuOpenChangedEvent__DelegateSignature");

	Params::UOptionsMenuSetting_C_BndEvt__MenuAnchorSettingDescription_K2Node_ComponentBoundEvent_22_OnMenuOpenChangedEvent__DelegateSignature_Params Parms;
	Parms.bIsOpen = bIsOpen;

	UObject::ProcessEvent(Func, &Parms);
}

// Function OptionsMenuSetting.OptionsMenuSetting_C.BndEvt__ButtonTouchTooltip_K2Node_ComponentBoundEvent_69_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionsMenuSetting_C::BndEvt__ButtonTouchTooltip_K2Node_ComponentBoundEvent_69_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("OptionsMenuSetting_C", "BndEvt__ButtonTouchTooltip_K2Node_ComponentBoundEvent_69_CommonButtonClicked__DelegateSignature");

	Params::UOptionsMenuSetting_C_BndEvt__ButtonTouchTooltip_K2Node_ComponentBoundEvent_69_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}

// Function OptionsMenuSetting.OptionsMenuSetting_C.UpdateSetting
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonTextBlock*            TooltipTextBlock                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionsMenuSetting_C::UpdateSetting(class UCommonTextBlock* TooltipTextBlock)
{
	static auto Func = Class->GetFunction("OptionsMenuSetting_C", "UpdateSetting");

	Params::UOptionsMenuSetting_C_UpdateSetting_Params Parms;
	Parms.TooltipTextBlock = TooltipTextBlock;

	UObject::ProcessEvent(Func, &Parms);
}

// Function OptionsMenuSetting.OptionsMenuSetting_C.CenterOnWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionsMenuSetting_C::CenterOnWidget()
{
	static auto Func = Class->GetFunction("OptionsMenuSetting_C", "CenterOnWidget");

	Params::UOptionsMenuSetting_C_CenterOnWidget_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function OptionsMenuSetting.OptionsMenuSetting_C.BndEvt__MenuSlider_K2Node_ComponentBoundEvent_86_OnMouseCaptureEndEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UOptionsMenuSetting_C::BndEvt__MenuSlider_K2Node_ComponentBoundEvent_86_OnMouseCaptureEndEvent__DelegateSignature()
{
	static auto Func = Class->GetFunction("OptionsMenuSetting_C", "BndEvt__MenuSlider_K2Node_ComponentBoundEvent_86_OnMouseCaptureEndEvent__DelegateSignature");

	Params::UOptionsMenuSetting_C_BndEvt__MenuSlider_K2Node_ComponentBoundEvent_86_OnMouseCaptureEndEvent__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function OptionsMenuSetting.OptionsMenuSetting_C.BndEvt__MenuSlider_K2Node_ComponentBoundEvent_107_OnControllerCaptureEndEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UOptionsMenuSetting_C::BndEvt__MenuSlider_K2Node_ComponentBoundEvent_107_OnControllerCaptureEndEvent__DelegateSignature()
{
	static auto Func = Class->GetFunction("OptionsMenuSetting_C", "BndEvt__MenuSlider_K2Node_ComponentBoundEvent_107_OnControllerCaptureEndEvent__DelegateSignature");

	Params::UOptionsMenuSetting_C_BndEvt__MenuSlider_K2Node_ComponentBoundEvent_107_OnControllerCaptureEndEvent__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function OptionsMenuSetting.OptionsMenuSetting_C.BndEvt__MenuSlider_K2Node_ComponentBoundEvent_9_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionsMenuSetting_C::BndEvt__MenuSlider_K2Node_ComponentBoundEvent_9_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static auto Func = Class->GetFunction("OptionsMenuSetting_C", "BndEvt__MenuSlider_K2Node_ComponentBoundEvent_9_OnFloatValueChangedEvent__DelegateSignature");

	Params::UOptionsMenuSetting_C_BndEvt__MenuSlider_K2Node_ComponentBoundEvent_9_OnFloatValueChangedEvent__DelegateSignature_Params Parms;
	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}

// Function OptionsMenuSetting.OptionsMenuSetting_C.ExecuteUbergraph_OptionsMenuSetting
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortSettingsContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_ConvertSettingsValueToSliderValue_SliderValue           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortSettingsContext*        CallFunc_GetContext_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsExpanded                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bIsSelected                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FPointerEvent               K2Node_Event_MouseEvent1                                         (ConstParm)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// struct FPointerEvent               K2Node_Event_MouseEvent                                          (ConstParm)
// float                              K2Node_ComponentBoundEvent_Value1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_MakeStruct_LinearColor                                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_MakeStruct_LinearColor1                                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_Event_ListItemObject                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortSettingInfo*            K2Node_DynamicCast_AsFort_Setting_Info                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_ComponentBoundEvent_bIsOpen                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMobileGame_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TextIsEmpty_ReturnValue1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsMobileGame_ReturnValue1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonTextBlock*            K2Node_Event_TooltipTextBlock                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetSliderSettingValue_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_Value                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValue_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_ConvertSliderValueToSettingsValue_SettingsValue         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select1_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionsMenuSetting_C::ExecuteUbergraph_OptionsMenuSetting(int32 EntryPoint, class UFortSettingsContext* CallFunc_GetContext_ReturnValue, float CallFunc_ConvertSettingsValueToSliderValue_SliderValue, class UFortSettingsContext* CallFunc_GetContext_ReturnValue1, bool K2Node_Event_bIsExpanded, bool K2Node_Event_bIsSelected, const struct FPointerEvent& K2Node_Event_MouseEvent1, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, const struct FPointerEvent& K2Node_Event_MouseEvent, float K2Node_ComponentBoundEvent_Value1, const struct FLinearColor& K2Node_MakeStruct_LinearColor, const struct FLinearColor& K2Node_MakeStruct_LinearColor1, class UObject* K2Node_Event_ListItemObject, class UFortSettingInfo* K2Node_DynamicCast_AsFort_Setting_Info, bool K2Node_DynamicCast_bSuccess, bool K2Node_ComponentBoundEvent_bIsOpen, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, bool CallFunc_IsMobileGame_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button, bool CallFunc_TextIsEmpty_ReturnValue1, bool CallFunc_IsMobileGame_ReturnValue1, class UCommonTextBlock* K2Node_Event_TooltipTextBlock, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable2, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility Temp_byte_Variable3, float CallFunc_GetSliderSettingValue_ReturnValue, float K2Node_ComponentBoundEvent_Value, float CallFunc_GetValue_ReturnValue, bool Temp_bool_Variable1, float CallFunc_ConvertSliderValueToSettingsValue_SettingsValue, enum class ESlateVisibility K2Node_Select1_Default)
{
	static auto Func = Class->GetFunction("OptionsMenuSetting_C", "ExecuteUbergraph_OptionsMenuSetting");

	Params::UOptionsMenuSetting_C_ExecuteUbergraph_OptionsMenuSetting_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_ConvertSettingsValueToSliderValue_SliderValue = CallFunc_ConvertSettingsValueToSliderValue_SliderValue;
	Parms.CallFunc_GetContext_ReturnValue1 = CallFunc_GetContext_ReturnValue1;
	Parms.K2Node_Event_bIsExpanded = K2Node_Event_bIsExpanded;
	Parms.K2Node_Event_bIsSelected = K2Node_Event_bIsSelected;
	Parms.K2Node_Event_MouseEvent1 = K2Node_Event_MouseEvent1;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_MouseEvent = K2Node_Event_MouseEvent;
	Parms.K2Node_ComponentBoundEvent_Value1 = K2Node_ComponentBoundEvent_Value1;
	Parms.K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
	Parms.K2Node_MakeStruct_LinearColor1 = K2Node_MakeStruct_LinearColor1;
	Parms.K2Node_Event_ListItemObject = K2Node_Event_ListItemObject;
	Parms.K2Node_DynamicCast_AsFort_Setting_Info = K2Node_DynamicCast_AsFort_Setting_Info;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_ComponentBoundEvent_bIsOpen = K2Node_ComponentBoundEvent_bIsOpen;
	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;
	Parms.CallFunc_IsMobileGame_ReturnValue = CallFunc_IsMobileGame_ReturnValue;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_TextIsEmpty_ReturnValue1 = CallFunc_TextIsEmpty_ReturnValue1;
	Parms.CallFunc_IsMobileGame_ReturnValue1 = CallFunc_IsMobileGame_ReturnValue1;
	Parms.K2Node_Event_TooltipTextBlock = K2Node_Event_TooltipTextBlock;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_byte_Variable3 = Temp_byte_Variable3;
	Parms.CallFunc_GetSliderSettingValue_ReturnValue = CallFunc_GetSliderSettingValue_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Value = K2Node_ComponentBoundEvent_Value;
	Parms.CallFunc_GetValue_ReturnValue = CallFunc_GetValue_ReturnValue;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.CallFunc_ConvertSliderValueToSettingsValue_SettingsValue = CallFunc_ConvertSliderValueToSettingsValue_SettingsValue;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
