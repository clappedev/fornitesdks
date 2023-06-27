// Fortnite (14.30) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function StatsListWidget.StatsListWidget_C.Trigger Initial Reset
// (Public, BlueprintCallable, BlueprintEvent)

void UStatsListWidget_C::Trigger_Initial_Reset()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function StatsListWidget.StatsListWidget_C.Trigger Initial Reset");

	UStatsListWidget_C_Trigger_Initial_Reset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatsListWidget.StatsListWidget_C.Trigger Update Anim
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UStatsListWidget_C::Trigger_Update_Anim()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function StatsListWidget.StatsListWidget_C.Trigger Update Anim");

	UStatsListWidget_C_Trigger_Update_Anim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatsListWidget.StatsListWidget_C.Update
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UStatsListWidget_C::Update()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function StatsListWidget.StatsListWidget_C.Update");

	UStatsListWidget_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatsListWidget.StatsListWidget_C.AdjustClampCount
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortAttributeListItem_NUI* Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           Add                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UStatsListWidget_C::AdjustClampCount(class UFortAttributeListItem_NUI* Widget, bool Add)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function StatsListWidget.StatsListWidget_C.AdjustClampCount");

	UStatsListWidget_C_AdjustClampCount_Params params;
	params.Widget = Widget;
	params.Add = Add;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatsListWidget.StatsListWidget_C.ToggleClampedValueMessage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           inShow                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UStatsListWidget_C::ToggleClampedValueMessage(bool inShow)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function StatsListWidget.StatsListWidget_C.ToggleClampedValueMessage");

	UStatsListWidget_C_ToggleClampedValueMessage_Params params;
	params.inShow = inShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatsListWidget.StatsListWidget_C.OnClearShownAttributes
// (Event, Protected, BlueprintEvent)

void UStatsListWidget_C::OnClearShownAttributes()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function StatsListWidget.StatsListWidget_C.OnClearShownAttributes");

	UStatsListWidget_C_OnClearShownAttributes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatsListWidget.StatsListWidget_C.OnAddShownAttributeListItem
// (Event, Public, BlueprintEvent)
// Parameters:
// class UFortAttributeListItem_NUI* AttributeListItemWidget        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UStatsListWidget_C::OnAddShownAttributeListItem(class UFortAttributeListItem_NUI* AttributeListItemWidget)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function StatsListWidget.StatsListWidget_C.OnAddShownAttributeListItem");

	UStatsListWidget_C_OnAddShownAttributeListItem_Params params;
	params.AttributeListItemWidget = AttributeListItemWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatsListWidget.StatsListWidget_C.OnRemoveShownAttributeListItem
// (Event, Public, BlueprintEvent)
// Parameters:
// class UFortAttributeListItem_NUI* AttributeListItemWidget        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            AtIndex                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UStatsListWidget_C::OnRemoveShownAttributeListItem(class UFortAttributeListItem_NUI* AttributeListItemWidget, int AtIndex)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function StatsListWidget.StatsListWidget_C.OnRemoveShownAttributeListItem");

	UStatsListWidget_C_OnRemoveShownAttributeListItem_Params params;
	params.AttributeListItemWidget = AttributeListItemWidget;
	params.AtIndex = AtIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StatsListWidget.StatsListWidget_C.ExecuteUbergraph_StatsListWidget
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UStatsListWidget_C::ExecuteUbergraph_StatsListWidget(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function StatsListWidget.StatsListWidget_C.ExecuteUbergraph_StatsListWidget");

	UStatsListWidget_C_ExecuteUbergraph_StatsListWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
