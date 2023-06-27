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

// Function GA_SlamDoorOpen_Instigator.GA_SlamDoorOpen_Instigator_C.Completed_6B6649DA4284DCE7779BA98D6543CFFB
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_SlamDoorOpen_Instigator_C::Completed_6B6649DA4284DCE7779BA98D6543CFFB(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_SlamDoorOpen_Instigator.GA_SlamDoorOpen_Instigator_C.Completed_6B6649DA4284DCE7779BA98D6543CFFB");

	UGA_SlamDoorOpen_Instigator_C_Completed_6B6649DA4284DCE7779BA98D6543CFFB_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_SlamDoorOpen_Instigator.GA_SlamDoorOpen_Instigator_C.Cancelled_6B6649DA4284DCE7779BA98D6543CFFB
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_SlamDoorOpen_Instigator_C::Cancelled_6B6649DA4284DCE7779BA98D6543CFFB(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_SlamDoorOpen_Instigator.GA_SlamDoorOpen_Instigator_C.Cancelled_6B6649DA4284DCE7779BA98D6543CFFB");

	UGA_SlamDoorOpen_Instigator_C_Cancelled_6B6649DA4284DCE7779BA98D6543CFFB_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_SlamDoorOpen_Instigator.GA_SlamDoorOpen_Instigator_C.Triggered_6B6649DA4284DCE7779BA98D6543CFFB
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_SlamDoorOpen_Instigator_C::Triggered_6B6649DA4284DCE7779BA98D6543CFFB(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_SlamDoorOpen_Instigator.GA_SlamDoorOpen_Instigator_C.Triggered_6B6649DA4284DCE7779BA98D6543CFFB");

	UGA_SlamDoorOpen_Instigator_C_Triggered_6B6649DA4284DCE7779BA98D6543CFFB_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_SlamDoorOpen_Instigator.GA_SlamDoorOpen_Instigator_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGameplayEventData      EventData                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_SlamDoorOpen_Instigator_C::K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_SlamDoorOpen_Instigator.GA_SlamDoorOpen_Instigator_C.K2_ActivateAbilityFromEvent");

	UGA_SlamDoorOpen_Instigator_C_K2_ActivateAbilityFromEvent_Params params;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_SlamDoorOpen_Instigator.GA_SlamDoorOpen_Instigator_C.ExecuteUbergraph_GA_SlamDoorOpen_Instigator
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_SlamDoorOpen_Instigator_C::ExecuteUbergraph_GA_SlamDoorOpen_Instigator(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_SlamDoorOpen_Instigator.GA_SlamDoorOpen_Instigator_C.ExecuteUbergraph_GA_SlamDoorOpen_Instigator");

	UGA_SlamDoorOpen_Instigator_C_ExecuteUbergraph_GA_SlamDoorOpen_Instigator_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
