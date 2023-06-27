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

// Function GAB_DropPlayer.GAB_DropPlayer_C.Completed_89F288114D44792D5568298354B7216C
struct UGAB_DropPlayer_C_Completed_89F288114D44792D5568298354B7216C_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GAB_DropPlayer.GAB_DropPlayer_C.Cancelled_89F288114D44792D5568298354B7216C
struct UGAB_DropPlayer_C_Cancelled_89F288114D44792D5568298354B7216C_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GAB_DropPlayer.GAB_DropPlayer_C.Triggered_89F288114D44792D5568298354B7216C
struct UGAB_DropPlayer_C_Triggered_89F288114D44792D5568298354B7216C_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GAB_DropPlayer.GAB_DropPlayer_C.K2_ActivateAbility
struct UGAB_DropPlayer_C_K2_ActivateAbility_Params
{
};

// Function GAB_DropPlayer.GAB_DropPlayer_C.K2_OnEndAbility
struct UGAB_DropPlayer_C_K2_OnEndAbility_Params
{
	bool                                               bWasCancelled;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GAB_DropPlayer.GAB_DropPlayer_C.ExecuteUbergraph_GAB_DropPlayer
struct UGAB_DropPlayer_C_ExecuteUbergraph_GAB_DropPlayer_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
