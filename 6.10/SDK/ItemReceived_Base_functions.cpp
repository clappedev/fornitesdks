#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function ItemReceived_Base.ItemReceived_Base_C.GetWidgetForFramingViewedItem
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UItemReceived_Base_C::GetWidgetForFramingViewedItem()
{
	static auto Func = Class->GetFunction("ItemReceived_Base_C", "GetWidgetForFramingViewedItem");

	Params::UItemReceived_Base_C_GetWidgetForFramingViewedItem_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
	return Parms.ReturnValue;

}

// Function ItemReceived_Base.ItemReceived_Base_C.HandleSelectionIncrement
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Increment                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Index                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable1                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemReceived_Base_C::HandleSelectionIncrement(bool Increment, int32* Index, int32 Temp_int_Variable, int32 Temp_int_Variable1, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue1, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemReceived_Base_C", "HandleSelectionIncrement");

	Params::UItemReceived_Base_C_HandleSelectionIncrement_Params Parms;
	Parms.Increment = Increment;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable1 = Temp_int_Variable1;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_GetChildrenCount_ReturnValue = CallFunc_GetChildrenCount_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue1 = CallFunc_Subtract_IntInt_ReturnValue1;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
	if (Index != nullptr)
		*Index = Parms.Index;

}

// Function ItemReceived_Base.ItemReceived_Base_C.HandleRight
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUINavigation           Nav_Enum                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     NewParam                                                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUINavigation           Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     Temp_object_Variable                                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     Temp_object_Variable1                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     Temp_object_Variable2                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     Temp_object_Variable3                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     Temp_object_Variable4                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_HandleSelectionIncrement_Index                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemReceived_Base_C::HandleRight(enum class EUINavigation Nav_Enum, class UWidget** NewParam, enum class EUINavigation Temp_byte_Variable, class UWidget* Temp_object_Variable, class UWidget* Temp_object_Variable1, class UWidget* Temp_object_Variable2, class UWidget* Temp_object_Variable3, class UWidget* Temp_object_Variable4, int32 CallFunc_HandleSelectionIncrement_Index, class UWidget* CallFunc_GetChildAt_ReturnValue, class UWidget* K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("ItemReceived_Base_C", "HandleRight");

	Params::UItemReceived_Base_C_HandleRight_Params Parms;
	Parms.Nav_Enum = Nav_Enum;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable1 = Temp_object_Variable1;
	Parms.Temp_object_Variable2 = Temp_object_Variable2;
	Parms.Temp_object_Variable3 = Temp_object_Variable3;
	Parms.Temp_object_Variable4 = Temp_object_Variable4;
	Parms.CallFunc_HandleSelectionIncrement_Index = CallFunc_HandleSelectionIncrement_Index;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);
	if (NewParam != nullptr)
		*NewParam = Parms.NewParam;

}

// Function ItemReceived_Base.ItemReceived_Base_C.HandleLeft
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUINavigation           Navigation_Enum                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     NewParam                                                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUINavigation           Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     Temp_object_Variable                                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     Temp_object_Variable1                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     Temp_object_Variable2                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     Temp_object_Variable3                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     Temp_object_Variable4                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_HandleSelectionIncrement_Index                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemReceived_Base_C::HandleLeft(enum class EUINavigation Navigation_Enum, class UWidget** NewParam, enum class EUINavigation Temp_byte_Variable, class UWidget* Temp_object_Variable, class UWidget* Temp_object_Variable1, class UWidget* Temp_object_Variable2, class UWidget* Temp_object_Variable3, class UWidget* Temp_object_Variable4, int32 CallFunc_HandleSelectionIncrement_Index, class UWidget* CallFunc_GetChildAt_ReturnValue, class UWidget* K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("ItemReceived_Base_C", "HandleLeft");

	Params::UItemReceived_Base_C_HandleLeft_Params Parms;
	Parms.Navigation_Enum = Navigation_Enum;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable1 = Temp_object_Variable1;
	Parms.Temp_object_Variable2 = Temp_object_Variable2;
	Parms.Temp_object_Variable3 = Temp_object_Variable3;
	Parms.Temp_object_Variable4 = Temp_object_Variable4;
	Parms.CallFunc_HandleSelectionIncrement_Index = CallFunc_HandleSelectionIncrement_Index;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);
	if (NewParam != nullptr)
		*NewParam = Parms.NewParam;

}

