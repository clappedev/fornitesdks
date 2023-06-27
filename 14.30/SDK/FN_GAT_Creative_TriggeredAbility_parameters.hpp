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

// Function GAT_Creative_TriggeredAbility.GAT_Creative_TriggeredAbility_C.IsPropertyOverridden
struct UGAT_Creative_TriggeredAbility_C_IsPropertyOverridden_Params
{
	struct FName                                       PropertyName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bResult;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GAT_Creative_TriggeredAbility.GAT_Creative_TriggeredAbility_C.K2_ActivateAbilityFromEvent
struct UGAT_Creative_TriggeredAbility_C_K2_ActivateAbilityFromEvent_Params
{
	struct FGameplayEventData                          EventData;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GAT_Creative_TriggeredAbility.GAT_Creative_TriggeredAbility_C.SetupAbilityFailsafeTimer
struct UGAT_Creative_TriggeredAbility_C_SetupAbilityFailsafeTimer_Params
{
	float                                              Duration;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GAT_Creative_TriggeredAbility.GAT_Creative_TriggeredAbility_C.AbilityTimeout
struct UGAT_Creative_TriggeredAbility_C_AbilityTimeout_Params
{
};

// Function GAT_Creative_TriggeredAbility.GAT_Creative_TriggeredAbility_C.ExecuteUbergraph_GAT_Creative_TriggeredAbility
struct UGAT_Creative_TriggeredAbility_C_ExecuteUbergraph_GAT_Creative_TriggeredAbility_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
