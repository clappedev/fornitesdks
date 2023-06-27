#pragma once

// Fortnite SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ErrorWindow.ErrorWindow_C.CloseErrorWindow
struct UErrorWindow_C_CloseErrorWindow_Params
{
};

// Function ErrorWindow.ErrorWindow_C.GetShouldLogout
struct UErrorWindow_C_GetShouldLogout_Params
{
	bool                                               Return_Value;                                             // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ErrorWindow.ErrorWindow_C.Initialize
struct UErrorWindow_C_Initialize_Params
{
};

// Function ErrorWindow.ErrorWindow_C.AddError
struct UErrorWindow_C_AddError_Params
{
	struct FFortErrorInfo                              ErrorInfo;                                                // (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	bool                                               First_Error;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ErrorWindow.ErrorWindow_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_37_CommonButtonClicked__DelegateSignature
struct UErrorWindow_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_37_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ErrorWindow.ErrorWindow_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_165_CommonButtonClicked__DelegateSignature
struct UErrorWindow_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_165_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ErrorWindow.ErrorWindow_C.Construct
struct UErrorWindow_C_Construct_Params
{
};

// Function ErrorWindow.ErrorWindow_C.Destruct
struct UErrorWindow_C_Destruct_Params
{
};

// Function ErrorWindow.ErrorWindow_C.OnBeginOutro
struct UErrorWindow_C_OnBeginOutro_Params
{
};

// Function ErrorWindow.ErrorWindow_C.OnBeginIntro
struct UErrorWindow_C_OnBeginIntro_Params
{
};

// Function ErrorWindow.ErrorWindow_C.IntroEnded
struct UErrorWindow_C_IntroEnded_Params
{
};

// Function ErrorWindow.ErrorWindow_C.OutroEnded
struct UErrorWindow_C_OutroEnded_Params
{
};

// Function ErrorWindow.ErrorWindow_C.ExecuteUbergraph_ErrorWindow
struct UErrorWindow_C_ExecuteUbergraph_ErrorWindow_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
