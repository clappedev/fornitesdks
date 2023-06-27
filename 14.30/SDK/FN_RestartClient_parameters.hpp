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

// Function RestartClient.RestartClient_C.OnButtonSet
struct URestartClient_C_OnButtonSet_Params
{
	bool                                               InbShouldExit;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bShouldShow;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function RestartClient.RestartClient_C.BndEvt__Button_Confirm_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
struct URestartClient_C_BndEvt__Button_Confirm_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function RestartClient.RestartClient_C.OnInitialized
struct URestartClient_C_OnInitialized_Params
{
};

// Function RestartClient.RestartClient_C.ExecuteUbergraph_RestartClient
struct URestartClient_C_ExecuteUbergraph_RestartClient_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
