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

// Function LocalUserSettingTitle.LocalUserSettingTitle_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ULocalUserSettingTitle_C::Construct()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function LocalUserSettingTitle.LocalUserSettingTitle_C.Construct");

	ULocalUserSettingTitle_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LocalUserSettingTitle.LocalUserSettingTitle_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)

void ULocalUserSettingTitle_C::BP_OnUnhovered()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function LocalUserSettingTitle.LocalUserSettingTitle_C.BP_OnUnhovered");

	ULocalUserSettingTitle_C_BP_OnUnhovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LocalUserSettingTitle.LocalUserSettingTitle_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)

void ULocalUserSettingTitle_C::BP_OnHovered()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function LocalUserSettingTitle.LocalUserSettingTitle_C.BP_OnHovered");

	ULocalUserSettingTitle_C_BP_OnHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LocalUserSettingTitle.LocalUserSettingTitle_C.OnExpansionChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           bIsExpanded                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULocalUserSettingTitle_C::OnExpansionChanged(bool bIsExpanded)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function LocalUserSettingTitle.LocalUserSettingTitle_C.OnExpansionChanged");

	ULocalUserSettingTitle_C_OnExpansionChanged_Params params;
	params.bIsExpanded = bIsExpanded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LocalUserSettingTitle.LocalUserSettingTitle_C.ExecuteUbergraph_LocalUserSettingTitle
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULocalUserSettingTitle_C::ExecuteUbergraph_LocalUserSettingTitle(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function LocalUserSettingTitle.LocalUserSettingTitle_C.ExecuteUbergraph_LocalUserSettingTitle");

	ULocalUserSettingTitle_C_ExecuteUbergraph_LocalUserSettingTitle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
