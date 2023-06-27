#pragma once

// Fortnite (1.11) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MiniCraftingIngredientList.MiniCraftingIngredientList_C.AddListEntry
struct UMiniCraftingIngredientList_C_AddListEntry_Params
{
	class UFortItemQuantityListEntryBase**             ListEntry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MiniCraftingIngredientList.MiniCraftingIngredientList_C.ExecuteUbergraph_MiniCraftingIngredientList
struct UMiniCraftingIngredientList_C_ExecuteUbergraph_MiniCraftingIngredientList_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
