#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function FrontendItemViewSettingsManager.FrontendItemViewSettingsManager_C.Is Hero or Previews on Hero
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UFortItemDefinition*         Item_Definition                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// TArray<enum class EFortItemType>   K2Node_MakeArray_Array                                           (ConstParm, ZeroConstructor, ReferenceParm)
// enum class EFortItemType           CallFunc_GetItemType_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ShouldShowPreviewOnCurrentHero_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UFrontendItemViewSettingsManager_C::Is_Hero_or_Previews_on_Hero(class UFortItemDefinition* Item_Definition, TArray<enum class EFortItemType>& K2Node_MakeArray_Array, enum class EFortItemType CallFunc_GetItemType_ReturnValue, bool CallFunc_ShouldShowPreviewOnCurrentHero_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_BooleanOR_ReturnValue)
{
	static auto Func = Class->GetFunction("FrontendItemViewSettingsManager_C", "Is Hero or Previews on Hero");

	Params::UFrontendItemViewSettingsManager_C_Is_Hero_or_Previews_on_Hero_Params Parms;
	Parms.Item_Definition = Item_Definition;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_GetItemType_ReturnValue = CallFunc_GetItemType_ReturnValue;
	Parms.CallFunc_ShouldShowPreviewOnCurrentHero_ReturnValue = CallFunc_ShouldShowPreviewOnCurrentHero_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
	return Parms.ReturnValue;

}

