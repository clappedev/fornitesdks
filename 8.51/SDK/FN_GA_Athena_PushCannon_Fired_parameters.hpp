#pragma once

// Fortnite (8.51) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function GA_Athena_PushCannon_Fired.GA_Athena_PushCannon_Fired_C.EventReceived
struct UGA_Athena_PushCannon_Fired_C_EventReceived_Params
{
	struct FGameplayEventData                          Payload;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Athena_PushCannon_Fired.GA_Athena_PushCannon_Fired_C.K2_OnEndAbility
struct UGA_Athena_PushCannon_Fired_C_K2_OnEndAbility_Params
{
	bool                                               bWasCancelled;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GA_Athena_PushCannon_Fired.GA_Athena_PushCannon_Fired_C.K2_ActivateAbility
struct UGA_Athena_PushCannon_Fired_C_K2_ActivateAbility_Params
{
};

// Function GA_Athena_PushCannon_Fired.GA_Athena_PushCannon_Fired_C.ExecuteUbergraph_GA_Athena_PushCannon_Fired
struct UGA_Athena_PushCannon_Fired_C_ExecuteUbergraph_GA_Athena_PushCannon_Fired_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
