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

// Function PlayerInfo.PlayerInfo_C.UpdateLocalPlayerInfo
struct UPlayerInfo_C_UpdateLocalPlayerInfo_Params
{
	struct FFortTeamMemberInfo                         Player_Info;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function PlayerInfo.PlayerInfo_C.Construct
struct UPlayerInfo_C_Construct_Params
{
};

// Function PlayerInfo.PlayerInfo_C.HandlePlayerStateChanged
struct UPlayerInfo_C_HandlePlayerStateChanged_Params
{
	struct FFortTeamMemberInfo                         PlayerInfo;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function PlayerInfo.PlayerInfo_C.Destruct
struct UPlayerInfo_C_Destruct_Params
{
};

// Function PlayerInfo.PlayerInfo_C.ExecuteUbergraph_PlayerInfo
struct UPlayerInfo_C_ExecuteUbergraph_PlayerInfo_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
