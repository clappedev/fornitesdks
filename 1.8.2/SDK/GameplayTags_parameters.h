#pragma once

#include "../SDK.h"

// Name: Fortnite, Version: 1.8.2

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function GameplayTags.GameplayTagAssetInterface.HasMatchingGameplayTag
struct UGameplayTagAssetInterface_HasMatchingGameplayTag_Params
{
};

// Function GameplayTags.GameplayTagAssetInterface.HasAnyMatchingGameplayTags
struct UGameplayTagAssetInterface_HasAnyMatchingGameplayTags_Params
{
	struct FGameplayTagContainer                       TagContainer;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GameplayTags.GameplayTagAssetInterface.HasAllMatchingGameplayTags
struct UGameplayTagAssetInterface_HasAllMatchingGameplayTags_Params
{
	struct FGameplayTagContainer                       TagContainer;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GameplayTags.GameplayTagAssetInterface.GetOwnedGameplayTags
struct UGameplayTagAssetInterface_GetOwnedGameplayTags_Params
{
	struct FGameplayTagContainer                       TagContainer;                                             // (Parm, OutParm)
};

// Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_TagTag
struct UBlueprintGameplayTagLibrary_NotEqual_TagTag_Params
{
	struct FGameplayTag                                A;                                                        // (Parm)
	struct FString                                     B;                                                        // (Parm, ZeroConstructor)
};

// Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_TagContainerTagContainer
struct UBlueprintGameplayTagLibrary_NotEqual_TagContainerTagContainer_Params
{
	struct FGameplayTagContainer                       A;                                                        // (Parm)
	struct FString                                     B;                                                        // (Parm, ZeroConstructor)
};

// Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_GameplayTagContainer
struct UBlueprintGameplayTagLibrary_NotEqual_GameplayTagContainer_Params
{
	struct FGameplayTagContainer                       A;                                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTagContainer                       B;                                                        // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_GameplayTag
struct UBlueprintGameplayTagLibrary_NotEqual_GameplayTag_Params
{
	struct FGameplayTag                                A;                                                        // (Parm)
	struct FGameplayTag                                B;                                                        // (Parm)
};

// Function GameplayTags.BlueprintGameplayTagLibrary.MatchesTag
struct UBlueprintGameplayTagLibrary_MatchesTag_Params
{
};

// Function GameplayTags.BlueprintGameplayTagLibrary.MatchesAnyTags
struct UBlueprintGameplayTagLibrary_MatchesAnyTags_Params
{
};

// Function GameplayTags.BlueprintGameplayTagLibrary.MakeLiteralGameplayTagContainer
struct UBlueprintGameplayTagLibrary_MakeLiteralGameplayTagContainer_Params
{
};

// Function GameplayTags.BlueprintGameplayTagLibrary.MakeLiteralGameplayTag
struct UBlueprintGameplayTagLibrary_MakeLiteralGameplayTag_Params
{
};

// Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagQuery
struct UBlueprintGameplayTagLibrary_MakeGameplayTagQuery_Params
{
};

// Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagContainerFromTag
struct UBlueprintGameplayTagLibrary_MakeGameplayTagContainerFromTag_Params
{
};

// Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagContainerFromArray
struct UBlueprintGameplayTagLibrary_MakeGameplayTagContainerFromArray_Params
{
	TArray<struct FGameplayTag>                        GameplayTags;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function GameplayTags.BlueprintGameplayTagLibrary.IsGameplayTagValid
struct UBlueprintGameplayTagLibrary_IsGameplayTagValid_Params
{
	struct FGameplayTag                                GameplayTag;                                              // (Parm)
};

// Function GameplayTags.BlueprintGameplayTagLibrary.HasTag
struct UBlueprintGameplayTagLibrary_HasTag_Params
{
	struct FGameplayTagContainer                       TagContainer;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GameplayTags.BlueprintGameplayTagLibrary.HasAnyTags
struct UBlueprintGameplayTagLibrary_HasAnyTags_Params
{
	struct FGameplayTagContainer                       TagContainer;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GameplayTags.BlueprintGameplayTagLibrary.HasAllTags
struct UBlueprintGameplayTagLibrary_HasAllTags_Params
{
	struct FGameplayTagContainer                       TagContainer;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GameplayTags.BlueprintGameplayTagLibrary.HasAllMatchingGameplayTags
struct UBlueprintGameplayTagLibrary_HasAllMatchingGameplayTags_Params
{
};

// Function GameplayTags.BlueprintGameplayTagLibrary.GetTagName
struct UBlueprintGameplayTagLibrary_GetTagName_Params
{
	struct FGameplayTag                                GameplayTag;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GameplayTags.BlueprintGameplayTagLibrary.GetNumGameplayTagsInContainer
struct UBlueprintGameplayTagLibrary_GetNumGameplayTagsInContainer_Params
{
	struct FGameplayTagContainer                       TagContainer;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GameplayTags.BlueprintGameplayTagLibrary.GetDebugStringFromGameplayTagContainer
struct UBlueprintGameplayTagLibrary_GetDebugStringFromGameplayTagContainer_Params
{
	struct FGameplayTagContainer                       TagContainer;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GameplayTags.BlueprintGameplayTagLibrary.GetDebugStringFromGameplayTag
struct UBlueprintGameplayTagLibrary_GetDebugStringFromGameplayTag_Params
{
	struct FGameplayTag                                GameplayTag;                                              // (Parm)
};

// Function GameplayTags.BlueprintGameplayTagLibrary.GetAllActorsOfClassMatchingTagQuery
struct UBlueprintGameplayTagLibrary_GetAllActorsOfClassMatchingTagQuery_Params
{
};

// Function GameplayTags.BlueprintGameplayTagLibrary.EqualEqual_GameplayTagContainer
struct UBlueprintGameplayTagLibrary_EqualEqual_GameplayTagContainer_Params
{
	struct FGameplayTagContainer                       A;                                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTagContainer                       B;                                                        // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GameplayTags.BlueprintGameplayTagLibrary.EqualEqual_GameplayTag
struct UBlueprintGameplayTagLibrary_EqualEqual_GameplayTag_Params
{
	struct FGameplayTag                                A;                                                        // (Parm)
	struct FGameplayTag                                B;                                                        // (Parm)
};

// Function GameplayTags.BlueprintGameplayTagLibrary.DoesTagAssetInterfaceHaveTag
struct UBlueprintGameplayTagLibrary_DoesTagAssetInterfaceHaveTag_Params
{
};

// Function GameplayTags.BlueprintGameplayTagLibrary.DoesContainerMatchTagQuery
struct UBlueprintGameplayTagLibrary_DoesContainerMatchTagQuery_Params
{
	struct FGameplayTagContainer                       TagContainer;                                             // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GameplayTags.BlueprintGameplayTagLibrary.BreakGameplayTagContainer
struct UBlueprintGameplayTagLibrary_BreakGameplayTagContainer_Params
{
	struct FGameplayTagContainer                       GameplayTagContainer;                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	TArray<struct FGameplayTag>                        GameplayTags;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function GameplayTags.BlueprintGameplayTagLibrary.AppendGameplayTagContainers
struct UBlueprintGameplayTagLibrary_AppendGameplayTagContainers_Params
{
};

// Function GameplayTags.BlueprintGameplayTagLibrary.AddGameplayTagToContainer
struct UBlueprintGameplayTagLibrary_AddGameplayTagToContainer_Params
{
	struct FGameplayTagContainer                       TagContainer;                                             // (Parm, OutParm, ReferenceParm)
};

// Function GameplayTags.BlueprintGameplayTagLibrary.AddGameplayTag
struct UBlueprintGameplayTagLibrary_AddGameplayTag_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
