#pragma once

// Fortnite (1.11) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function TT_Commando_FragGrenade.TT_Commando_FragGrenade_C.GetApplicationTag
struct UTT_Commando_FragGrenade_C_GetApplicationTag_Params
{
	class UGameplayAbility**                           AbilityInstance;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                OutTag;                                                   // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TT_Commando_FragGrenade.TT_Commando_FragGrenade_C.GetTextForTokenFromAbilityInstanceInternal
struct UTT_Commando_FragGrenade_C_GetTextForTokenFromAbilityInstanceInternal_Params
{
	class UGameplayAbility**                           AbilityInstance;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                Tag;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UFortTooltipContext**                        Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                Token;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FText                                       OutText;                                                  // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TT_Commando_FragGrenade.TT_Commando_FragGrenade_C.InitializeAbilityInstanceInternal
struct UTT_Commando_FragGrenade_C_InitializeAbilityInstanceInternal_Params
{
	class UGameplayAbility**                           AbilityInstance;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UFortTooltipContext**                        Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
