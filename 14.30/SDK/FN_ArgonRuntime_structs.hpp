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

// Enum ArgonRuntime.EArgonRacePhase
enum class EArgonRacePhase : uint8_t
{
	None                           = 0,
	TeleportingPlayers             = 1,
	PreRaceSequence                = 2,
	RaceActive                     = 3,
	PostRaceSequence               = 4,
	RaceEnded                      = 5,
	MAX                            = 6
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct ArgonRuntime.ArgonRoute
// 0x0040
struct FArgonRoute
{
	struct FGameplayTagContainer                       Tag;                                                      // 0x0000(0x0020) (Edit, DisableEditOnInstance)
	struct FScalableFloat                              Enabled;                                                  // 0x0020(0x0020) (Edit, DisableEditOnInstance)
};

// ScriptStruct ArgonRuntime.ArgonVehicleOption
// 0x0030
struct FArgonVehicleOption
{
	struct FPrimaryAssetId                             VehicleAssetId;                                           // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FScalableFloat                              Enabled;                                                  // 0x0010(0x0020) (Edit, DisableEditOnInstance)
};

// ScriptStruct ArgonRuntime.ArgonSupplyDropPointData
// 0x0228
struct FArgonSupplyDropPointData
{
	struct FScalableFloat                              NumDropPoints;                                            // 0x0000(0x0020) (Edit, DisableEditOnInstance)
	struct FScalableFloat                              NumDropsPerSide;                                          // 0x0020(0x0020) (Edit, DisableEditOnInstance)
	struct FScalableFloat                              SpaceBetweenDrops;                                        // 0x0040(0x0020) (Edit, DisableEditOnInstance)
	struct FScalableFloat                              MaxDistanceFromSpawnPointPerpendicularToRace;             // 0x0060(0x0020) (Edit, DisableEditOnInstance)
	struct FScalableFloat                              MaxDistanceFromSpawnPointParallelToRace;                  // 0x0080(0x0020) (Edit, DisableEditOnInstance)
	struct FScalableFloat                              DistanceFromCenter;                                       // 0x00A0(0x0020) (Edit, DisableEditOnInstance)
	struct FScalableFloat                              MinDropDistanceFromCenter;                                // 0x00C0(0x0020) (Edit, DisableEditOnInstance)
	struct FScalableFloat                              MinPercentDistanceFromEnd;                                // 0x00E0(0x0020) (Edit, DisableEditOnInstance)
	struct FScalableFloat                              MaxPercentDistanceFromEnd;                                // 0x0100(0x0020) (Edit, DisableEditOnInstance)
	struct FScalableFloat                              MinTimeUntilSpawn;                                        // 0x0120(0x0020) (Edit, DisableEditOnInstance)
	struct FScalableFloat                              MaxTimeUntilSpawn;                                        // 0x0140(0x0020) (Edit, DisableEditOnInstance)
	struct FScalableFloat                              MaxRepopulations;                                         // 0x0160(0x0020) (Edit, DisableEditOnInstance)
	struct FScalableFloat                              MinRepopulationTime;                                      // 0x0180(0x0020) (Edit, DisableEditOnInstance)
	struct FScalableFloat                              MaxRepopulationTime;                                      // 0x01A0(0x0020) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x68];                                      // 0x01C0(0x0068) MISSED OFFSET
};

// ScriptStruct ArgonRuntime.ArgonFinishedPlayerInfo
// 0x0060
struct FArgonFinishedPlayerInfo
{
	struct FString                                     PlayerName;                                               // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FUniqueNetIdRepl                            PlayerId;                                                 // 0x0010(0x0028)
	unsigned char                                      Team;                                                     // 0x0038(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	float                                              FinishedTime;                                             // 0x003C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Place;                                                    // 0x0040(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0041(0x0007) MISSED OFFSET
	class UFortHeroType*                               HeroType;                                                 // 0x0048(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class AFortPlayerStateAthena*                      PlayerState;                                              // 0x0050(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bFinishedAsLastTeamLeft;                                  // 0x0058(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0059(0x0007) MISSED OFFSET
};

// ScriptStruct ArgonRuntime.ArgonRaceStateInfo
// 0x0018
struct FArgonRaceStateInfo
{
	EArgonRacePhase                                    CurrentRacePhase;                                         // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<struct FArgonFinishedPlayerInfo>            FinishedTeamLeaderInfos;                                  // 0x0008(0x0010) (ZeroConstructor)
};

// ScriptStruct ArgonRuntime.ArgonPlayerInfo
// 0x0010
struct FArgonPlayerInfo
{
	class AFortPlayerStateAthena*                      PlayerState;                                              // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct ArgonRuntime.ArgonTeamProgressBarInfo
// 0x000C
struct FArgonTeamProgressBarInfo
{
	unsigned char                                      Team;                                                     // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              PercentProgress;                                          // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                NumTicketsAcquired;                                       // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
};

// ScriptStruct ArgonRuntime.ArgonTeamTicketCount
// 0x0010
struct FArgonTeamTicketCount
{
	unsigned char                                      Team;                                                     // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      NumTickets;                                               // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0002(0x0006) MISSED OFFSET
	class AFortPlayerStateAthena*                      RecentTicketPickedUpByPlayer;                             // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ArgonRuntime.ArgonSupplyDropInfo
// 0x0018
struct FArgonSupplyDropInfo
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
