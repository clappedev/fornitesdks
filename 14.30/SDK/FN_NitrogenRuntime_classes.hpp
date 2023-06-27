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

// Class NitrogenRuntime.FortAthenaMutator_Nitrogen
// 0x0CE0 (0x1060 - 0x0380)
class AFortAthenaMutator_Nitrogen : public AFortAthenaMutator_GameModeBase
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x0380(0x0088) MISSED OFFSET
	unsigned char                                      UnknownData01[0x10];                                      // 0x0380(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty NitrogenRuntime.FortAthenaMutator_Nitrogen.OnFareEventWidgetAvailable
	struct FGameplayTag                                PlayerSpecialActorTag;                                    // 0x0418(0x0008) (Edit, DisableEditOnInstance)
	struct FGameplayTag                                PassengerSpecialActorTag;                                 // 0x0420(0x0008) (Edit, DisableEditOnInstance)
	struct FGameplayTag                                VehicleSpecialActorTag;                                   // 0x0428(0x0008) (Edit, DisableEditOnInstance)
	TArray<struct FNitrogenPOICombinationMap>          NitrogenPOICombinationList;                               // 0x0430(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FGameplayTagContainer                       MatchStartVehicleCleanupTags;                             // 0x0440(0x0020) (Edit, DisableEditOnInstance)
	struct FScalableFloat                              MatchNearEndScoreRatio;                                   // 0x0460(0x0020) (Edit, DisableEditOnInstance)
	class UNitrogenPlayerComponent*                    NitrogenPlayerComponentClass;                             // 0x0480(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FNitrogenPlayerGameplayAbilityOption> PlayerGameplayAbilityOptionList;                          // 0x0488(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FNitrogenPickupItemToDropOnDeath>    PickupItemsToDropOnDeath;                                 // 0x0498(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FGameplayTagContainer                       VehicleInteractionAbilityTags;                            // 0x04A8(0x0020) (Edit, DisableEditOnInstance)
	struct FGameplayTagContainer                       DisallowedDamageTagsInSameVehicle;                        // 0x04C8(0x0020) (Edit, DisableEditOnInstance)
	struct FScalableFloat                              bAllowRedeployGliders;                                    // 0x04E8(0x0020) (Edit, DisableEditOnInstance)
	struct FScalableFloat                              StormShieldRadiusCalculationMultiplier;                   // 0x0508(0x0020) (Edit, DisableEditOnInstance)
	struct FScalableFloat                              StormShieldRadiusOffset;                                  // 0x0528(0x0020) (Edit, DisableEditOnInstance)
	TMap<struct FGameplayTag, struct FVector>          OverridePOILocationsByTagMap;                             // 0x0548(0x0050) (Edit, DisableEditOnInstance)
	struct FPrimaryAssetId                             NitrogenVehicleAssetId;                                   // 0x0598(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FScalableFloat                              VehicleSpawnZOffset;                                      // 0x05A8(0x0020) (Edit, DisableEditOnInstance)
	class ANavArrow*                                   NavArrowClass;                                            // 0x05C8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScalableFloat                              NumOfExtraVehiclesToMaintain;                             // 0x05D0(0x0020) (Edit, DisableEditOnInstance)
	class UGameplayEffect*                             ExplosionDamageMultiplierGE;                              // 0x05F0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FFortSquadStartSearchParamData              SquadStartSearchParam;                                    // 0x05F8(0x00A0) (Edit, DisableEditOnInstance)
	struct FScalableFloat                              RemoveLoadingScreenFailsafeTimerDuration;                 // 0x0698(0x0020) (Edit, DisableEditOnInstance)
	struct FFortSquadStartSearchParamData              RespawnPointSearchParam;                                  // 0x06B8(0x00A0) (Edit, DisableEditOnInstance)
	struct FScalableFloat                              RespawnPointCooldownDuration;                             // 0x0758(0x0020) (Edit, DisableEditOnInstance)
	struct FVector                                     VehicleOverlapCheckBoxExtent;                             // 0x0778(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0784(0x0004) MISSED OFFSET
	struct FScalableFloat                              MinTeleportHeightAboveGround;                             // 0x0788(0x0020) (Edit, DisableEditOnInstance)
	struct FText                                       TeleportingPlayersText;                                   // 0x07A8(0x0018) (Edit, DisableEditOnInstance)
	class ANitrogenFare*                               NitrogenFareClass;                                        // 0x07C0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ANitrogenTraversePoint*                      PickUpTraversePointClass;                                 // 0x07C8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ANitrogenTraversePoint*                      DropOffTraversePointClass;                                // 0x07D0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScalableFloat                              bAllowSharedDropOffs;                                     // 0x07D8(0x0020) (Edit, DisableEditOnInstance)
	struct FScalableFloat                              MinimumDistanceBetweenPickupPoints;                       // 0x07F8(0x0020) (Edit, DisableEditOnInstance)
	struct FScalableFloat                              bUseFarePortraitTextures;                                 // 0x0818(0x0020) (Edit, DisableEditOnInstance)
	struct FScalableFloat                              NumOfTopTeamsToShowOnMap;                                 // 0x0838(0x0020) (Edit, DisableEditOnInstance)
	TArray<struct FNitrogenMapPlacementIcon>           PlacementBasedMapIcons;                                   // 0x0858(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FNitrogenMapIcon                            PickUpPointMapIcon;                                       // 0x0868(0x00A8) (Edit, DisableEditOnInstance)
	struct FNitrogenMapIcon                            DropOffPointMapIcon;                                      // 0x0910(0x00A8) (Edit, DisableEditOnInstance)
	struct FNitrogenMapIcon                            VehicleMapIcon;                                           // 0x09B8(0x00A8) (Edit, DisableEditOnInstance)
	struct FScalableFloat                              NumOfFaresToShowOnCompass;                                // 0x0A60(0x0020) (Edit, DisableEditOnInstance)
	struct FScalableFloat                              NumOfVehiclesToShowOnCompass;                             // 0x0A80(0x0020) (Edit, DisableEditOnInstance)
	struct FFortAthenaCompassIcon                      FareCompassIcon;                                          // 0x0AA0(0x00A0) (Edit, DisableEditOnInstance)
	struct FFortAthenaCompassIcon                      DropOffPointCompassIcon;                                  // 0x0B40(0x00A0) (Edit, DisableEditOnInstance)
	struct FFortAthenaCompassIcon                      VehicleCompassIcon;                                       // 0x0BE0(0x00A0) (Edit, DisableEditOnInstance)
	class AActor*                                      DropOffWidgetActorClass;                                  // 0x0C80(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      NearbyVehicleWidgetActorClass;                            // 0x0C88(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FFortSquadStartSearchParamData              PickupCashbagSearchParam;                                 // 0x0C90(0x00A0) (Edit, DisableEditOnInstance)
	struct FScalableFloat                              CashbagSelectedPercentage;                                // 0x0D30(0x0020) (Edit, DisableEditOnInstance)
	TMap<struct FGameplayTag, struct FNitrogenPickupCashbagData> CashbagDataMap;                                           // 0x0D50(0x0050) (Edit, DisableEditOnInstance)
	struct FScalableFloat                              PassengerDespawnDelay;                                    // 0x0DA0(0x0020) (Edit, DisableEditOnInstance)
	struct FScalableFloat                              PlayerSpecialActorRepInterval;                            // 0x0DC0(0x0020) (Edit, DisableEditOnInstance)
	struct FGameplayTag                                NitrogenVehicleTag;                                       // 0x0DE0(0x0008) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0DE8(0x0004) MISSED OFFSET
	ENitrogenGamePhase                                 NitrogenGamePhase;                                        // 0x0DEC(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x13];                                      // 0x0DED(0x0013) MISSED OFFSET
	TArray<struct FNitrogenTeamData>                   SortedTeamDataByScore;                                    // 0x0E00(0x0010) (Net, ZeroConstructor)
	TArray<class AFortPlayerStateAthena*>              CacheLeadingReplicatedPlayerStates;                       // 0x0E10(0x0010) (ZeroConstructor)
	class UObject*                                     NitrogenVehicleClass;                                     // 0x0E20(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FNitrogenVehicle>                    NitrogenVehiclesList;                                     // 0x0E28(0x0010) (Net, ZeroConstructor)
	TArray<class AFortSquadStart*>                     NitrogenSquadStarts;                                      // 0x0E38(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData05[0x28];                                      // 0x0E48(0x0028) MISSED OFFSET
	class AFortAthenaMutator_SynchronizedTeleport*     TeleportMutator;                                          // 0x0E70(0x0008) (ZeroConstructor, IsPlainOldData)
	class AFortAthenaMutator_GameStartCountdown*       GameStartCountdownMutator;                                // 0x0E78(0x0008) (ZeroConstructor, IsPlainOldData)
	class AFortAthenaMutator_InventoryOverride*        InventoryMutator;                                         // 0x0E80(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x98];                                      // 0x0E88(0x0098) MISSED OFFSET
	TMap<struct FGameplayTag, struct FNitrogenPOITraversePoints> UnassignedPickupPointsPerPOIMap;                          // 0x0F20(0x0050)
	TMap<struct FGameplayTag, struct FNitrogenPOITraversePoints> UnassignedPOIBasedDropoffPointsMap;                       // 0x0F70(0x0050)
	TArray<class ANitrogenTraversePoint*>              UnassignedDistanceBasedDropoffPointsArray;                // 0x0FC0(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData07[0x10];                                      // 0x0FD0(0x0010) MISSED OFFSET
	class ANavArrow*                                   ClientNavArrow;                                           // 0x0FE0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x18];                                      // 0x0FE8(0x0018) MISSED OFFSET
	TArray<class ANitrogenFare*>                       CurrentFares;                                             // 0x1000(0x0010) (Net, ZeroConstructor)
	TArray<class ANitrogenFare*>                       CurrentActiveFares;                                       // 0x1010(0x0010) (Net, ZeroConstructor)
	unsigned char                                      UnknownData09[0x40];                                      // 0x1020(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class NitrogenRuntime.FortAthenaMutator_Nitrogen");
		
		return ptr;
	}


	void OnRep_SortedTeamDataByScore();
	void OnRep_NitrogenGamePhase();
	void OnRep_CurrentFares();
	void OnNitrogenVehiclePlayerExit(class AFortPlayerControllerAthena* PlayerController, class AFortAthenaVehicle* Vehicle);
	void OnNitrogenVehicleDriverChanged(class AFortPlayerControllerAthena* NewController, class AFortAthenaVehicle* Vehicle);
	void OnNitrogenVehicleDestroyed(class AActor* VehicleDestroyed);
	void HandlePlayerTeleportComplete(class AFortPlayerStateAthena* PlayerState);
	void HandleGroupTeleportComplete();
	void HandleGameStartCountdownEnd();
};


