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

// Function TutorialWindow.TutorialWindow_C.SetDescription
struct UTutorialWindow_C_SetDescription_Params
{
	struct FText                                       Description;                                              // (Parm)
};

// Function TutorialWindow.TutorialWindow_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
struct UTutorialWindow_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TutorialWindow.TutorialWindow_C.ExecuteUbergraph_TutorialWindow
struct UTutorialWindow_C_ExecuteUbergraph_TutorialWindow_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TutorialWindow.TutorialWindow_C.OnRequestRetry__DelegateSignature
struct UTutorialWindow_C_OnRequestRetry__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
