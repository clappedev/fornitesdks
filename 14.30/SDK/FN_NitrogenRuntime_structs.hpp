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

// Enum NitrogenRuntime.ENitrogenGamePhase
enum class ENitrogenGamePhase : uint8_t
{
	None                           = 0,
	TeleportingPlayers             = 1,
	Active                         = 2,
	Finish                         = 3,
	MAX                            = 4
};


// Enum NitrogenRuntime.ENitrogenScoreReason
enum class ENitrogenScoreReason : uint8_t
{
	None                           = 0,
	WorldPickup                    = 1,
	EnemyDeathPickup               = 2,
	FareReward_Base                = 3,
	FareReward_Bonus_FastDelivery  = 4,
	FareReward_Bonus_Bulldozer     = 5,
	FareReward_Bonus_StuntDriving  = 6,
	FareReward_Bonus_SafeDriver    = 7,
	FareReward_Bonus_BumperCars    = 8,
	FareReward_Bonus_OffRoad       = 9,
	FareReward_Bonus_SpeedDemon    = 10,
	ENitrogenScoreReason_MAX       = 11
};


// Enum NitrogenRuntime.EFareGenerationMethod
enum class EFareGenerationMethod : uint8_t
{
	Distance                       = 0,
	POI                            = 1,
	MAX                            = 2
};


// Enum NitrogenRuntime.ENitrogenBonusCondition
enum class ENitrogenBonusCondition : uint8_t
{
	MustMeetGoal                   = 0,
	MustNotExceedThreshold         = 1,
	ENitrogenBonusCondition_MAX    = 2
};


// Enum NitrogenRuntime.ENitrogenPassengerState
enum class ENitrogenPassengerState : uint8_t
{
	None                           = 0,
	HailingCab                     = 1,
	VehicleSeated                  = 2,
	DroppedOff                     = 3,
	ENitrogenPassengerState_MAX    = 4
};


// Enum NitrogenRuntime.ENitrogenPickupType
enum class ENitrogenPickupType : uint8_t
{
	None                           = 0,
	Cashbag                        = 1,
	MAX                            = 2
};