// Class NitrogenRuntime.FortCheatManager_Nitrogen
// 0x0000 (0x0038 - 0x0038)
class UFortCheatManager_Nitrogen : public UFortCheatManager_Coupled
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class NitrogenRuntime.FortCheatManager_Nitrogen");
		
		return ptr;
	}


	void TeleportToSquadStartAtIndex(int Index, const struct FFortSquadStartSearchParamData& SearchParam, struct FString* TeleportReasonString);
	void TeleportToNitrogenSpawnActor(int Index);
	void TeleportToNitrogenRespawnActor(int Index);
	void SpawnNitrogenFare(float PickUpDistance, float DropOffDistance);
	void SetNitrogenScore(int Score, unsigned char ScoreReason);
	void SetNitrogenNavDestinationToCurrentLocation();
	void CompleteNitrogenFare();
};


// Class NitrogenRuntime.NitrogenFare
// 0x0910 (0x0B30 - 0x0220)
class ANitrogenFare : public AActor
{
public:
	class AFortPlayerPawnAthena*                       Passenger;                                                // 0x0220(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	class ANitrogenTraversePoint*                      PickUpPoint;                                              // 0x0228(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	class ANitrogenTraversePoint*                      DropOffPoint;                                             // 0x0230(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	struct FVector                                     DropOffPointLocation;                                     // 0x0238(0x000C) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0244(0x0004) MISSED OFFSET
	struct FNitrogenBonusStats                         BonusStats;                                               // 0x0248(0x0738) (Edit, DisableEditOnInstance)
	struct FScalableFloat                              FastDeliveryKmph;                                         // 0x0980(0x0020) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x30];                                      // 0x09A0(0x0030) MISSED OFFSET
	class UFortAthenaAISpawnerData*                    PassengerSpawnerDataClass;                                // 0x09D0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UNitrogenPassengerPawnComponent*             NitrogenPassengerPawnComponentClass;                      // 0x09D8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                PassengerSeatIndex;                                       // 0x09E0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x09E4(0x0004) MISSED OFFSET
	struct FScalableFloat                              PassengerSpawnRetryRate;                                  // 0x09E8(0x0020) (Edit, DisableEditOnInstance)
	int                                                RewardValue;                                              // 0x0A08(0x0004) (Edit, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FastDeliveryTime;                                         // 0x0A0C(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	int                                                FastDeliveryBonusPoints;                                  // 0x0A10(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0A14(0x0004) MISSED OFFSET
	struct FScalableFloat                              FastDeliveryMargin;                                       // 0x0A18(0x0020) (Edit, DisableEditOnInstance)
	int                                                DistanceThresholdIndex;                                   // 0x0A38(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0A3C(0x0004) MISSED OFFSET
	struct FScalableFloat                              PickupTime;                                               // 0x0A40(0x0020) (Edit, DisableEditOnInstance)
	struct FScalableFloat                              DropoffTime;                                              // 0x0A60(0x0020) (Edit, DisableEditOnInstance)
	EFareGenerationMethod                              FareGenerationMethod;                                     // 0x0A80(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0A81(0x0007) MISSED OFFSET
	struct FScalableFloat                              bDisablePassengerCollision;                               // 0x0A88(0x0020) (Edit, DisableEditOnInstance)
	class AFortPlayerStateAthena*                      AssignedPlayerState;                                      // 0x0AA8(0x0008) (ZeroConstructor, IsPlainOldData)
	class AFortPlayerStateAthena*                      PreviousPlayerState;                                      // 0x0AB0(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bPassengerPickedUp;                                       // 0x0AB8(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x1F];                                      // 0x0AB9(0x001F) MISSED OFFSET
	TMap<class AFortPlayerStateAthena*, struct FTimerHandle> PickupTimerHandles;                                       // 0x0AD8(0x0050)
	struct FTimerHandle                                DropOffTimerHandle;                                       // 0x0B28(0x0008)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class NitrogenRuntime.NitrogenFare");
		
