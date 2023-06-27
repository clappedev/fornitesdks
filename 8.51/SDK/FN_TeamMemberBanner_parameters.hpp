#pragma once

// Fortnite (8.51) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function TeamMemberBanner.TeamMemberBanner_C.OpenPartyFinder
struct UTeamMemberBanner_C_OpenPartyFinder_Params
{
};

// Function TeamMemberBanner.TeamMemberBanner_C.HandleMouseHoverVisualState
struct UTeamMemberBanner_C_HandleMouseHoverVisualState_Params
{
	bool                                               Hover;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TeamMemberBanner.TeamMemberBanner_C.BndEvt__ButtonPartyFinder_K2Node_ComponentBoundEvent
struct UTeamMemberBanner_C_BndEvt__ButtonPartyFinder_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TeamMemberBanner.TeamMemberBanner_C.OnTeamMemberConnectionStateChanged
struct UTeamMemberBanner_C_OnTeamMemberConnectionStateChanged_Params
{
	EFortMemberConnectionState                         NewConnectionState;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TeamMemberBanner.TeamMemberBanner_C.ExecuteUbergraph_TeamMemberBanner
struct UTeamMemberBanner_C_ExecuteUbergraph_TeamMemberBanner_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
