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

// Function MainTabTutorialWrapper.MainTabTutorialWrapper_C.TutorialWrapperFinished
struct UMainTabTutorialWrapper_C_TutorialWrapperFinished_Params
{
};

// Function MainTabTutorialWrapper.MainTabTutorialWrapper_C.SetParentButton
struct UMainTabTutorialWrapper_C_SetParentButton_Params
{
	class UCommonButton*                               ParentButton;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function MainTabTutorialWrapper.MainTabTutorialWrapper_C.GetTutorialCalloutData
struct UMainTabTutorialWrapper_C_GetTutorialCalloutData_Params
{
	struct FFortUITutorialData                         TutorialData;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FFortToastDisplayInfo                       FortToastDisplayInfo;                                     // (Parm, OutParm)
};

// Function MainTabTutorialWrapper.MainTabTutorialWrapper_C.HasValidData
struct UMainTabTutorialWrapper_C_HasValidData_Params
{
	struct FFortUITutorialData                         FortUITutorialData;                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MainTabTutorialWrapper.MainTabTutorialWrapper_C.HandleTutorialCallout
struct UMainTabTutorialWrapper_C_HandleTutorialCallout_Params
{
	struct FName                                       TutorialObjectiveName;                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	ETutorialType                                      TutorialType;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainTabTutorialWrapper.MainTabTutorialWrapper_C.CheckFinishTutorialWrapper
struct UMainTabTutorialWrapper_C_CheckFinishTutorialWrapper_Params
{
};

// Function MainTabTutorialWrapper.MainTabTutorialWrapper_C.OnStopCallout
struct UMainTabTutorialWrapper_C_OnStopCallout_Params
{
};

// Function MainTabTutorialWrapper.MainTabTutorialWrapper_C.OnStartCallout
struct UMainTabTutorialWrapper_C_OnStartCallout_Params
{
	struct FName                                       TutorialObjectiveName;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ETutorialType                                      TutorialType;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MainTabTutorialWrapper.MainTabTutorialWrapper_C.Construct
struct UMainTabTutorialWrapper_C_Construct_Params
{
};

// Function MainTabTutorialWrapper.MainTabTutorialWrapper_C.Destruct
struct UMainTabTutorialWrapper_C_Destruct_Params
{
};

// Function MainTabTutorialWrapper.MainTabTutorialWrapper_C.OnFinishedToast
struct UMainTabTutorialWrapper_C_OnFinishedToast_Params
{
};

// Function MainTabTutorialWrapper.MainTabTutorialWrapper_C.ExecuteUbergraph_MainTabTutorialWrapper
struct UMainTabTutorialWrapper_C_ExecuteUbergraph_MainTabTutorialWrapper_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
