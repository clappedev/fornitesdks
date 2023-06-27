#pragma once

// Fortnite SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.Determine Tab List Title
struct UItemTransformKeyScreen_C_Determine_Tab_List_Title_Params
{
	struct FName                                       TabNameID;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FText                                       Text;                                                     // (CPF_Parm, CPF_OutParm)
};

// Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.Determine Key Types to See
struct UItemTransformKeyScreen_C_Determine_Key_Types_to_See_Params
{
	struct FName                                       TabNameID;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	EConversionControlKeyRequest                       RequestType;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.NavigateToFirstItem
struct UItemTransformKeyScreen_C_NavigateToFirstItem_Params
{
};

// Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.NavigateToSelectedItem
struct UItemTransformKeyScreen_C_NavigateToSelectedItem_Params
{
	class UFortItem*                                   InItem;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.Get Selected Item
struct UItemTransformKeyScreen_C_Get_Selected_Item_Params
{
	class UFortItem*                                   SelectedKey;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.ResetScreen
struct UItemTransformKeyScreen_C_ResetScreen_Params
{
};

// Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.HandleItemSelected
struct UItemTransformKeyScreen_C_HandleItemSelected_Params
{
	class UFortItem*                                   Item;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.SetupKeyList
struct UItemTransformKeyScreen_C_SetupKeyList_Params
{
};

// Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.RebuildKeyList
struct UItemTransformKeyScreen_C_RebuildKeyList_Params
{
	EConversionControlKeyRequest                       RequestType;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.Construct
struct UItemTransformKeyScreen_C_Construct_Params
{
};

// Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.BndEvt__ItemTransformKeyPicker_K2Node_ComponentBoundEvent_189_OnItemSelectionEvent__DelegateSignature
struct UItemTransformKeyScreen_C_BndEvt__ItemTransformKeyPicker_K2Node_ComponentBoundEvent_189_OnItemSelectionEvent__DelegateSignature_Params
{
	class UFortItem*                                   SelectedItem;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.BndEvt__HorizontalTabList_K2Node_ComponentBoundEvent_17_OnTabSelected__DelegateSignature
struct UItemTransformKeyScreen_C_BndEvt__HorizontalTabList_K2Node_ComponentBoundEvent_17_OnTabSelected__DelegateSignature_Params
{
	struct FName                                       TabId;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.HandleHomebaseInventoryChanged
struct UItemTransformKeyScreen_C_HandleHomebaseInventoryChanged_Params
{
};

// Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.ExecuteUbergraph_ItemTransformKeyScreen
struct UItemTransformKeyScreen_C_ExecuteUbergraph_ItemTransformKeyScreen_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.OnKeyConfirmed__DelegateSignature
struct UItemTransformKeyScreen_C_OnKeyConfirmed__DelegateSignature_Params
{
};

// Function ItemTransformKeyScreen.ItemTransformKeyScreen_C.OnKeySelected__DelegateSignature
struct UItemTransformKeyScreen_C_OnKeySelected__DelegateSignature_Params
{
	class UFortItem*                                   Key;                                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
