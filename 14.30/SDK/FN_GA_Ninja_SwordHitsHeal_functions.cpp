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

// Function GA_Ninja_SwordHitsHeal.GA_Ninja_SwordHitsHeal_C.SetupAbility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAbilitySystemComponent* AbilitySystem                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UGA_Ninja_SwordHitsHeal_C::SetupAbility(class UAbilitySystemComponent* AbilitySystem)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Ninja_SwordHitsHeal.GA_Ninja_SwordHitsHeal_C.SetupAbility");

	UGA_Ninja_SwordHitsHeal_C_SetupAbility_Params params;
	params.AbilitySystem = AbilitySystem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Ninja_SwordHitsHeal.GA_Ninja_SwordHitsHeal_C.K2_ShouldAbilityRespondToEvent
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FGameplayAbilityActorInfo ActorInfo                      (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FGameplayEventData      Payload                        (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGA_Ninja_SwordHitsHeal_C::K2_ShouldAbilityRespondToEvent(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayEventData& Payload)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Ninja_SwordHitsHeal.GA_Ninja_SwordHitsHeal_C.K2_ShouldAbilityRespondToEvent");

	UGA_Ninja_SwordHitsHeal_C_K2_ShouldAbilityRespondToEvent_Params params;
	params.ActorInfo = ActorInfo;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GA_Ninja_SwordHitsHeal.GA_Ninja_SwordHitsHeal_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGameplayEventData      EventData                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_Ninja_SwordHitsHeal_C::K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Ninja_SwordHitsHeal.GA_Ninja_SwordHitsHeal_C.K2_ActivateAbilityFromEvent");

	UGA_Ninja_SwordHitsHeal_C_K2_ActivateAbilityFromEvent_Params params;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Ninja_SwordHitsHeal.GA_Ninja_SwordHitsHeal_C.ExecuteUbergraph_GA_Ninja_SwordHitsHeal
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Ninja_SwordHitsHeal_C::ExecuteUbergraph_GA_Ninja_SwordHitsHeal(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Ninja_SwordHitsHeal.GA_Ninja_SwordHitsHeal_C.ExecuteUbergraph_GA_Ninja_SwordHitsHeal");

	UGA_Ninja_SwordHitsHeal_C_ExecuteUbergraph_GA_Ninja_SwordHitsHeal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
