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

// Function SubgameSelect.SubgameSelect_C.UpdateHeaderAndFooter
struct USubgameSelect_C_UpdateHeaderAndFooter_Params
{
	bool                                               HideHeader;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               HideFooter;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SubgameSelect.SubgameSelect_C.PopContentWidgetInternal
struct USubgameSelect_C_PopContentWidgetInternal_Params
{
	struct FContentPushState*                          State;                                                    // (Parm)
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SubgameSelect.SubgameSelect_C.Initialize
struct USubgameSelect_C_Initialize_Params
{
};

// Function SubgameSelect.SubgameSelect_C.Construct
struct USubgameSelect_C_Construct_Params
{
};

// Function SubgameSelect.SubgameSelect_C.OnEnterState
struct USubgameSelect_C_OnEnterState_Params
{
	EFortUIState*                                      PreviousUIState;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SubgameSelect.SubgameSelect_C.PushContentWidgetInternal
struct USubgameSelect_C_PushContentWidgetInternal_Params
{
	class UWidget**                                    Widget;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FContentPushState*                          State;                                                    // (Parm)
};

// Function SubgameSelect.SubgameSelect_C.ExecuteUbergraph_SubgameSelect
struct USubgameSelect_C_ExecuteUbergraph_SubgameSelect_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
