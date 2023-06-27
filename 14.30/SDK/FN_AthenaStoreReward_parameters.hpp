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

// Function AthenaStoreReward.AthenaStoreReward_C.GetItem
struct UAthenaStoreReward_C_GetItem_Params
{
	class UFortItem*                                   Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaStoreReward.AthenaStoreReward_C.GetTemporaryItems
struct UAthenaStoreReward_C_GetTemporaryItems_Params
{
	TArray<struct FFortCosmeticVariantPreviewElement>  Cosmetics;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class UFortItem*>                           Temporary_Items;                                          // (Parm, OutParm)
};

// Function AthenaStoreReward.AthenaStoreReward_C.GetAthenaCosmeticItemDefinition
struct UAthenaStoreReward_C_GetAthenaCosmeticItemDefinition_Params
{
	class UAthenaCosmeticItemDefinition*               AsAthena_Cosmetic_Item_Definition;                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaStoreReward.AthenaStoreReward_C.EnableRarityFlare
struct UAthenaStoreReward_C_EnableRarityFlare_Params
{
};

// Function AthenaStoreReward.AthenaStoreReward_C.SetState
struct UAthenaStoreReward_C_SetState_Params
{
	bool                                               Claimed;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Locked;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               LevelAchieved;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bOwned;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaStoreReward.AthenaStoreReward_C.Setup
struct UAthenaStoreReward_C_Setup_Params
{
	class UFortItem*                                   InItemToRepresent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Claimed;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Locked;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               LevelAchieved;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bOwned;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EFortItemCardSize                                  ItemCardSize;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Quantity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaStoreReward.AthenaStoreReward_C.PlayIntro
struct UAthenaStoreReward_C_PlayIntro_Params
{
};

// Function AthenaStoreReward.AthenaStoreReward_C.ExecuteUbergraph_AthenaStoreReward
struct UAthenaStoreReward_C_ExecuteUbergraph_AthenaStoreReward_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
