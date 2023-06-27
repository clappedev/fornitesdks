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

// Function UI_ScannerScreen.UI_ScannerScreen_C.EventFail
struct UUI_ScannerScreen_C_EventFail_Params
{
	struct FText                                       ScreenText;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function UI_ScannerScreen.UI_ScannerScreen_C.EventSuccess
struct UUI_ScannerScreen_C_EventSuccess_Params
{
	struct FText                                       ScreenText;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function UI_ScannerScreen.UI_ScannerScreen_C.EventScanning
struct UUI_ScannerScreen_C_EventScanning_Params
{
};

// Function UI_ScannerScreen.UI_ScannerScreen_C.EventTargetLost
struct UUI_ScannerScreen_C_EventTargetLost_Params
{
	struct FText                                       ScreenText;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function UI_ScannerScreen.UI_ScannerScreen_C.ExecuteUbergraph_UI_ScannerScreen
struct UUI_ScannerScreen_C_ExecuteUbergraph_UI_ScannerScreen_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
