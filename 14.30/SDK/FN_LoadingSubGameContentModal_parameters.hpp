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

// Function LoadingSubGameContentModal.LoadingSubGameContentModal_C.OnUpdatedProgress
struct ULoadingSubGameContentModal_C_OnUpdatedProgress_Params
{
	float                                              Percent;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LoadingSubGameContentModal.LoadingSubGameContentModal_C.OnInitialized
struct ULoadingSubGameContentModal_C_OnInitialized_Params
{
};

// Function LoadingSubGameContentModal.LoadingSubGameContentModal_C.SetCancelButtonText
struct ULoadingSubGameContentModal_C_SetCancelButtonText_Params
{
	struct FText                                       InText;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function LoadingSubGameContentModal.LoadingSubGameContentModal_C.BP_OnActivated
struct ULoadingSubGameContentModal_C_BP_OnActivated_Params
{
};

// Function LoadingSubGameContentModal.LoadingSubGameContentModal_C.OnAnimationFinished
struct ULoadingSubGameContentModal_C_OnAnimationFinished_Params
{
	class UWidgetAnimation*                            Animation;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LoadingSubGameContentModal.LoadingSubGameContentModal_C.ExecuteUbergraph_LoadingSubGameContentModal
struct ULoadingSubGameContentModal_C_ExecuteUbergraph_LoadingSubGameContentModal_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
