#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function AthenaChallengesTab.AthenaChallengesTab_C.GetAthenaEventTime
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTimespan                   Result                                                           (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       K2Node_DynamicCast_AsFort_Player_Controller                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTimespan                   CallFunc_GetTimeSinceAthenaSeasonStart_ReturnValue               (NoDestructor, HasGetValueTypeHash)

void UAthenaChallengesTab_C::GetAthenaEventTime(struct FTimespan* Result, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, const struct FTimespan& CallFunc_GetTimeSinceAthenaSeasonStart_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaChallengesTab_C", "GetAthenaEventTime");

	Params::UAthenaChallengesTab_C_GetAthenaEventTime_Params Parms;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller = K2Node_DynamicCast_AsFort_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetTimeSinceAthenaSeasonStart_ReturnValue = CallFunc_GetTimeSinceAthenaSeasonStart_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
	if (Result != nullptr)
		*Result = Parms.Result;

}

// Function AthenaChallengesTab.AthenaChallengesTab_C.ConstructTimespanSource
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortTimerTimespanDataSource*NewObject                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UFortTimerTimespanDataSource*CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaChallengesTab_C::ConstructTimespanSource(class UFortTimerTimespanDataSource** NewObject, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortTimerTimespanDataSource* CallFunc_SpawnObject_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaChallengesTab_C", "ConstructTimespanSource");

	Params::UAthenaChallengesTab_C_ConstructTimespanSource_Params Parms;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
	if (NewObject != nullptr)
		*NewObject = Parms.NewObject;

}

// Function AthenaChallengesTab.AthenaChallengesTab_C.SetupChallengeBundleInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UChallengeBundlePage_C*      InChallengeBundlePageWidget                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonUIContext*            CallFunc_GetContext_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonInputManager*         CallFunc_GetInputManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInZone_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMobileGame_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaChallengesTab_C::SetupChallengeBundleInfo(class UChallengeBundlePage_C* InChallengeBundlePageWidget, class UFortHUDContext* CallFunc_GetContext_ReturnValue, class UCommonUIContext* CallFunc_GetContext_ReturnValue1, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue2, class UCommonInputManager* CallFunc_GetInputManager_ReturnValue, bool CallFunc_IsInZone_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue3, bool CallFunc_IsMobileGame_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue4)
{
	static auto Func = Class->GetFunction("AthenaChallengesTab_C", "SetupChallengeBundleInfo");

	Params::UAthenaChallengesTab_C_SetupChallengeBundleInfo_Params Parms;
	Parms.InChallengeBundlePageWidget = InChallengeBundlePageWidget;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue1 = CallFunc_GetContext_ReturnValue1;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_GetInputManager_ReturnValue = CallFunc_GetInputManager_ReturnValue;
	Parms.CallFunc_IsInZone_ReturnValue = CallFunc_IsInZone_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue3 = CallFunc_GetContext_ReturnValue3;
	Parms.CallFunc_IsMobileGame_ReturnValue = CallFunc_IsMobileGame_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue4 = CallFunc_GetContext_ReturnValue4;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaChallengesTab.AthenaChallengesTab_C.SetupFrontendInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsInZone_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaChallengesTab_C::SetupFrontendInfo(class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsInZone_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue1, bool CallFunc_Not_PreBool_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaChallengesTab_C", "SetupFrontendInfo");

	Params::UAthenaChallengesTab_C_SetupFrontendInfo_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsInZone_ReturnValue = CallFunc_IsInZone_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue1 = CallFunc_GetContext_ReturnValue1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaChallengesTab.AthenaChallengesTab_C.InitializeInput
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle                             (NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInZone_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaChallengesTab_C::InitializeInput(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsInZone_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaChallengesTab_C", "InitializeInput");

	Params::UAthenaChallengesTab_C_InitializeInput_Params Parms;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_MakeStruct_DataTableRowHandle = K2Node_MakeStruct_DataTableRowHandle;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_IsInZone_ReturnValue = CallFunc_IsInZone_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaChallengesTab.AthenaChallengesTab_C.OnBack
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Passthrough                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaChallengesTab_C::OnBack(bool* Passthrough, class UFortHUDContext* CallFunc_GetContext_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaChallengesTab_C", "OnBack");

	Params::UAthenaChallengesTab_C_OnBack_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
	if (Passthrough != nullptr)
		*Passthrough = Parms.Passthrough;

}

// Function AthenaChallengesTab.AthenaChallengesTab_C.OnCursorModeChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsEnabled                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonUIContext*            CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsActivated_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonInputManager*         CallFunc_GetInputManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaChallengesTab_C::OnCursorModeChanged(bool IsEnabled, bool CallFunc_Not_PreBool_ReturnValue, class UCommonUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsActivated_ReturnValue, class UCommonInputManager* CallFunc_GetInputManager_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaChallengesTab_C", "OnCursorModeChanged");

	Params::UAthenaChallengesTab_C_OnCursorModeChanged_Params Parms;
	Parms.IsEnabled = IsEnabled;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_IsActivated_ReturnValue = CallFunc_IsActivated_ReturnValue;
	Parms.CallFunc_GetInputManager_ReturnValue = CallFunc_GetInputManager_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaChallengesTab.AthenaChallengesTab_C.SetBackground
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsInGame                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EHorizontalAlignment    Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EHorizontalAlignment    Temp_byte_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable5                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInZone_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EHorizontalAlignment    K2Node_Select1_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (IsPlainOldData, NoDestructor)
// struct FMargin                     K2Node_MakeStruct_Margin1                                        (IsPlainOldData, NoDestructor)
// struct FMargin                     K2Node_Select3_Default                                           (IsPlainOldData, NoDestructor)
// class UBorderSlot*                 CallFunc_SlotAsBorderSlot_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOverlaySlot*                CallFunc_SlotAsOverlaySlot_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_MakeStruct_Margin2                                        (IsPlainOldData, NoDestructor)
// struct FMargin                     K2Node_MakeStruct_Margin3                                        (IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable5                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FMargin                     K2Node_Select4_Default                                           (IsPlainOldData, NoDestructor)
// float                              K2Node_Select5_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaChallengesTab_C::SetBackground(bool IsInGame, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, bool Temp_bool_Variable1, enum class EHorizontalAlignment Temp_byte_Variable2, enum class EHorizontalAlignment Temp_byte_Variable3, bool Temp_bool_Variable2, bool Temp_bool_Variable3, bool Temp_bool_Variable4, enum class ESlateVisibility Temp_byte_Variable4, enum class ESlateVisibility Temp_byte_Variable5, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, float Temp_float_Variable, bool CallFunc_IsInZone_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, enum class EHorizontalAlignment K2Node_Select1_Default, float Temp_float_Variable1, enum class ESlateVisibility K2Node_Select2_Default, const struct FMargin& K2Node_MakeStruct_Margin, const struct FMargin& K2Node_MakeStruct_Margin1, const struct FMargin& K2Node_Select3_Default, class UBorderSlot* CallFunc_SlotAsBorderSlot_ReturnValue, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin2, const struct FMargin& K2Node_MakeStruct_Margin3, bool Temp_bool_Variable5, const struct FMargin& K2Node_Select4_Default, float K2Node_Select5_Default)
{
	static auto Func = Class->GetFunction("AthenaChallengesTab_C", "SetBackground");

	Params::UAthenaChallengesTab_C_SetBackground_Params Parms;
	Parms.IsInGame = IsInGame;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_byte_Variable3 = Temp_byte_Variable3;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.Temp_bool_Variable3 = Temp_bool_Variable3;
	Parms.Temp_bool_Variable4 = Temp_bool_Variable4;
	Parms.Temp_byte_Variable4 = Temp_byte_Variable4;
	Parms.Temp_byte_Variable5 = Temp_byte_Variable5;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.CallFunc_IsInZone_ReturnValue = CallFunc_IsInZone_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.Temp_float_Variable1 = Temp_float_Variable1;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.K2Node_MakeStruct_Margin1 = K2Node_MakeStruct_Margin1;
	Parms.K2Node_Select3_Default = K2Node_Select3_Default;
	Parms.CallFunc_SlotAsBorderSlot_ReturnValue = CallFunc_SlotAsBorderSlot_ReturnValue;
	Parms.CallFunc_SlotAsOverlaySlot_ReturnValue = CallFunc_SlotAsOverlaySlot_ReturnValue;
	Parms.K2Node_MakeStruct_Margin2 = K2Node_MakeStruct_Margin2;
	Parms.K2Node_MakeStruct_Margin3 = K2Node_MakeStruct_Margin3;
	Parms.Temp_bool_Variable5 = Temp_bool_Variable5;
	Parms.K2Node_Select4_Default = K2Node_Select4_Default;
	Parms.K2Node_Select5_Default = K2Node_Select5_Default;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaChallengesTab.AthenaChallengesTab_C.SelectFirstBundle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     CallFunc_GetItemAt_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortChallengeBundleCategoryInfo*K2Node_DynamicCast_AsFort_Challenge_Bundle_Category_Info         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UFortChallengeBundleInfo*>CallFunc_GetChallengeBundleInfos_ReturnValue                     (ZeroConstructor, ReferenceParm)
// class UFortChallengeBundleInfo*    CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaChallengesTab_C::SelectFirstBundle(class UObject* CallFunc_GetItemAt_ReturnValue, class UFortChallengeBundleCategoryInfo* K2Node_DynamicCast_AsFort_Challenge_Bundle_Category_Info, bool K2Node_DynamicCast_bSuccess, TArray<class UFortChallengeBundleInfo*>& CallFunc_GetChallengeBundleInfos_ReturnValue, class UFortChallengeBundleInfo* CallFunc_Array_Get_Item)
{
	static auto Func = Class->GetFunction("AthenaChallengesTab_C", "SelectFirstBundle");

	Params::UAthenaChallengesTab_C_SelectFirstBundle_Params Parms;
	Parms.CallFunc_GetItemAt_ReturnValue = CallFunc_GetItemAt_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Challenge_Bundle_Category_Info = K2Node_DynamicCast_AsFort_Challenge_Bundle_Category_Info;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetChallengeBundleInfos_ReturnValue = CallFunc_GetChallengeBundleInfos_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaChallengesTab.AthenaChallengesTab_C.TreeViewGetChildrenForCategory
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UObject*>             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm)
// class UFortChallengeBundleCategoryInfo*K2Node_DynamicCast_AsFort_Challenge_Bundle_Category_Info         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UFortChallengeBundleInfo*>CallFunc_GetChallengeBundleInfos_ReturnValue                     (ZeroConstructor, ReferenceParm)

TArray<class UObject*> UAthenaChallengesTab_C::TreeViewGetChildrenForCategory(class UObject* Item, class UFortChallengeBundleCategoryInfo* K2Node_DynamicCast_AsFort_Challenge_Bundle_Category_Info, bool K2Node_DynamicCast_bSuccess, TArray<class UFortChallengeBundleInfo*>& CallFunc_GetChallengeBundleInfos_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaChallengesTab_C", "TreeViewGetChildrenForCategory");

	Params::UAthenaChallengesTab_C_TreeViewGetChildrenForCategory_Params Parms;
	Parms.Item = Item;
	Parms.K2Node_DynamicCast_AsFort_Challenge_Bundle_Category_Info = K2Node_DynamicCast_AsFort_Challenge_Bundle_Category_Info;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetChallengeBundleInfos_ReturnValue = CallFunc_GetChallengeBundleInfos_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
	return Parms.ReturnValue;

}

// Function AthenaChallengesTab.AthenaChallengesTab_C.SetupViewedItemData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                   Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaChallengesTab_C::SetupViewedItemData(class UFortItem* Item)
{
	static auto Func = Class->GetFunction("AthenaChallengesTab_C", "SetupViewedItemData");

	Params::UAthenaChallengesTab_C_SetupViewedItemData_Params Parms;
	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaChallengesTab.AthenaChallengesTab_C.UpdateChallengeViews
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsActivated_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UFortChallengeBundleCategoryInfo*>CallFunc_GetChallengeCategoryInfos_OutCategoryInfos              (ZeroConstructor, ReferenceParm)

void UAthenaChallengesTab_C::UpdateChallengeViews(bool CallFunc_IsActivated_ReturnValue, TArray<class UFortChallengeBundleCategoryInfo*>& CallFunc_GetChallengeCategoryInfos_OutCategoryInfos)
{
	static auto Func = Class->GetFunction("AthenaChallengesTab_C", "UpdateChallengeViews");

	Params::UAthenaChallengesTab_C_UpdateChallengeViews_Params Parms;
	Parms.CallFunc_IsActivated_ReturnValue = CallFunc_IsActivated_ReturnValue;
	Parms.CallFunc_GetChallengeCategoryInfos_OutCategoryInfos = CallFunc_GetChallengeCategoryInfos_OutCategoryInfos;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaChallengesTab.AthenaChallengesTab_C.HandleChallengesChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaChallengesTab_C::HandleChallengesChanged()
{
	static auto Func = Class->GetFunction("AthenaChallengesTab_C", "HandleChallengesChanged");

	Params::UAthenaChallengesTab_C_HandleChallengesChanged_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaChallengesTab.AthenaChallengesTab_C.BndEvt__ChallangeTreeView_K2Node_ComponentBoundEvent_40_OnListEntryGeneratedDynamic__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUserWidget*                 Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaChallengesTab_C::BndEvt__ChallangeTreeView_K2Node_ComponentBoundEvent_40_OnListEntryGeneratedDynamic__DelegateSignature(class UUserWidget* Widget)
{
	static auto Func = Class->GetFunction("AthenaChallengesTab_C", "BndEvt__ChallangeTreeView_K2Node_ComponentBoundEvent_40_OnListEntryGeneratedDynamic__DelegateSignature");

	Params::UAthenaChallengesTab_C_BndEvt__ChallangeTreeView_K2Node_ComponentBoundEvent_40_OnListEntryGeneratedDynamic__DelegateSignature_Params Parms;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaChallengesTab.AthenaChallengesTab_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAthenaChallengesTab_C::Construct()
{
	static auto Func = Class->GetFunction("AthenaChallengesTab_C", "Construct");

	Params::UAthenaChallengesTab_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaChallengesTab.AthenaChallengesTab_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaChallengesTab_C::OnActivated()
{
	static auto Func = Class->GetFunction("AthenaChallengesTab_C", "OnActivated");

	Params::UAthenaChallengesTab_C_OnActivated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaChallengesTab.AthenaChallengesTab_C.OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaChallengesTab_C::OnDeactivated()
{
	static auto Func = Class->GetFunction("AthenaChallengesTab_C", "OnDeactivated");

	Params::UAthenaChallengesTab_C_OnDeactivated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaChallengesTab.AthenaChallengesTab_C.BndEvt__ChallangeTreeView_K2Node_ComponentBoundEvent_0_OnListViewItemClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UObject*                     Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaChallengesTab_C::BndEvt__ChallangeTreeView_K2Node_ComponentBoundEvent_0_OnListViewItemClicked__DelegateSignature(class UObject* Item)
{
	static auto Func = Class->GetFunction("AthenaChallengesTab_C", "BndEvt__ChallangeTreeView_K2Node_ComponentBoundEvent_0_OnListViewItemClicked__DelegateSignature");

	Params::UAthenaChallengesTab_C_BndEvt__ChallangeTreeView_K2Node_ComponentBoundEvent_0_OnListViewItemClicked__DelegateSignature_Params Parms;
	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaChallengesTab.AthenaChallengesTab_C.OnChallengesChanged
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaChallengesTab_C::OnChallengesChanged()
{
	static auto Func = Class->GetFunction("AthenaChallengesTab_C", "OnChallengesChanged");

	Params::UAthenaChallengesTab_C_OnChallengesChanged_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaChallengesTab.AthenaChallengesTab_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAthenaChallengesTab_C::Destruct()
{
	static auto Func = Class->GetFunction("AthenaChallengesTab_C", "Destruct");

	Params::UAthenaChallengesTab_C_Destruct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaChallengesTab.AthenaChallengesTab_C.OnRefreshNavigation
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaChallengesTab_C::OnRefreshNavigation()
{
	static auto Func = Class->GetFunction("AthenaChallengesTab_C", "OnRefreshNavigation");

	Params::UAthenaChallengesTab_C_OnRefreshNavigation_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaChallengesTab.AthenaChallengesTab_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaChallengesTab_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("AthenaChallengesTab_C", "PreConstruct");

	Params::UAthenaChallengesTab_C_PreConstruct_Params Parms;
	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaChallengesTab.AthenaChallengesTab_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAthenaChallengesTab_C::OnInitialized()
{
	static auto Func = Class->GetFunction("AthenaChallengesTab_C", "OnInitialized");

	Params::UAthenaChallengesTab_C_OnInitialized_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaChallengesTab.AthenaChallengesTab_C.ExecuteUbergraph_AthenaChallengesTab
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortTimerTimespanDataSource*CallFunc_ConstructTimespanSource_NewObject                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_BP_GetSelectedItem_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_ComponentBoundEvent_Item                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortChallengeBundleInfo*    K2Node_DynamicCast_AsFort_Challenge_Bundle_Info                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UChallengeBundlePage_C*      CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 K2Node_ComponentBoundEvent_Widget                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaChallengeTreeEntry_C* K2Node_DynamicCast_AsAthena_Challenge_Tree_Entry                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// UInterfaceProperty_                CallFunc_SetTimespanSource_Value_CastInput                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// class UAthenaAccountContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentSeasonNumber_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInZone_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaChallengesTab_C::ExecuteUbergraph_AthenaChallengesTab(int32 EntryPoint, class UFortTimerTimespanDataSource* CallFunc_ConstructTimespanSource_NewObject, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, class UObject* CallFunc_BP_GetSelectedItem_ReturnValue, class UObject* K2Node_ComponentBoundEvent_Item, class UFortChallengeBundleInfo* K2Node_DynamicCast_AsFort_Challenge_Bundle_Info, bool K2Node_DynamicCast_bSuccess, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UChallengeBundlePage_C* CallFunc_Create_ReturnValue, class UUserWidget* K2Node_ComponentBoundEvent_Widget, class UAthenaChallengeTreeEntry_C* K2Node_DynamicCast_AsAthena_Challenge_Tree_Entry, bool K2Node_DynamicCast_bSuccess1, UInterfaceProperty_ CallFunc_SetTimespanSource_Value_CastInput, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class UAthenaAccountContext* CallFunc_GetContext_ReturnValue, int32 CallFunc_GetCurrentSeasonNumber_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue1, class UFortHUDContext* CallFunc_GetContext_ReturnValue2, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue3, bool CallFunc_IsInZone_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool K2Node_Event_IsDesignTime)
{
	static auto Func = Class->GetFunction("AthenaChallengesTab_C", "ExecuteUbergraph_AthenaChallengesTab");

	Params::UAthenaChallengesTab_C_ExecuteUbergraph_AthenaChallengesTab_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_ConstructTimespanSource_NewObject = CallFunc_ConstructTimespanSource_NewObject;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;
	Parms.CallFunc_BP_GetSelectedItem_ReturnValue = CallFunc_BP_GetSelectedItem_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Item = K2Node_ComponentBoundEvent_Item;
	Parms.K2Node_DynamicCast_AsFort_Challenge_Bundle_Info = K2Node_DynamicCast_AsFort_Challenge_Bundle_Info;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Widget = K2Node_ComponentBoundEvent_Widget;
	Parms.K2Node_DynamicCast_AsAthena_Challenge_Tree_Entry = K2Node_DynamicCast_AsAthena_Challenge_Tree_Entry;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.CallFunc_SetTimespanSource_Value_CastInput = CallFunc_SetTimespanSource_Value_CastInput;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetCurrentSeasonNumber_ReturnValue = CallFunc_GetCurrentSeasonNumber_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue1 = CallFunc_GetContext_ReturnValue1;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_GetContext_ReturnValue3 = CallFunc_GetContext_ReturnValue3;
	Parms.CallFunc_IsInZone_ReturnValue = CallFunc_IsInZone_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
