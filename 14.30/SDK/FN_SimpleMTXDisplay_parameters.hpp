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

// Function SimpleMTXDisplay.SimpleMTXDisplay_C.OnUpdateAvailableMTX
struct USimpleMTXDisplay_C_OnUpdateAvailableMTX_Params
{
	int                                                AvailableBalance;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SimpleMTXDisplay.SimpleMTXDisplay_C.ExecuteUbergraph_SimpleMTXDisplay
struct USimpleMTXDisplay_C_ExecuteUbergraph_SimpleMTXDisplay_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
