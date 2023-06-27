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

// Function SplashScreenWidget.SplashScreenWidget_C.OnFocusReceived
struct USplashScreenWidget_C_OnFocusReceived_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FFocusEvent*                                InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function SplashScreenWidget.SplashScreenWidget_C.OnMouseButtonDown
struct USplashScreenWidget_C_OnMouseButtonDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function SplashScreenWidget.SplashScreenWidget_C.RelinquishInputFocus
struct USplashScreenWidget_C_RelinquishInputFocus_Params
{
};

// Function SplashScreenWidget.SplashScreenWidget_C.SetInputFocus
struct USplashScreenWidget_C_SetInputFocus_Params
{
};

// Function SplashScreenWidget.SplashScreenWidget_C.OnInputMethodChanged
struct USplashScreenWidget_C_OnInputMethodChanged_Params
{
	bool                                               bUsingGamepad;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SplashScreenWidget.SplashScreenWidget_C.OnGameBootableInviteReceived
struct USplashScreenWidget_C_OnGameBootableInviteReceived_Params
{
	int*                                               UserIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SplashScreenWidget.SplashScreenWidget_C.OnActivated
struct USplashScreenWidget_C_OnActivated_Params
{
};

// Function SplashScreenWidget.SplashScreenWidget_C.ExecuteUbergraph_SplashScreenWidget
struct USplashScreenWidget_C_ExecuteUbergraph_SplashScreenWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
