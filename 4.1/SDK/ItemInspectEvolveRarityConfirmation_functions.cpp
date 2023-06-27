#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function ItemInspectEvolveRarityConfirmation.ItemInspectEvolveRarityConfirmation_C.Get Temp Item Based on Current Level
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UFortItem*                   Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   NewItem                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   TempItem                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItemDefinition*         CallFunc_GetItemDefinitionBP_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       CallFunc_GetOwningController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetLevel_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   CallFunc_CreateTemporaryInstanceFromExistingItemBP_ReturnValue   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectEvolveRarityConfirmation_C::Get_Temp_Item_Based_on_Current_Level(class UFortItem* Item, class UFortItem** NewItem, class UFortItem* TempItem, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue, class AFortPlayerController* CallFunc_GetOwningController_ReturnValue, int32 CallFunc_GetLevel_ReturnValue, class UFortItem* CallFunc_CreateTemporaryInstanceFromExistingItemBP_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemInspectEvolveRarityConfirmation_C", "Get Temp Item Based on Current Level");

	Params::UItemInspectEvolveRarityConfirmation_C_Get_Temp_Item_Based_on_Current_Level_Params Parms;
	Parms.Item = Item;
	Parms.TempItem = TempItem;
	Parms.CallFunc_GetItemDefinitionBP_ReturnValue = CallFunc_GetItemDefinitionBP_ReturnValue;
	Parms.CallFunc_GetOwningController_ReturnValue = CallFunc_GetOwningController_ReturnValue;
	Parms.CallFunc_GetLevel_ReturnValue = CallFunc_GetLevel_ReturnValue;
	Parms.CallFunc_CreateTemporaryInstanceFromExistingItemBP_ReturnValue = CallFunc_CreateTemporaryInstanceFromExistingItemBP_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
	if (NewItem != nullptr)
		*NewItem = Parms.NewItem;

}

