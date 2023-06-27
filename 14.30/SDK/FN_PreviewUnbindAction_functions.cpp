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

// Function PreviewUnbindAction.PreviewUnbindAction_C.BP_OnEntryReleased
// (Event, Protected, BlueprintEvent)

void UPreviewUnbindAction_C::BP_OnEntryReleased()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PreviewUnbindAction.PreviewUnbindAction_C.BP_OnEntryReleased");

	UPreviewUnbindAction_C_BP_OnEntryReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PreviewUnbindAction.PreviewUnbindAction_C.BP_OnItemExpansionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bIsExpanded                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPreviewUnbindAction_C::BP_OnItemExpansionChanged(bool bIsExpanded)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PreviewUnbindAction.PreviewUnbindAction_C.BP_OnItemExpansionChanged");

	UPreviewUnbindAction_C_BP_OnItemExpansionChanged_Params params;
	params.bIsExpanded = bIsExpanded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PreviewUnbindAction.PreviewUnbindAction_C.BP_OnItemSelectionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bIsSelected                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPreviewUnbindAction_C::BP_OnItemSelectionChanged(bool bIsSelected)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PreviewUnbindAction.PreviewUnbindAction_C.BP_OnItemSelectionChanged");

	UPreviewUnbindAction_C_BP_OnItemSelectionChanged_Params params;
	params.bIsSelected = bIsSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PreviewUnbindAction.PreviewUnbindAction_C.OnListItemObjectSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UObject*                 ListItemObject                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPreviewUnbindAction_C::OnListItemObjectSet(class UObject* ListItemObject)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PreviewUnbindAction.PreviewUnbindAction_C.OnListItemObjectSet");

	UPreviewUnbindAction_C_OnListItemObjectSet_Params params;
	params.ListItemObject = ListItemObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PreviewUnbindAction.PreviewUnbindAction_C.ExecuteUbergraph_PreviewUnbindAction
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPreviewUnbindAction_C::ExecuteUbergraph_PreviewUnbindAction(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PreviewUnbindAction.PreviewUnbindAction_C.ExecuteUbergraph_PreviewUnbindAction");

	UPreviewUnbindAction_C_ExecuteUbergraph_PreviewUnbindAction_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
