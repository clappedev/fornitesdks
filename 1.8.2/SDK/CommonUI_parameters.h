#pragma once

#include "../SDK.h"

// Name: Fortnite, Version: 1.8.2

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function CommonUI.CommonWidgetGroupBase.RemoveWidget
struct UCommonWidgetGroupBase_RemoveWidget_Params
{
};

// Function CommonUI.CommonWidgetGroupBase.RemoveAll
struct UCommonWidgetGroupBase_RemoveAll_Params
{
};

// Function CommonUI.CommonWidgetGroupBase.AddWidget
struct UCommonWidgetGroupBase_AddWidget_Params
{
};

// Function CommonUI.CommonBorderStyle.GetBackgroundBrush
struct UCommonBorderStyle_GetBackgroundBrush_Params
{
	struct FSlateBrush                                 Brush;                                                    // (Parm, OutParm)
};

// Function CommonUI.CommonPoolableWidgetInterface.OnReleaseToPool
struct UCommonPoolableWidgetInterface_OnReleaseToPool_Params
{
};

// Function CommonUI.CommonPoolableWidgetInterface.OnAcquireFromPool
struct UCommonPoolableWidgetInterface_OnAcquireFromPool_Params
{
};

// Function CommonUI.CommonListItem.ToggleExpansion
struct UCommonListItem_ToggleExpansion_Params
{
};

// Function CommonUI.CommonListItem.SetSelected
struct UCommonListItem_SetSelected_Params
{
};

// Function CommonUI.CommonListItem.SetIndexInList
struct UCommonListItem_SetIndexInList_Params
{
};

// Function CommonUI.CommonListItem.SetExpanded
struct UCommonListItem_SetExpanded_Params
{
};

// Function CommonUI.CommonListItem.RegisterOnClicked
struct UCommonListItem_RegisterOnClicked_Params
{
};

// Function CommonUI.CommonListItem.Private_OnExpanderArrowShiftClicked
struct UCommonListItem_Private_OnExpanderArrowShiftClicked_Params
{
};

// Function CommonUI.CommonListItem.IsItemExpanded
struct UCommonListItem_IsItemExpanded_Params
{
};

// Function CommonUI.CommonListItem.GetIndentLevel
struct UCommonListItem_GetIndentLevel_Params
{
};

// Function CommonUI.CommonListItem.DoesItemHaveChildren
struct UCommonListItem_DoesItemHaveChildren_Params
{
};

// Function CommonUI.CommonObjectListItem.SetData
struct UCommonObjectListItem_SetData_Params
{
};

// Function CommonUI.CommonObjectListItem.Reset
struct UCommonObjectListItem_Reset_Params
{
};

// Function CommonUI.CommonObjectListItem.GetData
struct UCommonObjectListItem_GetData_Params
{
};

// Function CommonUI.CommonDateTimeTextBlock.SetTimespanValue
struct UCommonDateTimeTextBlock_SetTimespanValue_Params
{
};

// Function CommonUI.CommonDateTimeTextBlock.SetDateTimeValue
struct UCommonDateTimeTextBlock_SetDateTimeValue_Params
{
};

// Function CommonUI.CommonDateTimeTextBlock.GetDateTime
struct UCommonDateTimeTextBlock_GetDateTime_Params
{
};

// Function CommonUI.CommonWidgetStack.PushWidget
struct UCommonWidgetStack_PushWidget_Params
{
};

// Function CommonUI.CommonWidgetStack.PopWigdet
struct UCommonWidgetStack_PopWigdet_Params
{
};

// Function CommonUI.CommonWidgetStack.DeactivateWidget
struct UCommonWidgetStack_DeactivateWidget_Params
{
};

// Function CommonUI.CommonWidgetStack.ActivateWidget
struct UCommonWidgetStack_ActivateWidget_Params
{
};

// Function CommonUI.CommonUILibrary.FindParentWidgetOfType
struct UCommonUILibrary_FindParentWidgetOfType_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
