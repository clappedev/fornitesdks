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

// Function GA_Coconut_ShieldHealth.GA_Coconut_ShieldHealth_C.K2_ActivateAbility
struct UGA_Coconut_ShieldHealth_C_K2_ActivateAbility_Params
{
};

// Function GA_Coconut_ShieldHealth.GA_Coconut_ShieldHealth_C.K2_OnEndAbility
struct UGA_Coconut_ShieldHealth_C_K2_OnEndAbility_Params
{
	bool                                               bWasCancelled;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GA_Coconut_ShieldHealth.GA_Coconut_ShieldHealth_C.ApplyEffect
struct UGA_Coconut_ShieldHealth_C_ApplyEffect_Params
{
};

// Function GA_Coconut_ShieldHealth.GA_Coconut_ShieldHealth_C.ExecuteUbergraph_GA_Coconut_ShieldHealth
struct UGA_Coconut_ShieldHealth_C_ExecuteUbergraph_GA_Coconut_ShieldHealth_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