		return ptr;
	}


	void PickUpPointOverlapped(class AAthenaTraversePoint* TraversePoint, class AFortPlayerStateAthena* PlayerState);
	void PickUpPointExited(class AAthenaTraversePoint* TraversePoint, class AFortPlayerStateAthena* PlayerState);
	void OnVehicleEndPlay(class AActor* DestroyedVehicle, TEnumAsByte<EEndPlayReason> EndPlayReason);
	void OnVehicleDriverChanged(class AFortPlayerControllerAthena* NewDriver, class AFortAthenaVehicle* Vehicle);
	void OnVehicleDestroyed(class AFortDagwoodVehicle* DestroyedVehicle);
	void OnRep_PassengerPickedUp();
	int GetRewardValue();
	void DropOffPointOverlapped(class AAthenaTraversePoint* TraversePoint, class AFortPlayerStateAthena* PlayerState);
	void DropOffPointExited(class AAthenaTraversePoint* TraversePoint, class AFortPlayerStateAthena* PlayerState);
};


// Class NitrogenRuntime.NitrogenFareValueIndicator
// 0x0028 (0x0248 - 0x0220)
class ANitrogenFareValueIndicator : public AActor
{
public:
	class UInstancedStaticMeshComponent*               InstancedMeshComp;                                        // 0x0220(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	TArray<struct FNitrogenFareValueMeshTransformInfo> FareValueMeshTransformInfo;                               // 0x0228(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      IndicatorValue;                                           // 0x0238(0x0001) (Edit, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bShouldActorRotateOnTickToFacePlayerCamera;               // 0x0239(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x023A(0x0006) MISSED OFFSET
	class APlayerCameraManager*                        LocalPlayerCameraManager;                                 // 0x0240(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class NitrogenRuntime.NitrogenFareValueIndicator");
		
