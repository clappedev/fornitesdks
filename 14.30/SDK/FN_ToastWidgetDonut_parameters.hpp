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

// Function ToastWidgetDonut.ToastWidgetDonut_C.SetupAnimBindings
struct UToastWidgetDonut_C_SetupAnimBindings_Params
{
	bool                                               Unbind;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ToastWidgetDonut.ToastWidgetDonut_C.ApplyAdditionalStyling
struct UToastWidgetDonut_C_ApplyAdditionalStyling_Params
{
};

// Function ToastWidgetDonut.ToastWidgetDonut_C.SetImage
struct UToastWidgetDonut_C_SetImage_Params
{
};

// Function ToastWidgetDonut.ToastWidgetDonut_C.GetOpenButtonVisibility
struct UToastWidgetDonut_C_GetOpenButtonVisibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ToastWidgetDonut.ToastWidgetDonut_C.StartIntro
struct UToastWidgetDonut_C_StartIntro_Params
{
};

// Function ToastWidgetDonut.ToastWidgetDonut_C.ShowText
struct UToastWidgetDonut_C_ShowText_Params
{
	struct FText                                       Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UCommonTextBlock*                            TextBlock;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ToastWidgetDonut.ToastWidgetDonut_C.SetToast
struct UToastWidgetDonut_C_SetToast_Params
{
	class UFortUINotification*                         Toast;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ToastWidgetDonut.ToastWidgetDonut_C.PlayOutro
struct UToastWidgetDonut_C_PlayOutro_Params
{
};

// Function ToastWidgetDonut.ToastWidgetDonut_C.BndEvt__OpenButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature
struct UToastWidgetDonut_C_BndEvt__OpenButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ToastWidgetDonut.ToastWidgetDonut_C.HandleOutroFinished
struct UToastWidgetDonut_C_HandleOutroFinished_Params
{
};

// Function ToastWidgetDonut.ToastWidgetDonut_C.HandleIntroFinished
struct UToastWidgetDonut_C_HandleIntroFinished_Params
{
};

// Function ToastWidgetDonut.ToastWidgetDonut_C.Construct
struct UToastWidgetDonut_C_Construct_Params
{
};

// Function ToastWidgetDonut.ToastWidgetDonut_C.Destruct
struct UToastWidgetDonut_C_Destruct_Params
{
};

// Function ToastWidgetDonut.ToastWidgetDonut_C.OnSetToast
struct UToastWidgetDonut_C_OnSetToast_Params
{
	class UFortUINotification*                         ToastNotification;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ToastWidgetDonut.ToastWidgetDonut_C.OnPlayOpenAnimation
struct UToastWidgetDonut_C_OnPlayOpenAnimation_Params
{
};

// Function ToastWidgetDonut.ToastWidgetDonut_C.ExecuteUbergraph_ToastWidgetDonut
struct UToastWidgetDonut_C_ExecuteUbergraph_ToastWidgetDonut_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ToastWidgetDonut.ToastWidgetDonut_C.OnFinishedToast__DelegateSignature
struct UToastWidgetDonut_C_OnFinishedToast__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
