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

// Function GA_Ranged_GenericProjectileImpact_HookGun.GA_Ranged_GenericProjectileImpact_HookGun_C.Overflow
struct UGA_Ranged_GenericProjectileImpact_HookGun_C_Overflow_Params
{
	class UFortWorldItem*                              Item_Dropped;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GA_Ranged_GenericProjectileImpact_HookGun.GA_Ranged_GenericProjectileImpact_HookGun_C.K2_OnEndAbility
struct UGA_Ranged_GenericProjectileImpact_HookGun_C_K2_OnEndAbility_Params
{
	bool                                               bWasCancelled;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GA_Ranged_GenericProjectileImpact_HookGun.GA_Ranged_GenericProjectileImpact_HookGun_C.K2_CommitExecute
struct UGA_Ranged_GenericProjectileImpact_HookGun_C_K2_CommitExecute_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
