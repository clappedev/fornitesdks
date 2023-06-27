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

// Function ChatWidget.ChatWidget_C.InitializeChat
struct UChatWidget_C_InitializeChat_Params
{
};

// Function ChatWidget.ChatWidget_C.BindDelegates
struct UChatWidget_C_BindDelegates_Params
{
};

// Function ChatWidget.ChatWidget_C.HandleCursorModeChanged
struct UChatWidget_C_HandleCursorModeChanged_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ActionName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UUserWidget*                                 Widget;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ChatWidget.ChatWidget_C.HandleShowChatWindow
struct UChatWidget_C_HandleShowChatWindow_Params
{
	EFortUIFeature                                     Feature;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	EFortUIFeatureState                                FeatureState;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ChatWidget.ChatWidget_C.HandeChatEnteredEvent
struct UChatWidget_C_HandeChatEnteredEvent_Params
{
	bool                                               bEnteringChat;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ChatWidget.ChatWidget_C.UpdateChatUserListIcon
struct UChatWidget_C_UpdateChatUserListIcon_Params
{
	bool                                               Open;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ChatWidget.ChatWidget_C.Set Chat Shortcut Visibility
struct UChatWidget_C_Set_Chat_Shortcut_Visibility_Params
{
	ESlateVisibility                                   New_Visibility;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ChatWidget.ChatWidget_C.Set Chat Visibility
struct UChatWidget_C_Set_Chat_Visibility_Params
{
	ESlateVisibility                                   New_Visibility;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ChatWidget.ChatWidget_C.BndEvt__ConsoleChatShortcut_K2Node_ComponentBoundEvent_14_CommonButtonClicked__DelegateSignature
struct UChatWidget_C_BndEvt__ConsoleChatShortcut_K2Node_ComponentBoundEvent_14_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ChatWidget.ChatWidget_C.BndEvt__FortChat_K2Node_ComponentBoundEvent_66_OnChatEnteredDelegate__DelegateSignature
struct UChatWidget_C_BndEvt__FortChat_K2Node_ComponentBoundEvent_66_OnChatEnteredDelegate__DelegateSignature_Params
{
	bool                                               bEnteringChat;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ChatWidget.ChatWidget_C.BndEvt__FortChat_K2Node_ComponentBoundEvent_0_OnUserListChangedDelegate__DelegateSignature
struct UChatWidget_C_BndEvt__FortChat_K2Node_ComponentBoundEvent_0_OnUserListChangedDelegate__DelegateSignature_Params
{
	bool                                               bOpen;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ChatWidget.ChatWidget_C.Construct
struct UChatWidget_C_Construct_Params
{
};

// Function ChatWidget.ChatWidget_C.HandleInputMethodChanged
struct UChatWidget_C_HandleInputMethodChanged_Params
{
	bool                                               bUsingGamepad;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ChatWidget.ChatWidget_C.Destruct
struct UChatWidget_C_Destruct_Params
{
};

// Function ChatWidget.ChatWidget_C.ExecuteUbergraph_ChatWidget
struct UChatWidget_C_ExecuteUbergraph_ChatWidget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ChatWidget.ChatWidget_C.AboutToEnterChat__DelegateSignature
struct UChatWidget_C_AboutToEnterChat__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
