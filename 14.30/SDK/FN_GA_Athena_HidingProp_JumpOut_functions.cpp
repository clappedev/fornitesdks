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

// Function GA_Athena_HidingProp_JumpOut.GA_Athena_HidingProp_JumpOut_C.K2_CanActivateAbility
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FGameplayAbilityActorInfo ActorInfo                      (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FGameplayAbilitySpecHandle Handle                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
// struct FGameplayTagContainer   RelevantTags                   (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGA_Athena_HidingProp_JumpOut_C::K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayAbilitySpecHandle& Handle, struct FGameplayTagContainer* RelevantTags)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_HidingProp_JumpOut.GA_Athena_HidingProp_JumpOut_C.K2_CanActivateAbility");

	UGA_Athena_HidingProp_JumpOut_C_K2_CanActivateAbility_Params params;
	params.ActorInfo = ActorInfo;
	params.Handle = Handle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RelevantTags != nullptr)
		*RelevantTags = params.RelevantTags;

	return params.ReturnValue;
}


// Function GA_Athena_HidingProp_JumpOut.GA_Athena_HidingProp_JumpOut_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_Athena_HidingProp_JumpOut_C::K2_ActivateAbility()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_HidingProp_JumpOut.GA_Athena_HidingProp_JumpOut_C.K2_ActivateAbility");

	UGA_Athena_HidingProp_JumpOut_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_HidingProp_JumpOut.GA_Athena_HidingProp_JumpOut_C.ExecuteUbergraph_GA_Athena_HidingProp_JumpOut
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_HidingProp_JumpOut_C::ExecuteUbergraph_GA_Athena_HidingProp_JumpOut(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_HidingProp_JumpOut.GA_Athena_HidingProp_JumpOut_C.ExecuteUbergraph_GA_Athena_HidingProp_JumpOut");

	UGA_Athena_HidingProp_JumpOut_C_ExecuteUbergraph_GA_Athena_HidingProp_JumpOut_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
