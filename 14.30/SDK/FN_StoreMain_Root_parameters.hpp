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

// Function StoreMain_Root.StoreMain_Root_C.BP_GetDesiredFocusTarget
struct UStoreMain_Root_C_BP_GetDesiredFocusTarget_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function StoreMain_Root.StoreMain_Root_C.GetVisibilityByChildrenPresence
struct UStoreMain_Root_C_GetVisibilityByChildrenPresence_Params
{
	class UPanelWidget*                                Panel;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	ESlateVisibility                                   NewParam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function StoreMain_Root.StoreMain_Root_C.HandleAllOffersGenerated
struct UStoreMain_Root_C_HandleAllOffersGenerated_Params
{
};

// Function StoreMain_Root.StoreMain_Root_C.HandleGenerateOffer
struct UStoreMain_Root_C_HandleGenerateOffer_Params
{
	class UFortStoreFrontOfferInfo*                    OfferInfo;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function StoreMain_Root.StoreMain_Root_C.PlayEquippedLockerMusic
struct UStoreMain_Root_C_PlayEquippedLockerMusic_Params
{
};

// Function StoreMain_Root.StoreMain_Root_C.HandleBack
struct UStoreMain_Root_C_HandleBack_Params
{
	bool                                               PassThrough;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function StoreMain_Root.StoreMain_Root_C.HandleRedeem
struct UStoreMain_Root_C_HandleRedeem_Params
{
	bool                                               bPassThrough;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function StoreMain_Root.StoreMain_Root_C.SetupForCampaignUpsell
struct UStoreMain_Root_C_SetupForCampaignUpsell_Params
{
};

// Function StoreMain_Root.StoreMain_Root_C.SetupFirstFocusableTile
struct UStoreMain_Root_C_SetupFirstFocusableTile_Params
{
};

// Function StoreMain_Root.StoreMain_Root_C.LayoutVBuckTiles
struct UStoreMain_Root_C_LayoutVBuckTiles_Params
{
};

// Function StoreMain_Root.StoreMain_Root_C.Get Main Tab Reference
struct UStoreMain_Root_C_Get_Main_Tab_Reference_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function StoreMain_Root.StoreMain_Root_C.Start Ambient Sound
struct UStoreMain_Root_C_Start_Ambient_Sound_Params
{
	bool                                               Condition;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function StoreMain_Root.StoreMain_Root_C.UpdateCurrencyNotification
struct UStoreMain_Root_C_UpdateCurrencyNotification_Params
{
};

// Function StoreMain_Root.StoreMain_Root_C.Focus
struct UStoreMain_Root_C_Focus_Params
{
};

// Function StoreMain_Root.StoreMain_Root_C.NoOffersAvailable
struct UStoreMain_Root_C_NoOffersAvailable_Params
{
};

// Function StoreMain_Root.StoreMain_Root_C.OnOffersGenerated
struct UStoreMain_Root_C_OnOffersGenerated_Params
{
};

// Function StoreMain_Root.StoreMain_Root_C.BP_OnActivated
struct UStoreMain_Root_C_BP_OnActivated_Params
{
};

// Function StoreMain_Root.StoreMain_Root_C.BP_OnDeactivated
struct UStoreMain_Root_C_BP_OnDeactivated_Params
{
};

// Function StoreMain_Root.StoreMain_Root_C.ClearOfferWidgets
struct UStoreMain_Root_C_ClearOfferWidgets_Params
{
};

// Function StoreMain_Root.StoreMain_Root_C.OnAddedToActivationStack
struct UStoreMain_Root_C_OnAddedToActivationStack_Params
{
};

// Function StoreMain_Root.StoreMain_Root_C.OnRemovedFromActivationStack
struct UStoreMain_Root_C_OnRemovedFromActivationStack_Params
{
};

// Function StoreMain_Root.StoreMain_Root_C.OnUpdateOtherPlatformMTXMessage
struct UStoreMain_Root_C_OnUpdateOtherPlatformMTXMessage_Params
{
	bool                                               HasOtherPlatformCurrency;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       CurrencyMessageLocText;                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function StoreMain_Root.StoreMain_Root_C.GenerateOfferWidget
struct UStoreMain_Root_C_GenerateOfferWidget_Params
{
	class UFortStoreFrontOfferInfo*                    OfferData;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function StoreMain_Root.StoreMain_Root_C.OnPurchasingDisabled
struct UStoreMain_Root_C_OnPurchasingDisabled_Params
{
};

// Function StoreMain_Root.StoreMain_Root_C.OnTransitionedBySwitcher
struct UStoreMain_Root_C_OnTransitionedBySwitcher_Params
{
};

// Function StoreMain_Root.StoreMain_Root_C.OnStartReadingOffers
struct UStoreMain_Root_C_OnStartReadingOffers_Params
{
};

// Function StoreMain_Root.StoreMain_Root_C.ExecuteUbergraph_StoreMain_Root
struct UStoreMain_Root_C_ExecuteUbergraph_StoreMain_Root_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
