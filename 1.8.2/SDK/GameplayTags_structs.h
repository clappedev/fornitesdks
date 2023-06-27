#pragma once

// Name: Fortnite, Version: 1.8.2

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum GameplayTags.EGameplayTagQueryExprType
enum class EGameplayTagQueryExprType : uint8_t
{

};


// Enum GameplayTags.EGameplayContainerMatchType
enum class EGameplayContainerMatchType : uint8_t
{

};


// Enum GameplayTags.EGameplayTagMatchType
enum class EGameplayTagMatchType : uint8_t
{

};


// Enum GameplayTags.EGameplayTagSourceType
enum class EGameplayTagSourceType : uint8_t
{

};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct GameplayTags.GameplayTag
// 0x0008
struct FGameplayTag
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct GameplayTags.GameplayTagContainer
// 0x0020
struct FGameplayTagContainer
{
	TArray<struct FGameplayTag>                        GameplayTags;                                             // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0010(0x0010) MISSED OFFSET
};

// ScriptStruct GameplayTags.GameplayTagQuery
// 0x0048
struct FGameplayTagQuery
{
	unsigned char                                      UnknownData00[0x48];                                      // 0x0000(0x0048) MISSED OFFSET
};

// ScriptStruct GameplayTags.GameplayTagCreationWidgetHelper
// 0x0001
struct FGameplayTagCreationWidgetHelper
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct GameplayTags.GameplayTagReferenceHelper
// 0x0040
struct FGameplayTagReferenceHelper
{
	unsigned char                                      UnknownData00[0x40];                                      // 0x0000(0x0040) MISSED OFFSET
};

// ScriptStruct GameplayTags.GameplayTagNode
// 0x0050
struct FGameplayTagNode
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

// ScriptStruct GameplayTags.GameplayTagSource
// 0x0018
struct FGameplayTagSource
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct GameplayTags.GameplayTagTableRow
// 0x0018 (0x0020 - 0x0008)
struct FGameplayTagTableRow : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0008(0x0018) MISSED OFFSET
};

// ScriptStruct GameplayTags.GameplayTagCategoryRemap
// 0x0020
struct FGameplayTagCategoryRemap
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct GameplayTags.GameplayTagRedirect
// 0x0010
struct FGameplayTagRedirect
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
