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

// Function LoginScreen.LoginScreen_C.ShowHealthWarning
struct ULoginScreen_C_ShowHealthWarning_Params
{
	struct FString                                     Country;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function LoginScreen.LoginScreen_C.SafePopContent
struct ULoginScreen_C_SafePopContent_Params
{
};

// Function LoginScreen.LoginScreen_C.ShowAccountSelectWindow
struct ULoginScreen_C_ShowAccountSelectWindow_Params
{
};

// Function LoginScreen.LoginScreen_C.CheckSkipSplashScreen
struct ULoginScreen_C_CheckSkipSplashScreen_Params
{
};

// Function LoginScreen.LoginScreen_C.EmptyLoginStack
struct ULoginScreen_C_EmptyLoginStack_Params
{
};

// Function LoginScreen.LoginScreen_C.HideNonSplashScreenContent
struct ULoginScreen_C_HideNonSplashScreenContent_Params
{
};

// Function LoginScreen.LoginScreen_C.RollbackToSplashScreen
struct ULoginScreen_C_RollbackToSplashScreen_Params
{
};

// Function LoginScreen.LoginScreen_C.PopContentWidgetInternal
struct ULoginScreen_C_PopContentWidgetInternal_Params
{
	struct FContentPushState*                          State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LoginScreen.LoginScreen_C.ShowSplashScreen
struct ULoginScreen_C_ShowSplashScreen_Params
{
};

// Function LoginScreen.LoginScreen_C.GetLoginMenu
struct ULoginScreen_C_GetLoginMenu_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LoginScreen.LoginScreen_C.OnMouseButtonUp_MenuBorder
struct ULoginScreen_C_OnMouseButtonUp_MenuBorder_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function LoginScreen.LoginScreen_C.SkipBenchmark
struct ULoginScreen_C_SkipBenchmark_Params
{
};

// Function LoginScreen.LoginScreen_C.RunBenchmark
struct ULoginScreen_C_RunBenchmark_Params
{
};

// Function LoginScreen.LoginScreen_C.ShouldShowBenchmark
struct ULoginScreen_C_ShouldShowBenchmark_Params
{
	bool                                               Return_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LoginScreen.LoginScreen_C.ShowEulaWindow
struct ULoginScreen_C_ShowEulaWindow_Params
{
	struct FText                                       Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               ViewOnly;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LoginScreen.LoginScreen_C.SetResultsDescription
struct ULoginScreen_C_SetResultsDescription_Params
{
	struct FText                                       Description;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function LoginScreen.LoginScreen_C.SetResultTitle
struct ULoginScreen_C_SetResultTitle_Params
{
	struct FText                                       Title;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               bShowError;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LoginScreen.LoginScreen_C.ShowResultWindow
struct ULoginScreen_C_ShowResultWindow_Params
{
	struct FText                                       Title;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Description;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               bShowError;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bLoggedOut;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LoginScreen.LoginScreen_C.ToggleLoginMenu
struct ULoginScreen_C_ToggleLoginMenu_Params
{
};

// Function LoginScreen.LoginScreen_C.UpdateStatusTitle
struct ULoginScreen_C_UpdateStatusTitle_Params
{
	struct FText                                       Title;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function LoginScreen.LoginScreen_C.ShowAccountLinkingWindow
struct ULoginScreen_C_ShowAccountLinkingWindow_Params
{
	bool                                               InLinkedAccountNeedsPurchase;                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LoginScreen.LoginScreen_C.ShowStatusWindow
struct ULoginScreen_C_ShowStatusWindow_Params
{
	struct FText                                       StatusText;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function LoginScreen.LoginScreen_C.ShowSignInWindow
struct ULoginScreen_C_ShowSignInWindow_Params
{
	bool                                               DirectSignIn;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LoginScreen.LoginScreen_C.DialogResult_B952A8754B3836D2151B4981F531542E
struct ULoginScreen_C_DialogResult_B952A8754B3836D2151B4981F531542E_Params
{
	EFortDialogResult                                  Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ResultName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LoginScreen.LoginScreen_C.OnEnterState
struct ULoginScreen_C_OnEnterState_Params
{
	EFortUIState*                                      PreviousUIState;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LoginScreen.LoginScreen_C.OnExitState
struct ULoginScreen_C_OnExitState_Params
{
	EFortUIState*                                      NextUIState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LoginScreen.LoginScreen_C.HandleOnStartLogin
struct ULoginScreen_C_HandleOnStartLogin_Params
{
	struct FString                                     LoginEmail;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     LoginPassword;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function LoginScreen.LoginScreen_C.OnPatchingComplete
struct ULoginScreen_C_OnPatchingComplete_Params
{
	bool*                                              bProceed;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LoginScreen.LoginScreen_C.OnLoginFailed
struct ULoginScreen_C_OnLoginFailed_Params
{
	struct FText*                                      Reason;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function LoginScreen.LoginScreen_C.OnLoginSuceeded
struct ULoginScreen_C_OnLoginSuceeded_Params
{
};

// Function LoginScreen.LoginScreen_C.OnEulaAvailable
struct ULoginScreen_C_OnEulaAvailable_Params
{
	struct FText*                                      EulaText;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function LoginScreen.LoginScreen_C.HandleEulaResponse
struct ULoginScreen_C_HandleEulaResponse_Params
{
	bool                                               Accepted;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LoginScreen.LoginScreen_C.HandleResultConfirmed
struct ULoginScreen_C_HandleResultConfirmed_Params
{
};

// Function LoginScreen.LoginScreen_C.HandlerBenchmarkFlow
struct ULoginScreen_C_HandlerBenchmarkFlow_Params
{
};

// Function LoginScreen.LoginScreen_C.AccountLinking_PushStatus
struct ULoginScreen_C_AccountLinking_PushStatus_Params
{
	struct FText                                       StatusText;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function LoginScreen.LoginScreen_C.AccountLinking_PopStatus
struct ULoginScreen_C_AccountLinking_PopStatus_Params
{
};

// Function LoginScreen.LoginScreen_C.AccountLinking_LinkingFailed
struct ULoginScreen_C_AccountLinking_LinkingFailed_Params
{
	struct FText                                       FailReason;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function LoginScreen.LoginScreen_C.AccountLinking_RequestSignIn
struct ULoginScreen_C_AccountLinking_RequestSignIn_Params
{
};

// Function LoginScreen.LoginScreen_C.AccountLinking_RequestAutoLogin
struct ULoginScreen_C_AccountLinking_RequestAutoLogin_Params
{
};

// Function LoginScreen.LoginScreen_C.OnSplashScreenClosed
struct ULoginScreen_C_OnSplashScreenClosed_Params
{
};

// Function LoginScreen.LoginScreen_C.Construct
struct ULoginScreen_C_Construct_Params
{
};

// Function LoginScreen.LoginScreen_C.PushContentWidgetInternal
struct ULoginScreen_C_PushContentWidgetInternal_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FContentPushState*                          State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function LoginScreen.LoginScreen_C.OnLogoutComplete
struct ULoginScreen_C_OnLogoutComplete_Params
{
};

// Function LoginScreen.LoginScreen_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_20_CommonButtonClicked__DelegateSignature
struct ULoginScreen_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_20_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LoginScreen.LoginScreen_C.AccountLinking_ViewEula
struct ULoginScreen_C_AccountLinking_ViewEula_Params
{
};

// Function LoginScreen.LoginScreen_C.HandleViewOnlyClose
struct ULoginScreen_C_HandleViewOnlyClose_Params
{
};

// Function LoginScreen.LoginScreen_C.OnNeedsPurchaseOrAccountLinking
struct ULoginScreen_C_OnNeedsPurchaseOrAccountLinking_Params
{
	bool*                                              bLinkedAccountNeedsPurchase;                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LoginScreen.LoginScreen_C.HandleOnLoginAccountTypeSelected
struct ULoginScreen_C_HandleOnLoginAccountTypeSelected_Params
{
	EFortLoginAccountType                              LoginAccountType;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LoginScreen.LoginScreen_C.OnPostLoginLogoutComplete
struct ULoginScreen_C_OnPostLoginLogoutComplete_Params
{
	struct FText*                                      Reason;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function LoginScreen.LoginScreen_C.OnShowLoginMessage
struct ULoginScreen_C_OnShowLoginMessage_Params
{
	bool*                                              bShow;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText*                                      Tile;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FText*                                      Body;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function LoginScreen.LoginScreen_C.OnShowHealthWarning
struct ULoginScreen_C_OnShowHealthWarning_Params
{
	struct FString*                                    Country;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function LoginScreen.LoginScreen_C.HandleLoggedOutErrorDismissed
struct ULoginScreen_C_HandleLoggedOutErrorDismissed_Params
{
};

// Function LoginScreen.LoginScreen_C.OnLoggedOutWithError
struct ULoginScreen_C_OnLoggedOutWithError_Params
{
	struct FText*                                      ErrorText;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function LoginScreen.LoginScreen_C.CustomEvent
struct ULoginScreen_C_CustomEvent_Params
{
	struct FText                                       ErrorText;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function LoginScreen.LoginScreen_C.Event Closed MOTD
struct ULoginScreen_C_Event_Closed_MOTD_Params
{
};

// Function LoginScreen.LoginScreen_C.ExecuteUbergraph_LoginScreen
struct ULoginScreen_C_ExecuteUbergraph_LoginScreen_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