		return ptr;
	}


	void OnRep_IndicatorValue();
	void OnFareIndicatorValueChanged(unsigned char NewIndicatorValue);
};


// Class NitrogenRuntime.NitrogenNavArrow
// 0x0338 (0x0560 - 0x0228)
class ANitrogenNavArrow : public ANavArrow
{
public:
	struct FVector                                     LocationRelativeToOwner;                                  // 0x0228(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bFollowCamera;                                            // 0x0234(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0235(0x0003) MISSED OFFSET
	struct FVector                                     LocationRelativeToCamera;                                 // 0x0238(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0244(0x0004) MISSED OFFSET
	struct FScalableFloat                              PitchRelativeToCamera;                                    // 0x0248(0x0020) (Edit, DisableEditOnInstance)
	struct FScalableFloat                              ArrowSizeRelativeToScreen;                                // 0x0268(0x0020) (Edit, DisableEditOnInstance)
	struct FScalableFloat                              ArrowPlacementHeightRelativeToScreen;                     // 0x0288(0x0020) (Edit, DisableEditOnInstance)
	struct FVector                                     LocationRelativeToDestination;                            // 0x02A8(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bThrowingEnabled;                                         // 0x02B4(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x02B5(0x0003) MISSED OFFSET
	struct FScalableFloat                              ApproachRadius;                                           // 0x02B8(0x0020) (Edit, DisableEditOnInstance)
	struct FScalableFloat                              DepartRadius;                                             // 0x02D8(0x0020) (Edit, DisableEditOnInstance)
	class UCurveFloat*                                 ThrowTranslationCurve;                                    // 0x02F8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 ThrowRotationCurve;                                       // 0x0300(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       PrimaryColorParameterName;                                // 0x0308(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveLinearColor*                           ArrowColorCurve;                                          // 0x0310(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ColorFadeOuterRadius;                                     // 0x0318(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ColorFadeInnerRadius;                                     // 0x031C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       PulseParameterName;                                       // 0x0320(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 PulseParameterCurve;                                      // 0x0328(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 PulseSpeedCurve;                                          // 0x0330(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PulseAccelOuterRadius;                                    // 0x0338(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PulseAccelInnerRadius;                                    // 0x033C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 ScaleCurve;                                               // 0x0340(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UStaticMeshComponent*                        ArrowComponent;                                           // 0x0348(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData03[0x208];                                     // 0x0350(0x0208) MISSED OFFSET
	class UMaterialInstanceDynamic*                    ArrowDynamicMaterial;                                     // 0x0558(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class NitrogenRuntime.NitrogenNavArrow");
		
