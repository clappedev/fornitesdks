#pragma once

// Name: Fortnite, Version: 1.8.2

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class GameplayTags.EditableGameplayTagQueryExpression
// 0x0000 (0x0028 - 0x0028)
class UEditableGameplayTagQueryExpression : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTags.EditableGameplayTagQueryExpression");
		return ptr;
	}

};


// Class GameplayTags.EditableGameplayTagQueryExpression_AnyTagsMatch
// 0x0020 (0x0048 - 0x0028)
class UEditableGameplayTagQueryExpression_AnyTagsMatch : public UEditableGameplayTagQueryExpression
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTags.EditableGameplayTagQueryExpression_AnyTagsMatch");
		return ptr;
	}

};


// Class GameplayTags.EditableGameplayTagQueryExpression_AllTagsMatch
// 0x0020 (0x0048 - 0x0028)
class UEditableGameplayTagQueryExpression_AllTagsMatch : public UEditableGameplayTagQueryExpression
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTags.EditableGameplayTagQueryExpression_AllTagsMatch");
		return ptr;
	}

};


// Class GameplayTags.EditableGameplayTagQueryExpression_NoTagsMatch
// 0x0020 (0x0048 - 0x0028)
class UEditableGameplayTagQueryExpression_NoTagsMatch : public UEditableGameplayTagQueryExpression
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTags.EditableGameplayTagQueryExpression_NoTagsMatch");
		return ptr;
	}

};


// Class GameplayTags.EditableGameplayTagQueryExpression_AnyExprMatch
// 0x0010 (0x0038 - 0x0028)
class UEditableGameplayTagQueryExpression_AnyExprMatch : public UEditableGameplayTagQueryExpression
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTags.EditableGameplayTagQueryExpression_AnyExprMatch");
		return ptr;
	}

};


// Class GameplayTags.EditableGameplayTagQueryExpression_AllExprMatch
// 0x0010 (0x0038 - 0x0028)
class UEditableGameplayTagQueryExpression_AllExprMatch : public UEditableGameplayTagQueryExpression
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTags.EditableGameplayTagQueryExpression_AllExprMatch");
		return ptr;
	}

};


// Class GameplayTags.EditableGameplayTagQueryExpression_NoExprMatch
// 0x0010 (0x0038 - 0x0028)
class UEditableGameplayTagQueryExpression_NoExprMatch : public UEditableGameplayTagQueryExpression
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTags.EditableGameplayTagQueryExpression_NoExprMatch");
		return ptr;
	}

};


// Class GameplayTags.GameplayTagAssetInterface
// 0x0000 (0x0028 - 0x0028)
class UGameplayTagAssetInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTags.GameplayTagAssetInterface");
		return ptr;
	}


	void HasMatchingGameplayTag();
	void HasAnyMatchingGameplayTags(const struct FGameplayTagContainer& TagContainer);
	void HasAllMatchingGameplayTags(const struct FGameplayTagContainer& TagContainer);
	void GetOwnedGameplayTags(struct FGameplayTagContainer* TagContainer);
};


// Class GameplayTags.BlueprintGameplayTagLibrary
// 0x0000 (0x0028 - 0x0028)
class UBlueprintGameplayTagLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTags.BlueprintGameplayTagLibrary");
		return ptr;
	}


	void STATIC_NotEqual_TagTag(const struct FGameplayTag& A, const struct FString& B);
	void STATIC_NotEqual_TagContainerTagContainer(const struct FGameplayTagContainer& A, const struct FString& B);
	void STATIC_NotEqual_GameplayTagContainer(const struct FGameplayTagContainer& A, const struct FGameplayTagContainer& B);
	void STATIC_NotEqual_GameplayTag(const struct FGameplayTag& A, const struct FGameplayTag& B);
	void STATIC_MatchesTag();
	void STATIC_MatchesAnyTags();
	void STATIC_MakeLiteralGameplayTagContainer();
	void STATIC_MakeLiteralGameplayTag();
	void STATIC_MakeGameplayTagQuery();
	void STATIC_MakeGameplayTagContainerFromTag();
	void STATIC_MakeGameplayTagContainerFromArray(TArray<struct FGameplayTag> GameplayTags);
	void STATIC_IsGameplayTagValid(const struct FGameplayTag& GameplayTag);
	void STATIC_HasTag(const struct FGameplayTagContainer& TagContainer);
	void STATIC_HasAnyTags(const struct FGameplayTagContainer& TagContainer);
	void STATIC_HasAllTags(const struct FGameplayTagContainer& TagContainer);
	void STATIC_HasAllMatchingGameplayTags();
	void STATIC_GetTagName(const struct FGameplayTag& GameplayTag);
	void STATIC_GetNumGameplayTagsInContainer(const struct FGameplayTagContainer& TagContainer);
	void STATIC_GetDebugStringFromGameplayTagContainer(const struct FGameplayTagContainer& TagContainer);
	void STATIC_GetDebugStringFromGameplayTag(const struct FGameplayTag& GameplayTag);
	void STATIC_GetAllActorsOfClassMatchingTagQuery();
	void STATIC_EqualEqual_GameplayTagContainer(const struct FGameplayTagContainer& A, const struct FGameplayTagContainer& B);
	void STATIC_EqualEqual_GameplayTag(const struct FGameplayTag& A, const struct FGameplayTag& B);
	void STATIC_DoesTagAssetInterfaceHaveTag();
	void STATIC_DoesContainerMatchTagQuery(const struct FGameplayTagContainer& TagContainer);
	void STATIC_BreakGameplayTagContainer(const struct FGameplayTagContainer& GameplayTagContainer, TArray<struct FGameplayTag>* GameplayTags);
	void STATIC_AppendGameplayTagContainers();
	void STATIC_AddGameplayTagToContainer(struct FGameplayTagContainer* TagContainer);
	void STATIC_AddGameplayTag();
};


// Class GameplayTags.GameplayTagsManager
// 0x0158 (0x0180 - 0x0028)
class UGameplayTagsManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x158];                                     // 0x0028(0x0158) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTags.GameplayTagsManager");
		return ptr;
	}

};


// Class GameplayTags.GameplayTagsList
// 0x0020 (0x0048 - 0x0028)
class UGameplayTagsList : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTags.GameplayTagsList");
		return ptr;
	}

};


// Class GameplayTags.GameplayTagsSettings
// 0x0058 (0x00A0 - 0x0048)
class UGameplayTagsSettings : public UGameplayTagsList
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0048(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTags.GameplayTagsSettings");
		return ptr;
	}

};


// Class GameplayTags.GameplayTagsDeveloperSettings
// 0x0010 (0x0038 - 0x0028)
class UGameplayTagsDeveloperSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTags.GameplayTagsDeveloperSettings");
		return ptr;
	}

};


// Class GameplayTags.EditableGameplayTagQuery
// 0x0070 (0x0098 - 0x0028)
class UEditableGameplayTagQuery : public UObject
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0028(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTags.EditableGameplayTagQuery");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
