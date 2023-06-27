#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function GA_BadgerBangs_KeepCheckingLOS.GA_BadgerBangs_KeepCheckingLOS_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_BadgerBangs_KeepCheckingLOS_C::K2_ActivateAbility()
{
	static auto Func = Class->GetFunction("GA_BadgerBangs_KeepCheckingLOS_C", "K2_ActivateAbility");

	Params::UGA_BadgerBangs_KeepCheckingLOS_C_K2_ActivateAbility_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function GA_BadgerBangs_KeepCheckingLOS.GA_BadgerBangs_KeepCheckingLOS_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bWasCancelled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_BadgerBangs_KeepCheckingLOS_C::K2_OnEndAbility(bool bWasCancelled)
{
	static auto Func = Class->GetFunction("GA_BadgerBangs_KeepCheckingLOS_C", "K2_OnEndAbility");

	Params::UGA_BadgerBangs_KeepCheckingLOS_C_K2_OnEndAbility_Params Parms;
	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}

// Function GA_BadgerBangs_KeepCheckingLOS.GA_BadgerBangs_KeepCheckingLOS_C.CheckLOSAgain
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_BadgerBangs_KeepCheckingLOS_C::CheckLOSAgain()
{
	static auto Func = Class->GetFunction("GA_BadgerBangs_KeepCheckingLOS_C", "CheckLOSAgain");

	Params::UGA_BadgerBangs_KeepCheckingLOS_C_CheckLOSAgain_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function GA_BadgerBangs_KeepCheckingLOS.GA_BadgerBangs_KeepCheckingLOS_C.ExecuteUbergraph_GA_BadgerBangs_KeepCheckingLOS
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityActorInfo   CallFunc_GetActorInfo_ReturnValue                                (ContainsInstancedReference)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bWasCancelled                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayEffectContextHandleCallFunc_GetGrantedByEffectContext_ReturnValue                   ()
// class AActor*                      CallFunc_EffectContextGetEffectCauser_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABGA_Athena_BadgerBangsStuck_C*K2Node_DynamicCast_AsBGA_Athena_Badger_Bangs_Stuck               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_BadgerBangs_KeepCheckingLOS_C::ExecuteUbergraph_GA_BadgerBangs_KeepCheckingLOS(int32 EntryPoint, const struct FGameplayAbilityActorInfo& CallFunc_GetActorInfo_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool K2Node_Event_bWasCancelled, const struct FGameplayEffectContextHandle& CallFunc_GetGrantedByEffectContext_ReturnValue, class AActor* CallFunc_EffectContextGetEffectCauser_ReturnValue, class ABGA_Athena_BadgerBangsStuck_C* K2Node_DynamicCast_AsBGA_Athena_Badger_Bangs_Stuck, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("GA_BadgerBangs_KeepCheckingLOS_C", "ExecuteUbergraph_GA_BadgerBangs_KeepCheckingLOS");

	Params::UGA_BadgerBangs_KeepCheckingLOS_C_ExecuteUbergraph_GA_BadgerBangs_KeepCheckingLOS_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetActorInfo_ReturnValue = CallFunc_GetActorInfo_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.K2Node_Event_bWasCancelled = K2Node_Event_bWasCancelled;
	Parms.CallFunc_GetGrantedByEffectContext_ReturnValue = CallFunc_GetGrantedByEffectContext_ReturnValue;
	Parms.CallFunc_EffectContextGetEffectCauser_ReturnValue = CallFunc_EffectContextGetEffectCauser_ReturnValue;
	Parms.K2Node_DynamicCast_AsBGA_Athena_Badger_Bangs_Stuck = K2Node_DynamicCast_AsBGA_Athena_Badger_Bangs_Stuck;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