// Function FrontendItemViewSettingsManager.FrontendItemViewSettingsManager_C.GetItemViewSettings
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// enum class EFrontEndCamera         Camera                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESubGame                GameMode                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItemDefinition*         ItemDefinition                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortItemViewSettings       ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor)
// struct FFortItemViewSettings       Return_Value                                                     (Edit, BlueprintVisible, NoDestructor)
// TArray<enum class EFrontEndCamera> K2Node_MakeArray_Array                                           (ConstParm, ZeroConstructor, ReferenceParm)
// enum class EFortItemType           CallFunc_GetItemType_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortItemType           CallFunc_GetTemplateType_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Is_Hero_or_Previews_on_Hero_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAthenaSprayItemDefinition*  K2Node_DynamicCast_AsAthena_Spray_Item_Definition                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Is_Hero_or_Previews_on_Hero_ReturnValue1                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAthenaSkyDiveContrailItemDefinition*K2Node_DynamicCast_AsAthena_Sky_Dive_Contrail_Item_Definition    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortItemType           CallFunc_GetItemType_ReturnValue1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortItemType           CallFunc_GetTemplateType_ReturnValue1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortItemType           CallFunc_GetItemType_ReturnValue2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortItemType           CallFunc_GetItemType_ReturnValue3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortItemType           CallFunc_GetTemplateType_ReturnValue2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortItemType           CallFunc_GetTemplateType_ReturnValue3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsItemDefRandomCustomizationSelector_ReturnValue        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<enum class EFrontEndCamera> K2Node_MakeArray_Array1                                          (ConstParm, ZeroConstructor, ReferenceParm)
// bool                               CallFunc_Array_Contains_ReturnValue1                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<enum class EFrontEndCamera> K2Node_MakeArray_Array2                                          (ConstParm, ZeroConstructor, ReferenceParm)
// bool                               CallFunc_Array_Contains_ReturnValue2                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsUsingNewFrontEndCameraManagement_ReturnValue          (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<enum class EFortItemType>   K2Node_MakeArray_Array3                                          (ConstParm, ZeroConstructor, ReferenceParm)
// struct FFloatRangeBound            K2Node_MakeStruct_FloatRangeBound                                (HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue3                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_MakeLiteralFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFloatRangeBound            K2Node_MakeStruct_FloatRangeBound1                               (HasGetValueTypeHash)
// TArray<enum class EFortItemType>   K2Node_MakeArray_Array4                                          (ConstParm, ZeroConstructor, ReferenceParm)
// struct FFloatRange                 K2Node_MakeStruct_FloatRange                                     (HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue4                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_MakeLiteralFloat_ReturnValue1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFloatRangeBound            K2Node_MakeStruct_FloatRangeBound2                               (HasGetValueTypeHash)
// struct FFloatRangeBound            K2Node_MakeStruct_FloatRangeBound3                               (HasGetValueTypeHash)
// float                              CallFunc_MakeLiteralFloat_ReturnValue2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EFortItemType>   K2Node_MakeArray_Array5                                          (ConstParm, ZeroConstructor, ReferenceParm)
// struct FFloatRangeBound            K2Node_MakeStruct_FloatRangeBound4                               (HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue5                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFloatRange                 K2Node_MakeStruct_FloatRange1                                    (HasGetValueTypeHash)
// struct FFloatRangeBound            K2Node_MakeStruct_FloatRangeBound5                               (HasGetValueTypeHash)
// struct FFloatRange                 K2Node_MakeStruct_FloatRange2                                    (HasGetValueTypeHash)
// TArray<enum class EFortItemType>   K2Node_MakeArray_Array6                                          (ConstParm, ZeroConstructor, ReferenceParm)
// bool                               CallFunc_Array_Contains_ReturnValue6                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<enum class EFortItemType>   K2Node_MakeArray_Array7                                          (ConstParm, ZeroConstructor, ReferenceParm)
// bool                               CallFunc_Array_Contains_ReturnValue7                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<enum class EFortItemType>   K2Node_MakeArray_Array8                                          (ConstParm, ZeroConstructor, ReferenceParm)
// bool                               CallFunc_Array_Contains_ReturnValue8                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<enum class EFortItemType>   K2Node_MakeArray_Array9                                          (ConstParm, ZeroConstructor, ReferenceParm)
// bool                               CallFunc_Array_Contains_ReturnValue9                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EFortItemType>   K2Node_MakeArray_Array10                                         (ConstParm, ZeroConstructor, ReferenceParm)
// bool                               CallFunc_Array_Contains_ReturnValue10                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FFortItemViewSettings UFrontendItemViewSettingsManager_C::GetItemViewSettings(enum class EFrontEndCamera Camera, enum class ESubGame GameMode, class UFortItemDefinition* ItemDefinition, const struct FFortItemViewSettings& Return_Value, TArray<enum class EFrontEndCamera>& K2Node_MakeArray_Array, enum class EFortItemType CallFunc_GetItemType_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, enum class EFortItemType CallFunc_GetTemplateType_ReturnValue, bool CallFunc_Is_Hero_or_Previews_on_Hero_ReturnValue, class UAthenaSprayItemDefinition* K2Node_DynamicCast_AsAthena_Spray_Item_Definition, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Is_Hero_or_Previews_on_Hero_ReturnValue1, class UAthenaSkyDiveContrailItemDefinition* K2Node_DynamicCast_AsAthena_Sky_Dive_Contrail_Item_Definition, bool K2Node_DynamicCast_bSuccess1, enum class EFortItemType CallFunc_GetItemType_ReturnValue1, bool CallFunc_Not_PreBool_ReturnValue, enum class EFortItemType CallFunc_GetTemplateType_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue, enum class EFortItemType CallFunc_GetItemType_ReturnValue2, enum class EFortItemType CallFunc_GetItemType_ReturnValue3, enum class EFortItemType CallFunc_GetTemplateType_ReturnValue2, enum class EFortItemType CallFunc_GetTemplateType_ReturnValue3, bool CallFunc_IsItemDefRandomCustomizationSelector_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue1, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, TArray<enum class EFrontEndCamera>& K2Node_MakeArray_Array1, bool CallFunc_Array_Contains_ReturnValue1, TArray<enum class EFrontEndCamera>& K2Node_MakeArray_Array2, bool CallFunc_Array_Contains_ReturnValue2, bool CallFunc_IsUsingNewFrontEndCameraManagement_ReturnValue, TArray<enum class EFortItemType>& K2Node_MakeArray_Array3, const struct FFloatRangeBound& K2Node_MakeStruct_FloatRangeBound, bool CallFunc_Array_Contains_ReturnValue3, float CallFunc_MakeLiteralFloat_ReturnValue, const struct FFloatRangeBound& K2Node_MakeStruct_FloatRangeBound1, TArray<enum class EFortItemType>& K2Node_MakeArray_Array4, const struct FFloatRange& K2Node_MakeStruct_FloatRange, bool CallFunc_Array_Contains_ReturnValue4, float CallFunc_MakeLiteralFloat_ReturnValue1, const struct FFloatRangeBound& K2Node_MakeStruct_FloatRangeBound2, const struct FFloatRangeBound& K2Node_MakeStruct_FloatRangeBound3, float CallFunc_MakeLiteralFloat_ReturnValue2, TArray<enum class EFortItemType>& K2Node_MakeArray_Array5, const struct FFloatRangeBound& K2Node_MakeStruct_FloatRangeBound4, bool CallFunc_Array_Contains_ReturnValue5, const struct FFloatRange& K2Node_MakeStruct_FloatRange1, const struct FFloatRangeBound& K2Node_MakeStruct_FloatRangeBound5, const struct FFloatRange& K2Node_MakeStruct_FloatRange2, TArray<enum class EFortItemType>& K2Node_MakeArray_Array6, bool CallFunc_Array_Contains_ReturnValue6, TArray<enum class EFortItemType>& K2Node_MakeArray_Array7, bool CallFunc_Array_Contains_ReturnValue7, TArray<enum class EFortItemType>& K2Node_MakeArray_Array8, bool CallFunc_Array_Contains_ReturnValue8, TArray<enum class EFortItemType>& K2Node_MakeArray_Array9, bool CallFunc_Array_Contains_ReturnValue9, float Temp_float_Variable, TArray<enum class EFortItemType>& K2Node_MakeArray_Array10, bool CallFunc_Array_Contains_ReturnValue10, bool Temp_bool_Variable, float K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("FrontendItemViewSettingsManager_C", "GetItemViewSettings");

	Params::UFrontendItemViewSettingsManager_C_GetItemViewSettings_Params Parms;
	Parms.Camera = Camera;
	Parms.GameMode = GameMode;
	Parms.ItemDefinition = ItemDefinition;
	Parms.Return_Value = Return_Value;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_GetItemType_ReturnValue = CallFunc_GetItemType_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_GetTemplateType_ReturnValue = CallFunc_GetTemplateType_ReturnValue;
	Parms.CallFunc_Is_Hero_or_Previews_on_Hero_ReturnValue = CallFunc_Is_Hero_or_Previews_on_Hero_ReturnValue;
	Parms.K2Node_DynamicCast_AsAthena_Spray_Item_Definition = K2Node_DynamicCast_AsAthena_Spray_Item_Definition;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Is_Hero_or_Previews_on_Hero_ReturnValue1 = CallFunc_Is_Hero_or_Previews_on_Hero_ReturnValue1;
	Parms.K2Node_DynamicCast_AsAthena_Sky_Dive_Contrail_Item_Definition = K2Node_DynamicCast_AsAthena_Sky_Dive_Contrail_Item_Definition;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.CallFunc_GetItemType_ReturnValue1 = CallFunc_GetItemType_ReturnValue1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetTemplateType_ReturnValue1 = CallFunc_GetTemplateType_ReturnValue1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetItemType_ReturnValue2 = CallFunc_GetItemType_ReturnValue2;
	Parms.CallFunc_GetItemType_ReturnValue3 = CallFunc_GetItemType_ReturnValue3;
	Parms.CallFunc_GetTemplateType_ReturnValue2 = CallFunc_GetTemplateType_ReturnValue2;
	Parms.CallFunc_GetTemplateType_ReturnValue3 = CallFunc_GetTemplateType_ReturnValue3;
	Parms.CallFunc_IsItemDefRandomCustomizationSelector_ReturnValue = CallFunc_IsItemDefRandomCustomizationSelector_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue1 = CallFunc_BooleanAND_ReturnValue1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue1 = CallFunc_EqualEqual_ByteByte_ReturnValue1;
	Parms.K2Node_MakeArray_Array1 = K2Node_MakeArray_Array1;
	Parms.CallFunc_Array_Contains_ReturnValue1 = CallFunc_Array_Contains_ReturnValue1;
	Parms.K2Node_MakeArray_Array2 = K2Node_MakeArray_Array2;
	Parms.CallFunc_Array_Contains_ReturnValue2 = CallFunc_Array_Contains_ReturnValue2;
	Parms.CallFunc_IsUsingNewFrontEndCameraManagement_ReturnValue = CallFunc_IsUsingNewFrontEndCameraManagement_ReturnValue;
	Parms.K2Node_MakeArray_Array3 = K2Node_MakeArray_Array3;
	Parms.K2Node_MakeStruct_FloatRangeBound = K2Node_MakeStruct_FloatRangeBound;
	Parms.CallFunc_Array_Contains_ReturnValue3 = CallFunc_Array_Contains_ReturnValue3;
	Parms.CallFunc_MakeLiteralFloat_ReturnValue = CallFunc_MakeLiteralFloat_ReturnValue;
	Parms.K2Node_MakeStruct_FloatRangeBound1 = K2Node_MakeStruct_FloatRangeBound1;
	Parms.K2Node_MakeArray_Array4 = K2Node_MakeArray_Array4;
	Parms.K2Node_MakeStruct_FloatRange = K2Node_MakeStruct_FloatRange;
	Parms.CallFunc_Array_Contains_ReturnValue4 = CallFunc_Array_Contains_ReturnValue4;
	Parms.CallFunc_MakeLiteralFloat_ReturnValue1 = CallFunc_MakeLiteralFloat_ReturnValue1;
	Parms.K2Node_MakeStruct_FloatRangeBound2 = K2Node_MakeStruct_FloatRangeBound2;
	Parms.K2Node_MakeStruct_FloatRangeBound3 = K2Node_MakeStruct_FloatRangeBound3;
	Parms.CallFunc_MakeLiteralFloat_ReturnValue2 = CallFunc_MakeLiteralFloat_ReturnValue2;
	Parms.K2Node_MakeArray_Array5 = K2Node_MakeArray_Array5;
	Parms.K2Node_MakeStruct_FloatRangeBound4 = K2Node_MakeStruct_FloatRangeBound4;
	Parms.CallFunc_Array_Contains_ReturnValue5 = CallFunc_Array_Contains_ReturnValue5;
	Parms.K2Node_MakeStruct_FloatRange1 = K2Node_MakeStruct_FloatRange1;
	Parms.K2Node_MakeStruct_FloatRangeBound5 = K2Node_MakeStruct_FloatRangeBound5;
	Parms.K2Node_MakeStruct_FloatRange2 = K2Node_MakeStruct_FloatRange2;
	Parms.K2Node_MakeArray_Array6 = K2Node_MakeArray_Array6;
	Parms.CallFunc_Array_Contains_ReturnValue6 = CallFunc_Array_Contains_ReturnValue6;
	Parms.K2Node_MakeArray_Array7 = K2Node_MakeArray_Array7;
	Parms.CallFunc_Array_Contains_ReturnValue7 = CallFunc_Array_Contains_ReturnValue7;
	Parms.K2Node_MakeArray_Array8 = K2Node_MakeArray_Array8;
	Parms.CallFunc_Array_Contains_ReturnValue8 = CallFunc_Array_Contains_ReturnValue8;
	Parms.K2Node_MakeArray_Array9 = K2Node_MakeArray_Array9;
	Parms.CallFunc_Array_Contains_ReturnValue9 = CallFunc_Array_Contains_ReturnValue9;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.K2Node_MakeArray_Array10 = K2Node_MakeArray_Array10;
	Parms.CallFunc_Array_Contains_ReturnValue10 = CallFunc_Array_Contains_ReturnValue10;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);
	return Parms.ReturnValue;

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
