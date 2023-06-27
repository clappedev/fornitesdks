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

// Function GA_HeldObject_Place_Component.GA_HeldObject_Place_Component_C.Completed_FB73B2F540131A6D5CEF3FB7287803D4
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_HeldObject_Place_Component_C::Completed_FB73B2F540131A6D5CEF3FB7287803D4(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_HeldObject_Place_Component.GA_HeldObject_Place_Component_C.Completed_FB73B2F540131A6D5CEF3FB7287803D4");

	UGA_HeldObject_Place_Component_C_Completed_FB73B2F540131A6D5CEF3FB7287803D4_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_HeldObject_Place_Component.GA_HeldObject_Place_Component_C.Cancelled_FB73B2F540131A6D5CEF3FB7287803D4
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_HeldObject_Place_Component_C::Cancelled_FB73B2F540131A6D5CEF3FB7287803D4(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_HeldObject_Place_Component.GA_HeldObject_Place_Component_C.Cancelled_FB73B2F540131A6D5CEF3FB7287803D4");

	UGA_HeldObject_Place_Component_C_Cancelled_FB73B2F540131A6D5CEF3FB7287803D4_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_HeldObject_Place_Component.GA_HeldObject_Place_Component_C.Triggered_FB73B2F540131A6D5CEF3FB7287803D4
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_HeldObject_Place_Component_C::Triggered_FB73B2F540131A6D5CEF3FB7287803D4(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_HeldObject_Place_Component.GA_HeldObject_Place_Component_C.Triggered_FB73B2F540131A6D5CEF3FB7287803D4");

	UGA_HeldObject_Place_Component_C_Triggered_FB73B2F540131A6D5CEF3FB7287803D4_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_HeldObject_Place_Component.GA_HeldObject_Place_Component_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGameplayEventData      EventData                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_HeldObject_Place_Component_C::K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_HeldObject_Place_Component.GA_HeldObject_Place_Component_C.K2_ActivateAbilityFromEvent");

	UGA_HeldObject_Place_Component_C_K2_ActivateAbilityFromEvent_Params params;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_HeldObject_Place_Component.GA_HeldObject_Place_Component_C.ExecuteUbergraph_GA_HeldObject_Place_Component
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_HeldObject_Place_Component_C::ExecuteUbergraph_GA_HeldObject_Place_Component(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_HeldObject_Place_Component.GA_HeldObject_Place_Component_C.ExecuteUbergraph_GA_HeldObject_Place_Component");

	UGA_HeldObject_Place_Component_C_ExecuteUbergraph_GA_HeldObject_Place_Component_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
