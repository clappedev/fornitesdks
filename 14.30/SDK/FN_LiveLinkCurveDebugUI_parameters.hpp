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

// Function LiveLinkCurveDebugUI.LiveLinkDebuggerBlueprintLibrary.HideLiveLinkDebugger
struct ULiveLinkDebuggerBlueprintLibrary_HideLiveLinkDebugger_Params
{
};

// Function LiveLinkCurveDebugUI.LiveLinkDebuggerBlueprintLibrary.DisplayLiveLinkDebugger
struct ULiveLinkDebuggerBlueprintLibrary_DisplayLiveLinkDebugger_Params
{
	struct FString                                     SubjectName;                                              // (Parm, ZeroConstructor)
};

// Function LiveLinkCurveDebugUI.LiveLinkDebuggerSettings.GetDPIScaleBasedOnSize
struct ULiveLinkDebuggerSettings_GetDPIScaleBasedOnSize_Params
{
	struct FIntPoint                                   Size;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LiveLinkCurveDebugUI.LiveLinkDebuggerSettings.GetBarColorForCurveValue
struct ULiveLinkDebuggerSettings_GetBarColorForCurveValue_Params
{
	float                                              CurveValue;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSlateColor                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
