#pragma once

// Fortnite SDK

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
	struct FFortUIXpInfo                               XPinfo;                                                   // (CPF_Parm)
};

// Function TeamScoreToPlayerXPRewardWidget.TeamScoreToPlayerXPRewardWidget_C.Update XP LERP
struct UTeamScoreToPlayerXPRewardWidget_C_Update_XP_LERP_Params
{
	float                                              LERP_Factor;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
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
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
