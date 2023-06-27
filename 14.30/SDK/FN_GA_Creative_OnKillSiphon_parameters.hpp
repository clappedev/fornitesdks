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

// Function GA_Creative_OnKillSiphon.GA_Creative_OnKillSiphon_C.GiveResourcesToPlayer
struct UGA_Creative_OnKillSiphon_C_GiveResourcesToPlayer_Params
{
	bool                                               bShouldGrant;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                GiveAmount;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EFortResourceType>                     GiveType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GA_Creative_OnKillSiphon.GA_Creative_OnKillSiphon_C.CalculateResources
struct UGA_Creative_OnKillSiphon_C_CalculateResources_Params
{
	TEnumAsByte<EFortResourceType>                     ResourceGrantType;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                ResourceToGive;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EFortResourceType>                     ResourceType;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GA_Creative_OnKillSiphon.GA_Creative_OnKillSiphon_C.AttemptMats
struct UGA_Creative_OnKillSiphon_C_AttemptMats_Params
{
};

// Function GA_Creative_OnKillSiphon.GA_Creative_OnKillSiphon_C.AttemptHeal
struct UGA_Creative_OnKillSiphon_C_AttemptHeal_Params
{
};

// Function GA_Creative_OnKillSiphon.GA_Creative_OnKillSiphon_C.SetupRestoreModes
struct UGA_Creative_OnKillSiphon_C_SetupRestoreModes_Params
{
	bool                                               ShouldContinue;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GA_Creative_OnKillSiphon.GA_Creative_OnKillSiphon_C.DetermineHealthDelta
struct UGA_Creative_OnKillSiphon_C_DetermineHealthDelta_Params
{
	float                                              HealingAmount;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxHealth;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              CurrentHealth;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              HealthDelta;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              ExcessHealh;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GA_Creative_OnKillSiphon.GA_Creative_OnKillSiphon_C.AddShields
struct UGA_Creative_OnKillSiphon_C_AddShields_Params
{
	bool                                               bShouldConvertExcessHealthToShields;                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ShieldToAdd;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAddedShields;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              ShieldAdded;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GA_Creative_OnKillSiphon.GA_Creative_OnKillSiphon_C.RestoreHealth
struct UGA_Creative_OnKillSiphon_C_RestoreHealth_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              InitialHealAmount;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              ActualAppliedHeal;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              ExcessHealing;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GA_Creative_OnKillSiphon.GA_Creative_OnKillSiphon_C.K2_ShouldAbilityRespondToEvent
struct UGA_Creative_OnKillSiphon_C_K2_ShouldAbilityRespondToEvent_Params
{
	struct FGameplayAbilityActorInfo                   ActorInfo;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FGameplayEventData                          Payload;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GA_Creative_OnKillSiphon.GA_Creative_OnKillSiphon_C.K2_ActivateAbilityFromEvent
struct UGA_Creative_OnKillSiphon_C_K2_ActivateAbilityFromEvent_Params
{
	struct FGameplayEventData                          EventData;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GA_Creative_OnKillSiphon.GA_Creative_OnKillSiphon_C.ExecuteUbergraph_GA_Creative_OnKillSiphon
struct UGA_Creative_OnKillSiphon_C_ExecuteUbergraph_GA_Creative_OnKillSiphon_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
