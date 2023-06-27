#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x0 (0x0 - 0x0)
// Function B_BGA_AppleSauce_RocketSpawner.B_BGA_AppleSauce_RocketSpawner_C.OnRep_StartedDestroying
struct AB_BGA_AppleSauce_RocketSpawner_C_OnRep_StartedDestroying_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function B_BGA_AppleSauce_RocketSpawner.B_BGA_AppleSauce_RocketSpawner_C.OnRep_bResumeSimulation
struct AB_BGA_AppleSauce_RocketSpawner_C_OnRep_bResumeSimulation_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function B_BGA_AppleSauce_RocketSpawner.B_BGA_AppleSauce_RocketSpawner_C.HandleBinding
struct AB_BGA_AppleSauce_RocketSpawner_C_HandleBinding_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function B_BGA_AppleSauce_RocketSpawner.B_BGA_AppleSauce_RocketSpawner_C.DestroyClusterSpawner
struct AB_BGA_AppleSauce_RocketSpawner_C_DestroyClusterSpawner_Params
{
public:
};

// 0x2 (0x2 - 0x0)
// Function B_BGA_AppleSauce_RocketSpawner.B_BGA_AppleSauce_RocketSpawner_C.OnBuildingActorInitialized
struct AB_BGA_AppleSauce_RocketSpawner_C_OnBuildingActorInitialized_Params
{
public:
	//enum class EFortBuildingInitializationReason InitializationReason;                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	//enum class EFortBuildingPersistentState    BuildingPersistentState;                           // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function B_BGA_AppleSauce_RocketSpawner.B_BGA_AppleSauce_RocketSpawner_C.AirBlast_Incoming_Audio
struct AB_BGA_AppleSauce_RocketSpawner_C_AirBlast_Incoming_Audio_Params
{
public:
};

// 0xD0 (0xD0 - 0x0)
// Function B_BGA_AppleSauce_RocketSpawner.B_BGA_AppleSauce_RocketSpawner_C.ExecuteUbergraph_B_BGA_AppleSauce_RocketSpawner
struct AB_BGA_AppleSauce_RocketSpawner_C_ExecuteUbergraph_B_BGA_AppleSauce_RocketSpawner_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3284[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                K2Node_CustomEvent_Actor;                          // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                    K2Node_MakeStruct_GameplayEventData;               // 0x10(0xB0)()
	enum class EFortBuildingInitializationReason K2Node_Event_InitializationReason;                 // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortBuildingPersistentState      K2Node_Event_BuildingPersistentState;              // 0xC1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3285[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAudioComponent*                       CallFunc_SpawnSoundAttached_ReturnValue;           // 0xC8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
