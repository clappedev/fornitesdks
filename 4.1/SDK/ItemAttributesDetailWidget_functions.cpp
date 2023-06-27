#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function ItemAttributesDetailWidget.ItemAttributesDetailWidget_C.UpdateItemsForWidgets
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortTooltipUIContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortTooltipUIContext*       CallFunc_GetContext_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortTooltipUIContext*       CallFunc_GetContext_ReturnValue12                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortTooltipContext*         CallFunc_SpawnTooltipContextWithSource_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFortDisplayAttribute>CallFunc_GetUpgradeStats_ReturnValue                             (ZeroConstructor, ReferenceParm)
// TArray<struct FFortDisplayAttribute>CallFunc_GetTooltipStats_ReturnValue                             (ZeroConstructor, ReferenceParm)
// TArray<struct FFortDisplayAttribute>CallFunc_GetComparisonStats_ReturnValue                          (ZeroConstructor, ReferenceParm)

void UItemAttributesDetailWidget_C::UpdateItemsForWidgets(class UFortTooltipUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UFortTooltipUIContext* CallFunc_GetContext_ReturnValue1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UFortTooltipUIContext* CallFunc_GetContext_ReturnValue12, class UFortTooltipContext* CallFunc_SpawnTooltipContextWithSource_ReturnValue, TArray<struct FFortDisplayAttribute>& CallFunc_GetUpgradeStats_ReturnValue, TArray<struct FFortDisplayAttribute>& CallFunc_GetTooltipStats_ReturnValue, TArray<struct FFortDisplayAttribute>& CallFunc_GetComparisonStats_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemAttributesDetailWidget_C", "UpdateItemsForWidgets");

	Params::UItemAttributesDetailWidget_C_UpdateItemsForWidgets_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue1 = CallFunc_GetContext_ReturnValue1;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue12 = CallFunc_GetContext_ReturnValue12;
	Parms.CallFunc_SpawnTooltipContextWithSource_ReturnValue = CallFunc_SpawnTooltipContextWithSource_ReturnValue;
	Parms.CallFunc_GetUpgradeStats_ReturnValue = CallFunc_GetUpgradeStats_ReturnValue;
	Parms.CallFunc_GetTooltipStats_ReturnValue = CallFunc_GetTooltipStats_ReturnValue;
	Parms.CallFunc_GetComparisonStats_ReturnValue = CallFunc_GetComparisonStats_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

// Function ItemAttributesDetailWidget.ItemAttributesDetailWidget_C.HandlePostDifferentItemToDetailSet
// (Event, Protected, BlueprintEvent)
// Parameters:

void UItemAttributesDetailWidget_C::HandlePostDifferentItemToDetailSet()
{
	static auto Func = Class->GetFunction("ItemAttributesDetailWidget_C", "HandlePostDifferentItemToDetailSet");

	Params::UItemAttributesDetailWidget_C_HandlePostDifferentItemToDetailSet_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function ItemAttributesDetailWidget.ItemAttributesDetailWidget_C.HandlePostDifferentItemToCompareWithSet
// (Event, Protected, BlueprintEvent)
// Parameters:

void UItemAttributesDetailWidget_C::HandlePostDifferentItemToCompareWithSet()
{
	static auto Func = Class->GetFunction("ItemAttributesDetailWidget_C", "HandlePostDifferentItemToCompareWithSet");

	Params::UItemAttributesDetailWidget_C_HandlePostDifferentItemToCompareWithSet_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function ItemAttributesDetailWidget.ItemAttributesDetailWidget_C.HandleShouldPreviewUpgradingItemChanged
// (Event, Protected, BlueprintEvent)
// Parameters:

void UItemAttributesDetailWidget_C::HandleShouldPreviewUpgradingItemChanged()
{
	static auto Func = Class->GetFunction("ItemAttributesDetailWidget_C", "HandleShouldPreviewUpgradingItemChanged");

	Params::UItemAttributesDetailWidget_C_HandleShouldPreviewUpgradingItemChanged_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function ItemAttributesDetailWidget.ItemAttributesDetailWidget_C.HandlePreDifferentItemToDetailSet
// (Event, Protected, BlueprintEvent)
// Parameters:

void UItemAttributesDetailWidget_C::HandlePreDifferentItemToDetailSet()
{
	static auto Func = Class->GetFunction("ItemAttributesDetailWidget_C", "HandlePreDifferentItemToDetailSet");

	Params::UItemAttributesDetailWidget_C_HandlePreDifferentItemToDetailSet_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function ItemAttributesDetailWidget.ItemAttributesDetailWidget_C.HandlePreDifferentItemToCompareWithSet
// (Event, Protected, BlueprintEvent)
// Parameters:

void UItemAttributesDetailWidget_C::HandlePreDifferentItemToCompareWithSet()
{
	static auto Func = Class->GetFunction("ItemAttributesDetailWidget_C", "HandlePreDifferentItemToCompareWithSet");

	Params::UItemAttributesDetailWidget_C_HandlePreDifferentItemToCompareWithSet_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function ItemAttributesDetailWidget.ItemAttributesDetailWidget_C.HandleItemToDetailChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bItemChanged                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bAmmoChanged                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bIngredientsChanged                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemAttributesDetailWidget_C::HandleItemToDetailChanged(bool bItemChanged, bool bAmmoChanged, bool bIngredientsChanged)
{
	static auto Func = Class->GetFunction("ItemAttributesDetailWidget_C", "HandleItemToDetailChanged");

	Params::UItemAttributesDetailWidget_C_HandleItemToDetailChanged_Params Parms;
	Parms.bItemChanged = bItemChanged;
	Parms.bAmmoChanged = bAmmoChanged;
	Parms.bIngredientsChanged = bIngredientsChanged;

	UObject::ProcessEvent(Func, &Parms);
}

// Function ItemAttributesDetailWidget.ItemAttributesDetailWidget_C.HandleItemToCompareWithChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bItemChanged                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bAmmoChanged                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bIngredientsChanged                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemAttributesDetailWidget_C::HandleItemToCompareWithChanged(bool bItemChanged, bool bAmmoChanged, bool bIngredientsChanged)
{
	static auto Func = Class->GetFunction("ItemAttributesDetailWidget_C", "HandleItemToCompareWithChanged");

	Params::UItemAttributesDetailWidget_C_HandleItemToCompareWithChanged_Params Parms;
	Parms.bItemChanged = bItemChanged;
	Parms.bAmmoChanged = bAmmoChanged;
	Parms.bIngredientsChanged = bIngredientsChanged;

	UObject::ProcessEvent(Func, &Parms);
}

// Function ItemAttributesDetailWidget.ItemAttributesDetailWidget_C.ExecuteUbergraph_ItemAttributesDetailWidget
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               K2Node_CustomEvent_bItemChanged1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_bAmmoChanged1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_bIngredientsChanged1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_bItemChanged                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_bAmmoChanged                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_bIngredientsChanged                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue12                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue123                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate12                           (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate123                          (ZeroConstructor, NoDestructor)

void UItemAttributesDetailWidget_C::ExecuteUbergraph_ItemAttributesDetailWidget(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_CustomEvent_bItemChanged1, bool K2Node_CustomEvent_bAmmoChanged1, bool K2Node_CustomEvent_bIngredientsChanged1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, bool CallFunc_IsValid_ReturnValue, bool K2Node_CustomEvent_bItemChanged, bool K2Node_CustomEvent_bAmmoChanged, bool K2Node_CustomEvent_bIngredientsChanged, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_IsValid_ReturnValue12, bool CallFunc_IsValid_ReturnValue123, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate12, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate123)
{
	static auto Func = Class->GetFunction("ItemAttributesDetailWidget_C", "ExecuteUbergraph_ItemAttributesDetailWidget");

	Params::UItemAttributesDetailWidget_C_ExecuteUbergraph_ItemAttributesDetailWidget_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_bItemChanged1 = K2Node_CustomEvent_bItemChanged1;
	Parms.K2Node_CustomEvent_bAmmoChanged1 = K2Node_CustomEvent_bAmmoChanged1;
	Parms.K2Node_CustomEvent_bIngredientsChanged1 = K2Node_CustomEvent_bIngredientsChanged1;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CustomEvent_bItemChanged = K2Node_CustomEvent_bItemChanged;
	Parms.K2Node_CustomEvent_bAmmoChanged = K2Node_CustomEvent_bAmmoChanged;
	Parms.K2Node_CustomEvent_bIngredientsChanged = K2Node_CustomEvent_bIngredientsChanged;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.CallFunc_IsValid_ReturnValue12 = CallFunc_IsValid_ReturnValue12;
	Parms.CallFunc_IsValid_ReturnValue123 = CallFunc_IsValid_ReturnValue123;
	Parms.K2Node_CreateDelegate_OutputDelegate12 = K2Node_CreateDelegate_OutputDelegate12;
	Parms.K2Node_CreateDelegate_OutputDelegate123 = K2Node_CreateDelegate_OutputDelegate123;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
