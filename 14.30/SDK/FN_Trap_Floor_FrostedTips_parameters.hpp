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

// Function Trap_Floor_FrostedTips.Trap_Floor_FrostedTips_C.SetActiveFireFX
struct ATrap_Floor_FrostedTips_C_SetActiveFireFX_Params
{
	bool                                               _Active;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Trap_Floor_FrostedTips.Trap_Floor_FrostedTips_C.UserConstructionScript
struct ATrap_Floor_FrostedTips_C_UserConstructionScript_Params
{
};

// Function Trap_Floor_FrostedTips.Trap_Floor_FrostedTips_C.Timeline_0__FinishedFunc
struct ATrap_Floor_FrostedTips_C_Timeline_0__FinishedFunc_Params
{
};

// Function Trap_Floor_FrostedTips.Trap_Floor_FrostedTips_C.Timeline_0__UpdateFunc
struct ATrap_Floor_FrostedTips_C_Timeline_0__UpdateFunc_Params
{
};

// Function Trap_Floor_FrostedTips.Trap_Floor_FrostedTips_C.Timeline_1__FinishedFunc
struct ATrap_Floor_FrostedTips_C_Timeline_1__FinishedFunc_Params
{
};

// Function Trap_Floor_FrostedTips.Trap_Floor_FrostedTips_C.Timeline_1__UpdateFunc
struct ATrap_Floor_FrostedTips_C_Timeline_1__UpdateFunc_Params
{
};

// Function Trap_Floor_FrostedTips.Trap_Floor_FrostedTips_C.Timeline_2__FinishedFunc
struct ATrap_Floor_FrostedTips_C_Timeline_2__FinishedFunc_Params
{
};

// Function Trap_Floor_FrostedTips.Trap_Floor_FrostedTips_C.Timeline_2__UpdateFunc
struct ATrap_Floor_FrostedTips_C_Timeline_2__UpdateFunc_Params
{
};

// Function Trap_Floor_FrostedTips.Trap_Floor_FrostedTips_C.OnReloadEnd
struct ATrap_Floor_FrostedTips_C_OnReloadEnd_Params
{
};

// Function Trap_Floor_FrostedTips.Trap_Floor_FrostedTips_C.OnPlaced
struct ATrap_Floor_FrostedTips_C_OnPlaced_Params
{
};

// Function Trap_Floor_FrostedTips.Trap_Floor_FrostedTips_C.OnFinishedBuilding
struct ATrap_Floor_FrostedTips_C_OnFinishedBuilding_Params
{
};

// Function Trap_Floor_FrostedTips.Trap_Floor_FrostedTips_C.GameplayCue.Abilities.Activation.Traps.ReloadBegin
struct ATrap_Floor_FrostedTips_C_GameplayCue_Abilities_Activation_Traps_ReloadBegin_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Trap_Floor_FrostedTips.Trap_Floor_FrostedTips_C.GameplayCue.Abilities.Activation.Traps.ActivateTrap
struct ATrap_Floor_FrostedTips_C_GameplayCue_Abilities_Activation_Traps_ActivateTrap_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Trap_Floor_FrostedTips.Trap_Floor_FrostedTips_C.OnOutOfDurability
struct ATrap_Floor_FrostedTips_C_OnOutOfDurability_Params
{
};

// Function Trap_Floor_FrostedTips.Trap_Floor_FrostedTips_C.OnDeathServer
struct ATrap_Floor_FrostedTips_C_OnDeathServer_Params
{
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer                       DamageTags;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FVector                                     Momentum;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitInfo;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayEffectContextHandle                EffectContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Trap_Floor_FrostedTips.Trap_Floor_FrostedTips_C.GameplayCue.Abilities.Activation.Traps.DelayBegin
struct ATrap_Floor_FrostedTips_C_GameplayCue_Abilities_Activation_Traps_DelayBegin_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Trap_Floor_FrostedTips.Trap_Floor_FrostedTips_C.PlacedByPlayer
struct ATrap_Floor_FrostedTips_C_PlacedByPlayer_Params
{
	class AFortPlayerStateZone*                        PlayerState;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Trap_Floor_FrostedTips.Trap_Floor_FrostedTips_C.ExecuteUbergraph_Trap_Floor_FrostedTips
struct ATrap_Floor_FrostedTips_C_ExecuteUbergraph_Trap_Floor_FrostedTips_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
