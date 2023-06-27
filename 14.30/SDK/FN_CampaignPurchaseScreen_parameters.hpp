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

// Function CampaignPurchaseScreen.CampaignPurchaseScreen_C.IsMinorShutdownWarningEnabled
struct UCampaignPurchaseScreen_C_IsMinorShutdownWarningEnabled_Params
{
	bool                                               Enabled;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function CampaignPurchaseScreen.CampaignPurchaseScreen_C.InitializeRedeemButton
struct UCampaignPurchaseScreen_C_InitializeRedeemButton_Params
{
};

// Function CampaignPurchaseScreen.CampaignPurchaseScreen_C.IsBusyMatchmaking
struct UCampaignPurchaseScreen_C_IsBusyMatchmaking_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CampaignPurchaseScreen.CampaignPurchaseScreen_C.Update
struct UCampaignPurchaseScreen_C_Update_Params
{
};

// Function CampaignPurchaseScreen.CampaignPurchaseScreen_C.AdvanceTextureCycle
struct UCampaignPurchaseScreen_C_AdvanceTextureCycle_Params
{
};

// Function CampaignPurchaseScreen.CampaignPurchaseScreen_C.InitializeTextureCycle
struct UCampaignPurchaseScreen_C_InitializeTextureCycle_Params
{
};

// Function CampaignPurchaseScreen.CampaignPurchaseScreen_C.ToggleTimer
struct UCampaignPurchaseScreen_C_ToggleTimer_Params
{
	bool                                               Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CampaignPurchaseScreen.CampaignPurchaseScreen_C.Construct
struct UCampaignPurchaseScreen_C_Construct_Params
{
};

// Function CampaignPurchaseScreen.CampaignPurchaseScreen_C.BndEvt__ButtonBack_K2Node_ComponentBoundEvent_128_CommonButtonClicked__DelegateSignature
struct UCampaignPurchaseScreen_C_BndEvt__ButtonBack_K2Node_ComponentBoundEvent_128_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function CampaignPurchaseScreen.CampaignPurchaseScreen_C.BndEvt__ButtonPurchase_K2Node_ComponentBoundEvent_39_CommonButtonClicked__DelegateSignature
struct UCampaignPurchaseScreen_C_BndEvt__ButtonPurchase_K2Node_ComponentBoundEvent_39_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function CampaignPurchaseScreen.CampaignPurchaseScreen_C.BP_OnActivated
struct UCampaignPurchaseScreen_C_BP_OnActivated_Params
{
};

// Function CampaignPurchaseScreen.CampaignPurchaseScreen_C.OnImageCycleTimeElapsed
struct UCampaignPurchaseScreen_C_OnImageCycleTimeElapsed_Params
{
};

// Function CampaignPurchaseScreen.CampaignPurchaseScreen_C.ExecuteUbergraph_CampaignPurchaseScreen
struct UCampaignPurchaseScreen_C_ExecuteUbergraph_CampaignPurchaseScreen_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