// Function ItemReceived_Base.ItemReceived_Base_C.UpdateFromHoverState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortReceivedItemLootInfo   Loot                                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UItemReceived_Base_C::UpdateFromHoverState(const struct FFortReceivedItemLootInfo& Loot)
{
	static auto Func = Class->GetFunction("ItemReceived_Base_C", "UpdateFromHoverState");

	Params::UItemReceived_Base_C_UpdateFromHoverState_Params Parms;
	Parms.Loot = Loot;

	UObject::ProcessEvent(Func, &Parms);
}

// Function ItemReceived_Base.ItemReceived_Base_C.AddItemCard
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortReceivedItemLootInfo   NewParam                                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// class UItemCardWidget_C*           ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UItemCardWidget_C*           CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (IsPlainOldData, NoDestructor)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScrollBoxSlot*              K2Node_DynamicCast_AsScroll_Box_Slot                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

class UItemCardWidget_C* UItemReceived_Base_C::AddItemCard(const struct FFortReceivedItemLootInfo& NewParam, int32 CallFunc_GetChildrenCount_ReturnValue, class UItemCardWidget_C* CallFunc_Create_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FMargin& K2Node_MakeStruct_Margin, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UScrollBoxSlot* K2Node_DynamicCast_AsScroll_Box_Slot, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("ItemReceived_Base_C", "AddItemCard");

	Params::UItemReceived_Base_C_AddItemCard_Params Parms;
	Parms.NewParam = NewParam;
	Parms.CallFunc_GetChildrenCount_ReturnValue = CallFunc_GetChildrenCount_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.K2Node_DynamicCast_AsScroll_Box_Slot = K2Node_DynamicCast_AsScroll_Box_Slot;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);
	return Parms.ReturnValue;

}

// Function ItemReceived_Base.ItemReceived_Base_C.UpdateFromItemReceivedInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortReceivedItemLootInfo   Loot                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               Select                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemReceived_Base_C::UpdateFromItemReceivedInfo(const struct FFortReceivedItemLootInfo& Loot, bool Select, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue1)
{
	static auto Func = Class->GetFunction("ItemReceived_Base_C", "UpdateFromItemReceivedInfo");

	Params::UItemReceived_Base_C_UpdateFromItemReceivedInfo_Params Parms;
	Parms.Loot = Loot;
	Parms.Select = Select;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue1 = CallFunc_GetContext_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);
}

// Function ItemReceived_Base.ItemReceived_Base_C.HandleBack
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Passthrough                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemReceived_Base_C::HandleBack(bool* Passthrough, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue)
{
	static auto Func = Class->GetFunction("ItemReceived_Base_C", "HandleBack");

	Params::UItemReceived_Base_C_HandleBack_Params Parms;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
	if (Passthrough != nullptr)
		*Passthrough = Parms.Passthrough;

}

// Function ItemReceived_Base.ItemReceived_Base_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UItemReceived_Base_C::Construct()
{
	static auto Func = Class->GetFunction("ItemReceived_Base_C", "Construct");

	Params::UItemReceived_Base_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function ItemReceived_Base.ItemReceived_Base_C.BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_66_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemReceived_Base_C::BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_66_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("ItemReceived_Base_C", "BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_66_CommonButtonClicked__DelegateSignature");

	Params::UItemReceived_Base_C_BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_66_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}

// Function ItemReceived_Base.ItemReceived_Base_C.OnGiftBoxItemSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bFromSelf                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemReceived_Base_C::OnGiftBoxItemSet(bool bFromSelf)
{
	static auto Func = Class->GetFunction("ItemReceived_Base_C", "OnGiftBoxItemSet");

	Params::UItemReceived_Base_C_OnGiftBoxItemSet_Params Parms;
	Parms.bFromSelf = bFromSelf;

	UObject::ProcessEvent(Func, &Parms);
}

