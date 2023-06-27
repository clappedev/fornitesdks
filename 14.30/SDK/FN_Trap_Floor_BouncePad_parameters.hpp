#pragma once

// Fortnite (14.30) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Trap_Floor_BouncePad.Trap_Floor_BouncePad_C.PhysicsObjectLaunch
struct ATrap_Floor_BouncePad_C_PhysicsObjectLaunch_Params
{
	class AFortPhysicsPawnObject*                      PhysicsObject;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Trap_Floor_BouncePad.Trap_Floor_BouncePad_C.BP_OnTrigger
struct ATrap_Floor_BouncePad_C_BP_OnTrigger_Params
{
	TArray<class AActor*>                              TouchingActors;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               bOutConsumeEvent;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Trap_Floor_BouncePad.Trap_Floor_BouncePad_C.DeimosApplyGameplayEffects
struct ATrap_Floor_BouncePad_C_DeimosApplyGameplayEffects_Params
{
};

// Function Trap_Floor_BouncePad.Trap_Floor_BouncePad_C.DeimosLaunch
struct ATrap_Floor_BouncePad_C_DeimosLaunch_Params
{
	class AEnemyPawn_Parent_Deimos_C*                  DeimosPawn;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Trap_Floor_BouncePad.Trap_Floor_BouncePad_C.PlayerApplyGameplayEffects
struct ATrap_Floor_BouncePad_C_PlayerApplyGameplayEffects_Params
{
};

// Function Trap_Floor_BouncePad.Trap_Floor_BouncePad_C.OnRep_Overlappedactor
struct ATrap_Floor_BouncePad_C_OnRep_Overlappedactor_Params
{
};

// Function Trap_Floor_BouncePad.Trap_Floor_BouncePad_C.VehicleLaunch
struct ATrap_Floor_BouncePad_C_VehicleLaunch_Params
{
	TScriptInterface<class UFortVehicleInterface>      VehicleInterface;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Trap_Floor_BouncePad.Trap_Floor_BouncePad_C.PlayerLaunch
struct ATrap_Floor_BouncePad_C_PlayerLaunch_Params
{
	class AFortPlayerPawn*                             Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Trap_Floor_BouncePad.Trap_Floor_BouncePad_C.UserConstructionScript
struct ATrap_Floor_BouncePad_C_UserConstructionScript_Params
{
};

// Function Trap_Floor_BouncePad.Trap_Floor_BouncePad_C.OnPlaced
struct ATrap_Floor_BouncePad_C_OnPlaced_Params
{
};

// Function Trap_Floor_BouncePad.Trap_Floor_BouncePad_C.OnFinishedBuilding
struct ATrap_Floor_BouncePad_C_OnFinishedBuilding_Params
{
};

// Function Trap_Floor_BouncePad.Trap_Floor_BouncePad_C.GameplayCue.Abilities.Activation.Traps.ActivateTrap
struct ATrap_Floor_BouncePad_C_GameplayCue_Abilities_Activation_Traps_ActivateTrap_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Trap_Floor_BouncePad.Trap_Floor_BouncePad_C.ReceiveDestroyed
struct ATrap_Floor_BouncePad_C_ReceiveDestroyed_Params
{
};

// Function Trap_Floor_BouncePad.Trap_Floor_BouncePad_C.ReceiveBeginPlay
struct ATrap_Floor_BouncePad_C_ReceiveBeginPlay_Params
{
};

// Function Trap_Floor_BouncePad.Trap_Floor_BouncePad_C.ExecuteUbergraph_Trap_Floor_BouncePad
struct ATrap_Floor_BouncePad_C_ExecuteUbergraph_Trap_Floor_BouncePad_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
