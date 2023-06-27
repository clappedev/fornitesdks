#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function GA_Athena_DogSweater_RemoveDamageGE.GA_Athena_DogSweater_RemoveDamageGE_C.Removed_46088A7E4E28224061FB5FA6DF65CDC9
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Athena_DogSweater_RemoveDamageGE_C::Removed_46088A7E4E28224061FB5FA6DF65CDC9()
{
	static auto Func = Class->GetFunction("GA_Athena_DogSweater_RemoveDamageGE_C", "Removed_46088A7E4E28224061FB5FA6DF65CDC9");

	Params::UGA_Athena_DogSweater_RemoveDamageGE_C_Removed_46088A7E4E28224061FB5FA6DF65CDC9_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function GA_Athena_DogSweater_RemoveDamageGE.GA_Athena_DogSweater_RemoveDamageGE_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_Athena_DogSweater_RemoveDamageGE_C::K2_ActivateAbility()
{
	static auto Func = Class->GetFunction("GA_Athena_DogSweater_RemoveDamageGE_C", "K2_ActivateAbility");

	Params::UGA_Athena_DogSweater_RemoveDamageGE_C_K2_ActivateAbility_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function GA_Athena_DogSweater_RemoveDamageGE.GA_Athena_DogSweater_RemoveDamageGE_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bWasCancelled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_Athena_DogSweater_RemoveDamageGE_C::K2_OnEndAbility(bool bWasCancelled)
{
	static auto Func = Class->GetFunction("GA_Athena_DogSweater_RemoveDamageGE_C", "K2_OnEndAbility");

	Params::UGA_Athena_DogSweater_RemoveDamageGE_C_K2_OnEndAbility_Params Parms;
	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}

// Function GA_Athena_DogSweater_RemoveDamageGE.GA_Athena_DogSweater_RemoveDamageGE_C.ExecuteUbergraph_GA_Athena_DogSweater_RemoveDamageGE
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bWasCancelled                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UAbilityTask_WaitGameplayTagRemoved*CallFunc_WaitGameplayTagRemove_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_Athena_DogSweater_RemoveDamageGE_C::ExecuteUbergraph_GA_Athena_DogSweater_RemoveDamageGE(int32 EntryPoint, bool K2Node_Event_bWasCancelled, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UAbilityTask_WaitGameplayTagRemoved* CallFunc_WaitGameplayTagRemove_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("GA_Athena_DogSweater_RemoveDamageGE_C", "ExecuteUbergraph_GA_Athena_DogSweater_RemoveDamageGE");

	Params::UGA_Athena_DogSweater_RemoveDamageGE_C_ExecuteUbergraph_GA_Athena_DogSweater_RemoveDamageGE_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_bWasCancelled = K2Node_Event_bWasCancelled;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_WaitGameplayTagRemove_ReturnValue = CallFunc_WaitGameplayTagRemove_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