// Function ItemReceived_Base.ItemReceived_Base_C.SelectItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CenterWidget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemReceived_Base_C::SelectItem(int32 Index, bool CenterWidget)
{
	static auto Func = Class->GetFunction("ItemReceived_Base_C", "SelectItem");

	Params::UItemReceived_Base_C_SelectItem_Params Parms;
	Parms.Index = Index;
	Parms.CenterWidget = CenterWidget;

	UObject::ProcessEvent(Func, &Parms);
}

// Function ItemReceived_Base.ItemReceived_Base_C.AnimateRollout
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UItemReceived_Base_C::AnimateRollout()
{
	static auto Func = Class->GetFunction("ItemReceived_Base_C", "AnimateRollout");

	Params::UItemReceived_Base_C_AnimateRollout_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function ItemReceived_Base.ItemReceived_Base_C.UpdateRarityFlare
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NewParam                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Who                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemReceived_Base_C::UpdateRarityFlare(bool NewParam, int32 Who)
{
	static auto Func = Class->GetFunction("ItemReceived_Base_C", "UpdateRarityFlare");

	Params::UItemReceived_Base_C_UpdateRarityFlare_Params Parms;
	Parms.NewParam = NewParam;
	Parms.Who = Who;

	UObject::ProcessEvent(Func, &Parms);
}

// Function ItemReceived_Base.ItemReceived_Base_C.BndEvt__EquipButton_K2Node_ComponentBoundEvent_193_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemReceived_Base_C::BndEvt__EquipButton_K2Node_ComponentBoundEvent_193_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("ItemReceived_Base_C", "BndEvt__EquipButton_K2Node_ComponentBoundEvent_193_CommonButtonClicked__DelegateSignature");

	Params::UItemReceived_Base_C_BndEvt__EquipButton_K2Node_ComponentBoundEvent_193_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}

// Function ItemReceived_Base.ItemReceived_Base_C.OnInputModeChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bUsingGamepad                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemReceived_Base_C::OnInputModeChanged(bool bUsingGamepad)
{
	static auto Func = Class->GetFunction("ItemReceived_Base_C", "OnInputModeChanged");

	Params::UItemReceived_Base_C_OnInputModeChanged_Params Parms;
	Parms.bUsingGamepad = bUsingGamepad;

	UObject::ProcessEvent(Func, &Parms);
}

