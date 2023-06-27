#pragma once

// Fortnite (8.51) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.KnockVehicles
struct ABGA_Athena_SCMachine_C_KnockVehicles_Params
{
};

// Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.GiveWeaponsAndResources
struct ABGA_Athena_SCMachine_C_GiveWeaponsAndResources_Params
{
	class AFortPlayerController*                       FortPC;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.ShouldDie
struct ABGA_Athena_SCMachine_C_ShouldDie_Params
{
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 EventInstigator;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.CheckQuestCredit
struct ABGA_Athena_SCMachine_C_CheckQuestCredit_Params
{
};

// Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.BlueprintGetFailedInteractionString
struct ABGA_Athena_SCMachine_C_BlueprintGetFailedInteractionString_Params
{
	class AFortPawn*                                   InteractingPawn;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.OnRep_RepServerInteract
struct ABGA_Athena_SCMachine_C_OnRep_RepServerInteract_Params
{
};

// Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.UpdateScreen
struct ABGA_Athena_SCMachine_C_UpdateScreen_Params
{
};

// Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.KnockPlayerPawns
struct ABGA_Athena_SCMachine_C_KnockPlayerPawns_Params
{
	class AActor*                                      IgnoreKnock;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.BlueprintGetInteractionString
struct ABGA_Athena_SCMachine_C_BlueprintGetInteractionString_Params
{
	class AFortPawn*                                   InteractingPawn;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.BlueprintCanInteract
struct ABGA_Athena_SCMachine_C_BlueprintCanInteract_Params
{
	class AFortPawn*                                   InteractingPawn;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.UserConstructionScript
struct ABGA_Athena_SCMachine_C_UserConstructionScript_Params
{
};

// Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.WarpVan__FinishedFunc
struct ABGA_Athena_SCMachine_C_WarpVan__FinishedFunc_Params
{
};

// Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.WarpVan__UpdateFunc
struct ABGA_Athena_SCMachine_C_WarpVan__UpdateFunc_Params
{
};

// Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.LightFlash__FinishedFunc
struct ABGA_Athena_SCMachine_C_LightFlash__FinishedFunc_Params
{
};

// Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.LightFlash__UpdateFunc
struct ABGA_Athena_SCMachine_C_LightFlash__UpdateFunc_Params
{
};

// Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.OnPlayerPawnResurrected
struct ABGA_Athena_SCMachine_C_OnPlayerPawnResurrected_Params
{
	class AFortPlayerPawn*                             PlayerPawn;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.OnResurrectionStarted
struct ABGA_Athena_SCMachine_C_OnResurrectionStarted_Params
{
};

// Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.OnResurrectionCompleted
struct ABGA_Athena_SCMachine_C_OnResurrectionCompleted_Params
{
};

// Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.ReceiveBeginPlay
struct ABGA_Athena_SCMachine_C_ReceiveBeginPlay_Params
{
};

// Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.HandleAmbientSound
struct ABGA_Athena_SCMachine_C_HandleAmbientSound_Params
{
};

// Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.BndEvt__BlockingVolume_K2Node_ComponentBoundEvent
struct ABGA_Athena_SCMachine_C_BndEvt__BlockingVolume_K2Node_ComponentBoundEvent_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.TriggerRespawnFX
struct ABGA_Athena_SCMachine_C_TriggerRespawnFX_Params
{
	class AFortPawn*                                   PhaseInPawn;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.OnBeginLongUse
struct ABGA_Athena_SCMachine_C_OnBeginLongUse_Params
{
	class AFortPlayerControllerAthena*                 AthenaPC;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.OnInterruptLongUse
struct ABGA_Athena_SCMachine_C_OnInterruptLongUse_Params
{
	class AFortPlayerControllerAthena*                 AthenaPC;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.OnSpawnMachineStateChanged
struct ABGA_Athena_SCMachine_C_OnSpawnMachineStateChanged_Params
{
};

// Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.ToggleHologram
struct ABGA_Athena_SCMachine_C_ToggleHologram_Params
{
	bool                                               TurnOn;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.CooldownTimer
struct ABGA_Athena_SCMachine_C_CooldownTimer_Params
{
};

// Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.StartCooldown
struct ABGA_Athena_SCMachine_C_StartCooldown_Params
{
};

// Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.Play Horn Sound
struct ABGA_Athena_SCMachine_C_Play_Horn_Sound_Params
{
};

// Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.Update Cooldown Sound
struct ABGA_Athena_SCMachine_C_Update_Cooldown_Sound_Params
{
};

// Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.SkydiveIfAirborne
struct ABGA_Athena_SCMachine_C_SkydiveIfAirborne_Params
{
	class AFortPlayerPawn*                             Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.InteactComplete
struct ABGA_Athena_SCMachine_C_InteactComplete_Params
{
	class AFortPawn*                                   InteractingPawn;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BGA_Athena_SCMachine.BGA_Athena_SCMachine_C.ExecuteUbergraph_BGA_Athena_SCMachine
struct ABGA_Athena_SCMachine_C_ExecuteUbergraph_BGA_Athena_SCMachine_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
