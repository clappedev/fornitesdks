#pragma once

// Fortnite (9.1) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.GetListItemObject
struct UAthenaDirectAcquisitionOfferWidget_C_GetListItemObject_Params
{
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.UpdateSeriesBlock
struct UAthenaDirectAcquisitionOfferWidget_C_UpdateSeriesBlock_Params
{
};

// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.Bundle Short Text
struct UAthenaDirectAcquisitionOfferWidget_C_Bundle_Short_Text_Params
{
	struct FText                                       Text;                                                     // (Parm, OutParm)
};

// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.TryToResetCarouselTimer
struct UAthenaDirectAcquisitionOfferWidget_C_TryToResetCarouselTimer_Params
{
};

// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.HasGroupedOffers
struct UAthenaDirectAcquisitionOfferWidget_C_HasGroupedOffers_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.GetOfferIndexAndCountText
struct UAthenaDirectAcquisitionOfferWidget_C_GetOfferIndexAndCountText_Params
{
	int                                                OfferIndex;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FText                                       OfferDisplayCount;                                        // (Parm, OutParm)
	int                                                NextOfferIndex;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FText                                       NextOfferDisplayCount;                                    // (Parm, OutParm)
};

// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.UpdateBadge
struct UAthenaDirectAcquisitionOfferWidget_C_UpdateBadge_Params
{
};

// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.UpdateStyle_Sizing
struct UAthenaDirectAcquisitionOfferWidget_C_UpdateStyle_Sizing_Params
{
};

// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.UpdateStyle_Border
struct UAthenaDirectAcquisitionOfferWidget_C_UpdateStyle_Border_Params
{
};

// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.UpdateStyle_MainText
struct UAthenaDirectAcquisitionOfferWidget_C_UpdateStyle_MainText_Params
{
};

// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.SetupSaleInfo
struct UAthenaDirectAcquisitionOfferWidget_C_SetupSaleInfo_Params
{
	struct FText                                       SaleText;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       NormalPrice;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FString                                     BannerOverrideTag;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               bHasSale;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bHasBattlePassStars;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                iNumOfBattlePassStars;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.UpdateSaleStatus
struct UAthenaDirectAcquisitionOfferWidget_C_UpdateSaleStatus_Params
{
};

// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.Setup Price
struct UAthenaDirectAcquisitionOfferWidget_C_Setup_Price_Params
{
};

// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.UpdateShortDescription
struct UAthenaDirectAcquisitionOfferWidget_C_UpdateShortDescription_Params
{
};

// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.UpdateName
struct UAthenaDirectAcquisitionOfferWidget_C_UpdateName_Params
{
};

// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.LargeImageLoaded
struct UAthenaDirectAcquisitionOfferWidget_C_LargeImageLoaded_Params
{
	class UObject*                                     LoadedObject;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.SetupPrice
struct UAthenaDirectAcquisitionOfferWidget_C_SetupPrice_Params
{
	int                                                PriceIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UItemCount_C*                                PriceWidget;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.UpdateStyle
struct UAthenaDirectAcquisitionOfferWidget_C_UpdateStyle_Params
{
};

// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.UpdateAvailability
struct UAthenaDirectAcquisitionOfferWidget_C_UpdateAvailability_Params
{
};

// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.OfferSet
struct UAthenaDirectAcquisitionOfferWidget_C_OfferSet_Params
{
};

// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.BP_OnItemSelectionChanged
struct UAthenaDirectAcquisitionOfferWidget_C_BP_OnItemSelectionChanged_Params
{
	bool                                               bIsSelected;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.OnOfferSet
struct UAthenaDirectAcquisitionOfferWidget_C_OnOfferSet_Params
{
};

// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.BP_OnClicked
struct UAthenaDirectAcquisitionOfferWidget_C_BP_OnClicked_Params
{
};

// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.HandleOfferPurchaseComplete
struct UAthenaDirectAcquisitionOfferWidget_C_HandleOfferPurchaseComplete_Params
{
	bool                                               bSuccess;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FPurchasedItemInfo>                  PurchasedItems;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.BP_OnHovered
struct UAthenaDirectAcquisitionOfferWidget_C_BP_OnHovered_Params
{
};

// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.BP_OnUnhovered
struct UAthenaDirectAcquisitionOfferWidget_C_BP_OnUnhovered_Params
{
};

// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.OnUpdateStatus
struct UAthenaDirectAcquisitionOfferWidget_C_OnUpdateStatus_Params
{
};

// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.OnListItemObjectSet
struct UAthenaDirectAcquisitionOfferWidget_C_OnListItemObjectSet_Params
{
	class UObject*                                     ListItemObject;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.Construct
struct UAthenaDirectAcquisitionOfferWidget_C_Construct_Params
{
};

// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.OnOfferAdded
struct UAthenaDirectAcquisitionOfferWidget_C_OnOfferAdded_Params
{
};

// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.AnimEvent_Carousel_ImageSwap
struct UAthenaDirectAcquisitionOfferWidget_C_AnimEvent_Carousel_ImageSwap_Params
{
};

// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.BP_OnItemExpansionChanged
struct UAthenaDirectAcquisitionOfferWidget_C_BP_OnItemExpansionChanged_Params
{
	bool                                               bIsExpanded;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.PlayAnim_CarouselTransition
struct UAthenaDirectAcquisitionOfferWidget_C_PlayAnim_CarouselTransition_Params
{
};

// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.BP_OnEntryReleased
struct UAthenaDirectAcquisitionOfferWidget_C_BP_OnEntryReleased_Params
{
};

// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.Tick
struct UAthenaDirectAcquisitionOfferWidget_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaDirectAcquisitionOfferWidget.AthenaDirectAcquisitionOfferWidget_C.ExecuteUbergraph_AthenaDirectAcquisitionOfferWidget
struct UAthenaDirectAcquisitionOfferWidget_C_ExecuteUbergraph_AthenaDirectAcquisitionOfferWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
