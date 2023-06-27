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

// Function PlayerSurveyDispatcher.PlayerSurveyDispatcher_C.DoStartSurveyIntro
struct UPlayerSurveyDispatcher_C_DoStartSurveyIntro_Params
{
	class UFortPlayerSurveyPanelBase*                  Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function PlayerSurveyDispatcher.PlayerSurveyDispatcher_C.DisplaySurveyWidget
struct UPlayerSurveyDispatcher_C_DisplaySurveyWidget_Params
{
	class UFortPlayerSurveyPanelBase*                  Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function PlayerSurveyDispatcher.PlayerSurveyDispatcher_C.RemoveSurveyWidget
struct UPlayerSurveyDispatcher_C_RemoveSurveyWidget_Params
{
	class UFortPlayerSurveyPanelBase*                  Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function PlayerSurveyDispatcher.PlayerSurveyDispatcher_C.StartSurveyIntro
struct UPlayerSurveyDispatcher_C_StartSurveyIntro_Params
{
	class UFortPlayerSurveyPanelBase*                  Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function PlayerSurveyDispatcher.PlayerSurveyDispatcher_C.HandleFirstActivation
struct UPlayerSurveyDispatcher_C_HandleFirstActivation_Params
{
	class UCommonActivatablePanel*                     Panel;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function PlayerSurveyDispatcher.PlayerSurveyDispatcher_C.ExecuteUbergraph_PlayerSurveyDispatcher
struct UPlayerSurveyDispatcher_C_ExecuteUbergraph_PlayerSurveyDispatcher_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
