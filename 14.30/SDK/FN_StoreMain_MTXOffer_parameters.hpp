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

// Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.GetBonusText
struct UStoreMain_MTXOffer_C_GetBonusText_Params
{
	class UFortStoreFrontOfferInfo*                    OfferInfo;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       BonusText;                                                // (Parm, OutParm)
};

// Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.SetTextOutlineColor
struct UStoreMain_MTXOffer_C_SetTextOutlineColor_Params
{
	class UTextBlock*                                  Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FFortMtxGradient                            Gradient;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.SetTileSize
struct UStoreMain_MTXOffer_C_SetTileSize_Params
{
	EFortMtxOfferDisplaySize                           DisplaySize;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.TriggerReset
struct UStoreMain_MTXOffer_C_TriggerReset_Params
{
};

// Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.InitialReset
struct UStoreMain_MTXOffer_C_InitialReset_Params
{
};

// Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.TriggerIntro
struct UStoreMain_MTXOffer_C_TriggerIntro_Params
{
};

// Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.ShowDetails
struct UStoreMain_MTXOffer_C_ShowDetails_Params
{
};

// Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.InitOffer
struct UStoreMain_MTXOffer_C_InitOffer_Params
{
};

// Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.Construct
struct UStoreMain_MTXOffer_C_Construct_Params
{
};

// Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.BP_OnHovered
struct UStoreMain_MTXOffer_C_BP_OnHovered_Params
{
};

// Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.BP_OnUnhovered
struct UStoreMain_MTXOffer_C_BP_OnUnhovered_Params
{
};

// Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.PreConstruct
struct UStoreMain_MTXOffer_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.OnOfferSet
struct UStoreMain_MTXOffer_C_OnOfferSet_Params
{
};

// Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.OnUpdateStorePrice
struct UStoreMain_MTXOffer_C_OnUpdateStorePrice_Params
{
	struct FText                                       InStorePrice;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.OnStoreSelectionOfferSet
struct UStoreMain_MTXOffer_C_OnStoreSelectionOfferSet_Params
{
};

// Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.OnOfferTileBrushLoaded
struct UStoreMain_MTXOffer_C_OnOfferTileBrushLoaded_Params
{
	struct FSlateBrush                                 OfferBrush;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.ExecuteUbergraph_StoreMain_MTXOffer
struct UStoreMain_MTXOffer_C_ExecuteUbergraph_StoreMain_MTXOffer_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function StoreMain_MTXOffer.StoreMain_MTXOffer_C.AboutToShowDetails__DelegateSignature
struct UStoreMain_MTXOffer_C_AboutToShowDetails__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
