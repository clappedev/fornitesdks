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

// Function Moonbeam_PowerRatingWidget.Moonbeam_PowerRatingWidget_C.SetBackgroundColor
struct UMoonbeam_PowerRatingWidget_C_SetBackgroundColor_Params
{
	struct FLinearColor                                NewColor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Moonbeam_PowerRatingWidget.Moonbeam_PowerRatingWidget_C.UpdateWidgetState
struct UMoonbeam_PowerRatingWidget_C_UpdateWidgetState_Params
{
};

// Function Moonbeam_PowerRatingWidget.Moonbeam_PowerRatingWidget_C.Construct
struct UMoonbeam_PowerRatingWidget_C_Construct_Params
{
};

// Function Moonbeam_PowerRatingWidget.Moonbeam_PowerRatingWidget_C.OnBasePowerRatingUpdated
struct UMoonbeam_PowerRatingWidget_C_OnBasePowerRatingUpdated_Params
{
	int                                                BasePowerRating;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Moonbeam_PowerRatingWidget.Moonbeam_PowerRatingWidget_C.OnTeamPowerRatingUpdated
struct UMoonbeam_PowerRatingWidget_C_OnTeamPowerRatingUpdated_Params
{
	int                                                TeamPowerRating;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Moonbeam_PowerRatingWidget.Moonbeam_PowerRatingWidget_C.OnPowerRatingProgressUpdated
struct UMoonbeam_PowerRatingWidget_C_OnPowerRatingProgressUpdated_Params
{
	float                                              BaseRatingProgress;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              TeamRatingProgress;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Moonbeam_PowerRatingWidget.Moonbeam_PowerRatingWidget_C.PreConstruct
struct UMoonbeam_PowerRatingWidget_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Moonbeam_PowerRatingWidget.Moonbeam_PowerRatingWidget_C.OnTeamMembershipChanged
struct UMoonbeam_PowerRatingWidget_C_OnTeamMembershipChanged_Params
{
};

// Function Moonbeam_PowerRatingWidget.Moonbeam_PowerRatingWidget_C.ExecuteUbergraph_Moonbeam_PowerRatingWidget
struct UMoonbeam_PowerRatingWidget_C_ExecuteUbergraph_Moonbeam_PowerRatingWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
