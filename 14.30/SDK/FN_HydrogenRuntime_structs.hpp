#pragma once

// Fortnite (14.30) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum HydrogenRuntime.EHydrogenCaptureStateEnum
enum class EHydrogenCaptureStateEnum : uint8_t
{
	Contested                      = 0,
	Capturing                      = 1,
	Erasing                        = 2,
	Idle                           = 3,
	Captured                       = 4,
	EHydrogenCaptureStateEnum_MAX  = 5
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct HydrogenRuntime.TeamPointsEntry
// 0x0014
struct FTeamPointsEntry
{
	unsigned char                                      Team;                                                     // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                CapturePointsTotal;                                       // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                CapturePointsCounted;                                     // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VictoryPoints;                                            // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCloseToVictoryPointGoal;                                 // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
};

// ScriptStruct HydrogenRuntime.HydrogenPathNames
// 0x0038
struct FHydrogenPathNames
{
	struct FScalableFloat                              bPathEnabled;                                             // 0x0000(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FGameplayTag                                PathGameplayTag;                                          // 0x0020(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly)
	TArray<struct FName>                               PathNames;                                                // 0x0028(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct HydrogenRuntime.TeamPlayerCountEntry
// 0x0008
struct FTeamPlayerCountEntry
{
	unsigned char                                      Team;                                                     // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                PlayerCount;                                              // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct HydrogenRuntime.HydrogenCompassIcon
// 0x0070
struct FHydrogenCompassIcon
{
	unsigned char                                      UnknownData00[0x70];                                      // 0x0000(0x0070) MISSED OFFSET
};

// ScriptStruct HydrogenRuntime.VictoryPointIncreasesEntry
// 0x0008
struct FVictoryPointIncreasesEntry
{
	int                                                CapturePoints;                                            // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VictoryPointIncrease;                                     // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
