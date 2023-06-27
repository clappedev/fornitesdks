#pragma once

// Fortnite (14.30) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class ArgonRuntime.ArgonPlayerComponent
// 0x0018 (0x00C8 - 0x00B0)
class UArgonPlayerComponent : public UFortControllerComponent
{
public:
	float                                              EntireSquadDiedServerTimeForRespawn;                      // 0x00B0(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               bRotatePawnToCamera;                                      // 0x00B4(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00B5(0x0003) MISSED OFFSET
	class AFortAthenaMutator_Argon*                    ArgonMutator;                                             // 0x00B8(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	class UFortMontageItemDefinitionBase*              CachedFinishedRaceEmote;                                  // 0x00C0(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class ArgonRuntime.ArgonPlayerComponent");
		
		return ptr;
	}


	void PlayFinishedRaceEmote();
	void OnRep_RotatePawnToCamera();
	void OnRep_EntireSquadDiedServerTimeForRespawn();
	void OnRep_ArgonMutator();
	void OnRacePhaseChanged(EArgonRacePhase NewRacePhase);
};


// Class ArgonRuntime.ArgonStartingPlatform
// 0x0028 (0x0248 - 0x0220)
class AArgonStartingPlatform : public AActor
{
public:
	struct FGameplayTagContainer                       GameplayTags;                                             // 0x0220(0x0020) (Edit)
	bool                                               bIsEnabled;                                               // 0x0240(0x0001) (Edit, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0241(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class ArgonRuntime.ArgonStartingPlatform");
		
		return ptr;
	}


	void OnRep_IsEnabled();
};


// Class ArgonRuntime.ArgonTicketComponent
// 0x0020 (0x00D0 - 0x00B0)
class UArgonTicketComponent : public UActorComponent
{
public:
	class AFortAthenaMutator_Argon*                    ArgonMutator;                                             // 0x00B0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x00B8(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty ArgonRuntime.ArgonTicketComponent.OnIsNearToPlayerChanged
	unsigned char                                      UnknownData01[0x8];                                       // 0x00C8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class ArgonRuntime.ArgonTicketComponent");
		
		return ptr;
	}


	bool IsNearToPlayer();
};


// Class ArgonRuntime.ArgonTraversePoint
// 0x0010 (0x0930 - 0x0920)
class AArgonTraversePoint : public AAthenaLTMTraversePoint
{
public:
	class AFortPlayerMarkerBase*                       MarkerActor;                                              // 0x0920(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class AFortPlayerMarkerBase*                       MarkerClass;                                              // 0x0928(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class ArgonRuntime.ArgonTraversePoint");
		
		return ptr;
	}


	void OnNewState_Hidden_Server_BP();
	void OnNewState_Active_Server_BP();
	void ClientSpawnMarkerActor(const struct FTransform& Transform);
};


// Class ArgonRuntime.ArgonVehicleSpawner
// 0x0018 (0x0238 - 0x0220)
class AArgonVehicleSpawner : public AActor
{
public:
	TArray<struct FPrimaryAssetId>                     OverrideVehicleAssetIds;                                  // 0x0220(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	ESpawnActorCollisionHandlingMethod                 SpawnVehicleCollisionHandlingMethod;                      // 0x0230(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0231(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class ArgonRuntime.ArgonVehicleSpawner");
		
		return ptr;
	}

};


