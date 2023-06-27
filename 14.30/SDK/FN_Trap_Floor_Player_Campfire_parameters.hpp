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

// Function Trap_Floor_Player_Campfire.Trap_Floor_Player_Campfire_C.GetCampFireTrapInstigator
struct ATrap_Floor_Player_Campfire_C_GetCampFireTrapInstigator_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Trap_Floor_Player_Campfire.Trap_Floor_Player_Campfire_C.CheckIfTargetIsSquadmate
struct ATrap_Floor_Player_Campfire_C_CheckIfTargetIsSquadmate_Params
{
	class AFortPlayerPawn*                             Target_Player;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Trap_Floor_Player_Campfire.Trap_Floor_Player_Campfire_C.InitCampfireEffects
struct ATrap_Floor_Player_Campfire_C_InitCampfireEffects_Params
{
};

// Function Trap_Floor_Player_Campfire.Trap_Floor_Player_Campfire_C.HealTicks
struct ATrap_Floor_Player_Campfire_C_HealTicks_Params
{
};

// Function Trap_Floor_Player_Campfire.Trap_Floor_Player_Campfire_C.OnRep_IsActive
struct ATrap_Floor_Player_Campfire_C_OnRep_IsActive_Params
{
};

// Function Trap_Floor_Player_Campfire.Trap_Floor_Player_Campfire_C.FadeDoused__FinishedFunc
struct ATrap_Floor_Player_Campfire_C_FadeDoused__FinishedFunc_Params
{
};

// Function Trap_Floor_Player_Campfire.Trap_Floor_Player_Campfire_C.FadeDoused__UpdateFunc
struct ATrap_Floor_Player_Campfire_C_FadeDoused__UpdateFunc_Params
{
};

// Function Trap_Floor_Player_Campfire.Trap_Floor_Player_Campfire_C.DarkenLogs__FinishedFunc
struct ATrap_Floor_Player_Campfire_C_DarkenLogs__FinishedFunc_Params
{
};

// Function Trap_Floor_Player_Campfire.Trap_Floor_Player_Campfire_C.DarkenLogs__UpdateFunc
struct ATrap_Floor_Player_Campfire_C_DarkenLogs__UpdateFunc_Params
{
};

// Function Trap_Floor_Player_Campfire.Trap_Floor_Player_Campfire_C.OnReloadEnd
struct ATrap_Floor_Player_Campfire_C_OnReloadEnd_Params
{
};

// Function Trap_Floor_Player_Campfire.Trap_Floor_Player_Campfire_C.OnPlaced
struct ATrap_Floor_Player_Campfire_C_OnPlaced_Params
{
};

// Function Trap_Floor_Player_Campfire.Trap_Floor_Player_Campfire_C.OnFinishedBuilding
struct ATrap_Floor_Player_Campfire_C_OnFinishedBuilding_Params
{
};

// Function Trap_Floor_Player_Campfire.Trap_Floor_Player_Campfire_C.GameplayCue.Abilities.Activation.Traps.ReloadBegin
struct ATrap_Floor_Player_Campfire_C_GameplayCue_Abilities_Activation_Traps_ReloadBegin_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Trap_Floor_Player_Campfire.Trap_Floor_Player_Campfire_C.GameplayCue.Abilities.Activation.Traps.ActivateTrap
struct ATrap_Floor_Player_Campfire_C_GameplayCue_Abilities_Activation_Traps_ActivateTrap_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Trap_Floor_Player_Campfire.Trap_Floor_Player_Campfire_C.OnOutOfDurability
struct ATrap_Floor_Player_Campfire_C_OnOutOfDurability_Params
{
};

// Function Trap_Floor_Player_Campfire.Trap_Floor_Player_Campfire_C.TriggerLaunchEffects
struct ATrap_Floor_Player_Campfire_C_TriggerLaunchEffects_Params
{
	class AFortPlayerPawnAthena*                       Pawn;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Trap_Floor_Player_Campfire.Trap_Floor_Player_Campfire_C.DousedTime
struct ATrap_Floor_Player_Campfire_C_DousedTime_Params
{
};

// Function Trap_Floor_Player_Campfire.Trap_Floor_Player_Campfire_C.CharLogs
struct ATrap_Floor_Player_Campfire_C_CharLogs_Params
{
};

// Function Trap_Floor_Player_Campfire.Trap_Floor_Player_Campfire_C.OnDeathPlayEffects
struct ATrap_Floor_Player_Campfire_C_OnDeathPlayEffects_Params
{
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer                       DamageTags;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FVector                                     Momentum;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitInfo;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AFortPawn*                                   InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayEffectContextHandle                EffectContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Trap_Floor_Player_Campfire.Trap_Floor_Player_Campfire_C.OnDeathServer
struct ATrap_Floor_Player_Campfire_C_OnDeathServer_Params
{
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer                       DamageTags;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FVector                                     Momentum;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitInfo;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayEffectContextHandle                EffectContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Trap_Floor_Player_Campfire.Trap_Floor_Player_Campfire_C.ExecuteUbergraph_Trap_Floor_Player_Campfire
struct ATrap_Floor_Player_Campfire_C_ExecuteUbergraph_Trap_Floor_Player_Campfire_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