		return ptr;
	}


	void UpdatePulseSpeedForDistance();
	void UpdatePrimaryColorForDistance();
	void ThrowArrowToDestination();
	void RecallArrowToOwner();
};


// Class NitrogenRuntime.NitrogenPassengerPawnComponent
// 0x00E8 (0x0198 - 0x00B0)
class UNitrogenPassengerPawnComponent : public UFortPawnComponent
{
public:
	TMap<ENitrogenPassengerState, class UAnimationAsset*> MalePassengerStateAnimationMap;                           // 0x00B0(0x0050) (Edit, DisableEditOnInstance)
	TMap<ENitrogenPassengerState, class UAnimationAsset*> FemalePassengerStateAnimationMap;                         // 0x0100(0x0050) (Edit, DisableEditOnInstance)
	struct FScalableFloat                              bDestroyFareValueIndicatorOnDisable;                      // 0x0150(0x0020) (Edit, DisableEditOnInstance)
	class ANitrogenFareValueIndicator*                 FareValueIndicatorClass;                                  // 0x0170(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     FareValueIndicatorOffset;                                 // 0x0178(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0184(0x0004) MISSED OFFSET
	class ANitrogenFareValueIndicator*                 FareValueIndicator;                                       // 0x0188(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	ENitrogenPassengerState                            PassengerState;                                           // 0x0190(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0191(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class NitrogenRuntime.NitrogenPassengerPawnComponent");
		
