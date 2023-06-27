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

// Function RebootCardIndicator.RebootCardIndicator_C.bp_UpdateCountdownText
struct URebootCardIndicator_C_bp_UpdateCountdownText_Params
{
};

// Function RebootCardIndicator.RebootCardIndicator_C.SetupCountdown
struct URebootCardIndicator_C_SetupCountdown_Params
{
	float                                              StartTimeLocalWorld;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              EndTimeLocalWorld;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function RebootCardIndicator.RebootCardIndicator_C.UpdateCountdownText
struct URebootCardIndicator_C_UpdateCountdownText_Params
{
};

// Function RebootCardIndicator.RebootCardIndicator_C.HandleDisplayForSelf
struct URebootCardIndicator_C_HandleDisplayForSelf_Params
{
	bool                                               bSelf;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function RebootCardIndicator.RebootCardIndicator_C.ExecuteUbergraph_RebootCardIndicator
struct URebootCardIndicator_C_ExecuteUbergraph_RebootCardIndicator_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