// Enum NitrogenRuntime.ENitrogenTraversePointMode
enum class ENitrogenTraversePointMode : uint8_t
{
	Pickup                         = 0,
	DropOff                        = 1,
	ENitrogenTraversePointMode_MAX = 2
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct NitrogenRuntime.NitrogenPOIConnectionData
// 0x0068
struct FNitrogenPOIConnectionData
{
	struct FGameplayTag                                POITag;                                                   // 0x0000(0x0008) (Edit, DisableEditOnInstance)
	struct FScalableFloat                              FareValue;                                                // 0x0008(0x0020) (Edit, DisableEditOnInstance)
	struct FScalableFloat                              bEnabled;                                                 // 0x0028(0x0020) (Edit, DisableEditOnInstance)
	struct FScalableFloat                              MaxFares;                                                 // 0x0048(0x0020) (Edit, DisableEditOnInstance)
};

// ScriptStruct NitrogenRuntime.NitrogenFareDistanceValue
// 0x0060
struct FNitrogenFareDistanceValue
{
	struct FScalableFloat                              FareValue;                                                // 0x0000(0x0020) (Edit, DisableEditOnInstance)
	struct FScalableFloat                              MinimumDistance;                                          // 0x0020(0x0020) (Edit, DisableEditOnInstance)
	struct FScalableFloat                              NumFares;                                                 // 0x0040(0x0020) (Edit, DisableEditOnInstance)
};

// ScriptStruct NitrogenRuntime.NitrogenPOICombinationData
// 0x0020
struct FNitrogenPOICombinationData
{
	TArray<struct FNitrogenPOIConnectionData>          POIConnections;                                           // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FNitrogenFareDistanceValue>          FareDistanceValues;                                       // 0x0010(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct NitrogenRuntime.NitrogenPOICombinationMap
// 0x0078
struct FNitrogenPOICombinationMap
{
	struct FScalableFloat                              bEnabled;                                                 // 0x0000(0x0020) (Edit, DisableEditOnInstance)
	TMap<struct FGameplayTag, struct FNitrogenPOICombinationData> POICombinationMap;                                        // 0x0020(0x0050) (Edit, DisableEditOnInstance)
	EFareGenerationMethod                              FareGenerationMethod;                                     // 0x0070(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0071(0x0007) MISSED OFFSET
};

// ScriptStruct NitrogenRuntime.NitrogenPlayerGameplayAbilityOption
// 0x0028
struct FNitrogenPlayerGameplayAbilityOption
{
	class UFortGameplayAbility*                        GameplayAbility;                                          // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScalableFloat                              bEnabled;                                                 // 0x0008(0x0020) (Edit, DisableEditOnInstance)
};

// ScriptStruct NitrogenRuntime.NitrogenPickupItemToDropOnDeath
// 0x00C0
struct FNitrogenPickupItemToDropOnDeath
{
	struct FScalableFloat                              bEnabled;                                                 // 0x0000(0x0020) (Edit, DisableEditOnInstance)
	class UFortWorldItemDefinition*                    PickupItemDef;                                            // 0x0020(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ANitrogenPickup*                             PickupClass;                                              // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScalableFloat                              TimeBeforeDespawn;                                        // 0x0030(0x0020) (Edit, DisableEditOnInstance)
	struct FScalableFloat                              bHidePickupForDyingPlayerTeam;                            // 0x0050(0x0020) (Edit, DisableEditOnInstance)
	TArray<struct FScalableFloat>                      PlacementBasedPickupDropCount;                            // 0x0070(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FScalableFloat                              TossDistance;                                             // 0x0080(0x0020) (Edit, DisableEditOnInstance)
	struct FScalableFloat                              MinTeamScoreRequiredToDrop;                               // 0x00A0(0x0020) (Edit, DisableEditOnInstance)
};

// ScriptStruct NitrogenRuntime.NitrogenMapIcon
// 0x00A8
struct FNitrogenMapIcon
{
	struct FSlateBrush                                 MapIcon;                                                  // 0x0000(0x0088) (Edit, DisableEditOnInstance)
	struct FScalableFloat                              MapIconScale;                                             // 0x0088(0x0020) (Edit, DisableEditOnInstance)
};

// ScriptStruct NitrogenRuntime.NitrogenMapPlacementIcon
// 0x0170
struct FNitrogenMapPlacementIcon
{
	struct FNitrogenMapIcon                            PlacementMapIcon;                                         // 0x0000(0x00A8) (Edit, DisableEditOnInstance)
	struct FNitrogenMapIcon                            SquadmatePlacementMapIcon;                                // 0x00A8(0x00A8) (Edit, DisableEditOnInstance)
	struct FScalableFloat                              MinimumTeamScoreToShow;                                   // 0x0150(0x0020) (Edit, DisableEditOnInstance)
};

// ScriptStruct NitrogenRuntime.NitrogenPickupCashbagData
// 0x0078
struct FNitrogenPickupCashbagData
{
	EFortRarity                                        ItemRarity;                                               // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FScalableFloat                              SelectionWeight;                                          // 0x0008(0x0020) (Edit, DisableEditOnInstance)
	struct FScalableFloat                              MinValue;                                                 // 0x0028(0x0020) (Edit, DisableEditOnInstance)
	struct FScalableFloat                              MaxValue;                                                 // 0x0048(0x0020) (Edit, DisableEditOnInstance)
	class ANitrogenPickup*                             PickupClass;                                              // 0x0068(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UFortWorldItemDefinition*                    PickupItemDef;                                            // 0x0070(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct NitrogenRuntime.NitrogenTeamData
// 0x0098
struct FNitrogenTeamData
{
	uint32_t                                           UpdateId;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	ENitrogenScoreReason                               ScoreReason;                                              // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	class APlayerState*                                ScoringPlayer;                                            // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      TeamId;                                                   // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	int                                                TeamPlacement;                                            // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TeamScore;                                                // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	class AFortTeamInfoAthena*                         TeamInfoAthena;                                           // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TMap<ENitrogenScoreReason, int>                    ReasonToScoreMap;                                         // 0x0028(0x0050) (RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<class AFortPlayerStateAthena*>              TeamPlayerStates;                                         // 0x0078(0x0010) (ZeroConstructor, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<struct FString>                             TeamPlayerAccountIds;                                     // 0x0088(0x0010) (ZeroConstructor, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
};

// ScriptStruct NitrogenRuntime.NitrogenVehicle
// 0x0010
struct FNitrogenVehicle
{
	class AFortAthenaVehicle*                          Vehicle;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              PlayerlessStartServerTime;                                // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct NitrogenRuntime.NitrogenPOITraversePoints
// 0x0010
struct FNitrogenPOITraversePoints
{
	TArray<class ANitrogenTraversePoint*>              TraversePoints;                                           // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct NitrogenRuntime.NitrogenBonusStat
// 0x0130
struct FNitrogenBonusStat
{
	struct FScalableFloat                              bEnabled;                                                 // 0x0000(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	int                                                AwardPoints;                                              // 0x0020(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	ENitrogenBonusCondition                            AwardCondition;                                           // 0x0024(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	ENitrogenScoreReason                               ScoreReason;                                              // 0x0025(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0026(0x0002) MISSED OFFSET
	struct FText                                       Name;                                                     // 0x0028(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FText                                       Description;                                              // 0x0040(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FText                                       MustMeetGoal_BonusCompleteDescription;                    // 0x0058(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FText                                       MustNotExceedThreshold_BonusFailureDescription;           // 0x0070(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	class UFortAthenaAISpawnerDataComponent_CosmeticLoadout* CosmeticLoadoutData;                                      // 0x0088(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTexture2D*                                  TipEmojiTexture;                                          // 0x0090(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTexture2D*                                  FarePortraitTexture;                                      // 0x0098(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScalableFloat                              Goal;                                                     // 0x00A0(0x0020) (Edit, DisableEditOnInstance)
	struct FScalableFloat                              Threshold;                                                // 0x00C0(0x0020) (Edit, DisableEditOnInstance)
	TMap<class AFortPlayerState*, float>               Values;                                                   // 0x00E0(0x0050)
};

// ScriptStruct NitrogenRuntime.NitrogenBonusStats
// 0x0738
struct FNitrogenBonusStats
{
	struct FNitrogenBonusStat                          VehicleBumpIntoVehicles;                                  // 0x0000(0x0130) (Edit, DisableEditOnInstance)
	struct FNitrogenBonusStat                          VehicleBuildingDestruction;                               // 0x0130(0x0130) (Edit, DisableEditOnInstance)
	struct FNitrogenBonusStat                          VehicleDamageTaken;                                       // 0x0260(0x0130) (Edit, DisableEditOnInstance)
	struct FNitrogenBonusStat                          VehicleAirTime;                                           // 0x0390(0x0130) (Edit, DisableEditOnInstance)
	struct FNitrogenBonusStat                          VehicleBoostDrivingTime;                                  // 0x04C0(0x0130) (Edit, DisableEditOnInstance)
	struct FNitrogenBonusStat                          VehicleOffRoadTime;                                       // 0x05F0(0x0130) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0720(0x0018) MISSED OFFSET
};

// ScriptStruct NitrogenRuntime.NitrogenFareValueMeshTransformInfo
// 0x0010
struct FNitrogenFareValueMeshTransformInfo
{
	TArray<struct FTransform>                          MeshTransforms;                                           // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct NitrogenRuntime.NitrogenFareRepData
// 0x0018
struct FNitrogenFareRepData
{
	class ANitrogenFare*                               CurrentFare;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                AwardedPoints;                                            // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              StartTime;                                                // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CurrentBonusIndex;                                        // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CurrentBonusValue;                                        // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct NitrogenRuntime.NitrogenFareInteractionData
// 0x0018
struct FNitrogenFareInteractionData
{
	class ANitrogenFare*                               Fare;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              StartTime;                                                // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TotalTime;                                                // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CurrentBonusIndex;                                        // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsDropoff;                                               // 0x0014(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
};

// ScriptStruct NitrogenRuntime.NitrogenVehicleBoostFXVariable
// 0x0018
struct FNitrogenVehicleBoostFXVariable
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	float                                              Value;                                                    // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct NitrogenRuntime.NitrogenRespawnData
// 0x0010
struct FNitrogenRespawnData
{
	class AFortSquadStart*                             RespawnSquadStart;                                        // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct NitrogenRuntime.NitrogenSpawnData
// 0x0018
struct FNitrogenSpawnData
{
	unsigned char                                      SquadId;                                                  // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FVector                                     AdditionalViewpointLocation;                              // 0x0004(0x000C) (ZeroConstructor, IsPlainOldData)
	class AFortSquadStart*                             SpawnSquadStart;                                          // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
