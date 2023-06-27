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

// Function GA_Ranged_Mustache_Attribute.GA_Ranged_Mustache_Attribute_C.K2_CanActivateAbility
struct UGA_Ranged_Mustache_Attribute_C_K2_CanActivateAbility_Params
{
	struct FGameplayAbilityActorInfo                   ActorInfo;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FGameplayAbilitySpecHandle                  Handle;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
	struct FGameplayTagContainer                       RelevantTags;                                             // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GA_Ranged_Mustache_Attribute.GA_Ranged_Mustache_Attribute_C.GetEventData
struct UGA_Ranged_Mustache_Attribute_C_GetEventData_Params
{
	struct FGameplayTag                                EventTag;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FGameplayEventData                          GameplayEventData;                                        // (Parm, OutParm)
};

// Function GA_Ranged_Mustache_Attribute.GA_Ranged_Mustache_Attribute_C.K2_CommitExecute
struct UGA_Ranged_Mustache_Attribute_C_K2_CommitExecute_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
