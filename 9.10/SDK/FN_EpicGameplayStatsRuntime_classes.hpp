#pragma once

// Fortnite (9.1) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
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


	bool STATIC_NotEqual_GameplayStatTagGameplayStatTag(struct FGameplayStatTag A, struct FGameplayStatTag B);
	bool STATIC_EqualEqual_GameplayStatTagGameplayStatTag(struct FGameplayStatTag A, struct FGameplayStatTag B);
};


// Class EpicGameplayStatsRuntime.GameplayTagTableManager
// 0x0068 (0x0098 - 0x0030)
class UGameplayTagTableManager : public UDataAsset
{
public:
	TArray<struct FManagedGameplayTagDataTableItem>    Tables;                                                   // 0x0030(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x58];                                      // 0x0040(0x0058) MISSED OFFSET

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
