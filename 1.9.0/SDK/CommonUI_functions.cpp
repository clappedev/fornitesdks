
#include "../SDK.h"

// Name: Fortnite, Version: 1.9.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function CommonUI.CommonWidgetGroupBase.RemoveWidget
// (Final, Native, Public, BlueprintCallable)

void UCommonWidgetGroupBase::RemoveWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonWidgetGroupBase.RemoveWidget");

	UCommonWidgetGroupBase_RemoveWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonWidgetGroupBase.RemoveAll
// (Final, Native, Public, BlueprintCallable)

void UCommonWidgetGroupBase::RemoveAll()
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonWidgetGroupBase.RemoveAll");

	UCommonWidgetGroupBase_RemoveAll_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonWidgetGroupBase.AddWidget
// (Final, Native, Public, BlueprintCallable)

void UCommonWidgetGroupBase::AddWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonWidgetGroupBase.AddWidget");

	UCommonWidgetGroupBase_AddWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonBorderStyle.GetBackgroundBrush
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FSlateBrush             Brush                          (Parm, OutParm)

void UCommonBorderStyle::GetBackgroundBrush(struct FSlateBrush* Brush)
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonBorderStyle.GetBackgroundBrush");

	UCommonBorderStyle_GetBackgroundBrush_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Brush != nullptr)
		*Brush = params.Brush;
}


// Function CommonUI.CommonPoolableWidgetInterface.OnReleaseToPool
// (Native, Event, Protected, BlueprintEvent)

void UCommonPoolableWidgetInterface::OnReleaseToPool()
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonPoolableWidgetInterface.OnReleaseToPool");

	UCommonPoolableWidgetInterface_OnReleaseToPool_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonPoolableWidgetInterface.OnAcquireFromPool
// (Native, Event, Protected, BlueprintEvent)

void UCommonPoolableWidgetInterface::OnAcquireFromPool()
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonPoolableWidgetInterface.OnAcquireFromPool");

	UCommonPoolableWidgetInterface_OnAcquireFromPool_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonListItem.ToggleExpansion
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UCommonListItem::ToggleExpansion()
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonListItem.ToggleExpansion");

	UCommonListItem_ToggleExpansion_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonListItem.SetSelected
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UCommonListItem::SetSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonListItem.SetSelected");

	UCommonListItem_SetSelected_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonListItem.SetIndexInList
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UCommonListItem::SetIndexInList()
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonListItem.SetIndexInList");

	UCommonListItem_SetIndexInList_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonListItem.SetExpanded
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UCommonListItem::SetExpanded()
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonListItem.SetExpanded");

	UCommonListItem_SetExpanded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonListItem.RegisterOnClicked
// (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)

void UCommonListItem::RegisterOnClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonListItem.RegisterOnClicked");

	UCommonListItem_RegisterOnClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonListItem.Private_OnExpanderArrowShiftClicked
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UCommonListItem::Private_OnExpanderArrowShiftClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonListItem.Private_OnExpanderArrowShiftClicked");

	UCommonListItem_Private_OnExpanderArrowShiftClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonListItem.IsItemExpanded
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void UCommonListItem::IsItemExpanded()
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonListItem.IsItemExpanded");

	UCommonListItem_IsItemExpanded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonListItem.GetIndentLevel
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void UCommonListItem::GetIndentLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonListItem.GetIndentLevel");

	UCommonListItem_GetIndentLevel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonListItem.DoesItemHaveChildren
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void UCommonListItem::DoesItemHaveChildren()
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonListItem.DoesItemHaveChildren");

	UCommonListItem_DoesItemHaveChildren_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonObjectListItem.SetData
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UCommonObjectListItem::SetData()
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonObjectListItem.SetData");

	UCommonObjectListItem_SetData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonObjectListItem.Reset
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UCommonObjectListItem::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonObjectListItem.Reset");

	UCommonObjectListItem_Reset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonObjectListItem.GetData
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void UCommonObjectListItem::GetData()
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonObjectListItem.GetData");

	UCommonObjectListItem_GetData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonDateTimeTextBlock.SetTimespanValue
// (Final, Native, Public, HasDefaults, BlueprintCallable)

void UCommonDateTimeTextBlock::SetTimespanValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonDateTimeTextBlock.SetTimespanValue");

	UCommonDateTimeTextBlock_SetTimespanValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonDateTimeTextBlock.SetDateTimeValue
// (Final, Native, Public, HasDefaults, BlueprintCallable)

void UCommonDateTimeTextBlock::SetDateTimeValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonDateTimeTextBlock.SetDateTimeValue");

	UCommonDateTimeTextBlock_SetDateTimeValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonDateTimeTextBlock.GetDateTime
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)

void UCommonDateTimeTextBlock::GetDateTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonDateTimeTextBlock.GetDateTime");

	UCommonDateTimeTextBlock_GetDateTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonUILibrary.FindParentWidgetOfType
// (Final, Native, Static, Public, BlueprintCallable)

void UCommonUILibrary::STATIC_FindParentWidgetOfType()
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonUILibrary.FindParentWidgetOfType");

	UCommonUILibrary_FindParentWidgetOfType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonWidgetStack.PushWidget
// (Final, Native, Public, BlueprintCallable)

void UCommonWidgetStack::PushWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonWidgetStack.PushWidget");

	UCommonWidgetStack_PushWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonWidgetStack.PopWigdet
// (Final, Native, Public, BlueprintCallable)

void UCommonWidgetStack::PopWigdet()
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonWidgetStack.PopWigdet");

	UCommonWidgetStack_PopWigdet_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonWidgetStack.DeactivateWidget
// (Native, Public, BlueprintCallable)

void UCommonWidgetStack::DeactivateWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonWidgetStack.DeactivateWidget");

	UCommonWidgetStack_DeactivateWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonWidgetStack.ActivateWidget
// (Native, Public, BlueprintCallable)

void UCommonWidgetStack::ActivateWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function CommonUI.CommonWidgetStack.ActivateWidget");

	UCommonWidgetStack_ActivateWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
