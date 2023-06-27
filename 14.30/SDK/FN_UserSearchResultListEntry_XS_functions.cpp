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

// Function UserSearchResultListEntry_XS.UserSearchResultListEntry_XS_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)

void UUserSearchResultListEntry_XS_C::BP_OnUnhovered()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function UserSearchResultListEntry_XS.UserSearchResultListEntry_XS_C.BP_OnUnhovered");

	UUserSearchResultListEntry_XS_C_BP_OnUnhovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserSearchResultListEntry_XS.UserSearchResultListEntry_XS_C.BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bIsOpen                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUserSearchResultListEntry_XS_C::BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function UserSearchResultListEntry_XS.UserSearchResultListEntry_XS_C.BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature");

	UUserSearchResultListEntry_XS_C_BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature_Params params;
	params.bIsOpen = bIsOpen;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserSearchResultListEntry_XS.UserSearchResultListEntry_XS_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)

void UUserSearchResultListEntry_XS_C::BP_OnHovered()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function UserSearchResultListEntry_XS.UserSearchResultListEntry_XS_C.BP_OnHovered");

	UUserSearchResultListEntry_XS_C_BP_OnHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserSearchResultListEntry_XS.UserSearchResultListEntry_XS_C.SetNamePlatformAndMutuals
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   DisplayName                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FText                   Platform                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int                            MutualCount                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUserSearchResultListEntry_XS_C::SetNamePlatformAndMutuals(const struct FText& DisplayName, const struct FText& Platform, int MutualCount)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function UserSearchResultListEntry_XS.UserSearchResultListEntry_XS_C.SetNamePlatformAndMutuals");

	UUserSearchResultListEntry_XS_C_SetNamePlatformAndMutuals_Params params;
	params.DisplayName = DisplayName;
	params.Platform = Platform;
	params.MutualCount = MutualCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserSearchResultListEntry_XS.UserSearchResultListEntry_XS_C.ExecuteUbergraph_UserSearchResultListEntry_XS
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUserSearchResultListEntry_XS_C::ExecuteUbergraph_UserSearchResultListEntry_XS(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function UserSearchResultListEntry_XS.UserSearchResultListEntry_XS_C.ExecuteUbergraph_UserSearchResultListEntry_XS");

	UUserSearchResultListEntry_XS_C_ExecuteUbergraph_UserSearchResultListEntry_XS_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
