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

// Function PlayerVisited.PlayerVisited_C.EndOfShow
struct UPlayerVisited_C_EndOfShow_Params
{
};

// Function PlayerVisited.PlayerVisited_C.OnNewVisited
struct UPlayerVisited_C_OnNewVisited_Params
{
	struct FText                                       LocalizedLocationName;                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               bIsNamedLocation;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerVisited.PlayerVisited_C.Construct
struct UPlayerVisited_C_Construct_Params
{
};

// Function PlayerVisited.PlayerVisited_C.Brief Show Finished
struct UPlayerVisited_C_Brief_Show_Finished_Params
{
};

// Function PlayerVisited.PlayerVisited_C.OnStompFailed
struct UPlayerVisited_C_OnStompFailed_Params
{
};

// Function PlayerVisited.PlayerVisited_C.OnStompedByOtherWidget
struct UPlayerVisited_C_OnStompedByOtherWidget_Params
{
};

// Function PlayerVisited.PlayerVisited_C.OnAnimBackupTimerFinished
struct UPlayerVisited_C_OnAnimBackupTimerFinished_Params
{
};

// Function PlayerVisited.PlayerVisited_C.ExecuteUbergraph_PlayerVisited
struct UPlayerVisited_C_ExecuteUbergraph_PlayerVisited_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
