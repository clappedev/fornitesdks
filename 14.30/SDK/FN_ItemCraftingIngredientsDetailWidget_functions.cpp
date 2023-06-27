// Fortnite (14.30) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ItemCraftingIngredientsDetailWidget.ItemCraftingIngredientsDetailWidget_C.HandlePostDifferentItemToDetailSet
// (Event, Protected, BlueprintEvent)

void UItemCraftingIngredientsDetailWidget_C::HandlePostDifferentItemToDetailSet()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ItemCraftingIngredientsDetailWidget.ItemCraftingIngredientsDetailWidget_C.HandlePostDifferentItemToDetailSet");

	UItemCraftingIngredientsDetailWidget_C_HandlePostDifferentItemToDetailSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemCraftingIngredientsDetailWidget.ItemCraftingIngredientsDetailWidget_C.HandlePostDifferentItemToCompareWithSet
// (Event, Protected, BlueprintEvent)

void UItemCraftingIngredientsDetailWidget_C::HandlePostDifferentItemToCompareWithSet()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ItemCraftingIngredientsDetailWidget.ItemCraftingIngredientsDetailWidget_C.HandlePostDifferentItemToCompareWithSet");

	UItemCraftingIngredientsDetailWidget_C_HandlePostDifferentItemToCompareWithSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemCraftingIngredientsDetailWidget.ItemCraftingIngredientsDetailWidget_C.ExecuteUbergraph_ItemCraftingIngredientsDetailWidget
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemCraftingIngredientsDetailWidget_C::ExecuteUbergraph_ItemCraftingIngredientsDetailWidget(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ItemCraftingIngredientsDetailWidget.ItemCraftingIngredientsDetailWidget_C.ExecuteUbergraph_ItemCraftingIngredientsDetailWidget");

	UItemCraftingIngredientsDetailWidget_C_ExecuteUbergraph_ItemCraftingIngredientsDetailWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
