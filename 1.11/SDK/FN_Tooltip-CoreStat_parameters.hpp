#pragma once

// Fortnite (1.11) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Tooltip-CoreStat.Tooltip-CoreStat_C.Update
struct UTooltip_CoreStat_C_Update_Params
{
	struct FHeroCoreStat                               Data;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Tooltip-CoreStat.Tooltip-CoreStat_C.Construct
struct UTooltip_CoreStat_C_Construct_Params
{
};

// Function Tooltip-CoreStat.Tooltip-CoreStat_C.ExecuteUbergraph_Tooltip-CoreStat
struct UTooltip_CoreStat_C_ExecuteUbergraph_Tooltip_CoreStat_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
