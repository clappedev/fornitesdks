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

// Function ItemTransformKeyPickerTileButton.ItemTransformKeyPickerTileButton_C.Get Fort PC
struct UItemTransformKeyPickerTileButton_C_Get_Fort_PC_Params
{
	class AFortPlayerController*                       FortPC;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ItemTransformKeyPickerTileButton.ItemTransformKeyPickerTileButton_C.Get Transform Key Catalysts
struct UItemTransformKeyPickerTileButton_C_Get_Transform_Key_Catalysts_Params
{
	struct FGameplayTagContainer                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ItemTransformKeyPickerTileButton.ItemTransformKeyPickerTileButton_C.Mark Item as Seen
struct UItemTransformKeyPickerTileButton_C_Mark_Item_as_Seen_Params
{
};

// Function ItemTransformKeyPickerTileButton.ItemTransformKeyPickerTileButton_C.Is Transform Key Consumable
struct UItemTransformKeyPickerTileButton_C_Is_Transform_Key_Consumable_Params
{
	bool                                               bConsumedOnConversion;                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ItemTransformKeyPickerTileButton.ItemTransformKeyPickerTileButton_C.Get Transform Key
struct UItemTransformKeyPickerTileButton_C_Get_Transform_Key_Params
{
	class UFortAccountItem*                            AsFort_Account_Item;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ItemTransformKeyPickerTileButton.ItemTransformKeyPickerTileButton_C.Update Bang State
struct UItemTransformKeyPickerTileButton_C_Update_Bang_State_Params
{
};

// Function ItemTransformKeyPickerTileButton.ItemTransformKeyPickerTileButton_C.SetData
struct UItemTransformKeyPickerTileButton_C_SetData_Params
{
	class UObject**                                    InData;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonListView**                            OwningList;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemTransformKeyPickerTileButton.ItemTransformKeyPickerTileButton_C.OnSelected
struct UItemTransformKeyPickerTileButton_C_OnSelected_Params
{
};

// Function ItemTransformKeyPickerTileButton.ItemTransformKeyPickerTileButton_C.OnHovered
struct UItemTransformKeyPickerTileButton_C_OnHovered_Params
{
};

// Function ItemTransformKeyPickerTileButton.ItemTransformKeyPickerTileButton_C.ExecuteUbergraph_ItemTransformKeyPickerTileButton
struct UItemTransformKeyPickerTileButton_C_ExecuteUbergraph_ItemTransformKeyPickerTileButton_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
