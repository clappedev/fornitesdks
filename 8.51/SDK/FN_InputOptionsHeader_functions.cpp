// Fortnite (8.51) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function InputOptionsHeader.InputOptionsHeader_C.GetListItemObject
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UInputOptionsHeader_C::GetListItemObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputOptionsHeader.InputOptionsHeader_C.GetListItemObject");

	UInputOptionsHeader_C_GetListItemObject_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function InputOptionsHeader.InputOptionsHeader_C.BP_OnEntryReleased
// (Event, Protected, BlueprintEvent)

void UInputOptionsHeader_C::BP_OnEntryReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputOptionsHeader.InputOptionsHeader_C.BP_OnEntryReleased");

	UInputOptionsHeader_C_BP_OnEntryReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputOptionsHeader.InputOptionsHeader_C.BP_OnItemExpansionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bIsExpanded                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInputOptionsHeader_C::BP_OnItemExpansionChanged(bool bIsExpanded)
{
	static auto fn = UObject::FindObject<UFunction>("Function InputOptionsHeader.InputOptionsHeader_C.BP_OnItemExpansionChanged");

	UInputOptionsHeader_C_BP_OnItemExpansionChanged_Params params;
	params.bIsExpanded = bIsExpanded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputOptionsHeader.InputOptionsHeader_C.BP_OnItemSelectionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bIsSelected                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInputOptionsHeader_C::BP_OnItemSelectionChanged(bool bIsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function InputOptionsHeader.InputOptionsHeader_C.BP_OnItemSelectionChanged");

	UInputOptionsHeader_C_BP_OnItemSelectionChanged_Params params;
	params.bIsSelected = bIsSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputOptionsHeader.InputOptionsHeader_C.OnListItemObjectSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UObject*                 ListItemObject                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInputOptionsHeader_C::OnListItemObjectSet(class UObject* ListItemObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function InputOptionsHeader.InputOptionsHeader_C.OnListItemObjectSet");

	UInputOptionsHeader_C_OnListItemObjectSet_Params params;
	params.ListItemObject = ListItemObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputOptionsHeader.InputOptionsHeader_C.ExecuteUbergraph_InputOptionsHeader
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInputOptionsHeader_C::ExecuteUbergraph_InputOptionsHeader(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function InputOptionsHeader.InputOptionsHeader_C.ExecuteUbergraph_InputOptionsHeader");

	UInputOptionsHeader_C_ExecuteUbergraph_InputOptionsHeader_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
