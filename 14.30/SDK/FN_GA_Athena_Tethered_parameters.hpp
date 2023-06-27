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

// Function GA_Athena_Tethered.GA_Athena_Tethered_C.BreakNearbyStructures
struct UGA_Athena_Tethered_C_BreakNearbyStructures_Params
{
	struct FVector                                     ForwardVector;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              OffsetForward;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GA_Athena_Tethered.GA_Athena_Tethered_C.K2_ActivateAbility
struct UGA_Athena_Tethered_C_K2_ActivateAbility_Params
{
};

// Function GA_Athena_Tethered.GA_Athena_Tethered_C.K2_OnEndAbility
struct UGA_Athena_Tethered_C_K2_OnEndAbility_Params
{
	bool                                               bWasCancelled;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GA_Athena_Tethered.GA_Athena_Tethered_C.MovementModeChangedDelegate_Event_1
struct UGA_Athena_Tethered_C_MovementModeChangedDelegate_Event_1_Params
{
	class ACharacter*                                  Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMovementMode>                         PrevMovementMode;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      PreviousCustomMode;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GA_Athena_Tethered.GA_Athena_Tethered_C.BreakBuildingsAtPlayerInDirectionOfTether
struct UGA_Athena_Tethered_C_BreakBuildingsAtPlayerInDirectionOfTether_Params
{
};

// Function GA_Athena_Tethered.GA_Athena_Tethered_C.ExecuteUbergraph_GA_Athena_Tethered
struct UGA_Athena_Tethered_C_ExecuteUbergraph_GA_Athena_Tethered_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
