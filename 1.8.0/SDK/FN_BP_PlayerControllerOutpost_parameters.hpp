#pragma once

// Fortnite (1.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_PlayerControllerOutpost.BP_PlayerControllerOutpost_C.UserConstructionScript
struct ABP_PlayerControllerOutpost_C_UserConstructionScript_Params
{
};

// Function BP_PlayerControllerOutpost.BP_PlayerControllerOutpost_C.ServerStartExpandingOutpost
struct ABP_PlayerControllerOutpost_C_ServerStartExpandingOutpost_Params
{
	bool                                               GetHelp;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerControllerOutpost.BP_PlayerControllerOutpost_C.ExecuteUbergraph_BP_PlayerControllerOutpost
struct ABP_PlayerControllerOutpost_C_ExecuteUbergraph_BP_PlayerControllerOutpost_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
