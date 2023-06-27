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

// Enum NitrogenUI.ENitrogenFareObjectiveDisplayState
enum class ENitrogenFareObjectiveDisplayState : uint8_t
{
	Default                        = 0,
	Success                        = 1,
	Failure                        = 2,
	ENitrogenFareObjectiveDisplayState_MAX = 3
};


// Enum NitrogenUI.ENitrogenObjectiveWidgetState
enum class ENitrogenObjectiveWidgetState : uint8_t
{
	ENitrogenObjectiveWidgetState_Hidden = 0,
	ENitrogenObjectiveWidgetState_FindFare = 1,
	ENitrogenObjectiveWidgetState_FindTaxi = 2,
	ENitrogenObjectiveWidgetState_MAX = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct NitrogenUI.NitrogenLeaderboardData
// 0x0028
struct FNitrogenLeaderboardData
{
	struct FText                                       TeamName;                                                 // 0x0000(0x0018) (BlueprintVisible, BlueprintReadOnly)
	int                                                TeamScore;                                                // 0x0018(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                TeamPlacement;                                            // 0x001C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bEnemyTeam;                                               // 0x0020(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