// Function ItemReceived_Base.ItemReceived_Base_C.Check if Battlepass upgrade
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UItemReceived_Base_C::Check_if_Battlepass_upgrade()
{
	static auto Func = Class->GetFunction("ItemReceived_Base_C", "Check if Battlepass upgrade");

	Params::UItemReceived_Base_C_Check_if_Battlepass_upgrade_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function ItemReceived_Base.ItemReceived_Base_C.Rollout Items Received
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UItemReceived_Base_C::Rollout_Items_Received()
{
	static auto Func = Class->GetFunction("ItemReceived_Base_C", "Rollout Items Received");

	Params::UItemReceived_Base_C_Rollout_Items_Received_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function ItemReceived_Base.ItemReceived_Base_C.Play BattlePass Upgrade Anim
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UItemReceived_Base_C::Play_BattlePass_Upgrade_Anim()
{
	static auto Func = Class->GetFunction("ItemReceived_Base_C", "Play BattlePass Upgrade Anim");

	Params::UItemReceived_Base_C_Play_BattlePass_Upgrade_Anim_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function ItemReceived_Base.ItemReceived_Base_C.OnBattlepassAnimFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UItemReceived_Base_C::OnBattlepassAnimFinished()
{
	static auto Func = Class->GetFunction("ItemReceived_Base_C", "OnBattlepassAnimFinished");

	Params::UItemReceived_Base_C_OnBattlepassAnimFinished_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function ItemReceived_Base.ItemReceived_Base_C.BndEvt__IconTextButton_C_0_K2Node_ComponentBoundEvent_58_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemReceived_Base_C::BndEvt__IconTextButton_C_0_K2Node_ComponentBoundEvent_58_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("ItemReceived_Base_C", "BndEvt__IconTextButton_C_0_K2Node_ComponentBoundEvent_58_CommonButtonClicked__DelegateSignature");

	Params::UItemReceived_Base_C_BndEvt__IconTextButton_C_0_K2Node_ComponentBoundEvent_58_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}

// Function ItemReceived_Base.ItemReceived_Base_C.ShowNextItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UItemReceived_Base_C::ShowNextItem()
{
	static auto Func = Class->GetFunction("ItemReceived_Base_C", "ShowNextItem");

	Params::UItemReceived_Base_C_ShowNextItem_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function ItemReceived_Base.ItemReceived_Base_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UItemReceived_Base_C::OnActivated()
{
	static auto Func = Class->GetFunction("ItemReceived_Base_C", "OnActivated");

	Params::UItemReceived_Base_C_OnActivated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function ItemReceived_Base.ItemReceived_Base_C.ExecuteUbergraph_ItemReceived_Base
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortAnalyticsEventAttributeCallFunc_ConstructAnalyticsAttribute_ReturnValue                 ()
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle                             (NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button2                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HandleBack_Passthrough                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bFromSelf                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortReceivedItemLootInfo   CallFunc_Array_Get_Item                                          ()
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UItemCardWidget_C*           CallFunc_AddItemCard_ReturnValue                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Index                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_CenterWidget                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UItemCardWidget_C*           K2Node_DynamicCast_AsItem_Card_Widget                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortReceivedItemLootInfo   CallFunc_Array_Get_Item1                                         ()
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_NewParam                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_CustomEvent_Who                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortRarity             CallFunc_GetRarity_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortRarityItemData         CallFunc_BPGetRarityData_ReturnValue                             ()
// int32                              CallFunc_Array_Length_ReturnValue1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGiftBoxItemDefinition*  CallFunc_GetGiftBoxDefinition_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue1                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UItemCardWidget_C*           K2Node_DynamicCast_AsItem_Card_Widget1                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UItemReceivedHeaderSubWidgetBase_C*K2Node_DynamicCast_AsItem_Received_Header_Sub_Widget_Base        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable1                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable5                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button1                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable6                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bUsingGamepad                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortReceivedItemLootInfo   CallFunc_Array_Get_Item2                                         ()
// int32                              CallFunc_Array_Length_ReturnValue2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UItemCardWidget_C*           CallFunc_AddItemCard_ReturnValue1                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UFortItem*>           CallFunc_GetItemInstancesByDefinition_Items                      (ZeroConstructor, ReferenceParm)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData1                            (HasGetValueTypeHash)
// class UFortItem*                   CallFunc_Array_Get_Item3                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class UFortAccountItem*            K2Node_DynamicCast_AsFort_Account_Item                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess3                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Format_ReturnValue                                      ()
// bool                               CallFunc_IsFavorite_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select1_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable7                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select3_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// struct FFortAnalyticsEventAttributeCallFunc_ConstructAnalyticsAttribute_ReturnValue1                ()
// TArray<struct FFortAnalyticsEventAttribute>K2Node_MakeArray_Array1                                          (ConstParm, ZeroConstructor, ReferenceParm)

void UItemReceived_Base_C::ExecuteUbergraph_ItemReceived_Base(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, const struct FFortAnalyticsEventAttribute& CallFunc_ConstructAnalyticsAttribute_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool Temp_bool_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UCommonButton* K2Node_ComponentBoundEvent_Button2, bool CallFunc_HandleBack_Passthrough, bool K2Node_Event_bFromSelf, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, int32 Temp_int_Array_Index_Variable1, const struct FFortReceivedItemLootInfo& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UItemCardWidget_C* CallFunc_AddItemCard_ReturnValue, int32 K2Node_CustomEvent_Index, bool K2Node_CustomEvent_CenterWidget, class UWidget* CallFunc_GetChildAt_ReturnValue, class UItemCardWidget_C* K2Node_DynamicCast_AsItem_Card_Widget, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, int32 CallFunc_Add_IntInt_ReturnValue1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, enum class ESlateVisibility Temp_byte_Variable1, enum class ESlateVisibility Temp_byte_Variable2, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 Temp_int_Variable, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, const struct FFortReceivedItemLootInfo& CallFunc_Array_Get_Item1, bool Temp_bool_Variable1, bool K2Node_CustomEvent_NewParam, int32 K2Node_CustomEvent_Who, enum class EFortRarity CallFunc_GetRarity_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, const struct FFortRarityItemData& CallFunc_BPGetRarityData_ReturnValue, int32 CallFunc_Array_Length_ReturnValue1, bool CallFunc_EqualEqual_IntInt_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue, enum class ESlateVisibility Temp_byte_Variable3, enum class ESlateVisibility Temp_byte_Variable4, bool Temp_bool_Variable2, class UFortGiftBoxItemDefinition* CallFunc_GetGiftBoxDefinition_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue1, class UUserWidget* CallFunc_Create_ReturnValue, class UItemCardWidget_C* K2Node_DynamicCast_AsItem_Card_Widget1, bool K2Node_DynamicCast_bSuccess1, class UItemReceivedHeaderSubWidgetBase_C* K2Node_DynamicCast_AsItem_Received_Header_Sub_Widget_Base, bool K2Node_DynamicCast_bSuccess2, class UPanelSlot* CallFunc_AddChild_ReturnValue, int32 Temp_int_Loop_Counter_Variable1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue2, int32 Temp_int_Variable1, bool CallFunc_Greater_IntInt_ReturnValue, enum class ESlateVisibility Temp_byte_Variable5, class UCommonButton* K2Node_ComponentBoundEvent_Button1, enum class ESlateVisibility Temp_byte_Variable6, bool Temp_bool_Variable3, bool K2Node_Event_bUsingGamepad, const struct FFortReceivedItemLootInfo& CallFunc_Array_Get_Item2, int32 CallFunc_Array_Length_ReturnValue2, bool CallFunc_Less_IntInt_ReturnValue1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class UCommonButton* K2Node_ComponentBoundEvent_Button, int32 CallFunc_Add_IntInt_ReturnValue3, int32 CallFunc_Array_Length_ReturnValue3, class UItemCardWidget_C* CallFunc_AddItemCard_ReturnValue1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class UFortInventoryContext* CallFunc_GetContext_ReturnValue1, int32 CallFunc_Add_IntInt_ReturnValue4, TArray<class UFortItem*>& CallFunc_GetItemInstancesByDefinition_Items, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData1, class UFortItem* CallFunc_Array_Get_Item3, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class UFortAccountItem* K2Node_DynamicCast_AsFort_Account_Item, bool K2Node_DynamicCast_bSuccess3, class FText CallFunc_Format_ReturnValue, bool CallFunc_IsFavorite_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Array_Length_ReturnValue4, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue1, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select1_Default, enum class ESlateVisibility K2Node_Select2_Default, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue1, class UFortMcpContext* CallFunc_GetContext_ReturnValue2, enum class ESlateVisibility Temp_byte_Variable7, enum class ESlateVisibility K2Node_Select3_Default, const class FString& CallFunc_GetDisplayName_ReturnValue, const struct FFortAnalyticsEventAttribute& CallFunc_ConstructAnalyticsAttribute_ReturnValue1, TArray<struct FFortAnalyticsEventAttribute>& K2Node_MakeArray_Array1)
{
	static auto Func = Class->GetFunction("ItemReceived_Base_C", "ExecuteUbergraph_ItemReceived_Base");

	Params::UItemReceived_Base_C_ExecuteUbergraph_ItemReceived_Base_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_ConstructAnalyticsAttribute_ReturnValue = CallFunc_ConstructAnalyticsAttribute_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_DataTableRowHandle = K2Node_MakeStruct_DataTableRowHandle;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_ComponentBoundEvent_Button2 = K2Node_ComponentBoundEvent_Button2;
	Parms.CallFunc_HandleBack_Passthrough = CallFunc_HandleBack_Passthrough;
	Parms.K2Node_Event_bFromSelf = K2Node_Event_bFromSelf;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_int_Array_Index_Variable1 = Temp_int_Array_Index_Variable1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_AddItemCard_ReturnValue = CallFunc_AddItemCard_ReturnValue;
	Parms.K2Node_CustomEvent_Index = K2Node_CustomEvent_Index;
	Parms.K2Node_CustomEvent_CenterWidget = K2Node_CustomEvent_CenterWidget;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.K2Node_DynamicCast_AsItem_Card_Widget = K2Node_DynamicCast_AsItem_Card_Widget;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.CallFunc_Add_IntInt_ReturnValue1 = CallFunc_Add_IntInt_ReturnValue1;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_Array_Get_Item1 = CallFunc_Array_Get_Item1;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.K2Node_CustomEvent_NewParam = K2Node_CustomEvent_NewParam;
	Parms.K2Node_CustomEvent_Who = K2Node_CustomEvent_Who;
	Parms.CallFunc_GetRarity_ReturnValue = CallFunc_GetRarity_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_BPGetRarityData_ReturnValue = CallFunc_BPGetRarityData_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue1 = CallFunc_Array_Length_ReturnValue1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue1 = CallFunc_EqualEqual_IntInt_ReturnValue1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.Temp_byte_Variable3 = Temp_byte_Variable3;
	Parms.Temp_byte_Variable4 = Temp_byte_Variable4;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.CallFunc_GetGiftBoxDefinition_ReturnValue = CallFunc_GetGiftBoxDefinition_ReturnValue;
	Parms.CallFunc_GetChildAt_ReturnValue1 = CallFunc_GetChildAt_ReturnValue1;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_DynamicCast_AsItem_Card_Widget1 = K2Node_DynamicCast_AsItem_Card_Widget1;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.K2Node_DynamicCast_AsItem_Received_Header_Sub_Widget_Base = K2Node_DynamicCast_AsItem_Received_Header_Sub_Widget_Base;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable1 = Temp_int_Loop_Counter_Variable1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue2 = CallFunc_Add_IntInt_ReturnValue2;
	Parms.Temp_int_Variable1 = Temp_int_Variable1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.Temp_byte_Variable5 = Temp_byte_Variable5;
	Parms.K2Node_ComponentBoundEvent_Button1 = K2Node_ComponentBoundEvent_Button1;
	Parms.Temp_byte_Variable6 = Temp_byte_Variable6;
	Parms.Temp_bool_Variable3 = Temp_bool_Variable3;
	Parms.K2Node_Event_bUsingGamepad = K2Node_Event_bUsingGamepad;
	Parms.CallFunc_Array_Get_Item2 = CallFunc_Array_Get_Item2;
	Parms.CallFunc_Array_Length_ReturnValue2 = CallFunc_Array_Length_ReturnValue2;
	Parms.CallFunc_Less_IntInt_ReturnValue1 = CallFunc_Less_IntInt_ReturnValue1;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_Add_IntInt_ReturnValue3 = CallFunc_Add_IntInt_ReturnValue3;
	Parms.CallFunc_Array_Length_ReturnValue3 = CallFunc_Array_Length_ReturnValue3;
	Parms.CallFunc_AddItemCard_ReturnValue1 = CallFunc_AddItemCard_ReturnValue1;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_GetContext_ReturnValue1 = CallFunc_GetContext_ReturnValue1;
	Parms.CallFunc_Add_IntInt_ReturnValue4 = CallFunc_Add_IntInt_ReturnValue4;
	Parms.CallFunc_GetItemInstancesByDefinition_Items = CallFunc_GetItemInstancesByDefinition_Items;
	Parms.K2Node_MakeStruct_FormatArgumentData1 = K2Node_MakeStruct_FormatArgumentData1;
	Parms.CallFunc_Array_Get_Item3 = CallFunc_Array_Get_Item3;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_DynamicCast_AsFort_Account_Item = K2Node_DynamicCast_AsFort_Account_Item;
	Parms.K2Node_DynamicCast_bSuccess3 = K2Node_DynamicCast_bSuccess3;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_IsFavorite_ReturnValue = CallFunc_IsFavorite_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue4 = CallFunc_Array_Length_ReturnValue4;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue1 = CallFunc_GreaterEqual_IntInt_ReturnValue1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.CallFunc_GetChildrenCount_ReturnValue = CallFunc_GetChildrenCount_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue1 = CallFunc_Subtract_IntInt_ReturnValue1;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;
	Parms.Temp_byte_Variable7 = Temp_byte_Variable7;
	Parms.K2Node_Select3_Default = K2Node_Select3_Default;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_ConstructAnalyticsAttribute_ReturnValue1 = CallFunc_ConstructAnalyticsAttribute_ReturnValue1;
	Parms.K2Node_MakeArray_Array1 = K2Node_MakeArray_Array1;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
