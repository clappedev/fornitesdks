#pragma once

// Fortnite (1.11) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ItemManagementItemTileButton.ItemManagementItemTileButton_C.HandleSlottedSurvivor
struct UItemManagementItemTileButton_C_HandleSlottedSurvivor_Params
{
};

// Function ItemManagementItemTileButton.ItemManagementItemTileButton_C.UpdateQuantityProduced
struct UItemManagementItemTileButton_C_UpdateQuantityProduced_Params
{
};

// Function ItemManagementItemTileButton.ItemManagementItemTileButton_C.UpdateBangState
struct UItemManagementItemTileButton_C_UpdateBangState_Params
{
};

// Function ItemManagementItemTileButton.ItemManagementItemTileButton_C.UpdateInteractionWidgetVisibility
struct UItemManagementItemTileButton_C_UpdateInteractionWidgetVisibility_Params
{
};

// Function ItemManagementItemTileButton.ItemManagementItemTileButton_C.SetEquipSlotOverlay
struct UItemManagementItemTileButton_C_SetEquipSlotOverlay_Params
{
	int                                                EquipSlot;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemManagementItemTileButton.ItemManagementItemTileButton_C.OnDragDetected
struct UItemManagementItemTileButton_C_OnDragDetected_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               PointerEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UDragDropOperation*                          Operation;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ItemManagementItemTileButton.ItemManagementItemTileButton_C.On_ItemWidgetHolder_MouseButtonDown
struct UItemManagementItemTileButton_C_On_ItemWidgetHolder_MouseButtonDown_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ItemManagementItemTileButton.ItemManagementItemTileButton_C.UpdateStyle
struct UItemManagementItemTileButton_C_UpdateStyle_Params
{
};

// Function ItemManagementItemTileButton.ItemManagementItemTileButton_C.UpdateMulchStateBox
struct UItemManagementItemTileButton_C_UpdateMulchStateBox_Params
{
};

// Function ItemManagementItemTileButton.ItemManagementItemTileButton_C.HandleItemMulchStateChanged
struct UItemManagementItemTileButton_C_HandleItemMulchStateChanged_Params
{
};

// Function ItemManagementItemTileButton.ItemManagementItemTileButton_C.HandleDifferentItemManagementModeSetBP
struct UItemManagementItemTileButton_C_HandleDifferentItemManagementModeSetBP_Params
{
};

// Function ItemManagementItemTileButton.ItemManagementItemTileButton_C.OnHovered
struct UItemManagementItemTileButton_C_OnHovered_Params
{
};

// Function ItemManagementItemTileButton.ItemManagementItemTileButton_C.OnUnhovered
struct UItemManagementItemTileButton_C_OnUnhovered_Params
{
};

// Function ItemManagementItemTileButton.ItemManagementItemTileButton_C.HandleHasItemToDetailChanged
struct UItemManagementItemTileButton_C_HandleHasItemToDetailChanged_Params
{
};

// Function ItemManagementItemTileButton.ItemManagementItemTileButton_C.HandleHasItemToCompareDetailsWithChanged
struct UItemManagementItemTileButton_C_HandleHasItemToCompareDetailsWithChanged_Params
{
};

// Function ItemManagementItemTileButton.ItemManagementItemTileButton_C.HandleEquipSlotChanged
struct UItemManagementItemTileButton_C_HandleEquipSlotChanged_Params
{
	int*                                               EquipSlot;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemManagementItemTileButton.ItemManagementItemTileButton_C.OnDragCancelled
struct UItemManagementItemTileButton_C_OnDragCancelled_Params
{
	struct FPointerEvent*                              PointerEvent;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UDragDropOperation**                         Operation;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemManagementItemTileButton.ItemManagementItemTileButton_C.OnSelected
struct UItemManagementItemTileButton_C_OnSelected_Params
{
};

// Function ItemManagementItemTileButton.ItemManagementItemTileButton_C.HandleItemChangedBP
struct UItemManagementItemTileButton_C_HandleItemChangedBP_Params
{
};

// Function ItemManagementItemTileButton.ItemManagementItemTileButton_C.OnClicked
struct UItemManagementItemTileButton_C_OnClicked_Params
{
};

// Function ItemManagementItemTileButton.ItemManagementItemTileButton_C.ExecuteUbergraph_ItemManagementItemTileButton
struct UItemManagementItemTileButton_C_ExecuteUbergraph_ItemManagementItemTileButton_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
