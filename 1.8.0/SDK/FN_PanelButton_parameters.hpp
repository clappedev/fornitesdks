#pragma once

// Fortnite (1.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PanelButton.PanelButton_C.UpdateStyle
struct UPanelButton_C_UpdateStyle_Params
{
	bool                                               bUsingGamepad;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PanelButton.PanelButton_C.InitializeButton
struct UPanelButton_C_InitializeButton_Params
{
};

// Function PanelButton.PanelButton_C.UpdateTextAndStyle
struct UPanelButton_C_UpdateTextAndStyle_Params
{
};

// Function PanelButton.PanelButton_C.PreConstruct
struct UPanelButton_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PanelButton.PanelButton_C.BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature
struct UPanelButton_C_BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature_Params
{
	bool                                               bUsingGamepad;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PanelButton.PanelButton_C.OnTriggeredInputActionChanged
struct UPanelButton_C_OnTriggeredInputActionChanged_Params
{
	struct FDataTableRowHandle*                        NewTriggeredAction;                                       // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function PanelButton.PanelButton_C.OnActionProgress
struct UPanelButton_C_OnActionProgress_Params
{
	float*                                             HeldPercent;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PanelButton.PanelButton_C.OnActionComplete
struct UPanelButton_C_OnActionComplete_Params
{
};

// Function PanelButton.PanelButton_C.Construct
struct UPanelButton_C_Construct_Params
{
};

// Function PanelButton.PanelButton_C.OnHovered
struct UPanelButton_C_OnHovered_Params
{
};

// Function PanelButton.PanelButton_C.OnUnhovered
struct UPanelButton_C_OnUnhovered_Params
{
};

// Function PanelButton.PanelButton_C.ExecuteUbergraph_PanelButton
struct UPanelButton_C_ExecuteUbergraph_PanelButton_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
