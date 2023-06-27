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

// Function GiftingScreen.GiftingScreen_C.HandleMoreInfoClicked
struct UGiftingScreen_C_HandleMoreInfoClicked_Params
{
	bool                                               bPassThrough;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GiftingScreen.GiftingScreen_C.ToggleBackAction
struct UGiftingScreen_C_ToggleBackAction_Params
{
	bool                                               bEnable;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GiftingScreen.GiftingScreen_C.HandleBackClicked
struct UGiftingScreen_C_HandleBackClicked_Params
{
	bool                                               bIsHandled;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GiftingScreen.GiftingScreen_C.Construct
struct UGiftingScreen_C_Construct_Params
{
};

// Function GiftingScreen.GiftingScreen_C.OnOfferSet
struct UGiftingScreen_C_OnOfferSet_Params
{
	class UFortStoreFrontOfferInfo*                    NewOfferInfo;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GiftingScreen.GiftingScreen_C.OnMoveToGiftWrapStep
struct UGiftingScreen_C_OnMoveToGiftWrapStep_Params
{
	bool                                               bGiftingToSelf;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GiftingScreen.GiftingScreen_C.BndEvt__Tab_Recipients_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
struct UGiftingScreen_C_BndEvt__Tab_Recipients_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function GiftingScreen.GiftingScreen_C.OnMoveToFriendSelectStep
struct UGiftingScreen_C_OnMoveToFriendSelectStep_Params
{
};

// Function GiftingScreen.GiftingScreen_C.BndEvt__Tab_GiftWrap_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
struct UGiftingScreen_C_BndEvt__Tab_GiftWrap_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function GiftingScreen.GiftingScreen_C.OnBeginGiftingSubmission
struct UGiftingScreen_C_OnBeginGiftingSubmission_Params
{
};

// Function GiftingScreen.GiftingScreen_C.OnEndGiftingSubmission
struct UGiftingScreen_C_OnEndGiftingSubmission_Params
{
	bool                                               bSuccess;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GiftingScreen.GiftingScreen_C.BP_OnActivated
struct UGiftingScreen_C_BP_OnActivated_Params
{
};

// Function GiftingScreen.GiftingScreen_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature
struct UGiftingScreen_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function GiftingScreen.GiftingScreen_C.ExecuteUbergraph_GiftingScreen
struct UGiftingScreen_C_ExecuteUbergraph_GiftingScreen_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
