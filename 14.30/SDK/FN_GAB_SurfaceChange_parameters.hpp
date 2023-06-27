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

// Function GAB_SurfaceChange.GAB_SurfaceChange_C.OnRep_ReplicatedRandomAngle
struct UGAB_SurfaceChange_C_OnRep_ReplicatedRandomAngle_Params
{
};

// Function GAB_SurfaceChange.GAB_SurfaceChange_C.SurfaceCleanup
struct UGAB_SurfaceChange_C_SurfaceCleanup_Params
{
	bool                                               AddLingeringEffects;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EPhysicalSurface>                      SurfaceType;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GAB_SurfaceChange.GAB_SurfaceChange_C.LavaBounce
struct UGAB_SurfaceChange_C_LavaBounce_Params
{
};

// Function GAB_SurfaceChange.GAB_SurfaceChange_C.HotfixableGEApplication
struct UGAB_SurfaceChange_C_HotfixableGEApplication_Params
{
	struct FScalableFloat                              Input;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UGameplayEffect*                             GameplayEffectAppliedOnTrue;                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UGameplayEffect*                             GameplayEffectAppliedOnFalse;                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GAB_SurfaceChange.GAB_SurfaceChange_C.SurfaceCleanupSpecial
struct UGAB_SurfaceChange_C_SurfaceCleanupSpecial_Params
{
};

// Function GAB_SurfaceChange.GAB_SurfaceChange_C.K2_ActivateAbilityFromEvent
struct UGAB_SurfaceChange_C_K2_ActivateAbilityFromEvent_Params
{
	struct FGameplayEventData                          EventData;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GAB_SurfaceChange.GAB_SurfaceChange_C.MovementModeChanged
struct UGAB_SurfaceChange_C_MovementModeChanged_Params
{
	class ACharacter*                                  Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMovementMode>                         PrevMovementMode;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      PreviousCustomMode;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GAB_SurfaceChange.GAB_SurfaceChange_C.ExecuteUbergraph_GAB_SurfaceChange
struct UGAB_SurfaceChange_C_ExecuteUbergraph_GAB_SurfaceChange_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
