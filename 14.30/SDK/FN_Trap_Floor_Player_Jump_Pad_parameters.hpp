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

// Function Trap_Floor_Player_Jump_Pad.Trap_Floor_Player_Jump_Pad_C.GetImpulseDirection
struct ATrap_Floor_Player_Jump_Pad_C_GetImpulseDirection_Params
{
	class AActor*                                      LaunchingActor;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Trap_Floor_Player_Jump_Pad.Trap_Floor_Player_Jump_Pad_C.OnReloadEnd
struct ATrap_Floor_Player_Jump_Pad_C_OnReloadEnd_Params
{
};

// Function Trap_Floor_Player_Jump_Pad.Trap_Floor_Player_Jump_Pad_C.OnPlaced
struct ATrap_Floor_Player_Jump_Pad_C_OnPlaced_Params
{
};

// Function Trap_Floor_Player_Jump_Pad.Trap_Floor_Player_Jump_Pad_C.OnFinishedBuilding
struct ATrap_Floor_Player_Jump_Pad_C_OnFinishedBuilding_Params
{
};

// Function Trap_Floor_Player_Jump_Pad.Trap_Floor_Player_Jump_Pad_C.GameplayCue.Abilities.Activation.Traps.ReloadBegin
struct ATrap_Floor_Player_Jump_Pad_C_GameplayCue_Abilities_Activation_Traps_ReloadBegin_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Trap_Floor_Player_Jump_Pad.Trap_Floor_Player_Jump_Pad_C.GameplayCue.Abilities.Activation.Traps.ActivateTrap
struct ATrap_Floor_Player_Jump_Pad_C_GameplayCue_Abilities_Activation_Traps_ActivateTrap_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Trap_Floor_Player_Jump_Pad.Trap_Floor_Player_Jump_Pad_C.OnOutOfDurability
struct ATrap_Floor_Player_Jump_Pad_C_OnOutOfDurability_Params
{
};

// Function Trap_Floor_Player_Jump_Pad.Trap_Floor_Player_Jump_Pad_C.ExecuteUbergraph_Trap_Floor_Player_Jump_Pad
struct ATrap_Floor_Player_Jump_Pad_C_ExecuteUbergraph_Trap_Floor_Player_Jump_Pad_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
