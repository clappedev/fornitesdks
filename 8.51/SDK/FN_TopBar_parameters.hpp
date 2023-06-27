#pragma once

// Fortnite (8.51) SDK
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

// Function TopBar.TopBar_C.SetButtonStyleForMobile
struct UTopBar_C_SetButtonStyleForMobile_Params
{
};

// Function TopBar.TopBar_C.UninitializeInput
struct UTopBar_C_UninitializeInput_Params
{
};

// Function TopBar.TopBar_C.ManualMenuToggle
struct UTopBar_C_ManualMenuToggle_Params
{
	bool                                               PassThrough;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TopBar.TopBar_C.InitializeInput
struct UTopBar_C_InitializeInput_Params
{
};

// Function TopBar.TopBar_C.OnCloseRequested
struct UTopBar_C_OnCloseRequested_Params
{
};

// Function TopBar.TopBar_C.On_TouchZone_MouseButtonDown_1
struct UTopBar_C_On_TouchZone_MouseButtonDown_1_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TopBar.TopBar_C.HandleSocialPanelAnimComplete
struct UTopBar_C_HandleSocialPanelAnimComplete_Params
{
};

// Function TopBar.TopBar_C.HandleMainMenuAnimComplete
struct UTopBar_C_HandleMainMenuAnimComplete_Params
{
};

// Function TopBar.TopBar_C.CloseSocialMenu
struct UTopBar_C_CloseSocialMenu_Params
{
};

// Function TopBar.TopBar_C.Set Header Visibility
struct UTopBar_C_Set_Header_Visibility_Params
{
	bool                                               Visibility;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TopBar.TopBar_C.ConfigureVisibleItemsForSubGame
struct UTopBar_C_ConfigureVisibleItemsForSubGame_Params
{
};

// Function TopBar.TopBar_C.OpenSocialMenu
struct UTopBar_C_OpenSocialMenu_Params
{
};

// Function TopBar.TopBar_C.UpdateMTXButton
struct UTopBar_C_UpdateMTXButton_Params
{
};

// Function TopBar.TopBar_C.ForceMenuClosed
struct UTopBar_C_ForceMenuClosed_Params
{
};

// Function TopBar.TopBar_C.GetMainMenuTooltipWidget
struct UTopBar_C_GetMainMenuTooltipWidget_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function TopBar.TopBar_C.GetFriendsTooltipWidget
struct UTopBar_C_GetFriendsTooltipWidget_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function TopBar.TopBar_C.HandleActiveInvitesCountChanged
struct UTopBar_C_HandleActiveInvitesCountChanged_Params
{
	int                                                ActiveInvitesCount;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TopBar.TopBar_C.HandleAccountPickerResult
struct UTopBar_C_HandleAccountPickerResult_Params
{
	int                                                ControllerIndex;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               UserSwitched;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TopBar.TopBar_C.BindSwitchProfileAction
struct UTopBar_C_BindSwitchProfileAction_Params
{
};

// Function TopBar.TopBar_C.HandleSwitchProfileAction
struct UTopBar_C_HandleSwitchProfileAction_Params
{
	bool                                               PassThrough;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TopBar.TopBar_C.HandleFeatureSwitchOp
struct UTopBar_C_HandleFeatureSwitchOp_Params
{
	EFortUIFeature                                     Feature;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TopBar.TopBar_C.UnbindNavigationDelegates
struct UTopBar_C_UnbindNavigationDelegates_Params
{
};

// Function TopBar.TopBar_C.BindNavigationDelegates
struct UTopBar_C_BindNavigationDelegates_Params
{
};

// Function TopBar.TopBar_C.ForceMenuOpen
struct UTopBar_C_ForceMenuOpen_Params
{
};

// Function TopBar.TopBar_C.CreateWidgets
struct UTopBar_C_CreateWidgets_Params
{
};

// Function TopBar.TopBar_C.HandleCloseAction
struct UTopBar_C_HandleCloseAction_Params
{
	bool                                               PassThrough;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function TopBar.TopBar_C.BindPanelControl
struct UTopBar_C_BindPanelControl_Params
{
};

// Function TopBar.TopBar_C.CloseMainMenu
struct UTopBar_C_CloseMainMenu_Params
{
};

// Function TopBar.TopBar_C.OpenMainMenu
struct UTopBar_C_OpenMainMenu_Params
{
};

// Function TopBar.TopBar_C.DialogResult
struct UTopBar_C_DialogResult_Params
{
	EFortDialogResult                                  Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ResultName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TopBar.TopBar_C.OnBeginIntro
struct UTopBar_C_OnBeginIntro_Params
{
};

// Function TopBar.TopBar_C.OnBeginOutro
struct UTopBar_C_OnBeginOutro_Params
{
};

// Function TopBar.TopBar_C.OnActivated
struct UTopBar_C_OnActivated_Params
{
};

// Function TopBar.TopBar_C.Hidden
struct UTopBar_C_Hidden_Params
{
};

// Function TopBar.TopBar_C.BndEvt__MainMenu_K2Node_ComponentBoundEvent
struct UTopBar_C_BndEvt__MainMenu_K2Node_ComponentBoundEvent_Params
{
};

// Function TopBar.TopBar_C.BndEvt__Social_K2Node_ComponentBoundEvent
struct UTopBar_C_BndEvt__Social_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TopBar.TopBar_C.PreConstruct
struct UTopBar_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TopBar.TopBar_C.Destruct
struct UTopBar_C_Destruct_Params
{
};

// Function TopBar.TopBar_C.OnAnimationFinished
struct UTopBar_C_OnAnimationFinished_Params
{
	class UWidgetAnimation*                            Animation;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TopBar.TopBar_C.BndEvt__BP_FortLiveStreamGrantWindowExpires_K2Node_ComponentBoundEvent
struct UTopBar_C_BndEvt__BP_FortLiveStreamGrantWindowExpires_K2Node_ComponentBoundEvent_Params
{
};

// Function TopBar.TopBar_C.ShowSocialConfirmation
struct UTopBar_C_ShowSocialConfirmation_Params
{
	struct FText                                       MESSAGE;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TopBar.TopBar_C.On Power Increased
struct UTopBar_C_On_Power_Increased_Params
{
};

// Function TopBar.TopBar_C.BndEvt__MainMenuButton_K2Node_ComponentBoundEvent
struct UTopBar_C_BndEvt__MainMenuButton_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TopBar.TopBar_C.AddIconToScreen
struct UTopBar_C_AddIconToScreen_Params
{
	class UCommonLazyImage*                            Image;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TopBar.TopBar_C.ManualToggleMainMenu
struct UTopBar_C_ManualToggleMainMenu_Params
{
};

// Function TopBar.TopBar_C.Construct
struct UTopBar_C_Construct_Params
{
};

// Function TopBar.TopBar_C.BndEvt__SocialPanel_K2Node_ComponentBoundEvent
struct UTopBar_C_BndEvt__SocialPanel_K2Node_ComponentBoundEvent_Params
{
};

// Function TopBar.TopBar_C.SetOnlineFriendsCount
struct UTopBar_C_SetOnlineFriendsCount_Params
{
	int                                                NewOnlineFriendsCount;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TopBar.TopBar_C.SetActiveInvitesCount
struct UTopBar_C_SetActiveInvitesCount_Params
{
	int                                                NewActiveInvitesCount;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TopBar.TopBar_C.ExecuteUbergraph_TopBar
struct UTopBar_C_ExecuteUbergraph_TopBar_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TopBar.TopBar_C.OpenAccountPicker__DelegateSignature
struct UTopBar_C_OpenAccountPicker__DelegateSignature_Params
{
};

// Function TopBar.TopBar_C.MainMenuStateChanged__DelegateSignature
struct UTopBar_C_MainMenuStateChanged__DelegateSignature_Params
{
	bool                                               Open;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
