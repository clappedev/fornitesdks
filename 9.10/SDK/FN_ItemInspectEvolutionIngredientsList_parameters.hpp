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

// Function ItemInspectEvolutionIngredientsList.ItemInspectEvolutionIngredientsList_C.SetupItemLevelRequirement
struct UItemInspectEvolutionIngredientsList_C_SetupItemLevelRequirement_Params
{
	class UFortItem*                                   Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemInspectEvolutionIngredientsList.ItemInspectEvolutionIngredientsList_C.ClearIngredients
struct UItemInspectEvolutionIngredientsList_C_ClearIngredients_Params
{
};

// Function ItemInspectEvolutionIngredientsList.ItemInspectEvolutionIngredientsList_C.SetIngredients
struct UItemInspectEvolutionIngredientsList_C_SetIngredients_Params
{
	class UFortItem*                                   Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FFortItemQuantityPair>               InIngredients;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
