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

// Function UserListHeaderEntry.UserListHeaderEntry_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)

void UUserListHeaderEntry_C::BP_OnUnhovered()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function UserListHeaderEntry.UserListHeaderEntry_C.BP_OnUnhovered");

	UUserListHeaderEntry_C_BP_OnUnhovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserListHeaderEntry.UserListHeaderEntry_C.BP_OnItemExpansionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bIsExpanded                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUserListHeaderEntry_C::BP_OnItemExpansionChanged(bool bIsExpanded)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function UserListHeaderEntry.UserListHeaderEntry_C.BP_OnItemExpansionChanged");

	UUserListHeaderEntry_C_BP_OnItemExpansionChanged_Params params;
	params.bIsExpanded = bIsExpanded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserListHeaderEntry.UserListHeaderEntry_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)

void UUserListHeaderEntry_C::BP_OnHovered()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function UserListHeaderEntry.UserListHeaderEntry_C.BP_OnHovered");

	UUserListHeaderEntry_C_BP_OnHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserListHeaderEntry.UserListHeaderEntry_C.OnListItemObjectSet_2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 ListItemObject                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUserListHeaderEntry_C::OnListItemObjectSet_2(class UObject* ListItemObject)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function UserListHeaderEntry.UserListHeaderEntry_C.OnListItemObjectSet_2");

	UUserListHeaderEntry_C_OnListItemObjectSet_2_Params params;
	params.ListItemObject = ListItemObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserListHeaderEntry.UserListHeaderEntry_C.ExecuteUbergraph_UserListHeaderEntry
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUserListHeaderEntry_C::ExecuteUbergraph_UserListHeaderEntry(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function UserListHeaderEntry.UserListHeaderEntry_C.ExecuteUbergraph_UserListHeaderEntry");

	UUserListHeaderEntry_C_ExecuteUbergraph_UserListHeaderEntry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
