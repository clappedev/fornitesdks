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

// Function OptionsMenu.OptionsMenu_C.ApplySettings
struct UOptionsMenu_C_ApplySettings_Params
{
};

// Function OptionsMenu.OptionsMenu_C.DoResetHUDOptionsToDefault
struct UOptionsMenu_C_DoResetHUDOptionsToDefault_Params
{
};

// Function OptionsMenu.OptionsMenu_C.DoResetGameOptionsToDefault
struct UOptionsMenu_C_DoResetGameOptionsToDefault_Params
{
};

// Function OptionsMenu.OptionsMenu_C.HandleTabGameOptionsActionHandlerStates
struct UOptionsMenu_C_HandleTabGameOptionsActionHandlerStates_Params
{
};

// Function OptionsMenu.OptionsMenu_C.HandleTabAccountLinkageActionHandlerStates
struct UOptionsMenu_C_HandleTabAccountLinkageActionHandlerStates_Params
{
};

// Function OptionsMenu.OptionsMenu_C.HandleTabGamepadConfigActionHandlerStates
struct UOptionsMenu_C_HandleTabGamepadConfigActionHandlerStates_Params
{
};

// Function OptionsMenu.OptionsMenu_C.HandleTabFortAudioOptionsActionHandlerStates
struct UOptionsMenu_C_HandleTabFortAudioOptionsActionHandlerStates_Params
{
};

// Function OptionsMenu.OptionsMenu_C.HandleTabVideoOptionsActionHandlerStates
struct UOptionsMenu_C_HandleTabVideoOptionsActionHandlerStates_Params
{
};

// Function OptionsMenu.OptionsMenu_C.HandleTabBrightnessOptionsActionHandlerStates
struct UOptionsMenu_C_HandleTabBrightnessOptionsActionHandlerStates_Params
{
};