		return ptr;
	}


	void OnRep_PassengerState();
	void OnRep_FareValueIndicator();
	void ClientPlayDeathEffects();
	void ClientHandleFinishedCharacterCustomization(class AFortPlayerPawn* PlayerPawn);
};


// Class NitrogenRuntime.NitrogenPickup
// 0x0018 (0x0630 - 0x0618)
class ANitrogenPickup : public AFortGameModePickup
{
public:
	ENitrogenScoreReason                               ScoreReason;                                              // 0x0618(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0619(0x0007) MISSED OFFSET
	class USphereComponent*                            AutoPickupTouchComponent;                                 // 0x0620(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	ENitrogenPickupType                                NitrogenPickupType;                                       // 0x0628(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAutoAllowInteraction;                                    // 0x0629(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      TeamHidden;                                               // 0x062A(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x062B(0x0005) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class NitrogenRuntime.NitrogenPickup");
		
		return ptr;
	}


	void OnRep_TeamHidden();
	void OnNitrogenPickupOverlapped(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
};


// Class NitrogenRuntime.NitrogenFareDataRepActor
// 0x0028 (0x0248 - 0x0220)
class ANitrogenFareDataRepActor : public AActor
{
public:
	struct FNitrogenFareRepData                        FareRepData;                                              // 0x0220(0x0018) (Net)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0238(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class NitrogenRuntime.NitrogenFareDataRepActor");
		
		return ptr;
	}


	void OnRep_FareRepData();
};


