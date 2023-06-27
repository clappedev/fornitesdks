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

// Function ItemDetailsHeaderRarityTypeText.ItemDetailsHeaderRarityTypeText_C.HandlePostDifferentItemToDetailSet
// (Event, Protected, BlueprintEvent)

void UItemDetailsHeaderRarityTypeText_C::HandlePostDifferentItemToDetailSet()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ItemDetailsHeaderRarityTypeText.ItemDetailsHeaderRarityTypeText_C.HandlePostDifferentItemToDetailSet");

	UItemDetailsHeaderRarityTypeText_C_HandlePostDifferentItemToDetailSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemDetailsHeaderRarityTypeText.ItemDetailsHeaderRarityTypeText_C.HandlePostDifferentItemToCompareWithSet
// (Event, Protected, BlueprintEvent)

void UItemDetailsHeaderRarityTypeText_C::HandlePostDifferentItemToCompareWithSet()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ItemDetailsHeaderRarityTypeText.ItemDetailsHeaderRarityTypeText_C.HandlePostDifferentItemToCompareWithSet");

	UItemDetailsHeaderRarityTypeText_C_HandlePostDifferentItemToCompareWithSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemDetailsHeaderRarityTypeText.ItemDetailsHeaderRarityTypeText_C.ExecuteUbergraph_ItemDetailsHeaderRarityTypeText
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemDetailsHeaderRarityTypeText_C::ExecuteUbergraph_ItemDetailsHeaderRarityTypeText(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ItemDetailsHeaderRarityTypeText.ItemDetailsHeaderRarityTypeText_C.ExecuteUbergraph_ItemDetailsHeaderRarityTypeText");

	UItemDetailsHeaderRarityTypeText_C_ExecuteUbergraph_ItemDetailsHeaderRarityTypeText_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
