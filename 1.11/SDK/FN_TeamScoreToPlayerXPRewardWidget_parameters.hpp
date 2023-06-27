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

// Function TeamScoreToPlayerXPRewardWidget.TeamScoreToPlayerXPRewardWidget_C.Initialize
struct UTeamScoreToPlayerXPRewardWidget_C_Initialize_Params
{
	struct FFortUIXpInfo                               XPinfo;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TeamScoreToPlayerXPRewardWidget.TeamScoreToPlayerXPRewardWidget_C.Update XP LERP
struct UTeamScoreToPlayerXPRewardWidget_C_Update_XP_LERP_Params
{
	float                                              LERP_Factor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TeamScoreToPlayerXPRewardWidget.TeamScoreToPlayerXPRewardWidget_C.OnLevelChanged
struct UTeamScoreToPlayerXPRewardWidget_C_OnLevelChanged_Params
{
};

// Function TeamScoreToPlayerXPRewardWidget.TeamScoreToPlayerXPRewardWidget_C.Construct
struct UTeamScoreToPlayerXPRewardWidget_C_Construct_Params
{
};

// Function TeamScoreToPlayerXPRewardWidget.TeamScoreToPlayerXPRewardWidget_C.ExecuteUbergraph_TeamScoreToPlayerXPRewardWidget
struct UTeamScoreToPlayerXPRewardWidget_C_ExecuteUbergraph_TeamScoreToPlayerXPRewardWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
