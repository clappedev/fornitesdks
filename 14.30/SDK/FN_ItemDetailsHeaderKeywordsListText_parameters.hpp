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

// Function ItemDetailsHeaderKeywordsListText.ItemDetailsHeaderKeywordsListText_C.FormatItemDisplayTags
struct UItemDetailsHeaderKeywordsListText_C_FormatItemDisplayTags_Params
{
	TArray<struct FText>                               TagTexts;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FText                                       FormatedText;                                             // (Parm, OutParm)
};

// Function ItemDetailsHeaderKeywordsListText.ItemDetailsHeaderKeywordsListText_C.HandlePostDifferentItemToDetailSet
struct UItemDetailsHeaderKeywordsListText_C_HandlePostDifferentItemToDetailSet_Params
{
};

// Function ItemDetailsHeaderKeywordsListText.ItemDetailsHeaderKeywordsListText_C.HandlePostDifferentItemToCompareWithSet
struct UItemDetailsHeaderKeywordsListText_C_HandlePostDifferentItemToCompareWithSet_Params
{
};

// Function ItemDetailsHeaderKeywordsListText.ItemDetailsHeaderKeywordsListText_C.ExecuteUbergraph_ItemDetailsHeaderKeywordsListText
struct UItemDetailsHeaderKeywordsListText_C_ExecuteUbergraph_ItemDetailsHeaderKeywordsListText_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
