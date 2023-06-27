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

// Function OptionsMenu.OptionsMenu_C.CenterOnActiveTab
struct UOptionsMenu_C_CenterOnActiveTab_Params
{
};

// Function OptionsMenu.OptionsMenu_C.Handle Reset HUD Default
struct UOptionsMenu_C_Handle_Reset_HUD_Default_Params
{
	bool                                               PassThrough;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenu.OptionsMenu_C.SetBackground
struct UOptionsMenu_C_SetBackground_Params
{
};

// Function OptionsMenu.OptionsMenu_C.AddTab
struct UOptionsMenu_C_AddTab_Params
{
	class UClass*                                      WidgetClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       DisplayName;                                              // (Parm)
	struct FName                                       NameId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenu.OptionsMenu_C.HandleCursorModeChanging
struct UOptionsMenu_C_HandleCursorModeChanging_Params
{
	bool                                               IsEnabled;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenu.OptionsMenu_C.Handle Toggle Mode
struct UOptionsMenu_C_Handle_Toggle_Mode_Params
{
	bool                                               PassThrough;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenu.OptionsMenu_C.Set Input Action Handlers
struct UOptionsMenu_C_Set_Input_Action_Handlers_Params
{
};

// Function OptionsMenu.OptionsMenu_C.HandleBack
struct UOptionsMenu_C_HandleBack_Params
{
	bool                                               PassThrough;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenu.OptionsMenu_C.Handle Reset
struct UOptionsMenu_C_Handle_Reset_Params
{
	bool                                               PassThrough;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenu.OptionsMenu_C.Handle Reset Default
struct UOptionsMenu_C_Handle_Reset_Default_Params
{
	bool                                               PassThrough;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenu.OptionsMenu_C.Handle Apply
struct UOptionsMenu_C_Handle_Apply_Params
{
	bool                                               PassThrough;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenu.OptionsMenu_C.OnPreviewKeyDown
struct UOptionsMenu_C_OnPreviewKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OptionsMenu.OptionsMenu_C.OnMouseWheel
struct UOptionsMenu_C_OnMouseWheel_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OptionsMenu.OptionsMenu_C.OnPreviewMouseButtonDown
struct UOptionsMenu_C_OnPreviewMouseButtonDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OptionsMenu.OptionsMenu_C.Initialize
struct UOptionsMenu_C_Initialize_Params
{
};

// Function OptionsMenu.OptionsMenu_C.Construct
struct UOptionsMenu_C_Construct_Params
{
};

// Function OptionsMenu.OptionsMenu_C.BndEvt__CurrentTabSwitcher_K2Node_ComponentBoundEvent_13_OnActiveWidgetChanged__DelegateSignature
struct UOptionsMenu_C_BndEvt__CurrentTabSwitcher_K2Node_ComponentBoundEvent_13_OnActiveWidgetChanged__DelegateSignature_Params
{
	class UWidget*                                     ActiveWidget;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ActiveWidgetIndex;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenu.OptionsMenu_C.Enable Overlay Input
struct UOptionsMenu_C_Enable_Overlay_Input_Params
{
	bool                                               Accept_Input;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Overlay_Text;                                             // (Parm)
};

// Function OptionsMenu.OptionsMenu_C.Enable Overlay Video
struct UOptionsMenu_C_Enable_Overlay_Video_Params
{
	bool                                               Accept_Input;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenu.OptionsMenu_C.Disable Overlay
struct UOptionsMenu_C_Disable_Overlay_Params
{
};

// Function OptionsMenu.OptionsMenu_C.BndEvt__VideoSettingsAccept_K2Node_ComponentBoundEvent_22_CommonButtonClicked__DelegateSignature
struct UOptionsMenu_C_BndEvt__VideoSettingsAccept_K2Node_ComponentBoundEvent_22_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenu.OptionsMenu_C.BndEvt__VideoSettingsCancel_K2Node_ComponentBoundEvent_43_CommonButtonClicked__DelegateSignature
struct UOptionsMenu_C_BndEvt__VideoSettingsCancel_K2Node_ComponentBoundEvent_43_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
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
	bool                                               Gamepad_Enabled;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenu.OptionsMenu_C.BndEvt__SettingsTabs_K2Node_ComponentBoundEvent_95_OnTabButtonCreated__DelegateSignature
struct UOptionsMenu_C_BndEvt__SettingsTabs_K2Node_ComponentBoundEvent_95_OnTabButtonCreated__DelegateSignature_Params
{
	struct FName                                       TabId;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonButton*                               TabButton;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenu.OptionsMenu_C.HandleBenchmarkComplete
struct UOptionsMenu_C_HandleBenchmarkComplete_Params
{
};

// Function OptionsMenu.OptionsMenu_C.BndEvt__LanguageOk_K2Node_ComponentBoundEvent_112_CommonButtonClicked__DelegateSignature
struct UOptionsMenu_C_BndEvt__LanguageOk_K2Node_ComponentBoundEvent_112_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OptionsMenu.OptionsMenu_C.HandleSettingsErrorMessageClosed
struct UOptionsMenu_C_HandleSettingsErrorMessageClosed_Params
{
};

// Function OptionsMenu.OptionsMenu_C.ExecuteUbergraph_OptionsMenu
struct UOptionsMenu_C_ExecuteUbergraph_OptionsMenu_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
