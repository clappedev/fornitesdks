#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function GA__Festivus_Dance.GA__Festivus_Dance_C.InvalidHandle_420E3BBE40CCE8C5038779B176A3191D
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEffectRemovalInfo  GameplayEffectRemovalInfo                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA__Festivus_Dance_C::InvalidHandle_420E3BBE40CCE8C5038779B176A3191D(struct FGameplayEffectRemovalInfo& GameplayEffectRemovalInfo)
{
	static auto Func = Class->GetFunction("GA__Festivus_Dance_C", "InvalidHandle_420E3BBE40CCE8C5038779B176A3191D");

	Params::UGA__Festivus_Dance_C_InvalidHandle_420E3BBE40CCE8C5038779B176A3191D_Params Parms;
	Parms.GameplayEffectRemovalInfo = GameplayEffectRemovalInfo;

	UObject::ProcessEvent(Func, &Parms);
}

// Function GA__Festivus_Dance.GA__Festivus_Dance_C.OnRemoved_420E3BBE40CCE8C5038779B176A3191D
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEffectRemovalInfo  GameplayEffectRemovalInfo                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA__Festivus_Dance_C::OnRemoved_420E3BBE40CCE8C5038779B176A3191D(struct FGameplayEffectRemovalInfo& GameplayEffectRemovalInfo)
{
	static auto Func = Class->GetFunction("GA__Festivus_Dance_C", "OnRemoved_420E3BBE40CCE8C5038779B176A3191D");

	Params::UGA__Festivus_Dance_C_OnRemoved_420E3BBE40CCE8C5038779B176A3191D_Params Parms;
	Parms.GameplayEffectRemovalInfo = GameplayEffectRemovalInfo;

	UObject::ProcessEvent(Func, &Parms);
}

