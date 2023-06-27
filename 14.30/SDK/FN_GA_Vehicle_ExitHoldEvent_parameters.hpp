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

// Function GA_Vehicle_ExitHoldEvent.GA_Vehicle_ExitHoldEvent_C.EventReceived_7AE1D485464AEC7EB429C3877D33AF69
struct UGA_Vehicle_ExitHoldEvent_C_EventReceived_7AE1D485464AEC7EB429C3877D33AF69_Params
{
	struct FGameplayEventData                          Payload;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Vehicle_ExitHoldEvent.GA_Vehicle_ExitHoldEvent_C.EventReceived_209BF560404B83EBEAA8DD8090C443AC
struct UGA_Vehicle_ExitHoldEvent_C_EventReceived_209BF560404B83EBEAA8DD8090C443AC_Params
{
	struct FGameplayEventData                          Payload;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Vehicle_ExitHoldEvent.GA_Vehicle_ExitHoldEvent_C.K2_ActivateAbility
struct UGA_Vehicle_ExitHoldEvent_C_K2_ActivateAbility_Params
{
};

// Function GA_Vehicle_ExitHoldEvent.GA_Vehicle_ExitHoldEvent_C.K2_OnEndAbility
struct UGA_Vehicle_ExitHoldEvent_C_K2_OnEndAbility_Params
{
	bool                                               bWasCancelled;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GA_Vehicle_ExitHoldEvent.GA_Vehicle_ExitHoldEvent_C.ExecuteUbergraph_GA_Vehicle_ExitHoldEvent
struct UGA_Vehicle_ExitHoldEvent_C_ExecuteUbergraph_GA_Vehicle_ExitHoldEvent_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
