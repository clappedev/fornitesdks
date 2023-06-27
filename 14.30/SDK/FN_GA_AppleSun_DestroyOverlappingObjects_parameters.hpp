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

// Function GA_AppleSun_DestroyOverlappingObjects.GA_AppleSun_DestroyOverlappingObjects_C.GetCustomAbilitySourceTransform
struct UGA_AppleSun_DestroyOverlappingObjects_C_GetCustomAbilitySourceTransform_Params
{
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function GA_AppleSun_DestroyOverlappingObjects.GA_AppleSun_DestroyOverlappingObjects_C.Cancelled_96BA3C644E573EAE0D8760B88ABB3969
struct UGA_AppleSun_DestroyOverlappingObjects_C_Cancelled_96BA3C644E573EAE0D8760B88ABB3969_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_AppleSun_DestroyOverlappingObjects.GA_AppleSun_DestroyOverlappingObjects_C.Targeted_96BA3C644E573EAE0D8760B88ABB3969
struct UGA_AppleSun_DestroyOverlappingObjects_C_Targeted_96BA3C644E573EAE0D8760B88ABB3969_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_AppleSun_DestroyOverlappingObjects.GA_AppleSun_DestroyOverlappingObjects_C.K2_ActivateAbility
struct UGA_AppleSun_DestroyOverlappingObjects_C_K2_ActivateAbility_Params
{
};

// Function GA_AppleSun_DestroyOverlappingObjects.GA_AppleSun_DestroyOverlappingObjects_C.ExecuteUbergraph_GA_AppleSun_DestroyOverlappingObjects
struct UGA_AppleSun_DestroyOverlappingObjects_C_ExecuteUbergraph_GA_AppleSun_DestroyOverlappingObjects_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
