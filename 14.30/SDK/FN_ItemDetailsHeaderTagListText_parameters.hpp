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

// Function ItemDetailsHeaderTagListText.ItemDetailsHeaderTagListText_C.FormatItemDisplayTags
struct UItemDetailsHeaderTagListText_C_FormatItemDisplayTags_Params
{
	TArray<struct FText>                               TagTexts;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FText                                       FormatedText;                                             // (Parm, OutParm)
};

// Function ItemDetailsHeaderTagListText.ItemDetailsHeaderTagListText_C.HandlePostDifferentItemToDetailSet
struct UItemDetailsHeaderTagListText_C_HandlePostDifferentItemToDetailSet_Params
{
};

// Function ItemDetailsHeaderTagListText.ItemDetailsHeaderTagListText_C.HandlePostDifferentItemToCompareWithSet
struct UItemDetailsHeaderTagListText_C_HandlePostDifferentItemToCompareWithSet_Params
{
};

// Function ItemDetailsHeaderTagListText.ItemDetailsHeaderTagListText_C.ExecuteUbergraph_ItemDetailsHeaderTagListText
struct UItemDetailsHeaderTagListText_C_ExecuteUbergraph_ItemDetailsHeaderTagListText_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
