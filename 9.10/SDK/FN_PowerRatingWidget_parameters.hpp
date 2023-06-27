#pragma once

// Fortnite (9.1) SDK
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

// Function PowerRatingWidget.PowerRatingWidget_C.UpdateWidgetState
struct UPowerRatingWidget_C_UpdateWidgetState_Params
{
};

// Function PowerRatingWidget.PowerRatingWidget_C.Construct
struct UPowerRatingWidget_C_Construct_Params
{
};

// Function PowerRatingWidget.PowerRatingWidget_C.OnBasePowerRatingUpdated
struct UPowerRatingWidget_C_OnBasePowerRatingUpdated_Params
{
	int                                                BasePowerRating;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PowerRatingWidget.PowerRatingWidget_C.OnTeamPowerRatingUpdated
struct UPowerRatingWidget_C_OnTeamPowerRatingUpdated_Params
{
	int                                                TeamPowerRating;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PowerRatingWidget.PowerRatingWidget_C.OnPowerRatingProgressUpdated
struct UPowerRatingWidget_C_OnPowerRatingProgressUpdated_Params
{
	float                                              BaseRatingProgress;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              TeamRatingProgress;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PowerRatingWidget.PowerRatingWidget_C.PreConstruct
struct UPowerRatingWidget_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PowerRatingWidget.PowerRatingWidget_C.OnTeamMembershipChanged
struct UPowerRatingWidget_C_OnTeamMembershipChanged_Params
{
};

// Function PowerRatingWidget.PowerRatingWidget_C.ExecuteUbergraph_PowerRatingWidget
struct UPowerRatingWidget_C_ExecuteUbergraph_PowerRatingWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
