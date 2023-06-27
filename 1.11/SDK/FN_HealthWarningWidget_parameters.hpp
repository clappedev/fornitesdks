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

// Function HealthWarningWidget.HealthWarningWidget_C.SetupShowTimer
struct UHealthWarningWidget_C_SetupShowTimer_Params
{
};

// Function HealthWarningWidget.HealthWarningWidget_C.OnActivated
struct UHealthWarningWidget_C_OnActivated_Params
{
};

// Function HealthWarningWidget.HealthWarningWidget_C.HandleShowTimerComplete
struct UHealthWarningWidget_C_HandleShowTimerComplete_Params
{
};

// Function HealthWarningWidget.HealthWarningWidget_C.Destruct
struct UHealthWarningWidget_C_Destruct_Params
{
};

// Function HealthWarningWidget.HealthWarningWidget_C.Construct
struct UHealthWarningWidget_C_Construct_Params
{
};

// Function HealthWarningWidget.HealthWarningWidget_C.AddIconToScreen
struct UHealthWarningWidget_C_AddIconToScreen_Params
{
	class UCommonLazyImage**                           Image;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HealthWarningWidget.HealthWarningWidget_C.ExecuteUbergraph_HealthWarningWidget
struct UHealthWarningWidget_C_ExecuteUbergraph_HealthWarningWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HealthWarningWidget.HealthWarningWidget_C.HealthWarningCompleted__DelegateSignature
struct UHealthWarningWidget_C_HealthWarningCompleted__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