// Function ItemInspectEvolveRarityConfirmation.ItemInspectEvolveRarityConfirmation_C.SetEvolutionRestrictions
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EItemEvolutionRestrictionReasonTemp_byte_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemEvolutionRestrictionReasonTemp_byte_Variable1                                              (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetEvolveRestrictionReasonText_ReturnValue              ()
// class FText                        CallFunc_GetEvolveRestrictionReasonText_ReturnValue1             ()
// enum class EItemEvolutionRestrictionReasonTemp_byte_Variable12                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EItemEvolutionRestrictionReason>CallFunc_CanUpgradeItemRarity_OutRestrictionReasons              (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_CanUpgradeItemRarity_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetEvolveRestrictionReasonText_ReturnValue12            ()
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Contains_ReturnValue1                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Contains_ReturnValue12                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemInspectEvolveRarityConfirmation_C::SetEvolutionRestrictions(enum class EItemEvolutionRestrictionReason Temp_byte_Variable, enum class EItemEvolutionRestrictionReason Temp_byte_Variable1, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, class FText CallFunc_GetEvolveRestrictionReasonText_ReturnValue, class FText CallFunc_GetEvolveRestrictionReasonText_ReturnValue1, enum class EItemEvolutionRestrictionReason Temp_byte_Variable12, TArray<enum class EItemEvolutionRestrictionReason>& CallFunc_CanUpgradeItemRarity_OutRestrictionReasons, bool CallFunc_CanUpgradeItemRarity_ReturnValue, class FText CallFunc_GetEvolveRestrictionReasonText_ReturnValue12, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Array_Contains_ReturnValue1, bool CallFunc_Array_Contains_ReturnValue12)
{
	static auto Func = Class->GetFunction("ItemInspectEvolveRarityConfirmation_C", "SetEvolutionRestrictions");

	Params::UItemInspectEvolveRarityConfirmation_C_SetEvolutionRestrictions_Params Parms;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetEvolveRestrictionReasonText_ReturnValue = CallFunc_GetEvolveRestrictionReasonText_ReturnValue;
	Parms.CallFunc_GetEvolveRestrictionReasonText_ReturnValue1 = CallFunc_GetEvolveRestrictionReasonText_ReturnValue1;
	Parms.Temp_byte_Variable12 = Temp_byte_Variable12;
	Parms.CallFunc_CanUpgradeItemRarity_OutRestrictionReasons = CallFunc_CanUpgradeItemRarity_OutRestrictionReasons;
	Parms.CallFunc_CanUpgradeItemRarity_ReturnValue = CallFunc_CanUpgradeItemRarity_ReturnValue;
	Parms.CallFunc_GetEvolveRestrictionReasonText_ReturnValue12 = CallFunc_GetEvolveRestrictionReasonText_ReturnValue12;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue1 = CallFunc_Array_Contains_ReturnValue1;
	Parms.CallFunc_Array_Contains_ReturnValue12 = CallFunc_Array_Contains_ReturnValue12;

	UObject::ProcessEvent(Func, &Parms);
}

// Function ItemInspectEvolveRarityConfirmation.ItemInspectEvolveRarityConfirmation_C.ClearEvolutionRepresented
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UItemInspectEvolveRarityConfirmation_C::ClearEvolutionRepresented()
{
	static auto Func = Class->GetFunction("ItemInspectEvolveRarityConfirmation_C", "ClearEvolutionRepresented");

	Params::UItemInspectEvolveRarityConfirmation_C_ClearEvolutionRepresented_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function ItemInspectEvolveRarityConfirmation.ItemInspectEvolveRarityConfirmation_C.OnShow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNumEvolutionOptions_NumRecipes                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UItemInspectEvolutionChoiceEntry_C*K2Node_DynamicCast_AsItem_Inspect_Evolution_Choice_Entry         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemInspectEvolveRarityConfirmation_C::OnShow(class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, int32 CallFunc_GetNumEvolutionOptions_NumRecipes, bool CallFunc_Greater_IntInt_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, class UItemInspectEvolutionChoiceEntry_C* K2Node_DynamicCast_AsItem_Inspect_Evolution_Choice_Entry, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemInspectEvolveRarityConfirmation_C", "OnShow");

	Params::UItemInspectEvolveRarityConfirmation_C_OnShow_Params Parms;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;
	Parms.CallFunc_GetNumEvolutionOptions_NumRecipes = CallFunc_GetNumEvolutionOptions_NumRecipes;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.K2Node_DynamicCast_AsItem_Inspect_Evolution_Choice_Entry = K2Node_DynamicCast_AsItem_Inspect_Evolution_Choice_Entry;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

// Function ItemInspectEvolveRarityConfirmation.ItemInspectEvolveRarityConfirmation_C.GetNumEvolutionOptions
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NumRecipes                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItemDefinition*         CallFunc_GetItemDefinitionBP_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRecipe                     CallFunc_GetUpgradeItemRarityRecipeFromItemDefintion_ReturnValue ()
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectEvolveRarityConfirmation_C::GetNumEvolutionOptions(int32* NumRecipes, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue, const struct FRecipe& CallFunc_GetUpgradeItemRarityRecipeFromItemDefintion_ReturnValue, int32 CallFunc_Array_Length_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemInspectEvolveRarityConfirmation_C", "GetNumEvolutionOptions");

	Params::UItemInspectEvolveRarityConfirmation_C_GetNumEvolutionOptions_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetItemDefinitionBP_ReturnValue = CallFunc_GetItemDefinitionBP_ReturnValue;
	Parms.CallFunc_GetUpgradeItemRarityRecipeFromItemDefintion_ReturnValue = CallFunc_GetUpgradeItemRarityRecipeFromItemDefintion_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
	if (NumRecipes != nullptr)
		*NumRecipes = Parms.NumRecipes;

}

// Function ItemInspectEvolveRarityConfirmation.ItemInspectEvolveRarityConfirmation_C.SetupEvolutionOptions
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                   TemporaryEvolutionItem                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UItemInspectEvolutionChoiceEntry_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   CallFunc_Get_Temp_Item_Based_on_Current_Level_NewItem            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class AFortPlayerController*       K2Node_DynamicCast_AsFort_Player_Controller                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortItemDefinition*         CallFunc_GetItemDefinitionBP_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRecipe                     CallFunc_GetUpgradeItemRarityRecipeFromItemDefintion_ReturnValue ()
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortItemQuantityPair       CallFunc_Array_Get_Item                                          ()
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItemDefinition*         CallFunc_GetItemFromItemQuantityPair_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortItem*                   CallFunc_CreateTemporaryInstanceFromExistingItemBP_ReturnValue   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue12                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAllowedConversionIndex_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemInspectEvolveRarityConfirmation_C::SetupEvolutionOptions(class UFortItem* TemporaryEvolutionItem, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UItemInspectEvolutionChoiceEntry_C* CallFunc_Create_ReturnValue, class UFortItem* CallFunc_Get_Temp_Item_Based_on_Current_Level_NewItem, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue1, const struct FRecipe& CallFunc_GetUpgradeItemRarityRecipeFromItemDefintion_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, const struct FFortItemQuantityPair& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UFortItemDefinition* CallFunc_GetItemFromItemQuantityPair_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UFortItem* CallFunc_CreateTemporaryInstanceFromExistingItemBP_ReturnValue, class UFortMcpContext* CallFunc_GetContext_ReturnValue12, bool CallFunc_IsAllowedConversionIndex_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemInspectEvolveRarityConfirmation_C", "SetupEvolutionOptions");

	Params::UItemInspectEvolveRarityConfirmation_C_SetupEvolutionOptions_Params Parms;
	Parms.TemporaryEvolutionItem = TemporaryEvolutionItem;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Get_Temp_Item_Based_on_Current_Level_NewItem = CallFunc_Get_Temp_Item_Based_on_Current_Level_NewItem;
	Parms.CallFunc_GetOwningPlayer_ReturnValue1 = CallFunc_GetOwningPlayer_ReturnValue1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller = K2Node_DynamicCast_AsFort_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetItemDefinitionBP_ReturnValue = CallFunc_GetItemDefinitionBP_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue1 = CallFunc_GetContext_ReturnValue1;
	Parms.CallFunc_GetUpgradeItemRarityRecipeFromItemDefintion_ReturnValue = CallFunc_GetUpgradeItemRarityRecipeFromItemDefintion_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetItemFromItemQuantityPair_ReturnValue = CallFunc_GetItemFromItemQuantityPair_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_CreateTemporaryInstanceFromExistingItemBP_ReturnValue = CallFunc_CreateTemporaryInstanceFromExistingItemBP_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue12 = CallFunc_GetContext_ReturnValue12;
	Parms.CallFunc_IsAllowedConversionIndex_ReturnValue = CallFunc_IsAllowedConversionIndex_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

// Function ItemInspectEvolveRarityConfirmation.ItemInspectEvolveRarityConfirmation_C.HandleEvolutionOptionSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                   Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              RecipeIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   TempItemForLevel                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   CallFunc_Get_Temp_Item_Based_on_Current_Level_NewItem            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectEvolveRarityConfirmation_C::HandleEvolutionOptionSelected(class UFortItem* Item, int32 RecipeIndex, class UFortItem* TempItemForLevel, class UFortItem* CallFunc_Get_Temp_Item_Based_on_Current_Level_NewItem)
{
	static auto Func = Class->GetFunction("ItemInspectEvolveRarityConfirmation_C", "HandleEvolutionOptionSelected");

	Params::UItemInspectEvolveRarityConfirmation_C_HandleEvolutionOptionSelected_Params Parms;
	Parms.Item = Item;
	Parms.RecipeIndex = RecipeIndex;
	Parms.TempItemForLevel = TempItemForLevel;
	Parms.CallFunc_Get_Temp_Item_Based_on_Current_Level_NewItem = CallFunc_Get_Temp_Item_Based_on_Current_Level_NewItem;

	UObject::ProcessEvent(Func, &Parms);
}

// Function ItemInspectEvolveRarityConfirmation.ItemInspectEvolveRarityConfirmation_C.SetEvolutionToRepresent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              EvolutionIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   EvolutionItem                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFortItemQuantityPair>Ingredients                                                      (Edit, BlueprintVisible, ZeroConstructor)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItemDefinition*         CallFunc_GetItemDefinitionBP_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRecipe                     CallFunc_GetUpgradeItemRarityRecipeFromItemDefintion_ReturnValue ()
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortItemQuantityPair       CallFunc_Array_Get_Item                                          ()
// class UFortItemDefinition*         CallFunc_GetItemFromItemQuantityPair_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   CallFunc_CreateTemporaryItemInstanceBP_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetDisplayName_ReturnValue                              ()

void UItemInspectEvolveRarityConfirmation_C::SetEvolutionToRepresent(int32 EvolutionIndex, class UFortItem* EvolutionItem, const TArray<struct FFortItemQuantityPair>& Ingredients, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue1, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue, const struct FRecipe& CallFunc_GetUpgradeItemRarityRecipeFromItemDefintion_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, const struct FFortItemQuantityPair& CallFunc_Array_Get_Item, class UFortItemDefinition* CallFunc_GetItemFromItemQuantityPair_ReturnValue, class UFortItem* CallFunc_CreateTemporaryItemInstanceBP_ReturnValue, class FText CallFunc_GetDisplayName_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemInspectEvolveRarityConfirmation_C", "SetEvolutionToRepresent");

	Params::UItemInspectEvolveRarityConfirmation_C_SetEvolutionToRepresent_Params Parms;
	Parms.EvolutionIndex = EvolutionIndex;
	Parms.EvolutionItem = EvolutionItem;
	Parms.Ingredients = Ingredients;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue1 = CallFunc_GetContext_ReturnValue1;
	Parms.CallFunc_GetItemDefinitionBP_ReturnValue = CallFunc_GetItemDefinitionBP_ReturnValue;
	Parms.CallFunc_GetUpgradeItemRarityRecipeFromItemDefintion_ReturnValue = CallFunc_GetUpgradeItemRarityRecipeFromItemDefintion_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetItemFromItemQuantityPair_ReturnValue = CallFunc_GetItemFromItemQuantityPair_ReturnValue;
	Parms.CallFunc_CreateTemporaryItemInstanceBP_ReturnValue = CallFunc_CreateTemporaryItemInstanceBP_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

// Function ItemInspectEvolveRarityConfirmation.ItemInspectEvolveRarityConfirmation_C.SetItemToRepresent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                   Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CanUpgradeRarity                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               NoEvolutions                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EItemEvolutionRestrictionReason>CallFunc_CanUpgradeItemRarity_OutRestrictionReasons              (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_CanUpgradeItemRarity_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetNumEvolutionOptions_NumRecipes                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemEvolutionRestrictionReasonCallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemInspectEvolveRarityConfirmation_C::SetItemToRepresent(class UFortItem* Item, bool CanUpgradeRarity, bool NoEvolutions, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<enum class EItemEvolutionRestrictionReason>& CallFunc_CanUpgradeItemRarity_OutRestrictionReasons, bool CallFunc_CanUpgradeItemRarity_ReturnValue, int32 CallFunc_GetNumEvolutionOptions_NumRecipes, enum class EItemEvolutionRestrictionReason CallFunc_Array_Get_Item, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemInspectEvolveRarityConfirmation_C", "SetItemToRepresent");

	Params::UItemInspectEvolveRarityConfirmation_C_SetItemToRepresent_Params Parms;
	Parms.Item = Item;
	Parms.CanUpgradeRarity = CanUpgradeRarity;
	Parms.NoEvolutions = NoEvolutions;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_CanUpgradeItemRarity_OutRestrictionReasons = CallFunc_CanUpgradeItemRarity_OutRestrictionReasons;
	Parms.CallFunc_CanUpgradeItemRarity_ReturnValue = CallFunc_CanUpgradeItemRarity_ReturnValue;
	Parms.CallFunc_GetNumEvolutionOptions_NumRecipes = CallFunc_GetNumEvolutionOptions_NumRecipes;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

// Function ItemInspectEvolveRarityConfirmation.ItemInspectEvolveRarityConfirmation_C.BndEvt__UpgradeConfirmButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectEvolveRarityConfirmation_C::BndEvt__UpgradeConfirmButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("ItemInspectEvolveRarityConfirmation_C", "BndEvt__UpgradeConfirmButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature");

	Params::UItemInspectEvolveRarityConfirmation_C_BndEvt__UpgradeConfirmButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}

// Function ItemInspectEvolveRarityConfirmation.ItemInspectEvolveRarityConfirmation_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UItemInspectEvolveRarityConfirmation_C::Construct()
{
	static auto Func = Class->GetFunction("ItemInspectEvolveRarityConfirmation_C", "Construct");

	Params::UItemInspectEvolveRarityConfirmation_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function ItemInspectEvolveRarityConfirmation.ItemInspectEvolveRarityConfirmation_C.ExecuteUbergraph_ItemInspectEvolveRarityConfirmation
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonGroup*          CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectEvolveRarityConfirmation_C::ExecuteUbergraph_ItemInspectEvolveRarityConfirmation(int32 EntryPoint, class UCommonButton* K2Node_ComponentBoundEvent_Button, class UCommonButtonGroup* CallFunc_SpawnObject_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemInspectEvolveRarityConfirmation_C", "ExecuteUbergraph_ItemInspectEvolveRarityConfirmation");

	Params::UItemInspectEvolveRarityConfirmation_C_ExecuteUbergraph_ItemInspectEvolveRarityConfirmation_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

// Function ItemInspectEvolveRarityConfirmation.ItemInspectEvolveRarityConfirmation_C.OnEvolutionOptionSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                   Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              RecipeIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectEvolveRarityConfirmation_C::OnEvolutionOptionSelected__DelegateSignature(class UFortItem* Item, int32 RecipeIndex)
{
	static auto Func = Class->GetFunction("ItemInspectEvolveRarityConfirmation_C", "OnEvolutionOptionSelected__DelegateSignature");

	Params::UItemInspectEvolveRarityConfirmation_C_OnEvolutionOptionSelected__DelegateSignature_Params Parms;
	Parms.Item = Item;
	Parms.RecipeIndex = RecipeIndex;

	UObject::ProcessEvent(Func, &Parms);
}

// Function ItemInspectEvolveRarityConfirmation.ItemInspectEvolveRarityConfirmation_C.OnEvolutionOptionUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                   Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectEvolveRarityConfirmation_C::OnEvolutionOptionUnhovered__DelegateSignature(class UFortItem* Item)
{
	static auto Func = Class->GetFunction("ItemInspectEvolveRarityConfirmation_C", "OnEvolutionOptionUnhovered__DelegateSignature");

	Params::UItemInspectEvolveRarityConfirmation_C_OnEvolutionOptionUnhovered__DelegateSignature_Params Parms;
	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);
}

// Function ItemInspectEvolveRarityConfirmation.ItemInspectEvolveRarityConfirmation_C.OnEvolutionOptionHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                   Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectEvolveRarityConfirmation_C::OnEvolutionOptionHovered__DelegateSignature(class UFortItem* Item)
{
	static auto Func = Class->GetFunction("ItemInspectEvolveRarityConfirmation_C", "OnEvolutionOptionHovered__DelegateSignature");

	Params::UItemInspectEvolveRarityConfirmation_C_OnEvolutionOptionHovered__DelegateSignature_Params Parms;
	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);
}

// Function ItemInspectEvolveRarityConfirmation.ItemInspectEvolveRarityConfirmation_C.OnEvolutionConfirm__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UItemInspectEvolveRarityConfirmation_C::OnEvolutionConfirm__DelegateSignature()
{
	static auto Func = Class->GetFunction("ItemInspectEvolveRarityConfirmation_C", "OnEvolutionConfirm__DelegateSignature");

	Params::UItemInspectEvolveRarityConfirmation_C_OnEvolutionConfirm__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
