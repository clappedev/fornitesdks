#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function B_BGA_AppleSauce_RocketSpawner.B_BGA_AppleSauce_RocketSpawner_C.OnRep_StartedDestroying
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_BGA_AppleSauce_RocketSpawner_C::OnRep_StartedDestroying()
{
	static auto Func = Class->GetFunction("B_BGA_AppleSauce_RocketSpawner_C", "OnRep_StartedDestroying");

	Params::AB_BGA_AppleSauce_RocketSpawner_C_OnRep_StartedDestroying_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function B_BGA_AppleSauce_RocketSpawner.B_BGA_AppleSauce_RocketSpawner_C.OnRep_bResumeSimulation
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_BGA_AppleSauce_RocketSpawner_C::OnRep_bResumeSimulation()
{
	static auto Func = Class->GetFunction("B_BGA_AppleSauce_RocketSpawner_C", "OnRep_bResumeSimulation");

	Params::AB_BGA_AppleSauce_RocketSpawner_C_OnRep_bResumeSimulation_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function B_BGA_AppleSauce_RocketSpawner.B_BGA_AppleSauce_RocketSpawner_C.HandleBinding
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_BGA_AppleSauce_RocketSpawner_C::HandleBinding(class AActor* Actor)
{
	static auto Func = Class->GetFunction("B_BGA_AppleSauce_RocketSpawner_C", "HandleBinding");

	Params::AB_BGA_AppleSauce_RocketSpawner_C_HandleBinding_Params Parms;
	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);
}

// Function B_BGA_AppleSauce_RocketSpawner.B_BGA_AppleSauce_RocketSpawner_C.DestroyClusterSpawner
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_BGA_AppleSauce_RocketSpawner_C::DestroyClusterSpawner()
{
	static auto Func = Class->GetFunction("B_BGA_AppleSauce_RocketSpawner_C", "DestroyClusterSpawner");

	Params::AB_BGA_AppleSauce_RocketSpawner_C_DestroyClusterSpawner_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function B_BGA_AppleSauce_RocketSpawner.B_BGA_AppleSauce_RocketSpawner_C.OnBuildingActorInitialized
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// enum class EFortBuildingInitializationReasonInitializationReason                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortBuildingPersistentStateBuildingPersistentState                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_BGA_AppleSauce_RocketSpawner_C::OnBuildingActorInitialized(enum class EFortBuildingInitializationReason InitializationReason, enum class EFortBuildingPersistentState BuildingPersistentState)
{
	static auto Func = Class->GetFunction("B_BGA_AppleSauce_RocketSpawner_C", "OnBuildingActorInitialized");

	Params::AB_BGA_AppleSauce_RocketSpawner_C_OnBuildingActorInitialized_Params Parms;
	Parms.InitializationReason = InitializationReason;
	Parms.BuildingPersistentState = BuildingPersistentState;

	UObject::ProcessEvent(Func, &Parms);
}

// Function B_BGA_AppleSauce_RocketSpawner.B_BGA_AppleSauce_RocketSpawner_C.AirBlast_Incoming_Audio
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_BGA_AppleSauce_RocketSpawner_C::AirBlast_Incoming_Audio()
{
	static auto Func = Class->GetFunction("B_BGA_AppleSauce_RocketSpawner_C", "AirBlast_Incoming_Audio");

	Params::AB_BGA_AppleSauce_RocketSpawner_C_AirBlast_Incoming_Audio_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function B_BGA_AppleSauce_RocketSpawner.B_BGA_AppleSauce_RocketSpawner_C.ExecuteUbergraph_B_BGA_AppleSauce_RocketSpawner
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_Actor                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          K2Node_MakeStruct_GameplayEventData                              ()
// enum class EFortBuildingInitializationReasonK2Node_Event_InitializationReason                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortBuildingPersistentStateK2Node_Event_BuildingPersistentState                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_BGA_AppleSauce_RocketSpawner_C::ExecuteUbergraph_B_BGA_AppleSauce_RocketSpawner(int32 EntryPoint, class AActor* K2Node_CustomEvent_Actor, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData, enum class EFortBuildingInitializationReason K2Node_Event_InitializationReason, enum class EFortBuildingPersistentState K2Node_Event_BuildingPersistentState, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue)
{
	static auto Func = Class->GetFunction("B_BGA_AppleSauce_RocketSpawner_C", "ExecuteUbergraph_B_BGA_AppleSauce_RocketSpawner");

	Params::AB_BGA_AppleSauce_RocketSpawner_C_ExecuteUbergraph_B_BGA_AppleSauce_RocketSpawner_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Actor = K2Node_CustomEvent_Actor;
	Parms.K2Node_MakeStruct_GameplayEventData = K2Node_MakeStruct_GameplayEventData;
	Parms.K2Node_Event_InitializationReason = K2Node_Event_InitializationReason;
	Parms.K2Node_Event_BuildingPersistentState = K2Node_Event_BuildingPersistentState;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue = CallFunc_SpawnSoundAttached_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
