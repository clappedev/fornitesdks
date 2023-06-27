#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function Results_CommanderXPBar.Results_CommanderXPBar_C.DebugSections
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FResults_CommanderXP_Data   CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue1                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue1                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue12                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue12                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue123                            (ZeroConstructor, HasGetValueTypeHash)

void UResults_CommanderXPBar_C::DebugSections(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FResults_CommanderXP_Data& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue1, const class FString& CallFunc_Concat_StrStr_ReturnValue1, const class FString& CallFunc_Concat_StrStr_ReturnValue12, const class FString& CallFunc_Conv_IntToString_ReturnValue12, const class FString& CallFunc_Concat_StrStr_ReturnValue123)
{
	static auto Func = Class->GetFunction("Results_CommanderXPBar_C", "DebugSections");

	Params::UResults_CommanderXPBar_C_DebugSections_Params Parms;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue1 = CallFunc_Conv_IntToString_ReturnValue1;
	Parms.CallFunc_Concat_StrStr_ReturnValue1 = CallFunc_Concat_StrStr_ReturnValue1;
	Parms.CallFunc_Concat_StrStr_ReturnValue12 = CallFunc_Concat_StrStr_ReturnValue12;
	Parms.CallFunc_Conv_IntToString_ReturnValue12 = CallFunc_Conv_IntToString_ReturnValue12;
	Parms.CallFunc_Concat_StrStr_ReturnValue123 = CallFunc_Concat_StrStr_ReturnValue123;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Results_CommanderXPBar.Results_CommanderXPBar_C.GetHoveredProgressBarSection
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        XpSectionName                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   ProgressBarSize                                                  (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   ProgressBarPos                                                   (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   MousePos                                                         (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ProgressBarWidth                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ProgressBarX                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              MouseY                                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              MouseX                                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UResults_CommanderXPBar_C::GetHoveredProgressBarSection(class FName* XpSectionName, const struct FVector2D& ProgressBarSize, const struct FVector2D& ProgressBarPos, const struct FVector2D& MousePos, float ProgressBarWidth, float ProgressBarX, float MouseY, float MouseX)
{
	static auto Func = Class->GetFunction("Results_CommanderXPBar_C", "GetHoveredProgressBarSection");

	Params::UResults_CommanderXPBar_C_GetHoveredProgressBarSection_Params Parms;
	Parms.ProgressBarSize = ProgressBarSize;
	Parms.ProgressBarPos = ProgressBarPos;
	Parms.MousePos = MousePos;
	Parms.ProgressBarWidth = ProgressBarWidth;
	Parms.ProgressBarX = ProgressBarX;
	Parms.MouseY = MouseY;
	Parms.MouseX = MouseX;

	UObject::ProcessEvent(Func, &Parms);
	if (XpSectionName != nullptr)
		*XpSectionName = Parms.XpSectionName;

}

// Function Results_CommanderXPBar.Results_CommanderXPBar_C.UpdateProgressBarPercent
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ParameterName                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ProgressBarPercent                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               MatInfoFound                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FResults_CommanderXP_MaterialDataK2Node_MakeStruct_Results_CommanderXP_MaterialData               (HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue12                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue123                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_K2_GetScalarParameterValue_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_GetScalarParameterValue_ReturnValue1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FResults_CommanderXP_MaterialDataCallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue1234                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UResults_CommanderXPBar_C::UpdateProgressBarPercent(class FName ParameterName, float ProgressBarPercent, bool MatInfoFound, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, const struct FResults_CommanderXP_MaterialData& K2Node_MakeStruct_Results_CommanderXP_MaterialData, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue1, bool CallFunc_EqualEqual_NameName_ReturnValue12, bool CallFunc_EqualEqual_NameName_ReturnValue123, bool CallFunc_BooleanOR_ReturnValue, float CallFunc_K2_GetScalarParameterValue_ReturnValue, float CallFunc_K2_GetScalarParameterValue_ReturnValue1, float CallFunc_Subtract_FloatFloat_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue1, const struct FResults_CommanderXP_MaterialData& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue1234, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static auto Func = Class->GetFunction("Results_CommanderXPBar_C", "UpdateProgressBarPercent");

	Params::UResults_CommanderXPBar_C_UpdateProgressBarPercent_Params Parms;
	Parms.ParameterName = ParameterName;
	Parms.ProgressBarPercent = ProgressBarPercent;
	Parms.MatInfoFound = MatInfoFound;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_MakeStruct_Results_CommanderXP_MaterialData = K2Node_MakeStruct_Results_CommanderXP_MaterialData;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue1 = CallFunc_EqualEqual_NameName_ReturnValue1;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue12 = CallFunc_EqualEqual_NameName_ReturnValue12;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue123 = CallFunc_EqualEqual_NameName_ReturnValue123;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_K2_GetScalarParameterValue_ReturnValue = CallFunc_K2_GetScalarParameterValue_ReturnValue;
	Parms.CallFunc_K2_GetScalarParameterValue_ReturnValue1 = CallFunc_K2_GetScalarParameterValue_ReturnValue1;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue1 = CallFunc_Subtract_FloatFloat_ReturnValue1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue1234 = CallFunc_EqualEqual_NameName_ReturnValue1234;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Results_CommanderXPBar.Results_CommanderXPBar_C.RandomizeDesignView
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              UsedPercent                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue12                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UResults_CommanderXPBar_C::RandomizeDesignView(float UsedPercent, int32 Temp_int_Array_Index_Variable, float CallFunc_RandomFloatInRange_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class FName CallFunc_MakeLiteralName_ReturnValue1, int32 CallFunc_Add_IntInt_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue12, TArray<class FName>& K2Node_MakeArray_Array, int32 CallFunc_Array_Length_ReturnValue, class FName CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("Results_CommanderXPBar_C", "RandomizeDesignView");

	Params::UResults_CommanderXPBar_C_RandomizeDesignView_Params Parms;
	Parms.UsedPercent = UsedPercent;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_MakeLiteralName_ReturnValue = CallFunc_MakeLiteralName_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_MakeLiteralName_ReturnValue1 = CallFunc_MakeLiteralName_ReturnValue1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_MakeLiteralName_ReturnValue12 = CallFunc_MakeLiteralName_ReturnValue12;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Results_CommanderXPBar.Results_CommanderXPBar_C.updateXpType
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              XPAmount                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        XPType                                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bEarnedXP                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchName_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FResults_CommanderXP_Data   CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// UInterfaceProperty_                K2Node_DynamicCast_AsFort_Client_Announcement_Conversation_Code_Interface(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// UInterfaceProperty_                K2Node_DynamicCast_AsFort_Client_Announcement_Conversation_Code_Interface1(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// UInterfaceProperty_                K2Node_DynamicCast_AsFort_Client_Announcement_Conversation_Code_Interface12(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess12                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UResults_CommanderXPBar_C::UpdateXpType(int32 XPAmount, class FName XPType, bool bEarnedXP, bool K2Node_SwitchName_CmpSuccess, const struct FResults_CommanderXP_Data& CallFunc_Array_Get_Item, UInterfaceProperty_ K2Node_DynamicCast_AsFort_Client_Announcement_Conversation_Code_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Greater_IntInt_ReturnValue, UInterfaceProperty_ K2Node_DynamicCast_AsFort_Client_Announcement_Conversation_Code_Interface1, bool K2Node_DynamicCast_bSuccess1, UInterfaceProperty_ K2Node_DynamicCast_AsFort_Client_Announcement_Conversation_Code_Interface12, bool K2Node_DynamicCast_bSuccess12)
{
	static auto Func = Class->GetFunction("Results_CommanderXPBar_C", "updateXpType");

	Params::UResults_CommanderXPBar_C_UpdateXpType_Params Parms;
	Parms.XPAmount = XPAmount;
	Parms.XPType = XPType;
	Parms.bEarnedXP = bEarnedXP;
	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsFort_Client_Announcement_Conversation_Code_Interface = K2Node_DynamicCast_AsFort_Client_Announcement_Conversation_Code_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Client_Announcement_Conversation_Code_Interface1 = K2Node_DynamicCast_AsFort_Client_Announcement_Conversation_Code_Interface1;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.K2Node_DynamicCast_AsFort_Client_Announcement_Conversation_Code_Interface12 = K2Node_DynamicCast_AsFort_Client_Announcement_Conversation_Code_Interface12;
	Parms.K2Node_DynamicCast_bSuccess12 = K2Node_DynamicCast_bSuccess12;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Results_CommanderXPBar.Results_CommanderXPBar_C.clearXpBar
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UResults_CommanderXPBar_C::ClearXpBar()
{
	static auto Func = Class->GetFunction("Results_CommanderXPBar_C", "clearXpBar");

	Params::UResults_CommanderXPBar_C_ClearXpBar_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Results_CommanderXPBar.Results_CommanderXPBar_C.PlayAnimationCommon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*            Animation                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UResults_CommanderXPBar_C::PlayAnimationCommon(class UWidgetAnimation* Animation)
{
	static auto Func = Class->GetFunction("Results_CommanderXPBar_C", "PlayAnimationCommon");

	Params::UResults_CommanderXPBar_C_PlayAnimationCommon_Params Parms;
	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Results_CommanderXPBar.Results_CommanderXPBar_C.SkipToFinalState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UResults_CommanderXPBar_C::SkipToFinalState()
{
	static auto Func = Class->GetFunction("Results_CommanderXPBar_C", "SkipToFinalState");

	Params::UResults_CommanderXPBar_C_SkipToFinalState_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Results_CommanderXPBar.Results_CommanderXPBar_C.SetSkippingToEnd
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsAnimationPlaying_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UResults_CommanderXPBar_C::SetSkippingToEnd(bool CallFunc_IsAnimationPlaying_ReturnValue)
{
	static auto Func = Class->GetFunction("Results_CommanderXPBar_C", "SetSkippingToEnd");

	Params::UResults_CommanderXPBar_C_SetSkippingToEnd_Params Parms;
	Parms.CallFunc_IsAnimationPlaying_ReturnValue = CallFunc_IsAnimationPlaying_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Results_CommanderXPBar.Results_CommanderXPBar_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUIScoreReport*          InScoreReport                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              PlayRate                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortExperienceDelta        ExperienceDelta                                                  (Edit, BlueprintVisible, NoDestructor)
// enum class EFortUIScoreType        BonusScoreType                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortUIXpInfo               LocalPlayerXPInfo                                                (Edit, BlueprintVisible, NoDestructor)
// int32                              CurrentPlayerIndex                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FResults_CommanderXP_Data   CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FResults_CommanderXP_Data   K2Node_MakeStruct_Results_CommanderXP_Data                       (HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FResults_CommanderXP_Data   K2Node_MakeStruct_Results_CommanderXP_Data1                      (HasGetValueTypeHash)
// struct FResults_CommanderXP_Data   K2Node_MakeStruct_Results_CommanderXP_Data12                     (HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue12                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue1                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue12                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_LastIndex_ReturnValue1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_LastIndex_ReturnValue12                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FResults_CommanderXP_Data   CallFunc_Array_Get_Item1                                         (HasGetValueTypeHash)
// struct FResults_CommanderXP_Data   CallFunc_Array_Get_Item12                                        (HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue123                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FResults_CommanderXP_Data   CallFunc_Array_Get_Item123                                       (HasGetValueTypeHash)
// struct FResults_CommanderXP_Data   K2Node_MakeStruct_Results_CommanderXP_Data123                    (HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FResults_CommanderXP_Data   K2Node_MakeStruct_Results_CommanderXP_Data1234                   (HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue12                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_LastIndex_ReturnValue123                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FResults_CommanderXP_Data   CallFunc_Array_Get_Item1234                                      (HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue123                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue1234                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue1234                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FResults_CommanderXP_Data   K2Node_MakeStruct_Results_CommanderXP_Data12345                  (HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue12345                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetLevelProgress_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetOwningPlayerPawn_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerState*            K2Node_DynamicCast_AsFort_Player_State                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FUniqueNetIdRepl            CallFunc_GetUniqueID_ReturnValue                                 (HasGetValueTypeHash)
// int32                              CallFunc_GetScoreReportIndex_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortUIXpInfo               CallFunc_GetXpInfo_OutXpInfo                                     (NoDestructor)
// bool                               CallFunc_GetXpInfo_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UResults_CommanderXPBar_C::Initialize(class UFortUIScoreReport* InScoreReport, float PlayRate, const struct FFortExperienceDelta& ExperienceDelta, enum class EFortUIScoreType BonusScoreType, const struct FFortUIXpInfo& LocalPlayerXPInfo, int32 CurrentPlayerIndex, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, const struct FResults_CommanderXP_Data& CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue, const struct FResults_CommanderXP_Data& K2Node_MakeStruct_Results_CommanderXP_Data, int32 CallFunc_Add_IntInt_ReturnValue1, int32 CallFunc_Array_Add_ReturnValue, const struct FResults_CommanderXP_Data& K2Node_MakeStruct_Results_CommanderXP_Data1, const struct FResults_CommanderXP_Data& K2Node_MakeStruct_Results_CommanderXP_Data12, int32 CallFunc_Add_IntInt_ReturnValue12, bool CallFunc_Greater_IntInt_ReturnValue1, bool CallFunc_Greater_IntInt_ReturnValue12, int32 CallFunc_Array_LastIndex_ReturnValue1, int32 CallFunc_Array_LastIndex_ReturnValue12, const struct FResults_CommanderXP_Data& CallFunc_Array_Get_Item1, const struct FResults_CommanderXP_Data& CallFunc_Array_Get_Item12, int32 CallFunc_Add_IntInt_ReturnValue123, const struct FResults_CommanderXP_Data& CallFunc_Array_Get_Item123, const struct FResults_CommanderXP_Data& K2Node_MakeStruct_Results_CommanderXP_Data123, int32 CallFunc_Subtract_IntInt_ReturnValue, const struct FResults_CommanderXP_Data& K2Node_MakeStruct_Results_CommanderXP_Data1234, int32 CallFunc_Array_Add_ReturnValue1, int32 CallFunc_Array_Add_ReturnValue12, int32 CallFunc_Array_LastIndex_ReturnValue123, const struct FResults_CommanderXP_Data& CallFunc_Array_Get_Item1234, int32 CallFunc_Array_Add_ReturnValue123, int32 CallFunc_Add_IntInt_ReturnValue1234, int32 CallFunc_Array_Add_ReturnValue1234, const struct FResults_CommanderXP_Data& K2Node_MakeStruct_Results_CommanderXP_Data12345, int32 CallFunc_Array_Add_ReturnValue12345, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_GetLevelProgress_ReturnValue, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class AFortPlayerState* K2Node_DynamicCast_AsFort_Player_State, bool K2Node_DynamicCast_bSuccess, const struct FUniqueNetIdRepl& CallFunc_GetUniqueID_ReturnValue, int32 CallFunc_GetScoreReportIndex_ReturnValue, const struct FFortUIXpInfo& CallFunc_GetXpInfo_OutXpInfo, bool CallFunc_GetXpInfo_ReturnValue)
{
	static auto Func = Class->GetFunction("Results_CommanderXPBar_C", "Initialize");

	Params::UResults_CommanderXPBar_C_Initialize_Params Parms;
	Parms.InScoreReport = InScoreReport;
	Parms.PlayRate = PlayRate;
	Parms.ExperienceDelta = ExperienceDelta;
	Parms.BonusScoreType = BonusScoreType;
	Parms.LocalPlayerXPInfo = LocalPlayerXPInfo;
	Parms.CurrentPlayerIndex = CurrentPlayerIndex;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_Results_CommanderXP_Data = K2Node_MakeStruct_Results_CommanderXP_Data;
	Parms.CallFunc_Add_IntInt_ReturnValue1 = CallFunc_Add_IntInt_ReturnValue1;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.K2Node_MakeStruct_Results_CommanderXP_Data1 = K2Node_MakeStruct_Results_CommanderXP_Data1;
	Parms.K2Node_MakeStruct_Results_CommanderXP_Data12 = K2Node_MakeStruct_Results_CommanderXP_Data12;
	Parms.CallFunc_Add_IntInt_ReturnValue12 = CallFunc_Add_IntInt_ReturnValue12;
	Parms.CallFunc_Greater_IntInt_ReturnValue1 = CallFunc_Greater_IntInt_ReturnValue1;
	Parms.CallFunc_Greater_IntInt_ReturnValue12 = CallFunc_Greater_IntInt_ReturnValue12;
	Parms.CallFunc_Array_LastIndex_ReturnValue1 = CallFunc_Array_LastIndex_ReturnValue1;
	Parms.CallFunc_Array_LastIndex_ReturnValue12 = CallFunc_Array_LastIndex_ReturnValue12;
	Parms.CallFunc_Array_Get_Item1 = CallFunc_Array_Get_Item1;
	Parms.CallFunc_Array_Get_Item12 = CallFunc_Array_Get_Item12;
	Parms.CallFunc_Add_IntInt_ReturnValue123 = CallFunc_Add_IntInt_ReturnValue123;
	Parms.CallFunc_Array_Get_Item123 = CallFunc_Array_Get_Item123;
	Parms.K2Node_MakeStruct_Results_CommanderXP_Data123 = K2Node_MakeStruct_Results_CommanderXP_Data123;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_Results_CommanderXP_Data1234 = K2Node_MakeStruct_Results_CommanderXP_Data1234;
	Parms.CallFunc_Array_Add_ReturnValue1 = CallFunc_Array_Add_ReturnValue1;
	Parms.CallFunc_Array_Add_ReturnValue12 = CallFunc_Array_Add_ReturnValue12;
	Parms.CallFunc_Array_LastIndex_ReturnValue123 = CallFunc_Array_LastIndex_ReturnValue123;
	Parms.CallFunc_Array_Get_Item1234 = CallFunc_Array_Get_Item1234;
	Parms.CallFunc_Array_Add_ReturnValue123 = CallFunc_Array_Add_ReturnValue123;
	Parms.CallFunc_Add_IntInt_ReturnValue1234 = CallFunc_Add_IntInt_ReturnValue1234;
	Parms.CallFunc_Array_Add_ReturnValue1234 = CallFunc_Array_Add_ReturnValue1234;
	Parms.K2Node_MakeStruct_Results_CommanderXP_Data12345 = K2Node_MakeStruct_Results_CommanderXP_Data12345;
	Parms.CallFunc_Array_Add_ReturnValue12345 = CallFunc_Array_Add_ReturnValue12345;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_GetLevelProgress_ReturnValue = CallFunc_GetLevelProgress_ReturnValue;
	Parms.CallFunc_GetOwningPlayerPawn_ReturnValue = CallFunc_GetOwningPlayerPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_State = K2Node_DynamicCast_AsFort_Player_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetUniqueID_ReturnValue = CallFunc_GetUniqueID_ReturnValue;
	Parms.CallFunc_GetScoreReportIndex_ReturnValue = CallFunc_GetScoreReportIndex_ReturnValue;
	Parms.CallFunc_GetXpInfo_OutXpInfo = CallFunc_GetXpInfo_OutXpInfo;
	Parms.CallFunc_GetXpInfo_ReturnValue = CallFunc_GetXpInfo_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Results_CommanderXPBar.Results_CommanderXPBar_C.UpdateCount
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CheckStartXP                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CheckEndXP                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              TimePassed                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FResults_CommanderXP_Data   CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// struct FResults_CommanderXP_Data   CallFunc_Array_Get_Item1                                         (HasGetValueTypeHash)
// struct FResults_CommanderXP_Data   CallFunc_Array_Get_Item12                                        (HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetXpToCompleteLevel_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FResults_CommanderXP_Data   K2Node_MakeStruct_Results_CommanderXP_Data                       (HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FMin_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FInterpEaseInOut_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetLevelProgress_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetLevelProgress_ReturnValue1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_FloatFloat_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UResults_CommanderXPBar_C::UpdateCount(int32 CheckStartXP, int32 CheckEndXP, float TimePassed, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, const struct FResults_CommanderXP_Data& CallFunc_Array_Get_Item, const struct FResults_CommanderXP_Data& CallFunc_Array_Get_Item1, const struct FResults_CommanderXP_Data& CallFunc_Array_Get_Item12, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_GetXpToCompleteLevel_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue1, const struct FResults_CommanderXP_Data& K2Node_MakeStruct_Results_CommanderXP_Data, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue1, float CallFunc_GetGameTimeInSeconds_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_FMin_ReturnValue, float CallFunc_FInterpEaseInOut_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, float CallFunc_GetLevelProgress_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue1, bool CallFunc_EqualEqual_IntInt_ReturnValue, float CallFunc_GetLevelProgress_ReturnValue1, bool CallFunc_EqualEqual_FloatFloat_ReturnValue)
{
	static auto Func = Class->GetFunction("Results_CommanderXPBar_C", "UpdateCount");

	Params::UResults_CommanderXPBar_C_UpdateCount_Params Parms;
	Parms.CheckStartXP = CheckStartXP;
	Parms.CheckEndXP = CheckEndXP;
	Parms.TimePassed = TimePassed;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item1 = CallFunc_Array_Get_Item1;
	Parms.CallFunc_Array_Get_Item12 = CallFunc_Array_Get_Item12;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetXpToCompleteLevel_ReturnValue = CallFunc_GetXpToCompleteLevel_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue1 = CallFunc_Subtract_IntInt_ReturnValue1;
	Parms.K2Node_MakeStruct_Results_CommanderXP_Data = K2Node_MakeStruct_Results_CommanderXP_Data;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue1 = CallFunc_Conv_IntToFloat_ReturnValue1;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_FMin_ReturnValue = CallFunc_FMin_ReturnValue;
	Parms.CallFunc_FInterpEaseInOut_ReturnValue = CallFunc_FInterpEaseInOut_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_GetLevelProgress_ReturnValue = CallFunc_GetLevelProgress_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue1 = CallFunc_Add_IntInt_ReturnValue1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetLevelProgress_ReturnValue1 = CallFunc_GetLevelProgress_ReturnValue1;
	Parms.CallFunc_EqualEqual_FloatFloat_ReturnValue = CallFunc_EqualEqual_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Results_CommanderXPBar.Results_CommanderXPBar_C.Intro Sequence
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UResults_CommanderXPBar_C::Intro_Sequence()
{
	static auto Func = Class->GetFunction("Results_CommanderXPBar_C", "Intro Sequence");

	Params::UResults_CommanderXPBar_C_Intro_Sequence_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Results_CommanderXPBar.Results_CommanderXPBar_C.Count Sequence
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UResults_CommanderXPBar_C::Count_Sequence()
{
	static auto Func = Class->GetFunction("Results_CommanderXPBar_C", "Count Sequence");

	Params::UResults_CommanderXPBar_C_Count_Sequence_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Results_CommanderXPBar.Results_CommanderXPBar_C.BndEvt__Anim_Intro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UResults_CommanderXPBar_C::BndEvt__Anim_Intro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto Func = Class->GetFunction("Results_CommanderXPBar_C", "BndEvt__Anim_Intro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	Params::UResults_CommanderXPBar_C_BndEvt__Anim_Intro_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Results_CommanderXPBar.Results_CommanderXPBar_C.On Count Finished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UResults_CommanderXPBar_C::On_Count_Finished()
{
	static auto Func = Class->GetFunction("Results_CommanderXPBar_C", "On Count Finished");

	Params::UResults_CommanderXPBar_C_On_Count_Finished_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Results_CommanderXPBar.Results_CommanderXPBar_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UResults_CommanderXPBar_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("Results_CommanderXPBar_C", "PreConstruct");

	Params::UResults_CommanderXPBar_C_PreConstruct_Params Parms;
	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Results_CommanderXPBar.Results_CommanderXPBar_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UResults_CommanderXPBar_C::Construct()
{
	static auto Func = Class->GetFunction("Results_CommanderXPBar_C", "Construct");

	Params::UResults_CommanderXPBar_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Results_CommanderXPBar.Results_CommanderXPBar_C.ExecuteUbergraph_Results_CommanderXPBar
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue12                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue123                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAudioComponent*             CallFunc_SpawnSound2D_ReturnValue                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UResults_CommanderXPBar_C::ExecuteUbergraph_Results_CommanderXPBar(int32 EntryPoint, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue12, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue, bool CallFunc_BooleanOR_ReturnValue123, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool K2Node_Event_IsDesignTime, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue)
{
	static auto Func = Class->GetFunction("Results_CommanderXPBar_C", "ExecuteUbergraph_Results_CommanderXPBar");

	Params::UResults_CommanderXPBar_C_ExecuteUbergraph_Results_CommanderXPBar_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue1 = CallFunc_BooleanOR_ReturnValue1;
	Parms.CallFunc_BooleanOR_ReturnValue12 = CallFunc_BooleanOR_ReturnValue12;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue123 = CallFunc_BooleanOR_ReturnValue123;
	Parms.CallFunc_SpawnSound2D_ReturnValue = CallFunc_SpawnSound2D_ReturnValue;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Results_CommanderXPBar.Results_CommanderXPBar_C.CountIncrement__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UResults_CommanderXPBar_C::CountIncrement__DelegateSignature()
{
	static auto Func = Class->GetFunction("Results_CommanderXPBar_C", "CountIncrement__DelegateSignature");

	Params::UResults_CommanderXPBar_C_CountIncrement__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Results_CommanderXPBar.Results_CommanderXPBar_C.IntroFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UResults_CommanderXPBar_C::IntroFinished__DelegateSignature()
{
	static auto Func = Class->GetFunction("Results_CommanderXPBar_C", "IntroFinished__DelegateSignature");

	Params::UResults_CommanderXPBar_C_IntroFinished__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Results_CommanderXPBar.Results_CommanderXPBar_C.LeveledUp__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewLevel                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UResults_CommanderXPBar_C::LeveledUp__DelegateSignature(int32 NewLevel)
{
	static auto Func = Class->GetFunction("Results_CommanderXPBar_C", "LeveledUp__DelegateSignature");

	Params::UResults_CommanderXPBar_C_LeveledUp__DelegateSignature_Params Parms;
	Parms.NewLevel = NewLevel;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Results_CommanderXPBar.Results_CommanderXPBar_C.CountFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UResults_CommanderXPBar_C::CountFinished__DelegateSignature()
{
	static auto Func = Class->GetFunction("Results_CommanderXPBar_C", "CountFinished__DelegateSignature");

	Params::UResults_CommanderXPBar_C_CountFinished__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
