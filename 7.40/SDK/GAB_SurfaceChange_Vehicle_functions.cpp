#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function GAB_SurfaceChange_Vehicle.GAB_SurfaceChange_Vehicle_C.HotfixableGEApplication
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScalableFloat              Input                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UClass*                      GameplayEffectAppliedOnTrue                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      GameplayEffectAppliedOnFalse                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueAtLevel_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue               (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue1              (NoDestructor, HasGetValueTypeHash)

void UGAB_SurfaceChange_Vehicle_C::HotfixableGEApplication(struct FScalableFloat& Input, class UClass* GameplayEffectAppliedOnTrue, class UClass* GameplayEffectAppliedOnFalse, float CallFunc_GetValueAtLevel_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue1)
{
	static auto Func = Class->GetFunction("GAB_SurfaceChange_Vehicle_C", "HotfixableGEApplication");

	Params::UGAB_SurfaceChange_Vehicle_C_HotfixableGEApplication_Params Parms;
	Parms.Input = Input;
	Parms.GameplayEffectAppliedOnTrue = GameplayEffectAppliedOnTrue;
	Parms.GameplayEffectAppliedOnFalse = GameplayEffectAppliedOnFalse;
	Parms.CallFunc_GetValueAtLevel_ReturnValue = CallFunc_GetValueAtLevel_ReturnValue;
	Parms.CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue = CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue1 = CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);
}

// Function GAB_SurfaceChange_Vehicle.GAB_SurfaceChange_Vehicle_C.RemoveGameplayEffects
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGAB_SurfaceChange_Vehicle_C::RemoveGameplayEffects()
{
	static auto Func = Class->GetFunction("GAB_SurfaceChange_Vehicle_C", "RemoveGameplayEffects");

	Params::UGAB_SurfaceChange_Vehicle_C_RemoveGameplayEffects_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function GAB_SurfaceChange_Vehicle.GAB_SurfaceChange_Vehicle_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayEventData          EventData                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGAB_SurfaceChange_Vehicle_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData)
{
	static auto Func = Class->GetFunction("GAB_SurfaceChange_Vehicle_C", "K2_ActivateAbilityFromEvent");

	Params::UGAB_SurfaceChange_Vehicle_C_K2_ActivateAbilityFromEvent_Params Parms;
	Parms.EventData = EventData;

	UObject::ProcessEvent(Func, &Parms);
}

// Function GAB_SurfaceChange_Vehicle.GAB_SurfaceChange_Vehicle_C.ExecuteUbergraph_GAB_SurfaceChange_Vehicle
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          K2Node_Event_EventData                                           (ConstParm)
// bool                               GameplayTagsK2Node_SwitchGameplayTagContainer_CmpSuccess         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue               (NoDestructor, HasGetValueTypeHash)

void UGAB_SurfaceChange_Vehicle_C::ExecuteUbergraph_GAB_SurfaceChange_Vehicle(int32 EntryPoint, const struct FGameplayEventData& K2Node_Event_EventData, bool GameplayTagsK2Node_SwitchGameplayTagContainer_CmpSuccess, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue)
{
	static auto Func = Class->GetFunction("GAB_SurfaceChange_Vehicle_C", "ExecuteUbergraph_GAB_SurfaceChange_Vehicle");

	Params::UGAB_SurfaceChange_Vehicle_C_ExecuteUbergraph_GAB_SurfaceChange_Vehicle_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_EventData = K2Node_Event_EventData;
	Parms.GameplayTagsK2Node_SwitchGameplayTagContainer_CmpSuccess = GameplayTagsK2Node_SwitchGameplayTagContainer_CmpSuccess;
	Parms.CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue = CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
