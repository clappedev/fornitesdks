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

// Function JoinServer.JoinServer_C.OnEnterState
struct UJoinServer_C_OnEnterState_Params
{
	EFortUIState                                       PreviousUIState;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function JoinServer.JoinServer_C.OnShowTutorialDialog
struct UJoinServer_C_OnShowTutorialDialog_Params
{
};

// Function JoinServer.JoinServer_C.ExecuteUbergraph_JoinServer
struct UJoinServer_C_ExecuteUbergraph_JoinServer_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
