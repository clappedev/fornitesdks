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

// Function ToastWidget.ToastWidget_C.ApplyAdditionalStyling
struct UToastWidget_C_ApplyAdditionalStyling_Params
{
};

// Function ToastWidget.ToastWidget_C.SetImage
struct UToastWidget_C_SetImage_Params
{
};

// Function ToastWidget.ToastWidget_C.GetOpenButtonVisibility
struct UToastWidget_C_GetOpenButtonVisibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ToastWidget.ToastWidget_C.StartIntro
struct UToastWidget_C_StartIntro_Params
{
};

// Function ToastWidget.ToastWidget_C.ShowText
struct UToastWidget_C_ShowText_Params
{
	struct FText                                       Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UCommonTextBlock*                            TextBlock;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ToastWidget.ToastWidget_C.SetToast
struct UToastWidget_C_SetToast_Params
{
	class UFortUINotification*                         Toast;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ToastWidget.ToastWidget_C.Construct
struct UToastWidget_C_Construct_Params
{
};

// Function ToastWidget.ToastWidget_C.HandleIntroFinished
struct UToastWidget_C_HandleIntroFinished_Params
{
};

// Function ToastWidget.ToastWidget_C.HandleOutroFinished
struct UToastWidget_C_HandleOutroFinished_Params
{
};

// Function ToastWidget.ToastWidget_C.HandleAnimationDelay
struct UToastWidget_C_HandleAnimationDelay_Params
{
};

// Function ToastWidget.ToastWidget_C.OnMouseEnter
struct UToastWidget_C_OnMouseEnter_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function ToastWidget.ToastWidget_C.OnMouseLeave
struct UToastWidget_C_OnMouseLeave_Params
{
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function ToastWidget.ToastWidget_C.BndEvt__OpenButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature
struct UToastWidget_C_BndEvt__OpenButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ToastWidget.ToastWidget_C.ExecuteUbergraph_ToastWidget
struct UToastWidget_C_ExecuteUbergraph_ToastWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ToastWidget.ToastWidget_C.OnFinishedToast__DelegateSignature
struct UToastWidget_C_OnFinishedToast__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
