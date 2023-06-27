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

// Function IconTextButton.IconTextButton_C.SetTextInternal
struct UIconTextButton_C_SetTextInternal_Params
{
	struct FText                                       InButtonText;                                             // (Parm)
};

// Function IconTextButton.IconTextButton_C.SetInitialMouseKeyboardStyle
struct UIconTextButton_C_SetInitialMouseKeyboardStyle_Params
{
};

// Function IconTextButton.IconTextButton_C.UpdateTextStyle
struct UIconTextButton_C_UpdateTextStyle_Params
{
};

// Function IconTextButton.IconTextButton_C.SetContentAlignment
struct UIconTextButton_C_SetContentAlignment_Params
{
	TEnumAsByte<EHorizontalAlignment>                  ContentAlignment;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function IconTextButton.IconTextButton_C.UpdateContentAlignment
struct UIconTextButton_C_UpdateContentAlignment_Params
{
};

// Function IconTextButton.IconTextButton_C.SetMouseKeyboardStyle
struct UIconTextButton_C_SetMouseKeyboardStyle_Params
{
	class UClass*                                      ControllerInputStyle;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function IconTextButton.IconTextButton_C.UpdateStyle
struct UIconTextButton_C_UpdateStyle_Params
{
	bool                                               UsingGamepad;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function IconTextButton.IconTextButton_C.UpdateText
struct UIconTextButton_C_UpdateText_Params
{
};

// Function IconTextButton.IconTextButton_C.SetControllerStyle
struct UIconTextButton_C_SetControllerStyle_Params
{
	class UClass*                                      ControllerInputStyle;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function IconTextButton.IconTextButton_C.UpdateTextAndStyle
struct UIconTextButton_C_UpdateTextAndStyle_Params
{
	bool                                               bUsingGamepad;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function IconTextButton.IconTextButton_C.InitializeButton
struct UIconTextButton_C_InitializeButton_Params
{
};

// Function IconTextButton.IconTextButton_C.Set Icon
struct UIconTextButton_C_Set_Icon_Params
{
	struct FSlateBrush                                 IconBrush;                                                // (Parm)
};

// Function IconTextButton.IconTextButton_C.Set Text
struct UIconTextButton_C_Set_Text_Params
{
	struct FText                                       ButtonText;                                               // (Parm)
};

// Function IconTextButton.IconTextButton_C.OnCurrentTextStyleChanged
struct UIconTextButton_C_OnCurrentTextStyleChanged_Params
{
};

// Function IconTextButton.IconTextButton_C.PreConstruct
struct UIconTextButton_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function IconTextButton.IconTextButton_C.SetTabLabelInfo
struct UIconTextButton_C_SetTabLabelInfo_Params
{
	struct FFortTabButtonLabelInfo                     TabLabelInfo;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function IconTextButton.IconTextButton_C.BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature
struct UIconTextButton_C_BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature_Params
{
	bool                                               bUsingGamepad;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function IconTextButton.IconTextButton_C.OnTriggeredInputActionChanged
struct UIconTextButton_C_OnTriggeredInputActionChanged_Params
{
	struct FDataTableRowHandle*                        NewTriggeredAction;                                       // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function IconTextButton.IconTextButton_C.OnActionProgress
struct UIconTextButton_C_OnActionProgress_Params
{
	float*                                             HeldPercent;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function IconTextButton.IconTextButton_C.OnActionComplete
struct UIconTextButton_C_OnActionComplete_Params
{
};

// Function IconTextButton.IconTextButton_C.Construct
struct UIconTextButton_C_Construct_Params
{
};

// Function IconTextButton.IconTextButton_C.Destruct
struct UIconTextButton_C_Destruct_Params
{
};

// Function IconTextButton.IconTextButton_C.ExecuteUbergraph_IconTextButton
struct UIconTextButton_C_ExecuteUbergraph_IconTextButton_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