// Class ArgonRuntime.FortAthenaMutator_Argon
// 0x0EC8 (0x1248 - 0x0380)
class AFortAthenaMutator_Argon : public AFortAthenaMutator_GameModeBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0380(0x0008) MISSED OFFSET
	struct FScalableFloat                              MinInitialVehicleFuelPercent;                             // 0x0388(0x0020) (Edit, DisableEditOnInstance)
	struct FScalableFloat                              MaxInitialVehicleFuelPercent;                             // 0x03A8(0x0020) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x10];                                      // 0x03C8(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty ArgonRuntime.FortAthenaMutator_Argon.OnArgonPlayerFinished
	unsigned char                                      UnknownData02[0x10];                                      // 0x03D8(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty ArgonRuntime.FortAthenaMutator_Argon.OnArgonPlayerReachedEndWithoutEnoughTickets
	unsigned char                                      UnknownData03[0x10];                                      // 0x03E8(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty ArgonRuntime.FortAthenaMutator_Argon.OnArgonRacePhaseChanged
	unsigned char                                      UnknownData04[0x10];                                      // 0x03F8(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty ArgonRuntime.FortAthenaMutator_Argon.OnArgonEndTraversePointSet
	unsigned char                                      UnknownData05[0x10];                                      // 0x0408(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty ArgonRuntime.FortAthenaMutator_Argon.OnTeamTicketCountChanged
	unsigned char                                      UnknownData06[0x18];                                      // 0x0418(0x0018) MISSED OFFSET
	unsigned char                                      UnknownData07[0x10];                                      // 0x0418(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty ArgonRuntime.FortAthenaMutator_Argon.OnSupplyDropClusterSpawned
	unsigned char                                      UnknownData08[0x20];                                      // 0x0440(0x0020) MISSED OFFSET
	TArray<struct FArgonRoute>                         Routes;                                                   // 0x0460(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FFortSquadStartSearchParamData              StartPOISquadStartSearchParam;                            // 0x0470(0x00A0) (Edit, DisableEditOnInstance)
	struct FScalableFloat                              bUseOverridingSpawnTransforms;                            // 0x0510(0x0020) (Edit, DisableEditOnInstance)
	TArray<struct FTransform>                          OverridingSpawnTransforms;                                // 0x0530(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FText                                       TeleportingPlayersText;                                   // 0x0540(0x0018) (Edit, DisableEditOnInstance)
	struct FScalableFloat                              PreCountdownTextDuration;                                 // 0x0558(0x0020) (Edit, DisableEditOnInstance)
	TArray<struct FArgonVehicleOption>                 VehicleOptionsList;                                       // 0x0578(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FScalableFloat                              EndRaceAfterNumFinishers;                                 // 0x0588(0x0020) (Edit, DisableEditOnInstance)
	struct FSlateBrush                                 EndLocationCompassBrush;                                  // 0x05A8(0x0088) (Edit, DisableEditOnInstance)
	struct FSlateBrush                                 EndLocationLockedCompassBrush;                            // 0x0630(0x0088) (Edit, DisableEditOnInstance)
	float                                              EndLocationCompassBrush_YOffset;                          // 0x06B8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EndLocationCompassBrush_MinScale;                         // 0x06BC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EndLocationCompassBrush_MaxScale;                         // 0x06C0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EndLocationCompassBrush_DistanceForMinScale;              // 0x06C4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EndLocationCompassBrush_DistanceForMaxScale;              // 0x06C8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                                       // 0x06CC(0x0004) MISSED OFFSET
	struct FSlateBrush                                 EndLocationMapBrush;                                      // 0x06D0(0x0088) (Edit, DisableEditOnInstance)
	struct FSlateBrush                                 EndLocationLockedMapBrush;                                // 0x0758(0x0088) (Edit, DisableEditOnInstance)
	struct FVector2D                                   EndLocationMapBrushScale;                                 // 0x07E0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTag                                RacePositionStatGameplayTag;                              // 0x07E8(0x0008) (Edit, DisableEditOnInstance)
	class UFortWorldItemDefinition*                    TicketItemDefinition;                                     // 0x07F0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScalableFloat                              NumTicketsNeededToCompleteRace;                           // 0x07F8(0x0020) (Edit, DisableEditOnInstance)
	int                                                NumEnemiesTrackedOnProgressBarUI;                         // 0x0818(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                NumSquadmatesTrackedOnProgressBarUI;                      // 0x081C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScalableFloat                              EntireSquadDeadRespawnViewPitch;                          // 0x0820(0x0020) (Edit, DisableEditOnInstance)
	struct FScalableFloat                              EntireSquadDeadRespawnTime;                               // 0x0840(0x0020) (Edit, DisableEditOnInstance)
	class AActor*                                      EntireSquadDeadRespawnActorClass;                         // 0x0860(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScalableFloat                              RespawnOffsetDistance;                                    // 0x0868(0x0020) (Edit, DisableEditOnInstance)
	struct FScalableFloat                              MinRespawnHeightAboveGround;                              // 0x0888(0x0020) (Edit, DisableEditOnInstance)
	struct FArgonSupplyDropPointData                   SupplyDropPointData;                                      // 0x08A8(0x0228) (Edit, DisableEditOnInstance)
	struct FScalableFloat                              bAreDropsAlwaysTriggeredByFirstPlacePlayer;               // 0x0AD0(0x0020) (Edit, DisableEditOnInstance)
	class UCurveFloat*                                 SupplyDropPercentCurve;                                   // 0x0AF0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScalableFloat                              MaxConsecutiveDropsOnSameSideOfPath;                      // 0x0AF8(0x0020) (Edit, DisableEditOnInstance)
	struct FScalableFloat                              MinPathDropOffset;                                        // 0x0B18(0x0020) (Edit, DisableEditOnInstance)
	struct FScalableFloat                              MaxPathDropOffset;                                        // 0x0B38(0x0020) (Edit, DisableEditOnInstance)
	struct FScalableFloat                              MinDropTriggerSpacing;                                    // 0x0B58(0x0020) (Edit, DisableEditOnInstance)
	struct FScalableFloat                              MaxDropTriggerSpacing;                                    // 0x0B78(0x0020) (Edit, DisableEditOnInstance)
	struct FScalableFloat                              MinDropDistFromRaceEnd;                                   // 0x0B98(0x0020) (Edit, DisableEditOnInstance)
	struct FScalableFloat                              FirstDropTriggerDist;                                     // 0x0BB8(0x0020) (Edit, DisableEditOnInstance)
	struct FScalableFloat                              NumRepopulationsPerRacePathDrop;                          // 0x0BD8(0x0020) (Edit, DisableEditOnInstance)
	struct FScalableFloat                              DelayBeforeRepopulatingRacePathDrops;                     // 0x0BF8(0x0020) (Edit, DisableEditOnInstance)
	struct FScalableFloat                              NumDropsAroundEnd;                                        // 0x0C18(0x0020) (Edit, DisableEditOnInstance)
	struct FScalableFloat                              DelayBetweenEndPointDrops;                                // 0x0C38(0x0020) (Edit, DisableEditOnInstance)
	struct FScalableFloat                              MinEndDropRadius;                                         // 0x0C58(0x0020) (Edit, DisableEditOnInstance)
	struct FScalableFloat                              MaxEndDropRadius;                                         // 0x0C78(0x0020) (Edit, DisableEditOnInstance)
	struct FScalableFloat                              NumRepopulationsPerEndPointDrop;                          // 0x0C98(0x0020) (Edit, DisableEditOnInstance)
	struct FScalableFloat                              DelayBeforeRepopulatingEndPointDrops;                     // 0x0CB8(0x0020) (Edit, DisableEditOnInstance)
	struct FVector                                     StartingPoint;                                            // 0x0CD8(0x000C) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x2C];                                      // 0x0CE4(0x002C) MISSED OFFSET
	class UFortMontageItemDefinitionBase*              StartingLineEmote;                                        // 0x0D10(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScalableFloat                              MaxStartingLineEmoteDelay;                                // 0x0D18(0x0020) (Edit, DisableEditOnInstance)
	struct FScalableFloat                              MinStartingLineEmotePlayRate;                             // 0x0D38(0x0020) (Edit, DisableEditOnInstance)
	struct FScalableFloat                              MaxStartingLineEmotePlayRate;                             // 0x0D58(0x0020) (Edit, DisableEditOnInstance)
	struct FScalableFloat                              bPlayStartingLineEmoteBeforeCountdown;                    // 0x0D78(0x0020) (Edit, DisableEditOnInstance)
	class UFortMontageItemDefinitionBase*              FinishedRaceEmote;                                        // 0x0D98(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScalableFloat                              FinishedRaceEmoteTime;                                    // 0x0DA0(0x0020) (Edit, DisableEditOnInstance)
	class UNiagaraSystem*                              SquadmateVictoryVFXTemplate;                              // 0x0DC0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             FinishedPlayerDespawnVFXTemplate;                         // 0x0DC8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScalableFloat                              MaxFloorCheckDist;                                        // 0x0DD0(0x0020) (Edit, DisableEditOnInstance)
	struct FScalableFloat                              NumNearbyTicketsToShowOnCompass;                          // 0x0DF0(0x0020) (Edit, DisableEditOnInstance)
	struct FScalableFloat                              NumNearbyTicketsToShowInWorld;                            // 0x0E10(0x0020) (Edit, DisableEditOnInstance)
	struct FSlateBrush                                 TicketCompassBrush;                                       // 0x0E30(0x0088) (Edit, DisableEditOnInstance)
	float                                              TicketCompassBrush_YOffset;                               // 0x0EB8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TicketCompassBrush_Scale;                                 // 0x0EBC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScalableFloat                              SortClientTicketComponentsTime;                           // 0x0EC0(0x0020) (Edit, DisableEditOnInstance)
	struct FSlateBrush                                 AcquiredAllTicketsMapBrush;                               // 0x0EE0(0x0088) (Edit, DisableEditOnInstance)
	struct FGameplayTagContainer                       TicketSpecialActorCategories;                             // 0x0F68(0x0020) (Edit, DisableEditOnInstance)
	TMap<struct FName, struct FName>                   AnalyticsAttributeNameToStatNameMap;                      // 0x0F88(0x0050) (Edit, DisableEditOnInstance)
	class UFortGameplayAbility_JumpBoostPack*          JumpBoostPackAbilityClass;                                // 0x0FD8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FArgonRaceStateInfo                         CurrentRaceState;                                         // 0x0FE0(0x0018) (Net)
	unsigned char                                      UnknownData11[0x28];                                      // 0x0FF8(0x0028) MISSED OFFSET
	TArray<class AFortSquadStart*>                     SquadStarts;                                              // 0x1020(0x0010) (ZeroConstructor)
	TArray<struct FArgonPlayerInfo>                    RacingPlayersByPlace;                                     // 0x1030(0x0010) (Net, ZeroConstructor)
	TArray<struct FArgonTeamProgressBarInfo>           LeaderProgressInfos;                                      // 0x1040(0x0010) (Net, ZeroConstructor)
	TArray<struct FArgonTeamTicketCount>               TeamTicketCounts;                                         // 0x1050(0x0010) (Net, ZeroConstructor)
	unsigned char                                      UnknownData12[0x10];                                      // 0x1060(0x0010) MISSED OFFSET
	class AAthenaHoldingArea*                          SquadStartHoldingArea;                                    // 0x1070(0x0008) (ZeroConstructor, IsPlainOldData)
	class AArgonTraversePoint*                         EndTraversePoint;                                         // 0x1078(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	class AFortAthenaMutator_SynchronizedTeleport*     TeleportMutator;                                          // 0x1080(0x0008) (ZeroConstructor, IsPlainOldData)
	class AFortAthenaMutator_GameStartCountdown*       GameStartCountdownMutator;                                // 0x1088(0x0008) (ZeroConstructor, IsPlainOldData)
	class AFortAthenaMutator_RespawnAndSpectateSelect* RespawnAndSpectateSelectMutator;                          // 0x1090(0x0008) (ZeroConstructor, IsPlainOldData)
	TMap<unsigned char, class AActor*>                 EntireSquadDeadRespawnActors;                             // 0x1098(0x0050)
	unsigned char                                      UnknownData13[0x11];                                      // 0x10E8(0x0011) MISSED OFFSET
	unsigned char                                      NumSupplyDropClustersSpawned;                             // 0x10F9(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData14[0x2];                                       // 0x10FA(0x0002) MISSED OFFSET
	float                                              RaceStartTime;                                            // 0x10FC(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	TArray<TWeakObjectPtr<class AFortPlayerPawn>>      FinishedPlayerPawns;                                      // 0x1100(0x0010) (Net, ZeroConstructor)
	unsigned char                                      UnknownData15[0x138];                                     // 0x1110(0x0138) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class ArgonRuntime.FortAthenaMutator_Argon");
		
		return ptr;
	}


	void SortClientTicketComponents();
	void OnRep_TeamTicketCounts();
	void OnRep_RacingPlayersByPlace();
	void OnRep_NumSupplyDropClustersSpawned();
	void OnRep_EndTraversePoint();
	void OnRep_CurrentRaceState();
	void OnEndTraversePointTouched(class AAthenaTraversePoint* PointActor, class AFortPlayerStateAthena* TouchingPlayer);
	bool IsUsingRespawnAndSpectateSelectMutator();
	bool HasTeamFinishedRace(unsigned char Team);
	bool HasPlayerFinishedRace(class AFortPlayerStateAthena* PlayerState);
	void HandlePlayerTeleportComplete(class AFortPlayerStateAthena* PlayerState);
	void HandleGroupTeleportComplete();
	void HandleGameStartCountdownEnd();
	class UFortWorldItemDefinition* GetTicketItemDefinition();
	float GetRandomStartingLineEmotePlayRate();
	float GetRaceTimeElapsed();
	void GetProgressBarUIInfo(float* OutMyPercent, TArray<float>* OutSquadmatePcts, unsigned char* OutNumSquadTickets, TArray<struct FArgonTeamProgressBarInfo>* OutEnemyProgressInfos);
	int GetPlayerTeamPlacement(class AFortPlayerStateAthena* Player);
	int GetNumberOfTicketsTeamHasAcquired(unsigned char Team);
	int GetNumberOfTicketsNeededToFinishRace();
	class AArgonTraversePoint* GetEndTraversePoint();
	bool DidPlayerCrossFinishLine(class AFortPlayerStateAthena* PlayerState);
};


// Class ArgonRuntime.FortCheatManager_Argon
// 0x0000 (0x0038 - 0x0038)
class UFortCheatManager_Argon : public UFortCheatManager_Coupled
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class ArgonRuntime.FortCheatManager_Argon");
		
		return ptr;
	}


	void ArgonTeleportToEndPoint();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
