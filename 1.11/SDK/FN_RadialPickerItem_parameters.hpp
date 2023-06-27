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

// Function RadialPickerItem.RadialPickerItem_C.SetKeybindVisibility
struct URadialPickerItem_C_SetKeybindVisibility_Params
{
};

// Function RadialPickerItem.RadialPickerItem_C.SetShowImageAndLabel
struct URadialPickerItem_C_SetShowImageAndLabel_Params
{
	bool                                               ShowImageAndLabel;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function RadialPickerItem.RadialPickerItem_C.SetItemContent
struct URadialPickerItem_C_SetItemContent_Params
{
	class UFortItem*                                   Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Option_Enabled;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Radial_Item_Index;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function RadialPickerItem.RadialPickerItem_C.SetSelected
struct URadialPickerItem_C_SetSelected_Params
{
	bool                                               IsSelected;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function RadialPickerItem.RadialPickerItem_C.SetImageAndLabelContent
struct URadialPickerItem_C_SetImageAndLabelContent_Params
{
	struct FText                                       Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FSlateBrush                                 Brush;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               Option_Enabled;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                RadialItemIndex;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function RadialPickerItem.RadialPickerItem_C.Construct
struct URadialPickerItem_C_Construct_Params
{
};

// Function RadialPickerItem.RadialPickerItem_C.ExecuteUbergraph_RadialPickerItem
struct URadialPickerItem_C_ExecuteUbergraph_RadialPickerItem_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
