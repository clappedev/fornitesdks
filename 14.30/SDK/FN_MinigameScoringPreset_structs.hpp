#pragma once

// Fortnite (14.30) SDK

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
	bool                                               SortScoreboard_6_AFC328DB4172CCE4E5742A9504D0C087;        // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<class UFortMinigameStatFilter*>             ScoreboardStats_7_279A843F4D5A831E0CAFE5AB87E85FB6;       // 0x0008(0x0010) (Edit, BlueprintVisible)
	struct FGameplayTagContainer                       UIExtensions_17_755F8B1C4DB6C595F20783A14B316AEC;         // 0x0018(0x0020) (Edit, BlueprintVisible)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
