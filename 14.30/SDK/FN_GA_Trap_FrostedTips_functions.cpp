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

// Function GA_Trap_FrostedTips.GA_Trap_FrostedTips_C.Cancelled_07C1C34E45CD85906A2BE8AC828863B9
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Trap_FrostedTips_C::Cancelled_07C1C34E45CD85906A2BE8AC828863B9(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Trap_FrostedTips.GA_Trap_FrostedTips_C.Cancelled_07C1C34E45CD85906A2BE8AC828863B9");

	UGA_Trap_FrostedTips_C_Cancelled_07C1C34E45CD85906A2BE8AC828863B9_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Trap_FrostedTips.GA_Trap_FrostedTips_C.Targeted_07C1C34E45CD85906A2BE8AC828863B9
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Trap_FrostedTips_C::Targeted_07C1C34E45CD85906A2BE8AC828863B9(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Trap_FrostedTips.GA_Trap_FrostedTips_C.Targeted_07C1C34E45CD85906A2BE8AC828863B9");

	UGA_Trap_FrostedTips_C_Targeted_07C1C34E45CD85906A2BE8AC828863B9_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Trap_FrostedTips.GA_Trap_FrostedTips_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_Trap_FrostedTips_C::K2_ActivateAbility()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Trap_FrostedTips.GA_Trap_FrostedTips_C.K2_ActivateAbility");

	UGA_Trap_FrostedTips_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Trap_FrostedTips.GA_Trap_FrostedTips_C.TriggerTrapGameplay
// (BlueprintCallable, BlueprintEvent)

void UGA_Trap_FrostedTips_C::TriggerTrapGameplay()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Trap_FrostedTips.GA_Trap_FrostedTips_C.TriggerTrapGameplay");

	UGA_Trap_FrostedTips_C_TriggerTrapGameplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Trap_FrostedTips.GA_Trap_FrostedTips_C.ExecuteUbergraph_GA_Trap_FrostedTips
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Trap_FrostedTips_C::ExecuteUbergraph_GA_Trap_FrostedTips(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Trap_FrostedTips.GA_Trap_FrostedTips_C.ExecuteUbergraph_GA_Trap_FrostedTips");

	UGA_Trap_FrostedTips_C_ExecuteUbergraph_GA_Trap_FrostedTips_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
