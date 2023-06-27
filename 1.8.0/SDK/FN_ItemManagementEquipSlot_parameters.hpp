#pragma once

// Fortnite (1.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ItemManagementEquipSlot.ItemManagementEquipSlot_C.IsSelected
struct UItemManagementEquipSlot_C_IsSelected_Params
{
	bool                                               Selected;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ItemManagementEquipSlot.ItemManagementEquipSlot_C.OnFocusReceived
struct UItemManagementEquipSlot_C_OnFocusReceived_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FFocusEvent*                                InFocusEvent;                                             // (Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ItemManagementEquipSlot.ItemManagementEquipSlot_C.SetSelected
struct UItemManagementEquipSlot_C_SetSelected_Params
{
	bool                                               Selected;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemManagementEquipSlot.ItemManagementEquipSlot_C.OnDragDetected
struct UItemManagementEquipSlot_C_OnDragDetected_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent*                              PointerEvent;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	class UDragDropOperation*                          Operation;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ItemManagementEquipSlot.ItemManagementEquipSlot_C.OnMouseButtonDown
struct UItemManagementEquipSlot_C_OnMouseButtonDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ItemManagementEquipSlot.ItemManagementEquipSlot_C.OnDrop
struct UItemManagementEquipSlot_C_OnDrop_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent*                              PointerEvent;                                             // (Parm)
	class UDragDropOperation**                         Operation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ItemManagementEquipSlot.ItemManagementEquipSlot_C.RefreshItem
struct UItemManagementEquipSlot_C_RefreshItem_Params
{
};

// Function ItemManagementEquipSlot.ItemManagementEquipSlot_C.Construct
struct UItemManagementEquipSlot_C_Construct_Params
{
};

// Function ItemManagementEquipSlot.ItemManagementEquipSlot_C.OnFocusLost
struct UItemManagementEquipSlot_C_OnFocusLost_Params
{
	struct FFocusEvent*                                InFocusEvent;                                             // (Parm)
};

// Function ItemManagementEquipSlot.ItemManagementEquipSlot_C.BndEvt__InputActionWidget_K2Node_ComponentBoundEvent_6_OnInputMethodChanged__DelegateSignature
struct UItemManagementEquipSlot_C_BndEvt__InputActionWidget_K2Node_ComponentBoundEvent_6_OnInputMethodChanged__DelegateSignature_Params
{
	bool                                               bUsingGamepad;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemManagementEquipSlot.ItemManagementEquipSlot_C.OnDragCancelled
struct UItemManagementEquipSlot_C_OnDragCancelled_Params
{
	struct FPointerEvent*                              PointerEvent;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
	class UDragDropOperation**                         Operation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemManagementEquipSlot.ItemManagementEquipSlot_C.ExecuteUbergraph_ItemManagementEquipSlot
struct UItemManagementEquipSlot_C_ExecuteUbergraph_ItemManagementEquipSlot_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
