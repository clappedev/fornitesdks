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

// Function GA_Athena_ZipLine_Smash.GA_Athena_ZipLine_Smash_C.CheckForQuestProgress
struct UGA_Athena_ZipLine_Smash_C_CheckForQuestProgress_Params
{
};

// Function GA_Athena_ZipLine_Smash.GA_Athena_ZipLine_Smash_C.CheckMotor
struct UGA_Athena_ZipLine_Smash_C_CheckMotor_Params
{
};

// Function GA_Athena_ZipLine_Smash.GA_Athena_ZipLine_Smash_C.SpawnMotor
struct UGA_Athena_ZipLine_Smash_C_SpawnMotor_Params
{
	class AActor*                                      PlayerPawn;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GA_Athena_ZipLine_Smash.GA_Athena_ZipLine_Smash_C.BreakNearbyStructures
struct UGA_Athena_ZipLine_Smash_C_BreakNearbyStructures_Params
{
	class AFortPlayerPawn*                             PlayerPawn;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GA_Athena_ZipLine_Smash.GA_Athena_ZipLine_Smash_C.Added_98DA090E476D590C00C74EAC10378F60
struct UGA_Athena_ZipLine_Smash_C_Added_98DA090E476D590C00C74EAC10378F60_Params
{
};

// Function GA_Athena_ZipLine_Smash.GA_Athena_ZipLine_Smash_C.Added_57667DA14EF15649A9E09AA4184D83F2
struct UGA_Athena_ZipLine_Smash_C_Added_57667DA14EF15649A9E09AA4184D83F2_Params
{
};

// Function GA_Athena_ZipLine_Smash.GA_Athena_ZipLine_Smash_C.K2_ActivateAbilityFromEvent
struct UGA_Athena_ZipLine_Smash_C_K2_ActivateAbilityFromEvent_Params
{
	struct FGameplayEventData                          EventData;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GA_Athena_ZipLine_Smash.GA_Athena_ZipLine_Smash_C.OnPawnLanded_Bind
struct UGA_Athena_ZipLine_Smash_C_OnPawnLanded_Bind_Params
{
	struct FHitResult                                  Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function GA_Athena_ZipLine_Smash.GA_Athena_ZipLine_Smash_C.HandleZiplineStateChanged
struct UGA_Athena_ZipLine_Smash_C_HandleZiplineStateChanged_Params
{
	bool                                               bIsZiplining;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GA_Athena_ZipLine_Smash.GA_Athena_ZipLine_Smash_C.RemoveFallDamageImmunity
struct UGA_Athena_ZipLine_Smash_C_RemoveFallDamageImmunity_Params
{
};

// Function GA_Athena_ZipLine_Smash.GA_Athena_ZipLine_Smash_C.SurroundingsCheck
struct UGA_Athena_ZipLine_Smash_C_SurroundingsCheck_Params
{
};

// Function GA_Athena_ZipLine_Smash.GA_Athena_ZipLine_Smash_C.OnEnterVehicle_Bind
struct UGA_Athena_ZipLine_Smash_C_OnEnterVehicle_Bind_Params
{
};

// Function GA_Athena_ZipLine_Smash.GA_Athena_ZipLine_Smash_C.ZipliningComplete
struct UGA_Athena_ZipLine_Smash_C_ZipliningComplete_Params
{
};

// Function GA_Athena_ZipLine_Smash.GA_Athena_ZipLine_Smash_C.OnPawnDied_Bind
struct UGA_Athena_ZipLine_Smash_C_OnPawnDied_Bind_Params
{
	class AActor*                                      NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              NewParam2;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 NewParam3;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      NewParam4;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NewParam5;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         NewParam6;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       NewParam7;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NewParam8;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GA_Athena_ZipLine_Smash.GA_Athena_ZipLine_Smash_C.OnEnteredAircraft_Bind
struct UGA_Athena_ZipLine_Smash_C_OnEnteredAircraft_Bind_Params
{
};

// Function GA_Athena_ZipLine_Smash.GA_Athena_ZipLine_Smash_C.OnBeginSkydiving_Bind
struct UGA_Athena_ZipLine_Smash_C_OnBeginSkydiving_Bind_Params
{
};

// Function GA_Athena_ZipLine_Smash.GA_Athena_ZipLine_Smash_C.DelaySpawnMotor
struct UGA_Athena_ZipLine_Smash_C_DelaySpawnMotor_Params
{
};

// Function GA_Athena_ZipLine_Smash.GA_Athena_ZipLine_Smash_C.BindEvent
struct UGA_Athena_ZipLine_Smash_C_BindEvent_Params
{
};

// Function GA_Athena_ZipLine_Smash.GA_Athena_ZipLine_Smash_C.SwimmingStarted
struct UGA_Athena_ZipLine_Smash_C_SwimmingStarted_Params
{
};

// Function GA_Athena_ZipLine_Smash.GA_Athena_ZipLine_Smash_C.EnterWaterExit
struct UGA_Athena_ZipLine_Smash_C_EnterWaterExit_Params
{
	class AFortPlayerPawn*                             FortPlayerPawn;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GA_Athena_ZipLine_Smash.GA_Athena_ZipLine_Smash_C.ExecuteUbergraph_GA_Athena_ZipLine_Smash
struct UGA_Athena_ZipLine_Smash_C_ExecuteUbergraph_GA_Athena_ZipLine_Smash_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
