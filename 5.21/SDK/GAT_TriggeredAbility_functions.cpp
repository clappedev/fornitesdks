#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function GAT_TriggeredAbility.GAT_TriggeredAbility_C.TriggeredAbilitySetup
// (Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UAbilitySystemComponent*     Ability_System_Component                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGAT_TriggeredAbility_C::TriggeredAbilitySetup(class UAbilitySystemComponent* Ability_System_Component)
{
	static auto Func = Class->GetFunction("GAT_TriggeredAbility_C", "TriggeredAbilitySetup");

	Params::UGAT_TriggeredAbility_C_TriggeredAbilitySetup_Params Parms;
	Parms.Ability_System_Component = Ability_System_Component;

	UObject::ProcessEvent(Func, &Parms);
}

// Function GAT_TriggeredAbility.GAT_TriggeredAbility_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayEventData          EventData                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGAT_TriggeredAbility_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData)
{
	static auto Func = Class->GetFunction("GAT_TriggeredAbility_C", "K2_ActivateAbilityFromEvent");

	Params::UGAT_TriggeredAbility_C_K2_ActivateAbilityFromEvent_Params Parms;
	Parms.EventData = EventData;

	UObject::ProcessEvent(Func, &Parms);
}

// Function GAT_TriggeredAbility.GAT_TriggeredAbility_C.ExecuteUbergraph_GAT_TriggeredAbility
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          K2Node_Event_EventData                                           (ConstParm)

void UGAT_TriggeredAbility_C::ExecuteUbergraph_GAT_TriggeredAbility(int32 EntryPoint, const struct FGameplayEventData& K2Node_Event_EventData)
{
	static auto Func = Class->GetFunction("GAT_TriggeredAbility_C", "ExecuteUbergraph_GAT_TriggeredAbility");

	Params::UGAT_TriggeredAbility_C_ExecuteUbergraph_GAT_TriggeredAbility_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_EventData = K2Node_Event_EventData;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
