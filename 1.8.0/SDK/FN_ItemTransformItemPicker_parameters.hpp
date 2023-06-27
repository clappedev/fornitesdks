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

// Function ItemTransformItemPicker.ItemTransformItemPicker_C.Return Item to Detail
struct UItemTransformItemPicker_C_Return_Item_to_Detail_Params
{
	class UFortItem*                                   InItem;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UFortItem*                                   OutItem;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ItemTransformItemPicker.ItemTransformItemPicker_C.OpenInspectionScreen
struct UItemTransformItemPicker_C_OpenInspectionScreen_Params
{
	bool                                               PassThru;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ItemTransformItemPicker.ItemTransformItemPicker_C.CommitSelectedItem
struct UItemTransformItemPicker_C_CommitSelectedItem_Params
{
	bool                                               PassThru;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ItemTransformItemPicker.ItemTransformItemPicker_C.OpenPicker
struct UItemTransformItemPicker_C_OpenPicker_Params
{
	TArray<class UFortItem*>                           SacrificeItems;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                SelectedSlot;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemTransformItemPicker.ItemTransformItemPicker_C.SetFilter
struct UItemTransformItemPicker_C_SetFilter_Params
{
	struct FName                                       FilterName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemTransformItemPicker.ItemTransformItemPicker_C.SetupFilterTabList
struct UItemTransformItemPicker_C_SetupFilterTabList_Params
{
};

// Function ItemTransformItemPicker.ItemTransformItemPicker_C.HandleItemCommitted
struct UItemTransformItemPicker_C_HandleItemCommitted_Params
{
	class UFortItem*                                   Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemTransformItemPicker.ItemTransformItemPicker_C.RemoveInvalidItems
struct UItemTransformItemPicker_C_RemoveInvalidItems_Params
{
	TArray<class UFortAccountItem*>                    UnrefinedItems;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UFortItem*>                           CurrentSacrificeItems;                                    // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UFortAccountItem*>                    RefinedItems;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function ItemTransformItemPicker.ItemTransformItemPicker_C.HandleItemSelected
struct UItemTransformItemPicker_C_HandleItemSelected_Params
{
	class UFortItem*                                   Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemTransformItemPicker.ItemTransformItemPicker_C.SetupItemPicker
struct UItemTransformItemPicker_C_SetupItemPicker_Params
{
};

// Function ItemTransformItemPicker.ItemTransformItemPicker_C.Construct
struct UItemTransformItemPicker_C_Construct_Params
{
};

// Function ItemTransformItemPicker.ItemTransformItemPicker_C.PreConstruct
struct UItemTransformItemPicker_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemTransformItemPicker.ItemTransformItemPicker_C.BndEvt__FilterTabList_K2Node_ComponentBoundEvent_0_OnTabSelected__DelegateSignature
struct UItemTransformItemPicker_C_BndEvt__FilterTabList_K2Node_ComponentBoundEvent_0_OnTabSelected__DelegateSignature_Params
{
	struct FName                                       TabId;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemTransformItemPicker.ItemTransformItemPicker_C.ExecuteUbergraph_ItemTransformItemPicker
struct UItemTransformItemPicker_C_ExecuteUbergraph_ItemTransformItemPicker_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemTransformItemPicker.ItemTransformItemPicker_C.OnItemSelected__DelegateSignature
struct UItemTransformItemPicker_C_OnItemSelected__DelegateSignature_Params
{
	class UFortItem*                                   SelectedItem;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
