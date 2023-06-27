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

// Function FortCosmeticItemCard.FortCosmeticItemCard_C.HandleUpdateRarity
struct UFortCosmeticItemCard_C_HandleUpdateRarity_Params
{
	struct FFortColorPalette                           RarityColors;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function FortCosmeticItemCard.FortCosmeticItemCard_C.HandleUpdateVisuals
struct UFortCosmeticItemCard_C_HandleUpdateVisuals_Params
{
	bool                                               bIsItem;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsBorderAnimated;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsHero;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsReward;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsShuffleItem;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortCosmeticItemCard.FortCosmeticItemCard_C.UpdateVisuals
struct UFortCosmeticItemCard_C_UpdateVisuals_Params
{
	bool                                               bIsItem;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsBorderAnimated;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsHero;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bReward;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsShuffleItem;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortCosmeticItemCard.FortCosmeticItemCard_C.OnUpdateEnhanced
struct UFortCosmeticItemCard_C_OnUpdateEnhanced_Params
{
	bool                                               bEnhanced;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortCosmeticItemCard.FortCosmeticItemCard_C.OnUpdateItemCardMaterial
struct UFortCosmeticItemCard_C_OnUpdateItemCardMaterial_Params
{
	class UMaterialInterface*                          Material;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortCosmeticItemCard.FortCosmeticItemCard_C.OnUpdateItemCardIcon
struct UFortCosmeticItemCard_C_OnUpdateItemCardIcon_Params
{
	class UTexture2D*                                  Icon;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortCosmeticItemCard.FortCosmeticItemCard_C.OnUpdateSeriesOrRarityColors
struct UFortCosmeticItemCard_C_OnUpdateSeriesOrRarityColors_Params
{
	struct FFortColorPalette                           ColorPalette;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function FortCosmeticItemCard.FortCosmeticItemCard_C.OnSizeChanged
struct UFortCosmeticItemCard_C_OnSizeChanged_Params
{
	float                                              InCardWidth;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortCosmeticItemCard.FortCosmeticItemCard_C.OnHover
struct UFortCosmeticItemCard_C_OnHover_Params
{
};

// Function FortCosmeticItemCard.FortCosmeticItemCard_C.OnUnhover
struct UFortCosmeticItemCard_C_OnUnhover_Params
{
};

// Function FortCosmeticItemCard.FortCosmeticItemCard_C.ExecuteUbergraph_FortCosmeticItemCard
struct UFortCosmeticItemCard_C_ExecuteUbergraph_FortCosmeticItemCard_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
