#pragma once

// Fortnite (9.1) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function IconTextPinButton.IconTextPinButton_C.Get Dynamic Material
struct UIconTextPinButton_C_Get_Dynamic_Material_Params
{
	class UMaterialInstanceDynamic*                    Ret_Material;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function IconTextPinButton.IconTextPinButton_C.ShowIcon
struct UIconTextPinButton_C_ShowIcon_Params
{
	bool                                               bShouldShow;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IconTextPinButton.IconTextPinButton_C.SetTextInternal
struct UIconTextPinButton_C_SetTextInternal_Params
{
	struct FText                                       InButtonText;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function IconTextPinButton.IconTextPinButton_C.SetInitialMouseKeyboardStyle
struct UIconTextPinButton_C_SetInitialMouseKeyboardStyle_Params
{
};

// Function IconTextPinButton.IconTextPinButton_C.UpdateTextStyle
struct UIconTextPinButton_C_UpdateTextStyle_Params
{
};

// Function IconTextPinButton.IconTextPinButton_C.SetContentAlignment
struct UIconTextPinButton_C_SetContentAlignment_Params
{
	TEnumAsByte<EHorizontalAlignment>                  ContentAlignment;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IconTextPinButton.IconTextPinButton_C.UpdateContentAlignment
struct UIconTextPinButton_C_UpdateContentAlignment_Params
{
};

// Function IconTextPinButton.IconTextPinButton_C.SetMouseKeyboardStyle
struct UIconTextPinButton_C_SetMouseKeyboardStyle_Params
{
	class UClass*                                      ControllerInputStyle;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IconTextPinButton.IconTextPinButton_C.UpdateStyle
struct UIconTextPinButton_C_UpdateStyle_Params
{
	bool                                               UsingGamepad;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IconTextPinButton.IconTextPinButton_C.UpdateText
struct UIconTextPinButton_C_UpdateText_Params
{
};

// Function IconTextPinButton.IconTextPinButton_C.SetControllerStyle
struct UIconTextPinButton_C_SetControllerStyle_Params
{
	class UClass*                                      ControllerInputStyle;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IconTextPinButton.IconTextPinButton_C.UpdateTextAndStyle
struct UIconTextPinButton_C_UpdateTextAndStyle_Params
{
	bool                                               bUsingGamepad;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IconTextPinButton.IconTextPinButton_C.InitializeButton
struct UIconTextPinButton_C_InitializeButton_Params
{
};

// Function IconTextPinButton.IconTextPinButton_C.Set Icon
struct UIconTextPinButton_C_Set_Icon_Params
{
	struct FSlateBrush                                 IconBrush;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function IconTextPinButton.IconTextPinButton_C.Set Text
struct UIconTextPinButton_C_Set_Text_Params
{
	struct FText                                       ButtonText;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function IconTextPinButton.IconTextPinButton_C.OnCurrentTextStyleChanged
struct UIconTextPinButton_C_OnCurrentTextStyleChanged_Params
{
};

// Function IconTextPinButton.IconTextPinButton_C.PreConstruct
struct UIconTextPinButton_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IconTextPinButton.IconTextPinButton_C.SetTabLabelInfo
struct UIconTextPinButton_C_SetTabLabelInfo_Params
{
	struct FFortTabButtonLabelInfo                     TabLabelInfo;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function IconTextPinButton.IconTextPinButton_C.BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent
struct UIconTextPinButton_C_BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_Params
{
	bool                                               bUsingGamepad;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IconTextPinButton.IconTextPinButton_C.OnTriggeredInputActionChanged
struct UIconTextPinButton_C_OnTriggeredInputActionChanged_Params
{
	struct FDataTableRowHandle                         NewTriggeredAction;                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function IconTextPinButton.IconTextPinButton_C.OnActionProgress
struct UIconTextPinButton_C_OnActionProgress_Params
{
	float                                              HeldPercent;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IconTextPinButton.IconTextPinButton_C.OnActionComplete
struct UIconTextPinButton_C_OnActionComplete_Params
{
};

// Function IconTextPinButton.IconTextPinButton_C.Construct
struct UIconTextPinButton_C_Construct_Params
{
};

// Function IconTextPinButton.IconTextPinButton_C.Destruct
struct UIconTextPinButton_C_Destruct_Params
{
};

// Function IconTextPinButton.IconTextPinButton_C.ExecuteUbergraph_IconTextPinButton
struct UIconTextPinButton_C_ExecuteUbergraph_IconTextPinButton_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
