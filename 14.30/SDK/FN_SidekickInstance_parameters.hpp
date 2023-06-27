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

// Function SidekickInstance.SidekickInstance_C.OnVideoDisabled
struct USidekickInstance_C_OnVideoDisabled_Params
{
	bool                                               bDisabled;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SidekickInstance.SidekickInstance_C.OnVideoPaused
struct USidekickInstance_C_OnVideoPaused_Params
{
	bool                                               bPaused;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SidekickInstance.SidekickInstance_C.ExecuteUbergraph_SidekickInstance
struct USidekickInstance_C_ExecuteUbergraph_SidekickInstance_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
