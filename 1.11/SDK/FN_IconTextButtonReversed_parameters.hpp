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

// Function IconTextButtonReversed.IconTextButtonReversed_C.SetTextInternal
struct UIconTextButtonReversed_C_SetTextInternal_Params
{
	struct FText                                       InButtonText;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function IconTextButtonReversed.IconTextButtonReversed_C.SetInitialMouseKeyboardStyle
struct UIconTextButtonReversed_C_SetInitialMouseKeyboardStyle_Params
{
};

// Function IconTextButtonReversed.IconTextButtonReversed_C.UpdateTextStyle
struct UIconTextButtonReversed_C_UpdateTextStyle_Params
{
};

// Function IconTextButtonReversed.IconTextButtonReversed_C.SetContentAlignment
struct UIconTextButtonReversed_C_SetContentAlignment_Params
{
	TEnumAsByte<EHorizontalAlignment>                  ContentAlignment;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IconTextButtonReversed.IconTextButtonReversed_C.UpdateContentAlignment
struct UIconTextButtonReversed_C_UpdateContentAlignment_Params
{
};

// Function IconTextButtonReversed.IconTextButtonReversed_C.SetMouseKeyboardStyle
struct UIconTextButtonReversed_C_SetMouseKeyboardStyle_Params
{
	class UClass*                                      ControllerInputStyle;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IconTextButtonReversed.IconTextButtonReversed_C.UpdateStyle
struct UIconTextButtonReversed_C_UpdateStyle_Params
{
	bool                                               UsingGamepad;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IconTextButtonReversed.IconTextButtonReversed_C.UpdateText
struct UIconTextButtonReversed_C_UpdateText_Params
{
};

// Function IconTextButtonReversed.IconTextButtonReversed_C.SetControllerStyle
struct UIconTextButtonReversed_C_SetControllerStyle_Params
{
	class UClass*                                      ControllerInputStyle;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IconTextButtonReversed.IconTextButtonReversed_C.UpdateTextAndStyle
struct UIconTextButtonReversed_C_UpdateTextAndStyle_Params
{
	bool                                               bUsingGamepad;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IconTextButtonReversed.IconTextButtonReversed_C.InitializeButton
struct UIconTextButtonReversed_C_InitializeButton_Params
{
};

// Function IconTextButtonReversed.IconTextButtonReversed_C.Set Icon
struct UIconTextButtonReversed_C_Set_Icon_Params
{
	struct FSlateBrush                                 IconBrush;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function IconTextButtonReversed.IconTextButtonReversed_C.Set Text
struct UIconTextButtonReversed_C_Set_Text_Params
{
	struct FText                                       ButtonText;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function IconTextButtonReversed.IconTextButtonReversed_C.OnCurrentTextStyleChanged
struct UIconTextButtonReversed_C_OnCurrentTextStyleChanged_Params
{
};

// Function IconTextButtonReversed.IconTextButtonReversed_C.PreConstruct
struct UIconTextButtonReversed_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IconTextButtonReversed.IconTextButtonReversed_C.SetTabLabelInfo
struct UIconTextButtonReversed_C_SetTabLabelInfo_Params
{
	struct FFortTabButtonLabelInfo                     TabLabelInfo;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function IconTextButtonReversed.IconTextButtonReversed_C.BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature
struct UIconTextButtonReversed_C_BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature_Params
{
	bool                                               bUsingGamepad;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IconTextButtonReversed.IconTextButtonReversed_C.OnTriggeredInputActionChanged
struct UIconTextButtonReversed_C_OnTriggeredInputActionChanged_Params
{
	struct FDataTableRowHandle*                        NewTriggeredAction;                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function IconTextButtonReversed.IconTextButtonReversed_C.OnActionProgress
struct UIconTextButtonReversed_C_OnActionProgress_Params
{
	float*                                             HeldPercent;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IconTextButtonReversed.IconTextButtonReversed_C.OnActionComplete
struct UIconTextButtonReversed_C_OnActionComplete_Params
{
};

// Function IconTextButtonReversed.IconTextButtonReversed_C.Construct
struct UIconTextButtonReversed_C_Construct_Params
{
};

// Function IconTextButtonReversed.IconTextButtonReversed_C.Destruct
struct UIconTextButtonReversed_C_Destruct_Params
{
};

// Function IconTextButtonReversed.IconTextButtonReversed_C.ExecuteUbergraph_IconTextButtonReversed
struct UIconTextButtonReversed_C_ExecuteUbergraph_IconTextButtonReversed_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
