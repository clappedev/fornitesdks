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

// Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.SetupCurrencyImage
struct UStoreMain_OfferDetails_C_SetupCurrencyImage_Params
{
};

// Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.UpdatePurchaseButton
struct UStoreMain_OfferDetails_C_UpdatePurchaseButton_Params
{
};

// Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.InitDetailAttributes
struct UStoreMain_OfferDetails_C_InitDetailAttributes_Params
{
};

// Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.SetPurchaseButtonText
struct UStoreMain_OfferDetails_C_SetPurchaseButtonText_Params
{
	struct FText                                       ButtonText;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.IsGiftingStorefrontOffer
struct UStoreMain_OfferDetails_C_IsGiftingStorefrontOffer_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.GetCurrencyABAssetFromQuantity
struct UStoreMain_OfferDetails_C_GetCurrencyABAssetFromQuantity_Params
{
	int                                                Quantity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UFortMtxOfferData*                           DataAsset;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.InitCurrency
struct UStoreMain_OfferDetails_C_InitCurrency_Params
{
};

// Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.InitStoreTypeVisuals
struct UStoreMain_OfferDetails_C_InitStoreTypeVisuals_Params
{
};

// Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.UnregisterInput
struct UStoreMain_OfferDetails_C_UnregisterInput_Params
{
};

// Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.RegisterInput
struct UStoreMain_OfferDetails_C_RegisterInput_Params
{
};

// Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.PopDetails
struct UStoreMain_OfferDetails_C_PopDetails_Params
{
};

// Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.Init
struct UStoreMain_OfferDetails_C_Init_Params
{
};

// Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.HandleBack
struct UStoreMain_OfferDetails_C_HandleBack_Params
{
	bool                                               PassThrough;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.ResetPurchaseButtonText
struct UStoreMain_OfferDetails_C_ResetPurchaseButtonText_Params
{
};

// Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.OnPurchasingStarted
struct UStoreMain_OfferDetails_C_OnPurchasingStarted_Params
{
};

// Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.BP_OnOfferSet
struct UStoreMain_OfferDetails_C_BP_OnOfferSet_Params
{
};

// Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.BP_OnActivated
struct UStoreMain_OfferDetails_C_BP_OnActivated_Params
{
};

// Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.ExecuteUbergraph_StoreMain_OfferDetails
struct UStoreMain_OfferDetails_C_ExecuteUbergraph_StoreMain_OfferDetails_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