// Class NitrogenRuntime.NitrogenPlayerComponent
// 0x0250 (0x0300 - 0x00B0)
class UNitrogenPlayerComponent : public UFortControllerComponent
{
public:
	class AActor*                                      CurrentFareWidgetActor;                                   // 0x00B0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x00B8(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty NitrogenRuntime.NitrogenPlayerComponent.OnClientBeginFare
	unsigned char                                      UnknownData01[0x10];                                      // 0x00C8(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty NitrogenRuntime.NitrogenPlayerComponent.OnClientEndFare
	unsigned char                                      UnknownData02[0x40];                                      // 0x00D8(0x0040) MISSED OFFSET
	TWeakObjectPtr<class AFortAthenaMutator_Nitrogen>  CachedMutator;                                            // 0x0118(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	struct FScalableFloat                              NearbyVehicleUpdateRate;                                  // 0x0120(0x0020) (Edit, DisableEditOnInstance)
	struct FScalableFloat                              MinimumVehicleAirTimeBeforeStatTracking;                  // 0x0140(0x0020) (Edit, DisableEditOnInstance)
	class USoundMix*                                   LoadingScreenSoundSuppressionSoundMix;                    // 0x0160(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScalableFloat                              bAllowHighlightNearbyLeadingPlayers;                      // 0x0168(0x0020) (Edit, DisableEditOnInstance)
	struct FScalableFloat                              bHighlightLeadingPlayers_UseStencilHighlight;             // 0x0188(0x0020) (Edit, DisableEditOnInstance)
	struct FScalableFloat                              HighlightLeadingPlayers_UpdateRate;                       // 0x01A8(0x0020) (Edit, DisableEditOnInstance)
	struct FScalableFloat                              HighlightLeadingPlayers_MinTeamScore;                     // 0x01C8(0x0020) (Edit, DisableEditOnInstance)
	struct FScalableFloat                              HighlightLeadingPlayers_MaxDistance;                      // 0x01E8(0x0020) (Edit, DisableEditOnInstance)
	struct FScalableFloat                              HighlightLeadingPlayers_HighlightDuration;                // 0x0208(0x0020) (Edit, DisableEditOnInstance)
	struct FScalableFloat                              bHighlightLeadingPlayers_IndicatorClampToScreen;          // 0x0228(0x0020) (Edit, DisableEditOnInstance)
	struct FScalableFloat                              HighlightLeadingPlayers_IndicatorZOffset;                 // 0x0248(0x0020) (Edit, DisableEditOnInstance)
	EIndicatorStateImage                               OverrideIndicatorImage;                                   // 0x0268(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0269(0x0003) MISSED OFFSET
	struct FName                                       HighlightLeadingPlayers_StencilName;                      // 0x026C(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0xC];                                       // 0x0274(0x000C) MISSED OFFSET
	TArray<class AFortPlayerPawnAthena*>               CurrentlyHighlightedLeadingPlayers;                       // 0x0280(0x0010) (ZeroConstructor)
	struct FNitrogenFareInteractionData                FareInteractionData;                                      // 0x0290(0x0018) (Net)
	unsigned char                                      UnknownData05[0x8];                                       // 0x02A8(0x0008) MISSED OFFSET
	TArray<class ABuildingActor*>                      DestroyedBuildingActors;                                  // 0x02B0(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData06[0x10];                                      // 0x02C0(0x0010) MISSED OFFSET
	class AActor*                                      NearestVehicleWidget;                                     // 0x02D0(0x0008) (ZeroConstructor, IsPlainOldData)
	class AFortSquadStart*                             CurrentRespawnSquadStart;                                 // 0x02D8(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x10];                                      // 0x02E0(0x0010) MISSED OFFSET
	class ANitrogenFare*                               PreviousFare;                                             // 0x02F0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class ANitrogenFareDataRepActor*                   FareDataRepActor;                                         // 0x02F8(0x0008) (Net, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class NitrogenRuntime.NitrogenPlayerComponent");
		
		return ptr;
	}


	void OnRep_FareInteractionData();
	void OnRep_FareDataRepActor();
	void OnRep_CachedMutator();
	void OnNitrogenGamePhaseChanged(ENitrogenGamePhase NewGamePhase);
	void OnGameStarted();
	void OnExitVehicle();
	void OnEnterVehiclePassenger();
	void OnEnterVehicleDriver();
	void HandleVehicleDestroyedBuildingActor(class AFortAthenaVehicle* Vehicle, class ABuildingActor* BuildingActor);
	float GetDistanceFromDropOff();
	float GetDistanceFromClosestPassenger();
	void ClientHandleLoadingScreenStateChanged(class AFortPlayerControllerAthena* PlayerController, bool bEnableLoadScreen, const struct FText& HUDReasonText);
};


// Class NitrogenRuntime.NitrogenTraversePoint
// 0x0050 (0x0970 - 0x0920)
class ANitrogenTraversePoint : public AAthenaLTMTraversePoint
{
public:
	ENitrogenTraversePointMode                         CurrentNitrogenTraversePointMode;                         // 0x0920(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0921(0x0007) MISSED OFFSET
	class USceneComponent*                             SceneRoot;                                                // 0x0928(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    FareRadiusParticleSystemComponent;                        // 0x0930(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UCapsuleComponent*                           TriggerCapsule;                                           // 0x0938(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              HideActorDelay;                                           // 0x0940(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2C];                                      // 0x0944(0x002C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class NitrogenRuntime.NitrogenTraversePoint");
		
