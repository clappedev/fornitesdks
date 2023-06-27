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

// Function HUD-TeamMemberInfo.HUD-TeamMemberInfo_C.SetHealth
struct UHUD_TeamMemberInfo_C_SetHealth_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HUD-TeamMemberInfo.HUD-TeamMemberInfo_C.Update
struct UHUD_TeamMemberInfo_C_Update_Params
{
	struct FFortTeamMemberInfo                         UpdatedMemberInfo;                                        // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function HUD-TeamMemberInfo.HUD-TeamMemberInfo_C.Construct
struct UHUD_TeamMemberInfo_C_Construct_Params
{
};

// Function HUD-TeamMemberInfo.HUD-TeamMemberInfo_C.ExecuteUbergraph_HUD-TeamMemberInfo
struct UHUD_TeamMemberInfo_C_ExecuteUbergraph_HUD_TeamMemberInfo_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
