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

// Function AthenaGamePhaseChangeWidget.AthenaGamePhaseChangeWidget_C.PlayIntroAnimation
struct UAthenaGamePhaseChangeWidget_C_PlayIntroAnimation_Params
{
	EAthenaGamePhaseStep                               Step;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaGamePhaseChangeWidget.AthenaGamePhaseChangeWidget_C.PlayGamePhaseAlertSound
struct UAthenaGamePhaseChangeWidget_C_PlayGamePhaseAlertSound_Params
{
	EAthenaGamePhaseStep                               Step;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaGamePhaseChangeWidget.AthenaGamePhaseChangeWidget_C.UpdateMessaging
struct UAthenaGamePhaseChangeWidget_C_UpdateMessaging_Params
{
	EAthenaGamePhaseStep*                              Step;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText*                                      MESSAGE;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FText*                                      TimeText;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function AthenaGamePhaseChangeWidget.AthenaGamePhaseChangeWidget_C.OnAnimationFinished
struct UAthenaGamePhaseChangeWidget_C_OnAnimationFinished_Params
{
	class UWidgetAnimation**                           Animation;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaGamePhaseChangeWidget.AthenaGamePhaseChangeWidget_C.GamePhaseStepChanged
struct UAthenaGamePhaseChangeWidget_C_GamePhaseStepChanged_Params
{
	EAthenaGamePhaseStep*                              Step;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaGamePhaseChangeWidget.AthenaGamePhaseChangeWidget_C.ExecuteUbergraph_AthenaGamePhaseChangeWidget
struct UAthenaGamePhaseChangeWidget_C_ExecuteUbergraph_AthenaGamePhaseChangeWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
