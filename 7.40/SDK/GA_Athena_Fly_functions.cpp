#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function GA_Athena_Fly.GA_Athena_Fly_C.Added_3EAC858E4A7943CBB81C86992D3F3CC1
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Athena_Fly_C::Added_3EAC858E4A7943CBB81C86992D3F3CC1()
{
	static auto Func = Class->GetFunction("GA_Athena_Fly_C", "Added_3EAC858E4A7943CBB81C86992D3F3CC1");

	Params::UGA_Athena_Fly_C_Added_3EAC858E4A7943CBB81C86992D3F3CC1_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function GA_Athena_Fly.GA_Athena_Fly_C.Removed_AAD5AA1645BDC2889C719BBCB8694960
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Athena_Fly_C::Removed_AAD5AA1645BDC2889C719BBCB8694960()
{
	static auto Func = Class->GetFunction("GA_Athena_Fly_C", "Removed_AAD5AA1645BDC2889C719BBCB8694960");

	Params::UGA_Athena_Fly_C_Removed_AAD5AA1645BDC2889C719BBCB8694960_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function GA_Athena_Fly.GA_Athena_Fly_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_Athena_Fly_C::K2_ActivateAbility()
{
	static auto Func = Class->GetFunction("GA_Athena_Fly_C", "K2_ActivateAbility");

	Params::UGA_Athena_Fly_C_K2_ActivateAbility_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function GA_Athena_Fly.GA_Athena_Fly_C.ExecuteUbergraph_GA_Athena_Fly
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UAbilityTask_WaitGameplayTagAdded*CallFunc_WaitGameplayTagAdd_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAbilityTask_WaitGameplayTagRemoved*CallFunc_WaitGameplayTagRemove_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue               (NoDestructor, HasGetValueTypeHash)

void UGA_Athena_Fly_C::ExecuteUbergraph_GA_Athena_Fly(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UAbilityTask_WaitGameplayTagAdded* CallFunc_WaitGameplayTagAdd_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, bool CallFunc_IsValid_ReturnValue, class UAbilityTask_WaitGameplayTagRemoved* CallFunc_WaitGameplayTagRemove_ReturnValue, bool CallFunc_IsValid_ReturnValue1, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue)
{
	static auto Func = Class->GetFunction("GA_Athena_Fly_C", "ExecuteUbergraph_GA_Athena_Fly");

	Params::UGA_Athena_Fly_C_ExecuteUbergraph_GA_Athena_Fly_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_WaitGameplayTagAdd_ReturnValue = CallFunc_WaitGameplayTagAdd_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_WaitGameplayTagRemove_ReturnValue = CallFunc_WaitGameplayTagRemove_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue = CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
