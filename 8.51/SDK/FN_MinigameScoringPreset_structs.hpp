#pragma once

// Fortnite (8.51) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct MinigameScoringPreset.MinigameScoringPreset
// 0x0038
struct FMinigameScoringPreset
{
	bool                                               SortScoreboard;                                           // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<class UClass*>                              ScoreboardStats;                                          // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FGameplayTagContainer                       UIExtensions;                                             // 0x0018(0x0020) (Edit, BlueprintVisible)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
