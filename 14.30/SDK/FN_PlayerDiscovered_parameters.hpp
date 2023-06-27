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

// Function PlayerDiscovered.PlayerDiscovered_C.EndOfShow
struct UPlayerDiscovered_C_EndOfShow_Params
{
};

// Function PlayerDiscovered.PlayerDiscovered_C.Play Brief Show Sound
struct UPlayerDiscovered_C_Play_Brief_Show_Sound_Params
{
};

// Function PlayerDiscovered.PlayerDiscovered_C.OnStompedByOtherWidget
struct UPlayerDiscovered_C_OnStompedByOtherWidget_Params
{
};

// Function PlayerDiscovered.PlayerDiscovered_C.OnNewDiscovery
struct UPlayerDiscovered_C_OnNewDiscovery_Params
{
	struct FText                                       LocalizedLocationName;                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               bIsNamedLocation;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerDiscovered.PlayerDiscovered_C.OnStompFailed
struct UPlayerDiscovered_C_OnStompFailed_Params
{
};

// Function PlayerDiscovered.PlayerDiscovered_C.Brief Show Finished
struct UPlayerDiscovered_C_Brief_Show_Finished_Params
{
};

// Function PlayerDiscovered.PlayerDiscovered_C.Construct
struct UPlayerDiscovered_C_Construct_Params
{
};

// Function PlayerDiscovered.PlayerDiscovered_C.ExecuteUbergraph_PlayerDiscovered
struct UPlayerDiscovered_C_ExecuteUbergraph_PlayerDiscovered_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
