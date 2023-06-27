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

// Function SidekickOverlay.SidekickOverlay_C.Tick
struct USidekickOverlay_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SidekickOverlay.SidekickOverlay_C.OnInitialized
struct USidekickOverlay_C_OnInitialized_Params
{
};

// Function SidekickOverlay.SidekickOverlay_C.ExecuteUbergraph_SidekickOverlay
struct USidekickOverlay_C_ExecuteUbergraph_SidekickOverlay_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