		return ptr;
	}


	void OnEndOverlap(class AActor* OverlappedActor, class AActor* OtherActor);
	void OnClientVisibiltyUpdated(bool bNewHidden);
	void OnClientInteracted(bool bOwnedByClient);
};


// Class NitrogenRuntime.NitrogenVehicleComponent
// 0x01A0 (0x0250 - 0x00B0)
class UNitrogenVehicleComponent : public UActorComponent
{
public:
	class UTimelineComponent*                          TimelineBoostFX;                                          // 0x00B0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCurveFloat*                                 JetFlamesHeightCurve;                                     // 0x00B8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 JetSparksCountsCurve;                                     // 0x00C0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TimelineBoostFXLength;                                    // 0x00C8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00CC(0x0004) MISSED OFFSET
	class UNiagaraSystem*                              BoostVFXSystem;                                           // 0x00D0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       BoostAttachSocketName;                                    // 0x00D8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    BoostAttachRotation;                                      // 0x00E0(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00EC(0x0004) MISSED OFFSET
	struct FNitrogenVehicleBoostFXVariable             JetFlameRandomMin;                                        // 0x00F0(0x0018) (Edit, DisableEditOnInstance)
	struct FNitrogenVehicleBoostFXVariable             JetFlameLocationOffsetZ;                                  // 0x0108(0x0018) (Edit, DisableEditOnInstance)
	struct FNitrogenVehicleBoostFXVariable             JetFlameLocationOffsetX;                                  // 0x0120(0x0018) (Edit, DisableEditOnInstance)
	struct FString                                     JetFlameHeightParamName;                                  // 0x0138(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	float                                              JetFlameMinHeight;                                        // 0x0148(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              JetFlameMaxHeight;                                        // 0x014C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FString                                     JetSparksCountsParamName;                                 // 0x0150(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UNiagaraComponent*                           SpawnedBoostParticleSystem;                               // 0x0160(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FScalableFloat                              MinimumBumpBonusStatVelocityKmh;                          // 0x0168(0x0020) (Edit, DisableEditOnInstance)
	float                                              CooldownBetweenBumps;                                     // 0x0188(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x018C(0x0004) MISSED OFFSET
	struct FScalableFloat                              bCleanupUnreachableVehicleInWater;                        // 0x0190(0x0020) (Edit, DisableEditOnInstance)
	float                                              VehicleWaterDepthCheckTickDelay;                          // 0x01B0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x01B4(0x0004) MISSED OFFSET
	struct FScalableFloat                              VehicleWaterDepthForCleanup;                              // 0x01B8(0x0020) (Edit, DisableEditOnInstance)
	struct FScalableFloat                              bCleanupUnreachableVehiclesSilently;                      // 0x01D8(0x0020) (Edit, DisableEditOnInstance)
	struct FScalableFloat                              VehicleInWaterCleanupDelay;                               // 0x01F8(0x0020) (Edit, DisableEditOnInstance)
	class AFortAthenaVehicle*                          OwningVehicle;                                            // 0x0218(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x8];                                       // 0x0220(0x0008) MISSED OFFSET
	TArray<class AFortWaterBodyActor*>                 WaterBodies;                                              // 0x0228(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData05[0x18];                                      // 0x0238(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class NitrogenRuntime.NitrogenVehicleComponent");
		
		return ptr;
	}


	void TimelineBoostFXUpdate_JetSparksCounts(float Value);
	void TimelineBoostFXUpdate_JetFlamesHeight(float Value);
	void SetBoostFXActive(bool bActive);
	bool IsVehicleUnderCleanupWaterDepth();
	void HandleVehicleOnHit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
