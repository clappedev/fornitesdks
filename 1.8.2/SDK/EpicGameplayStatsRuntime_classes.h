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

// Class EpicGameplayStatsRuntime.BlueprintGameplayStatsLibrary
// 0x0000 (0x0028 - 0x0028)
class UBlueprintGameplayStatsLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EpicGameplayStatsRuntime.BlueprintGameplayStatsLibrary");
		return ptr;
	}


	void STATIC_NotEqual_GameplayStatTagGameplayStatTag(const struct FGameplayStatTag& A, const struct FGameplayStatTag& B);
	void STATIC_EqualEqual_GameplayStatTagGameplayStatTag(const struct FGameplayStatTag& A, const struct FGameplayStatTag& B);
};


// Class EpicGameplayStatsRuntime.GameplayTagTableManager
// 0x0068 (0x0090 - 0x0028)
class UGameplayTagTableManager : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0028(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EpicGameplayStatsRuntime.GameplayTagTableManager");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
