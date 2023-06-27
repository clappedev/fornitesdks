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

// Function Feedback_RateExperience.Feedback_RateExperience_C.CreateToolTip
struct UFeedback_RateExperience_C_CreateToolTip_Params
{
	class UWidget*                                     Star_Widget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                WidgetIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Feedback_RateExperience.Feedback_RateExperience_C.CloseWidget
struct UFeedback_RateExperience_C_CloseWidget_Params
{
};

// Function Feedback_RateExperience.Feedback_RateExperience_C.SendAnalyticsEvent
struct UFeedback_RateExperience_C_SendAnalyticsEvent_Params
{
	struct FString                                     FeedbackSentBy;                                           // (Parm, ZeroConstructor)
};

// Function Feedback_RateExperience.Feedback_RateExperience_C.SetupStarButtons
struct UFeedback_RateExperience_C_SetupStarButtons_Params
{
};

// Function Feedback_RateExperience.Feedback_RateExperience_C.SetStarCount
struct UFeedback_RateExperience_C_SetStarCount_Params
{
	int                                                Star_Count;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Feedback_RateExperience.Feedback_RateExperience_C.Construct
struct UFeedback_RateExperience_C_Construct_Params
{
};

// Function Feedback_RateExperience.Feedback_RateExperience_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
struct UFeedback_RateExperience_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Feedback_RateExperience.Feedback_RateExperience_C.BndEvt__SendButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
struct UFeedback_RateExperience_C_BndEvt__SendButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Feedback_RateExperience.Feedback_RateExperience_C.OnActivated
struct UFeedback_RateExperience_C_OnActivated_Params
{
};

// Function Feedback_RateExperience.Feedback_RateExperience_C.BndEvt__5Star_K2Node_ComponentBoundEvent_868_On Mouse Hovered Changed__DelegateSignature
struct UFeedback_RateExperience_C_BndEvt__5Star_K2Node_ComponentBoundEvent_868_On_Mouse_Hovered_Changed__DelegateSignature_Params
{
	bool                                               Is_Hovered;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Feedback_RateExperience.Feedback_RateExperience_C.BndEvt__4Star_K2Node_ComponentBoundEvent_890_On Mouse Hovered Changed__DelegateSignature
struct UFeedback_RateExperience_C_BndEvt__4Star_K2Node_ComponentBoundEvent_890_On_Mouse_Hovered_Changed__DelegateSignature_Params
{
	bool                                               Is_Hovered;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Feedback_RateExperience.Feedback_RateExperience_C.BndEvt__3Star_K2Node_ComponentBoundEvent_907_On Mouse Hovered Changed__DelegateSignature
struct UFeedback_RateExperience_C_BndEvt__3Star_K2Node_ComponentBoundEvent_907_On_Mouse_Hovered_Changed__DelegateSignature_Params
{
	bool                                               Is_Hovered;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Feedback_RateExperience.Feedback_RateExperience_C.BndEvt__2Star_K2Node_ComponentBoundEvent_925_On Mouse Hovered Changed__DelegateSignature
struct UFeedback_RateExperience_C_BndEvt__2Star_K2Node_ComponentBoundEvent_925_On_Mouse_Hovered_Changed__DelegateSignature_Params
{
	bool                                               Is_Hovered;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Feedback_RateExperience.Feedback_RateExperience_C.BndEvt__1Star_K2Node_ComponentBoundEvent_944_On Mouse Hovered Changed__DelegateSignature
struct UFeedback_RateExperience_C_BndEvt__1Star_K2Node_ComponentBoundEvent_944_On_Mouse_Hovered_Changed__DelegateSignature_Params
{
	bool                                               Is_Hovered;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Feedback_RateExperience.Feedback_RateExperience_C.OnClientPartyStateChanged
struct UFeedback_RateExperience_C_OnClientPartyStateChanged_Params
{
	EFortPartyState                                    PartyState;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Feedback_RateExperience.Feedback_RateExperience_C.OnStarButtonClicked
struct UFeedback_RateExperience_C_OnStarButtonClicked_Params
{
	class UFortBaseButton*                             Button_Clicked;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Feedback_RateExperience.Feedback_RateExperience_C.OnInputMethodChanged
struct UFeedback_RateExperience_C_OnInputMethodChanged_Params
{
	bool                                               bUsingGamepad;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Feedback_RateExperience.Feedback_RateExperience_C.Destruct
struct UFeedback_RateExperience_C_Destruct_Params
{
};

// Function Feedback_RateExperience.Feedback_RateExperience_C.ExecuteUbergraph_Feedback_RateExperience
struct UFeedback_RateExperience_C_ExecuteUbergraph_Feedback_RateExperience_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
