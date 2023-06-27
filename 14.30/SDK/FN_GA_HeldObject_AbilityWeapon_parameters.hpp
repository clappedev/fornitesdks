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

// Function GA_HeldObject_AbilityWeapon.GA_HeldObject_AbilityWeapon_C.EventReceived_701E84994BAF28AF698A42AD84CCF06E
struct UGA_HeldObject_AbilityWeapon_C_EventReceived_701E84994BAF28AF698A42AD84CCF06E_Params
{
	struct FGameplayEventData                          Payload;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_HeldObject_AbilityWeapon.GA_HeldObject_AbilityWeapon_C.K2_ActivateAbility
struct UGA_HeldObject_AbilityWeapon_C_K2_ActivateAbility_Params
{
};

// Function GA_HeldObject_AbilityWeapon.GA_HeldObject_AbilityWeapon_C.K2_OnEndAbility
struct UGA_HeldObject_AbilityWeapon_C_K2_OnEndAbility_Params
{
	bool                                               bWasCancelled;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GA_HeldObject_AbilityWeapon.GA_HeldObject_AbilityWeapon_C.ExecuteUbergraph_GA_HeldObject_AbilityWeapon
struct UGA_HeldObject_AbilityWeapon_C_ExecuteUbergraph_GA_HeldObject_AbilityWeapon_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
