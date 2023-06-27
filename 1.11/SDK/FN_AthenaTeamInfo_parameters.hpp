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

// Function AthenaTeamInfo.AthenaTeamInfo_C.ClearSquadMembers
struct UAthenaTeamInfo_C_ClearSquadMembers_Params
{
};

// Function AthenaTeamInfo.AthenaTeamInfo_C.HandleSquadMutedChanged
struct UAthenaTeamInfo_C_HandleSquadMutedChanged_Params
{
	TArray<bool>                                       TeamMuted;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function AthenaTeamInfo.AthenaTeamInfo_C.HandleSquadTalkingChanged
struct UAthenaTeamInfo_C_HandleSquadTalkingChanged_Params
{
	TArray<bool>                                       TeamTalking;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function AthenaTeamInfo.AthenaTeamInfo_C.HandleSquadMemberRemoved
struct UAthenaTeamInfo_C_HandleSquadMemberRemoved_Params
{
};

// Function AthenaTeamInfo.AthenaTeamInfo_C.HandleSquadRevivingChanged
struct UAthenaTeamInfo_C_HandleSquadRevivingChanged_Params
{
	TArray<bool>                                       TeamReviving;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function AthenaTeamInfo.AthenaTeamInfo_C.HandleSquadMemberPlayerNamesChanged
struct UAthenaTeamInfo_C_HandleSquadMemberPlayerNamesChanged_Params
{
};

// Function AthenaTeamInfo.AthenaTeamInfo_C.HandleSquadDeadChanged
struct UAthenaTeamInfo_C_HandleSquadDeadChanged_Params
{
	TArray<bool>                                       TeamDead;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function AthenaTeamInfo.AthenaTeamInfo_C.HandleSquadDBNOChanged
struct UAthenaTeamInfo_C_HandleSquadDBNOChanged_Params
{
	TArray<bool>                                       TeamDBNO;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function AthenaTeamInfo.AthenaTeamInfo_C.HandleSquadMemberAdded
struct UAthenaTeamInfo_C_HandleSquadMemberAdded_Params
{
};

// Function AthenaTeamInfo.AthenaTeamInfo_C.HandleSquadHitInfoChanged
struct UAthenaTeamInfo_C_HandleSquadHitInfoChanged_Params
{
	TArray<float>                                      HealthFractions;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<float>                                      ShieldFractions;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function AthenaTeamInfo.AthenaTeamInfo_C.ClearContents
struct UAthenaTeamInfo_C_ClearContents_Params
{
};

// Function AthenaTeamInfo.AthenaTeamInfo_C.AppendSquadMember
struct UAthenaTeamInfo_C_AppendSquadMember_Params
{
	class AFortPlayerStateAthena*                      PlayerState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                PlayerIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaTeamInfo.AthenaTeamInfo_C.Construct
struct UAthenaTeamInfo_C_Construct_Params
{
};

// Function AthenaTeamInfo.AthenaTeamInfo_C.HandlePartyLeft
struct UAthenaTeamInfo_C_HandlePartyLeft_Params
{
};

// Function AthenaTeamInfo.AthenaTeamInfo_C.PreConstruct
struct UAthenaTeamInfo_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaTeamInfo.AthenaTeamInfo_C.RolloutAddFriend
struct UAthenaTeamInfo_C_RolloutAddFriend_Params
{
};

// Function AthenaTeamInfo.AthenaTeamInfo_C.ExecuteUbergraph_AthenaTeamInfo
struct UAthenaTeamInfo_C_ExecuteUbergraph_AthenaTeamInfo_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
