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

// Function ItemDetailsHeaderTagListText.ItemDetailsHeaderTagListText_C.FormatItemDisplayTags
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FText>           TagTexts                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FText                   FormatedText                   (Parm, OutParm)

void UItemDetailsHeaderTagListText_C::FormatItemDisplayTags(TArray<struct FText>* TagTexts, struct FText* FormatedText)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ItemDetailsHeaderTagListText.ItemDetailsHeaderTagListText_C.FormatItemDisplayTags");

	UItemDetailsHeaderTagListText_C_FormatItemDisplayTags_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TagTexts != nullptr)
		*TagTexts = params.TagTexts;
	if (FormatedText != nullptr)
		*FormatedText = params.FormatedText;
}


// Function ItemDetailsHeaderTagListText.ItemDetailsHeaderTagListText_C.HandlePostDifferentItemToDetailSet
// (Event, Protected, BlueprintEvent)

void UItemDetailsHeaderTagListText_C::HandlePostDifferentItemToDetailSet()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ItemDetailsHeaderTagListText.ItemDetailsHeaderTagListText_C.HandlePostDifferentItemToDetailSet");

	UItemDetailsHeaderTagListText_C_HandlePostDifferentItemToDetailSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemDetailsHeaderTagListText.ItemDetailsHeaderTagListText_C.HandlePostDifferentItemToCompareWithSet
// (Event, Protected, BlueprintEvent)

void UItemDetailsHeaderTagListText_C::HandlePostDifferentItemToCompareWithSet()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ItemDetailsHeaderTagListText.ItemDetailsHeaderTagListText_C.HandlePostDifferentItemToCompareWithSet");

	UItemDetailsHeaderTagListText_C_HandlePostDifferentItemToCompareWithSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemDetailsHeaderTagListText.ItemDetailsHeaderTagListText_C.ExecuteUbergraph_ItemDetailsHeaderTagListText
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemDetailsHeaderTagListText_C::ExecuteUbergraph_ItemDetailsHeaderTagListText(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ItemDetailsHeaderTagListText.ItemDetailsHeaderTagListText_C.ExecuteUbergraph_ItemDetailsHeaderTagListText");

	UItemDetailsHeaderTagListText_C_ExecuteUbergraph_ItemDetailsHeaderTagListText_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
