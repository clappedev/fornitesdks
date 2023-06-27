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

// Function BP_UI_ScannerScreen.BP_UI_ScannerScreen_C.ErrorTimeline__FinishedFunc
struct ABP_UI_ScannerScreen_C_ErrorTimeline__FinishedFunc_Params
{
};

// Function BP_UI_ScannerScreen.BP_UI_ScannerScreen_C.ErrorTimeline__UpdateFunc
struct ABP_UI_ScannerScreen_C_ErrorTimeline__UpdateFunc_Params
{
};

// Function BP_UI_ScannerScreen.BP_UI_ScannerScreen_C.ReceiveBeginPlay
struct ABP_UI_ScannerScreen_C_ReceiveBeginPlay_Params
{
};

// Function BP_UI_ScannerScreen.BP_UI_ScannerScreen_C.ScreenEventError
struct ABP_UI_ScannerScreen_C_ScreenEventError_Params
{
	bool                                               Reverse;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_UI_ScannerScreen.BP_UI_ScannerScreen_C.ScreenEventSuccess
struct ABP_UI_ScannerScreen_C_ScreenEventSuccess_Params
{
	struct FText                                       SuccessText;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_UI_ScannerScreen.BP_UI_ScannerScreen_C.ScreenEventFailure
struct ABP_UI_ScannerScreen_C_ScreenEventFailure_Params
{
	struct FText                                       FailureText;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_UI_ScannerScreen.BP_UI_ScannerScreen_C.ScreenEventScan
struct ABP_UI_ScannerScreen_C_ScreenEventScan_Params
{
};

// Function BP_UI_ScannerScreen.BP_UI_ScannerScreen_C.ScreenEventDismiss
struct ABP_UI_ScannerScreen_C_ScreenEventDismiss_Params
{
};

// Function BP_UI_ScannerScreen.BP_UI_ScannerScreen_C.ScreenEventTargetLost
struct ABP_UI_ScannerScreen_C_ScreenEventTargetLost_Params
{
	struct FText                                       LostText;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_UI_ScannerScreen.BP_UI_ScannerScreen_C.ExecuteUbergraph_BP_UI_ScannerScreen
struct ABP_UI_ScannerScreen_C_ExecuteUbergraph_BP_UI_ScannerScreen_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
