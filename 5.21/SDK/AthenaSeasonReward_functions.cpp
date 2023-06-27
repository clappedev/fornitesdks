#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function AthenaSeasonReward.AthenaSeasonReward_C.ResetVariantToDefault
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItemDefinition*         CallFunc_GetItemDefinitionBP_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaCosmeticItemDefinition*K2Node_DynamicCast_AsAthena_Cosmetic_Item_Definition             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaSeasonReward_C::ResetVariantToDefault(class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue, class UAthenaCosmeticItemDefinition* K2Node_DynamicCast_AsAthena_Cosmetic_Item_Definition, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaSeasonReward_C", "ResetVariantToDefault");

	Params::UAthenaSeasonReward_C_ResetVariantToDefault_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetItemDefinitionBP_ReturnValue = CallFunc_GetItemDefinitionBP_ReturnValue;
	Parms.K2Node_DynamicCast_AsAthena_Cosmetic_Item_Definition = K2Node_DynamicCast_AsAthena_Cosmetic_Item_Definition;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaSeasonReward.AthenaSeasonReward_C.GetTemporaryItems
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// TArray<struct FFortCosmeticVariantPreviewElement>Cosmetics                                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UFortItem*>           Temporary_Items                                                  (Parm, OutParm, ZeroConstructor)
// TArray<class UFortItem*>           TemporaryItems                                                   (Edit, BlueprintVisible, ZeroConstructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortCosmeticVariantPreviewElementCallFunc_Array_Get_Item                                          ()
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortItem*                   CallFunc_CreateTemporaryItemInstanceBP_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaSeasonReward_C::GetTemporaryItems(TArray<struct FFortCosmeticVariantPreviewElement>& Cosmetics, TArray<class UFortItem*>* Temporary_Items, const TArray<class UFortItem*>& TemporaryItems, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FFortCosmeticVariantPreviewElement& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UFortItem* CallFunc_CreateTemporaryItemInstanceBP_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaSeasonReward_C", "GetTemporaryItems");

	Params::UAthenaSeasonReward_C_GetTemporaryItems_Params Parms;
	Parms.Cosmetics = Cosmetics;
	Parms.TemporaryItems = TemporaryItems;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_CreateTemporaryItemInstanceBP_ReturnValue = CallFunc_CreateTemporaryItemInstanceBP_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
	if (Temporary_Items != nullptr)
		*Temporary_Items = Parms.Temporary_Items;

}

// Function AthenaSeasonReward.AthenaSeasonReward_C.CancelVariantTimer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaSeasonReward_C::CancelVariantTimer()
{
	static auto Func = Class->GetFunction("AthenaSeasonReward_C", "CancelVariantTimer");

	Params::UAthenaSeasonReward_C_CancelVariantTimer_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaSeasonReward.AthenaSeasonReward_C.StartVariantTimer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue1                        (NoDestructor, HasGetValueTypeHash)

void UAthenaSeasonReward_C::StartVariantTimer(bool CallFunc_EqualEqual_IntInt_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue1)
{
	static auto Func = Class->GetFunction("AthenaSeasonReward_C", "StartVariantTimer");

	Params::UAthenaSeasonReward_C_StartVariantTimer_Params Parms;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue1 = CallFunc_K2_SetTimerDelegate_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaSeasonReward.AthenaSeasonReward_C.GetAthenaItemCharacterItemDefinition
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAthenaCharacterItemDefinition*AsAthena_Character_Item_Definition                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItemDefinition*         CallFunc_GetItemDefinitionBP_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaCharacterItemDefinition*K2Node_DynamicCast_AsAthena_Character_Item_Definition            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaSeasonReward_C::GetAthenaItemCharacterItemDefinition(class UAthenaCharacterItemDefinition** AsAthena_Character_Item_Definition, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue, class UAthenaCharacterItemDefinition* K2Node_DynamicCast_AsAthena_Character_Item_Definition, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("AthenaSeasonReward_C", "GetAthenaItemCharacterItemDefinition");

	Params::UAthenaSeasonReward_C_GetAthenaItemCharacterItemDefinition_Params Parms;
	Parms.CallFunc_GetItemDefinitionBP_ReturnValue = CallFunc_GetItemDefinitionBP_ReturnValue;
	Parms.K2Node_DynamicCast_AsAthena_Character_Item_Definition = K2Node_DynamicCast_AsAthena_Character_Item_Definition;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);
	if (AsAthena_Character_Item_Definition != nullptr)
		*AsAthena_Character_Item_Definition = Parms.AsAthena_Character_Item_Definition;

}

// Function AthenaSeasonReward.AthenaSeasonReward_C.OnVaultItemsChanged
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UFortItem*>           Items                                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UAthenaSeasonReward_C::OnVaultItemsChanged(TArray<class UFortItem*>& Items)
{
	static auto Func = Class->GetFunction("AthenaSeasonReward_C", "OnVaultItemsChanged");

	Params::UAthenaSeasonReward_C_OnVaultItemsChanged_Params Parms;
	Parms.Items = Items;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaSeasonReward.AthenaSeasonReward_C.ShowNextVariant
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FFortCosmeticVariantPreviewElement>Temp                                                             (Edit, BlueprintVisible, ZeroConstructor)
// int32                              VariantPreviewLength                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UFortItem*>           CallFunc_GetTemporaryItems_Temporary_Items                       (ZeroConstructor, ReferenceParm)
// int32                              CallFunc_Percent_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaCharacterItemDefinition*CallFunc_GetAthenaItemCharacterItemDefinition_AsAthena_Character_Item_Definition(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFortCosmeticVariantPreview>CallFunc_GetItemVariantPreviews_ReturnValue                      (ConstParm, ZeroConstructor, ReferenceParm)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FFortCosmeticVariantPreview>CallFunc_GetItemVariantPreviews_ReturnValue1                     (ConstParm, ZeroConstructor, ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMcpVariantChannelInfo      CallFunc_Array_Get_Item                                          ()
// int32                              CallFunc_Array_Length_ReturnValue1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FUnlockableVariantPreviewInfoK2Node_MakeStruct_UnlockableVariantPreviewInfo                   ()
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaSeasonReward_C::ShowNextVariant(const TArray<struct FFortCosmeticVariantPreviewElement>& Temp, int32 VariantPreviewLength, int32 Temp_int_Array_Index_Variable, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue1, int32 CallFunc_Add_IntInt_ReturnValue2, int32 Temp_int_Variable, bool CallFunc_Greater_IntInt_ReturnValue, TArray<class UFortItem*>& CallFunc_GetTemporaryItems_Temporary_Items, int32 CallFunc_Percent_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue3, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue1, class UAthenaCharacterItemDefinition* CallFunc_GetAthenaItemCharacterItemDefinition_AsAthena_Character_Item_Definition, TArray<struct FFortCosmeticVariantPreview>& CallFunc_GetItemVariantPreviews_ReturnValue, bool CallFunc_IsValid_ReturnValue, TArray<struct FFortCosmeticVariantPreview>& CallFunc_GetItemVariantPreviews_ReturnValue1, int32 CallFunc_Array_Length_ReturnValue, const struct FMcpVariantChannelInfo& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue1, bool CallFunc_Less_IntInt_ReturnValue, const struct FUnlockableVariantPreviewInfo& K2Node_MakeStruct_UnlockableVariantPreviewInfo, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue2, bool CallFunc_IsValid_ReturnValue1)
{
	static auto Func = Class->GetFunction("AthenaSeasonReward_C", "ShowNextVariant");

	Params::UAthenaSeasonReward_C_ShowNextVariant_Params Parms;
	Parms.Temp = Temp;
	Parms.VariantPreviewLength = VariantPreviewLength;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue1 = CallFunc_Add_IntInt_ReturnValue1;
	Parms.CallFunc_Add_IntInt_ReturnValue2 = CallFunc_Add_IntInt_ReturnValue2;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_GetTemporaryItems_Temporary_Items = CallFunc_GetTemporaryItems_Temporary_Items;
	Parms.CallFunc_Percent_IntInt_ReturnValue = CallFunc_Percent_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue3 = CallFunc_Add_IntInt_ReturnValue3;
	Parms.CallFunc_GetContext_ReturnValue1 = CallFunc_GetContext_ReturnValue1;
	Parms.CallFunc_GetAthenaItemCharacterItemDefinition_AsAthena_Character_Item_Definition = CallFunc_GetAthenaItemCharacterItemDefinition_AsAthena_Character_Item_Definition;
	Parms.CallFunc_GetItemVariantPreviews_ReturnValue = CallFunc_GetItemVariantPreviews_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetItemVariantPreviews_ReturnValue1 = CallFunc_GetItemVariantPreviews_ReturnValue1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue1 = CallFunc_Array_Length_ReturnValue1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_UnlockableVariantPreviewInfo = K2Node_MakeStruct_UnlockableVariantPreviewInfo;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaSeasonReward.AthenaSeasonReward_C.StopCyclingVariants
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)

void UAthenaSeasonReward_C::StopCyclingVariants(class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static auto Func = Class->GetFunction("AthenaSeasonReward_C", "StopCyclingVariants");

	Params::UAthenaSeasonReward_C_StopCyclingVariants_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaSeasonReward.AthenaSeasonReward_C.BeginCyclingVariants
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UFortItem*>           K2Node_MakeArray_Array                                           (ConstParm, ZeroConstructor, ReferenceParm)
// struct FUnlockableVariantPreviewInfoK2Node_MakeStruct_UnlockableVariantPreviewInfo                   ()
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaCharacterItemDefinition*CallFunc_GetAthenaItemCharacterItemDefinition_AsAthena_Character_Item_Definition(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FFortCosmeticVariantPreview>CallFunc_GetItemVariantPreviews_ReturnValue                      (ConstParm, ZeroConstructor, ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FUnlockableVariantPreviewInfoK2Node_MakeStruct_UnlockableVariantPreviewInfo1                  ()
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaSeasonReward_C::BeginCyclingVariants(TArray<class UFortItem*>& K2Node_MakeArray_Array, const struct FUnlockableVariantPreviewInfo& K2Node_MakeStruct_UnlockableVariantPreviewInfo, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, class UAthenaCharacterItemDefinition* CallFunc_GetAthenaItemCharacterItemDefinition_AsAthena_Character_Item_Definition, bool CallFunc_IsValid_ReturnValue, TArray<struct FFortCosmeticVariantPreview>& CallFunc_GetItemVariantPreviews_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue1, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FUnlockableVariantPreviewInfo& K2Node_MakeStruct_UnlockableVariantPreviewInfo1, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue2)
{
	static auto Func = Class->GetFunction("AthenaSeasonReward_C", "BeginCyclingVariants");

	Params::UAthenaSeasonReward_C_BeginCyclingVariants_Params Parms;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeStruct_UnlockableVariantPreviewInfo = K2Node_MakeStruct_UnlockableVariantPreviewInfo;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetAthenaItemCharacterItemDefinition_AsAthena_Character_Item_Definition = CallFunc_GetAthenaItemCharacterItemDefinition_AsAthena_Character_Item_Definition;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetItemVariantPreviews_ReturnValue = CallFunc_GetItemVariantPreviews_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue1 = CallFunc_GetContext_ReturnValue1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_MakeStruct_UnlockableVariantPreviewInfo1 = K2Node_MakeStruct_UnlockableVariantPreviewInfo1;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaSeasonReward.AthenaSeasonReward_C.ViewInVaultByUser
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaSeasonReward_C::ViewInVaultByUser()
{
	static auto Func = Class->GetFunction("AthenaSeasonReward_C", "ViewInVaultByUser");

	Params::UAthenaSeasonReward_C_ViewInVaultByUser_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaSeasonReward.AthenaSeasonReward_C.ViewInVault
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UFortItem*>           Additional_Items                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UFortItem*>           Mutable_Additional_Items                                         (Edit, BlueprintVisible, ZeroConstructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortItemDefinition*         CallFunc_GetItemDefinitionBP_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaCharacterItemDefinition*K2Node_DynamicCast_AsAthena_Character_Item_Definition            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaSeasonReward_C::ViewInVault(TArray<class UFortItem*>& Additional_Items, const TArray<class UFortItem*>& Mutable_Additional_Items, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsValid_ReturnValue1, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue, class UAthenaCharacterItemDefinition* K2Node_DynamicCast_AsAthena_Character_Item_Definition, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("AthenaSeasonReward_C", "ViewInVault");

	Params::UAthenaSeasonReward_C_ViewInVault_Params Parms;
	Parms.Additional_Items = Additional_Items;
	Parms.Mutable_Additional_Items = Mutable_Additional_Items;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.CallFunc_GetItemDefinitionBP_ReturnValue = CallFunc_GetItemDefinitionBP_ReturnValue;
	Parms.K2Node_DynamicCast_AsAthena_Character_Item_Definition = K2Node_DynamicCast_AsAthena_Character_Item_Definition;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaSeasonReward.AthenaSeasonReward_C.SetSecondaryItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                   SecondaryItem                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaSeasonReward_C::SetSecondaryItem(class UFortItem* SecondaryItem)
{
	static auto Func = Class->GetFunction("AthenaSeasonReward_C", "SetSecondaryItem");

	Params::UAthenaSeasonReward_C_SetSecondaryItem_Params Parms;
	Parms.SecondaryItem = SecondaryItem;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaSeasonReward.AthenaSeasonReward_C.EnableRarityFlare
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaSeasonReward_C::EnableRarityFlare()
{
	static auto Func = Class->GetFunction("AthenaSeasonReward_C", "EnableRarityFlare");

	Params::UAthenaSeasonReward_C_EnableRarityFlare_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaSeasonReward.AthenaSeasonReward_C.SetViewOnHover
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ShouldViewOnHover                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaSeasonReward_C::SetViewOnHover(bool ShouldViewOnHover)
{
	static auto Func = Class->GetFunction("AthenaSeasonReward_C", "SetViewOnHover");

	Params::UAthenaSeasonReward_C_SetViewOnHover_Params Parms;
	Parms.ShouldViewOnHover = ShouldViewOnHover;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaSeasonReward.AthenaSeasonReward_C.SetState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Claimed                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Locked                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               LevelAchieved                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select1_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaSeasonReward_C::SetState(bool Claimed, bool Locked, bool LevelAchieved, float Temp_float_Variable, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, bool Temp_bool_Variable1, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility Temp_byte_Variable2, enum class ESlateVisibility Temp_byte_Variable3, enum class ESlateVisibility K2Node_Select1_Default, float Temp_float_Variable1, bool Temp_bool_Variable2, float K2Node_Select2_Default)
{
	static auto Func = Class->GetFunction("AthenaSeasonReward_C", "SetState");

	Params::UAthenaSeasonReward_C_SetState_Params Parms;
	Parms.Claimed = Claimed;
	Parms.Locked = Locked;
	Parms.LevelAchieved = LevelAchieved;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_byte_Variable3 = Temp_byte_Variable3;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.Temp_float_Variable1 = Temp_float_Variable1;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaSeasonReward.AthenaSeasonReward_C.Setup
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                   ItemToRepresent                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Claimed                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Locked                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               LevelAchieved                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortItemCardSize       ItemCardSize                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortRarity             CallFunc_GetRarity_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortRarityItemData         CallFunc_BPGetRarityData_ReturnValue                             ()
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaSeasonReward_C::Setup(class UFortItem* ItemToRepresent, bool Claimed, bool Locked, bool LevelAchieved, enum class EFortItemCardSize ItemCardSize, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, enum class EFortRarity CallFunc_GetRarity_ReturnValue, const struct FFortRarityItemData& CallFunc_BPGetRarityData_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue1)
{
	static auto Func = Class->GetFunction("AthenaSeasonReward_C", "Setup");

	Params::UAthenaSeasonReward_C_Setup_Params Parms;
	Parms.ItemToRepresent = ItemToRepresent;
	Parms.Claimed = Claimed;
	Parms.Locked = Locked;
	Parms.LevelAchieved = LevelAchieved;
	Parms.ItemCardSize = ItemCardSize;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_GetRarity_ReturnValue = CallFunc_GetRarity_ReturnValue;
	Parms.CallFunc_BPGetRarityData_ReturnValue = CallFunc_BPGetRarityData_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue1 = CallFunc_GetDynamicMaterial_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaSeasonReward.AthenaSeasonReward_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaSeasonReward_C::BP_OnHovered()
{
	static auto Func = Class->GetFunction("AthenaSeasonReward_C", "BP_OnHovered");

	Params::UAthenaSeasonReward_C_BP_OnHovered_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaSeasonReward.AthenaSeasonReward_C.PlayIntro
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaSeasonReward_C::PlayIntro()
{
	static auto Func = Class->GetFunction("AthenaSeasonReward_C", "PlayIntro");

	Params::UAthenaSeasonReward_C_PlayIntro_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaSeasonReward.AthenaSeasonReward_C.ViewItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaSeasonReward_C::ViewItem()
{
	static auto Func = Class->GetFunction("AthenaSeasonReward_C", "ViewItem");

	Params::UAthenaSeasonReward_C_ViewItem_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaSeasonReward.AthenaSeasonReward_C.BP_OnClicked
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaSeasonReward_C::BP_OnClicked()
{
	static auto Func = Class->GetFunction("AthenaSeasonReward_C", "BP_OnClicked");

	Params::UAthenaSeasonReward_C_BP_OnClicked_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function AthenaSeasonReward.AthenaSeasonReward_C.ExecuteUbergraph_AthenaSeasonReward
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonInputContext*         CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        CallFunc_GetCurrentInputType_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaSeasonReward_C::ExecuteUbergraph_AthenaSeasonReward(int32 EntryPoint, class UCommonInputContext* CallFunc_GetContext_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaSeasonReward_C", "ExecuteUbergraph_AthenaSeasonReward");

	Params::UAthenaSeasonReward_C_ExecuteUbergraph_AthenaSeasonReward_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetCurrentInputType_ReturnValue = CallFunc_GetCurrentInputType_ReturnValue;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