// Function OptionsMenu.OptionsMenu_C.HandleTabInputOptionsActionHandlerStates
struct UOptionsMenu_C_HandleTabInputOptionsActionHandlerStates_Params
{
	class UTabInputOptions_C*                          TabInputOptionsActor;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenu.OptionsMenu_C.HandleTabGameOptionsResetActionHandlerStates
struct UOptionsMenu_C_HandleTabGameOptionsResetActionHandlerStates_Params
{
	int                                                ActiveWidgetIndex;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenu.OptionsMenu_C.HandleResetGameOptionsToDefault
struct UOptionsMenu_C_HandleResetGameOptionsToDefault_Params
{
	bool                                               Passthrough;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenu.OptionsMenu_C.CenterOnActiveTab
struct UOptionsMenu_C_CenterOnActiveTab_Params
{
};

// Function OptionsMenu.OptionsMenu_C.Handle Reset HUD Default
struct UOptionsMenu_C_Handle_Reset_HUD_Default_Params
{
	bool                                               Passthrough;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenu.OptionsMenu_C.SetBackground
struct UOptionsMenu_C_SetBackground_Params
{
};

// Function OptionsMenu.OptionsMenu_C.AddTab
struct UOptionsMenu_C_AddTab_Params
{
	class UClass*                                      WidgetClass;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       DisplayName;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FName                                       NameId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenu.OptionsMenu_C.HandleCursorModeChanging
struct UOptionsMenu_C_HandleCursorModeChanging_Params
{
	bool                                               IsEnabled;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenu.OptionsMenu_C.Handle Toggle Mode
struct UOptionsMenu_C_Handle_Toggle_Mode_Params
{
	bool                                               Passthrough;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenu.OptionsMenu_C.Set Input Action Handlers
struct UOptionsMenu_C_Set_Input_Action_Handlers_Params
{
};

// Function OptionsMenu.OptionsMenu_C.HandleBack
struct UOptionsMenu_C_HandleBack_Params
{
	bool                                               Passthrough;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenu.OptionsMenu_C.Handle Reset
struct UOptionsMenu_C_Handle_Reset_Params
{
	bool                                               Passthrough;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenu.OptionsMenu_C.Handle Reset Default
struct UOptionsMenu_C_Handle_Reset_Default_Params
{
	bool                                               Passthrough;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenu.OptionsMenu_C.Handle Apply
struct UOptionsMenu_C_Handle_Apply_Params
{
	bool                                               Passthrough;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenu.OptionsMenu_C.OnPreviewKeyDown
struct UOptionsMenu_C_OnPreviewKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OptionsMenu.OptionsMenu_C.OnMouseWheel
struct UOptionsMenu_C_OnMouseWheel_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OptionsMenu.OptionsMenu_C.OnPreviewMouseButtonDown
struct UOptionsMenu_C_OnPreviewMouseButtonDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OptionsMenu.OptionsMenu_C.Initialize
struct UOptionsMenu_C_Initialize_Params
{
};

// Function OptionsMenu.OptionsMenu_C.DialogResult_360436EF48DEEFB10FA2CAA85B0BEA8F
struct UOptionsMenu_C_DialogResult_360436EF48DEEFB10FA2CAA85B0BEA8F_Params
{
	EFortDialogResult                                  Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ResultName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenu.OptionsMenu_C.Construct
struct UOptionsMenu_C_Construct_Params
{
};

// Function OptionsMenu.OptionsMenu_C.BndEvt__CurrentTabSwitcher_K2Node_ComponentBoundEvent_13_OnActiveWidgetChanged__DelegateSignature
struct UOptionsMenu_C_BndEvt__CurrentTabSwitcher_K2Node_ComponentBoundEvent_13_OnActiveWidgetChanged__DelegateSignature_Params
{
	class UWidget*                                     ActiveWidget;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ActiveWidgetIndex;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenu.OptionsMenu_C.Enable Overlay Input
struct UOptionsMenu_C_Enable_Overlay_Input_Params
{
	bool                                               Accept_Input;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Overlay_Text;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function OptionsMenu.OptionsMenu_C.Enable Overlay Video
struct UOptionsMenu_C_Enable_Overlay_Video_Params
{
	bool                                               Accept_Input;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenu.OptionsMenu_C.Disable Overlay
struct UOptionsMenu_C_Disable_Overlay_Params
{
};

// Function OptionsMenu.OptionsMenu_C.BndEvt__VideoSettingsAccept_K2Node_ComponentBoundEvent_22_CommonButtonClicked__DelegateSignature
struct UOptionsMenu_C_BndEvt__VideoSettingsAccept_K2Node_ComponentBoundEvent_22_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenu.OptionsMenu_C.BndEvt__VideoSettingsCancel_K2Node_ComponentBoundEvent_43_CommonButtonClicked__DelegateSignature
struct UOptionsMenu_C_BndEvt__VideoSettingsCancel_K2Node_ComponentBoundEvent_43_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenu.OptionsMenu_C.Destruct
struct UOptionsMenu_C_Destruct_Params
{
};

// Function OptionsMenu.OptionsMenu_C.Tab Setting Changed
struct UOptionsMenu_C_Tab_Setting_Changed_Params
{
};

// Function OptionsMenu.OptionsMenu_C.OnActivated
struct UOptionsMenu_C_OnActivated_Params
{
};

// Function OptionsMenu.OptionsMenu_C.Disable Overlay Input
struct UOptionsMenu_C_Disable_Overlay_Input_Params
{
};

// Function OptionsMenu.OptionsMenu_C.Gamepad Changed
struct UOptionsMenu_C_Gamepad_Changed_Params
{
	bool                                               Gamepad_Enabled;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenu.OptionsMenu_C.BndEvt__SettingsTabs_K2Node_ComponentBoundEvent_95_OnTabButtonCreated__DelegateSignature
struct UOptionsMenu_C_BndEvt__SettingsTabs_K2Node_ComponentBoundEvent_95_OnTabButtonCreated__DelegateSignature_Params
{
	struct FName                                       TabId;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UCommonButton*                               TabButton;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenu.OptionsMenu_C.HandleBenchmarkComplete
struct UOptionsMenu_C_HandleBenchmarkComplete_Params
{
};

// Function OptionsMenu.OptionsMenu_C.BndEvt__LanguageOk_K2Node_ComponentBoundEvent_112_CommonButtonClicked__DelegateSignature
struct UOptionsMenu_C_BndEvt__LanguageOk_K2Node_ComponentBoundEvent_112_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenu.OptionsMenu_C.HandleSettingsErrorMessageClosed
struct UOptionsMenu_C_HandleSettingsErrorMessageClosed_Params
{
};

// Function OptionsMenu.OptionsMenu_C.OnHandleBack
struct UOptionsMenu_C_OnHandleBack_Params
{
};

// Function OptionsMenu.OptionsMenu_C.TabGameOptions_OnActiveWidgetChanged_Bind
struct UOptionsMenu_C_TabGameOptions_OnActiveWidgetChanged_Bind_Params
{
	class UWidget*                                     ActiveWidget;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ActiveWidgetIndex;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenu.OptionsMenu_C.BndEvt__ResetGameOptionsToDefaultYes_K2Node_ComponentBoundEvent_461_CommonButtonClicked__DelegateSignature
struct UOptionsMenu_C_BndEvt__ResetGameOptionsToDefaultYes_K2Node_ComponentBoundEvent_461_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenu.OptionsMenu_C.BndEvt__ResetGameOptionsToDefaultNo_K2Node_ComponentBoundEvent_484_CommonButtonClicked__DelegateSignature
struct UOptionsMenu_C_BndEvt__ResetGameOptionsToDefaultNo_K2Node_ComponentBoundEvent_484_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenu.OptionsMenu_C.BndEvt__ResetHUDOptionsToDefaultYes_K2Node_ComponentBoundEvent_508_CommonButtonClicked__DelegateSignature
struct UOptionsMenu_C_BndEvt__ResetHUDOptionsToDefaultYes_K2Node_ComponentBoundEvent_508_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenu.OptionsMenu_C.BndEvt__ResetHUDOptionsToDefaultNo_K2Node_ComponentBoundEvent_533_CommonButtonClicked__DelegateSignature
struct UOptionsMenu_C_BndEvt__ResetHUDOptionsToDefaultNo_K2Node_ComponentBoundEvent_533_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenu.OptionsMenu_C.ShowResetGameOptionsToDefaultMessage
struct UOptionsMenu_C_ShowResetGameOptionsToDefaultMessage_Params
{
};

// Function OptionsMenu.OptionsMenu_C.ShowResetHUDOptionToDefaultMessage
struct UOptionsMenu_C_ShowResetHUDOptionToDefaultMessage_Params
{
};

// Function OptionsMenu.OptionsMenu_C.HandleSettingsSaveComplete
struct UOptionsMenu_C_HandleSettingsSaveComplete_Params
{
};

// Function OptionsMenu.OptionsMenu_C.ExecuteUbergraph_OptionsMenu
struct UOptionsMenu_C_ExecuteUbergraph_OptionsMenu_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
