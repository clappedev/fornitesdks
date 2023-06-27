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

// Function EventModeUI.FocusButton.HandleEventModeFocusingChanged
struct UFocusButton_HandleEventModeFocusingChanged_Params
{
	bool                                               bIsEventModeFocusing;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EventModeUI.FocusButton.HandleCanUseEventModeFocusChanged
struct UFocusButton_HandleCanUseEventModeFocusChanged_Params
{
	bool                                               bCanUseEventModeFocus;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EventModeUI.FortEventModeEmotesWidget.OnFocusStateChanged
struct UFortEventModeEmotesWidget_OnFocusStateChanged_Params
{
	bool                                               bIsFocusing;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EventModeUI.FortEventModeEmotesWidget.OnFocusAvailableChanged
struct UFortEventModeEmotesWidget_OnFocusAvailableChanged_Params
{
	bool                                               bIsFocusAvailable;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EventModeUI.FortMobileActionButtonBehavior_Focus.HandleEventModeFocusingChanged
struct UFortMobileActionButtonBehavior_Focus_HandleEventModeFocusingChanged_Params
{
	bool                                               bIsEventModeFocusing;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EventModeUI.FortMobileActionButtonBehavior_Focus.HandleCanUseEventModeFocusChanged
struct UFortMobileActionButtonBehavior_Focus_HandleCanUseEventModeFocusChanged_Params
{
	bool                                               bCanUseEventModeFocus;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