// Function GA__Festivus_Dance.GA__Festivus_Dance_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA__Festivus_Dance_C::K2_ActivateAbility()
{
	static auto Func = Class->GetFunction("GA__Festivus_Dance_C", "K2_ActivateAbility");

	Params::UGA__Festivus_Dance_C_K2_ActivateAbility_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function GA__Festivus_Dance.GA__Festivus_Dance_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bWasCancelled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA__Festivus_Dance_C::K2_OnEndAbility(bool bWasCancelled)
{
	static auto Func = Class->GetFunction("GA__Festivus_Dance_C", "K2_OnEndAbility");

	Params::UGA__Festivus_Dance_C_K2_OnEndAbility_Params Parms;
	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}

// Function GA__Festivus_Dance.GA__Festivus_Dance_C.ExecuteUbergraph_GA__Festivus_Dance
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilityTask_WaitGameplayEffectRemoved*CallFunc_WaitForGameplayEffectRemoved_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayEffectRemovalInfo  Temp_struct_Variable                                             ()
// struct FGameplayAbilityActorInfo   CallFunc_GetActorInfo_ReturnValue                                (ContainsInstancedReference)
// struct FGameplayEffectRemovalInfo  K2Node_CustomEvent_GameplayEffectRemovalInfo                     (ConstParm)
// class AFortPawn*                   K2Node_DynamicCast_AsFort_Pawn                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerPawn*             K2Node_DynamicCast_AsFort_Player_Pawn                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayAbilityTargetDataHandleCallFunc_AbilityTargetDataFromActor_ReturnValue                  ()
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FActiveGameplayEffectHandle>CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue              (ZeroConstructor, ReferenceParm)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortAIPawn*                 K2Node_DynamicCast_AsFort_AIPawn                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue                (NoDestructor, HasGetValueTypeHash)
// class UFortAbilitySystemComponent* K2Node_DynamicCast_AsFort_Ability_System_Component               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess3                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bWasCancelled                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayAbilityActorInfo   CallFunc_GetActorInfo_ReturnValue1                               (ContainsInstancedReference)
// float                              CallFunc_PlayAnimMontage_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPawn*                   K2Node_DynamicCast_AsFort_Pawn1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess4                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue1                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAbilitySystemComponent* K2Node_DynamicCast_AsFort_Ability_System_Component1              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess5                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// struct FGameplayEffectRemovalInfo  K2Node_CustomEvent_GameplayEffectRemovalInfo1                    (ConstParm)
// bool                               CallFunc_K2_CommitAbility_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA__Festivus_Dance_C::ExecuteUbergraph_GA__Festivus_Dance(int32 EntryPoint, class UAbilityTask_WaitGameplayEffectRemoved* CallFunc_WaitForGameplayEffectRemoved_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, const struct FGameplayEffectRemovalInfo& Temp_struct_Variable, const struct FGameplayAbilityActorInfo& CallFunc_GetActorInfo_ReturnValue, const struct FGameplayEffectRemovalInfo& K2Node_CustomEvent_GameplayEffectRemovalInfo, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess1, const struct FGameplayAbilityTargetDataHandle& CallFunc_AbilityTargetDataFromActor_ReturnValue, bool CallFunc_IsValid_ReturnValue1, TArray<struct FActiveGameplayEffectHandle>& CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, class AFortAIPawn* K2Node_DynamicCast_AsFort_AIPawn, bool K2Node_DynamicCast_bSuccess2, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue, class UFortAbilitySystemComponent* K2Node_DynamicCast_AsFort_Ability_System_Component, bool K2Node_DynamicCast_bSuccess3, bool K2Node_Event_bWasCancelled, const struct FGameplayAbilityActorInfo& CallFunc_GetActorInfo_ReturnValue1, float CallFunc_PlayAnimMontage_ReturnValue, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn1, bool K2Node_DynamicCast_bSuccess4, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue1, class UFortAbilitySystemComponent* K2Node_DynamicCast_AsFort_Ability_System_Component1, bool K2Node_DynamicCast_bSuccess5, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, const struct FGameplayEffectRemovalInfo& K2Node_CustomEvent_GameplayEffectRemovalInfo1, bool CallFunc_K2_CommitAbility_ReturnValue)
{
	static auto Func = Class->GetFunction("GA__Festivus_Dance_C", "ExecuteUbergraph_GA__Festivus_Dance");

	Params::UGA__Festivus_Dance_C_ExecuteUbergraph_GA__Festivus_Dance_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_WaitForGameplayEffectRemoved_ReturnValue = CallFunc_WaitForGameplayEffectRemoved_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_GetActorInfo_ReturnValue = CallFunc_GetActorInfo_ReturnValue;
	Parms.K2Node_CustomEvent_GameplayEffectRemovalInfo = K2Node_CustomEvent_GameplayEffectRemovalInfo;
	Parms.K2Node_DynamicCast_AsFort_Pawn = K2Node_DynamicCast_AsFort_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn = K2Node_DynamicCast_AsFort_Player_Pawn;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.CallFunc_AbilityTargetDataFromActor_ReturnValue = CallFunc_AbilityTargetDataFromActor_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue = CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue = CallFunc_GetAbilitySystemComponent_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_AIPawn = K2Node_DynamicCast_AsFort_AIPawn;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue = CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Ability_System_Component = K2Node_DynamicCast_AsFort_Ability_System_Component;
	Parms.K2Node_DynamicCast_bSuccess3 = K2Node_DynamicCast_bSuccess3;
	Parms.K2Node_Event_bWasCancelled = K2Node_Event_bWasCancelled;
	Parms.CallFunc_GetActorInfo_ReturnValue1 = CallFunc_GetActorInfo_ReturnValue1;
	Parms.CallFunc_PlayAnimMontage_ReturnValue = CallFunc_PlayAnimMontage_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Pawn1 = K2Node_DynamicCast_AsFort_Pawn1;
	Parms.K2Node_DynamicCast_bSuccess4 = K2Node_DynamicCast_bSuccess4;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue1 = CallFunc_GetAbilitySystemComponent_ReturnValue1;
	Parms.K2Node_DynamicCast_AsFort_Ability_System_Component1 = K2Node_DynamicCast_AsFort_Ability_System_Component1;
	Parms.K2Node_DynamicCast_bSuccess5 = K2Node_DynamicCast_bSuccess5;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.K2Node_CustomEvent_GameplayEffectRemovalInfo1 = K2Node_CustomEvent_GameplayEffectRemovalInfo1;
	Parms.CallFunc_K2_CommitAbility_ReturnValue = CallFunc_K2_CommitAbility_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
