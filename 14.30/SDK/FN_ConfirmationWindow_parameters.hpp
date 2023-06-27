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

// Function ConfirmationWindow.ConfirmationWindow_C.HandleConfigureDeclineButton
struct UConfirmationWindow_C_HandleConfigureDeclineButton_Params
{
	class UCommonButton*                               New_Button;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ConfirmationWindow.ConfirmationWindow_C.ConfigureConfirmationButton
struct UConfirmationWindow_C_ConfigureConfirmationButton_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FConfirmationDialogAction                   Action;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               bSimpleConfirm;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConfirmationWindow.ConfirmationWindow_C.PlayShowSound
struct UConfirmationWindow_C_PlayShowSound_Params
{
};

// Function ConfirmationWindow.ConfirmationWindow_C.TapToClose
struct UConfirmationWindow_C_TapToClose_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ConfirmationWindow.ConfirmationWindow_C.SetupNonInteractiveContent
struct UConfirmationWindow_C_SetupNonInteractiveContent_Params
{
};

// Function ConfirmationWindow.ConfirmationWindow_C.GetInputAction
struct UConfirmationWindow_C_GetInputAction_Params
{
	struct FName                                       RowName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               UseInputAction;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FDataTableRowHandle                         ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ConfirmationWindow.ConfirmationWindow_C.Initialize
struct UConfirmationWindow_C_Initialize_Params
{
};

// Function ConfirmationWindow.ConfirmationWindow_C.OnBeginOutro
struct UConfirmationWindow_C_OnBeginOutro_Params
{
};

// Function ConfirmationWindow.ConfirmationWindow_C.ConfigureDeclineButton
struct UConfirmationWindow_C_ConfigureDeclineButton_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ConfirmationWindow.ConfirmationWindow_C.BP_OnActivated
struct UConfirmationWindow_C_BP_OnActivated_Params
{
};

// Function ConfirmationWindow.ConfirmationWindow_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
struct UConfirmationWindow_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ConfirmationWindow.ConfirmationWindow_C.ExecuteUbergraph_ConfirmationWindow
struct UConfirmationWindow_C_ExecuteUbergraph_ConfirmationWindow_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
