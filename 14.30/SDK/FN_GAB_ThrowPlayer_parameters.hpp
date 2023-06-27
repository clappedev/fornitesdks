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

// Function GAB_ThrowPlayer.GAB_ThrowPlayer_C.Completed_45B7744E4902B26207BAA1954E6BCDEE
struct UGAB_ThrowPlayer_C_Completed_45B7744E4902B26207BAA1954E6BCDEE_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GAB_ThrowPlayer.GAB_ThrowPlayer_C.Cancelled_45B7744E4902B26207BAA1954E6BCDEE
struct UGAB_ThrowPlayer_C_Cancelled_45B7744E4902B26207BAA1954E6BCDEE_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GAB_ThrowPlayer.GAB_ThrowPlayer_C.Triggered_45B7744E4902B26207BAA1954E6BCDEE
struct UGAB_ThrowPlayer_C_Triggered_45B7744E4902B26207BAA1954E6BCDEE_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GAB_ThrowPlayer.GAB_ThrowPlayer_C.K2_ActivateAbility
struct UGAB_ThrowPlayer_C_K2_ActivateAbility_Params
{
};

// Function GAB_ThrowPlayer.GAB_ThrowPlayer_C.K2_OnEndAbility
struct UGAB_ThrowPlayer_C_K2_OnEndAbility_Params
{
	bool                                               bWasCancelled;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GAB_ThrowPlayer.GAB_ThrowPlayer_C.ExecuteUbergraph_GAB_ThrowPlayer
struct UGAB_ThrowPlayer_C_ExecuteUbergraph_GAB_ThrowPlayer_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
