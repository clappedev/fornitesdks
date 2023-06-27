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

// Class HydrogenRuntime.FortAthenaMutator_Hydrogen
// 0x0478 (0x07F8 - 0x0380)
class AFortAthenaMutator_Hydrogen : public AFortAthenaMutator_GameModeBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0380(0x0008) MISSED OFFSET
	bool                                               bInitialized;                                             // 0x0388(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	bool                                               bWinnerDeclared;                                          // 0x0389(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x038A(0x0006) MISSED OFFSET
	struct FScalableFloat                              VictoryPointImbalanceRespawnTimeMultiplier;               // 0x0390(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              HighVictoryPointImbalanceRespawnTimeMultiplier;           // 0x03B0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              MinRespawnTime;                                           // 0x03D0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FTeamPointsEntry>                    HydrogenTeamPoints;                                       // 0x03F0(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0400(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty HydrogenRuntime.FortAthenaMutator_Hydrogen.OnHydrogenTeamPointsChanged
	unsigned char                                      WinningTeam;                                              // 0x0410(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0411(0x0003) MISSED OFFSET
	int                                                WinningScore;                                             // 0x0414(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class AHydrogenObjectiveActor*>             CapturePointActors;                                       // 0x0418(0x0010) (Net, ZeroConstructor)
	TArray<class AActor*>                              NonCapturePointActorsForPath;                             // 0x0428(0x0010) (ZeroConstructor)
	struct FScalableFloat                              SafeZoneRadius;                                           // 0x0438(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              AircraftOffsetFromRadius;                                 // 0x0458(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              bShouldDropSupplyDropsBetweenCurrentAndNextSafeZones;     // 0x0478(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FScalableFloat                              SupplyDropPercentDistanceToNextPathLocation;              // 0x0498(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FScalableFloat                              SupplyDropPercentSafeZoneRadius;                          // 0x04B8(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	class UMaterialParameterCollection*                MinimapMaterialParameterCollection;                       // 0x04D8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScalableFloat                              MinRespawnHeightAboveGround;                              // 0x04E0(0x0020) (Edit, DisableEditOnInstance)
	struct FText                                       DefaultRespawnLabelText;                                  // 0x0500(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	class UTexture2D*                                  DefaultRespawnTexture;                                    // 0x0518(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                DefaultRespawnDisplayPriority;                            // 0x0520(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0524(0x0004) MISSED OFFSET
	class AActor*                                      DefaultRespawnCameraActorClass;                           // 0x0528(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x10];                                      // 0x0530(0x0010) MISSED OFFSET
	struct FScalableFloat                              HydrogenCapturePointsPathsIndex;                          // 0x0540(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly)
	TArray<struct FHydrogenPathNames>                  HydrogenCapturePointsPaths;                               // 0x0560(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FScalableFloat                              HydrogenCapturePointsPathSpeedToNextNode;                 // 0x0570(0x0020) (Edit, BlueprintVisible)
	float                                              TickHydrogenStormShield_TimeBetweenTicks;                 // 0x0590(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HydrogenCompassIconOverlap;                               // 0x0594(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bStormActive;                                             // 0x0598(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0599(0x0003) MISSED OFFSET
	float                                              SecondsTilStormActivation;                                // 0x059C(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x24];                                      // 0x05A0(0x0024) MISSED OFFSET
	struct FGameplayTag                                ObjectiveAccoladeTag;                                     // 0x05C4(0x0008) (Edit)
	struct FGameplayTag                                EOMBonusAccoladeTag;                                      // 0x05CC(0x0008) (Edit)
	unsigned char                                      UnknownData08[0x4];                                       // 0x05D4(0x0004) MISSED OFFSET
	struct FScalableFloat                              bOnlyCapturePointsInsideSafeZoneCount;                    // 0x05D8(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FScalableFloat                              bAwardVictoryPointsWhenFullyCaptured;                     // 0x05F8(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FScalableFloat                              BonusVictoryPointsAwardedForCapturingPoint;               // 0x0618(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FScalableFloat                              BonusVictoryPointsAwardedForLockedCapturedPoint;          // 0x0638(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly)
	float                                              HydrogenVictoryPointCheckTime;                            // 0x0658(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                                       // 0x065C(0x0004) MISSED OFFSET
	struct FScalableFloat                              HydrogenVictoryPointGoal;                                 // 0x0660(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FScalableFloat                              HydrogenCloseToVictoryPointGoal;                          // 0x0680(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly)
	float                                              HydrogenTotalTimeForOneCapturePoint;                      // 0x06A0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                HydrogenMaxCapturePoints;                                 // 0x06A4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              HydrogenTotalTimeForMaxCapturePoints;                     // 0x06A8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x4];                                       // 0x06AC(0x0004) MISSED OFFSET
	struct FScalableFloat                              HydrogenVictoryPointIncreaseReducedRate;                  // 0x06B0(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FScalableFloat                              HydrogenVictoryPointIncrease;                             // 0x06D0(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FScalableFloat                              HydrogenVictoryPointRateIncreasePerPoint;                 // 0x06F0(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly)
	float                                              HydrogenVictoryPointCheckTimePassed;                      // 0x0710(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0xC];                                       // 0x0714(0x000C) MISSED OFFSET
	class AActor*                                      SafeZoneCameraActor;                                      // 0x0720(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData12[0x4];                                       // 0x0728(0x0004) MISSED OFFSET
	int                                                HydrogenCapturePointsPathsIndexToUse;                     // 0x072C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              StormHeadingYawReplicated;                                // 0x0730(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                PathGameplayTagToUse;                                     // 0x0734(0x0008)
	unsigned char                                      UnknownData13[0x4];                                       // 0x073C(0x0004) MISSED OFFSET
	unsigned char                                      UnknownData14[0x10];                                      // 0x073C(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty HydrogenRuntime.FortAthenaMutator_Hydrogen.OnInitialized
	unsigned char                                      UnknownData15[0x10];                                      // 0x0750(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty HydrogenRuntime.FortAthenaMutator_Hydrogen.OnWinningTeamDeclared
	struct FGameplayTagContainer                       InventoryItemTagsToCount;                                 // 0x0760(0x0020) (Edit, DisableEditOnInstance)
	struct FString                                     MatchEndAnalyticsEventName;                               // 0x0780(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     EarlyExitAnalyticsEventName;                              // 0x0790(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData16[0x58];                                      // 0x07A0(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class HydrogenRuntime.FortAthenaMutator_Hydrogen");
		
		return ptr;
	}


	void UpdateCapturePointsCounted();
	bool TickHydrogenStormShield(float DeltaSeconds);
	void SetupSafeZoneRoute(const struct FVector& StartVector, const struct FVector& EndVector);
	void SetCapturePointFillAmount(class AHydrogenObjectiveActor* InCapturePointActor, unsigned char InPlayerTeam);
	void PositionHydrogenStormShield();
	void OwningTeamChange(class AHydrogenObjectiveActor* Objective, unsigned char NewTeam, unsigned char OldTeam);
	void OnRep_WinningTeam();
	void OnRep_HydrogenTeamPointsChanged();
	void OnGamePhaseStepChanged(const TScriptInterface<class UFortSafeZoneInterface>& SafeZoneInterfaceConst, EAthenaGamePhaseStep GamePhaseStep);
	bool IsInStormShield(const struct FVector& TestLocation);
	void GotoNextStormShieldNode();
	void GiveObjectiveAccolade(class AFortPlayerControllerAthena* FortController);
	void GiveEOMBonusAccolade();
	float GetTimeToNextNode();
	float GetStormSpeed();
	void GetSortedActivePointIndices(TArray<int>* OutSortedIndices);
	int GetOwnedCapturePointCount(int InIndex);
	struct FVector GetNextActorOnPathLocation(int InPathIndex);
	TArray<class AHydrogenObjectiveActor*> GetAllCapturePoints();
	struct FVector GetActorOnPathLocation(int InPathIndex);
	void EndGame(unsigned char Winner);
	void CheckVictoryPoints(float TimePassed);
	bool bHasWinnerBeenDeclared();
	bool bHasStormStarted();
	void AddBonusVictoryPointsForLockedCapturePoints(unsigned char InTeam);
	void ActivateTheStormShield();
};


// Class HydrogenRuntime.HydrogenObjectiveActor
// 0x05A0 (0x0BC8 - 0x0628)
class AHydrogenObjectiveActor : public ABuildingActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0628(0x0008) MISSED OFFSET
	TArray<unsigned char>                              TeamsOnPoint;                                             // 0x0630(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	float                                              CaptureProgress;                                          // 0x0640(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      CapturingTeam;                                            // 0x0644(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      OwningTeam;                                               // 0x0645(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bBeenCaptured;                                            // 0x0646(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0647(0x0001) MISSED OFFSET
	unsigned char                                      UnknownData02[0x10];                                      // 0x0647(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty HydrogenRuntime.HydrogenObjectiveActor.OnContestedChange
	unsigned char                                      UnknownData03[0x10];                                      // 0x0658(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty HydrogenRuntime.HydrogenObjectiveActor.OnTeamsOnPointChange
	unsigned char                                      UnknownData04[0x10];                                      // 0x0668(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty HydrogenRuntime.HydrogenObjectiveActor.OnCapturePointChange
	unsigned char                                      UnknownData05[0x10];                                      // 0x0678(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty HydrogenRuntime.HydrogenObjectiveActor.OnOwningTeamChange
	unsigned char                                      UnknownData06[0x10];                                      // 0x0688(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty HydrogenRuntime.HydrogenObjectiveActor.OnStormIsNear
	unsigned char                                      PreviousOwningTeam;                                       // 0x0698(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EHydrogenCaptureStateEnum                          HydrogenCaptureStateEnum;                                 // 0x0699(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x2];                                       // 0x069A(0x0002) MISSED OFFSET
	int                                                NumberOfPlayersOnPoint;                                   // 0x069C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                NumberOfTeamsOnPoint;                                     // 0x06A0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x06A4(0x0004) MISSED OFFSET
	TArray<struct FTeamPlayerCountEntry>               TeamsOnCapturePoint;                                      // 0x06A8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor)
	struct FScalableFloat                              CaptureProgressAdditionalPlayersMultiplier;               // 0x06B8(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FScalableFloat                              AmountOfGainEveryLoop;                                    // 0x06D8(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FScalableFloat                              CaptureProgressGoal;                                      // 0x06F8(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	int                                                MaxPlayerMultiplier;                                      // 0x0718(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UpdateTime;                                               // 0x071C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x10];                                      // 0x0720(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty HydrogenRuntime.HydrogenObjectiveActor.OnActivePointsChanged
	struct FGameplayTagContainer                       PathGameplayTags;                                         // 0x0730(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FName                                       CaptureCollisionName;                                     // 0x0750(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FText                                       CapturePointLetter;                                       // 0x0758(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FSlateBrush                                 Locked_MapIconBrush;                                      // 0x0770(0x0088) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FVector2D                                   LockedMinimapIconScale;                                   // 0x07F8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FSlateBrush                                 Contested_MapIconBrush;                                   // 0x0800(0x0088) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FVector2D                                   ContestedMinimapIconScale;                                // 0x0888(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ContestedIconLinearColor;                                 // 0x0890(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ContestedLetterTextLinearColor;                           // 0x08A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FSlateBrush                                 EnemyCapturing_MapIconBrush;                              // 0x08B0(0x0088) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FSlateBrush                                 AllyCapturing_MapIconBrush;                               // 0x0938(0x0088) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FSlateBrush                                 EnemyCap_MapIconBrush;                                    // 0x09C0(0x0088) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FSlateBrush                                 AllyCap_MapIconBrush;                                     // 0x0A48(0x0088) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FName                                       FillAmountName;                                           // 0x0AD0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   MiniMapIconScale;                                         // 0x0AD8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              TextScale;                                                // 0x0AE0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   CompassIconScale;                                         // 0x0AE4(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              CompassMaxPawnDistanceForScaling;                         // 0x0AEC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              CompassYOffset;                                           // 0x0AF0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x4];                                       // 0x0AF4(0x0004) MISSED OFFSET
	struct FSlateFontInfo                              LetterFontInfo;                                           // 0x0AF8(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly)
	class UMaterialInstanceDynamic*                    EnemyCapturing_DrawBrushMID;                              // 0x0B48(0x0008) (ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    AllyCapturing_DrawBrushMID;                               // 0x0B50(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsInStormShield;                                         // 0x0B58(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData11[0x17];                                      // 0x0B59(0x0017) MISSED OFFSET
	class UTimelineComponent*                          IconFlashTimeline;                                        // 0x0B70(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCurveFloat*                                 IconFlashCurve;                                           // 0x0B78(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData12[0x10];                                      // 0x0B80(0x0010) MISSED OFFSET
	struct FTimerHandle                                CheckForStormTimerHandle;                                 // 0x0B90(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
	float                                              CheckForStormRate;                                        // 0x0B98(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData13[0x4];                                       // 0x0B9C(0x0004) MISSED OFFSET
	class AFortGameStateAthena*                        CachedGameState;                                          // 0x0BA0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	class AFortAthenaMutator_Hydrogen*                 CachedMutator;                                            // 0x0BA8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bIsActive;                                                // 0x0BB0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData14[0x7];                                       // 0x0BB1(0x0007) MISSED OFFSET
	class UShapeComponent*                             CaptureCollisionComponent;                                // 0x0BB8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData15[0x8];                                       // 0x0BC0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class HydrogenRuntime.HydrogenObjectiveActor");
		
		return ptr;
	}


	void WaitForMutator();
	void SetUpMaterialInstanceDynamic(struct FSlateBrush* MapIconBrush, class UMaterialInstanceDynamic** DrawBrushMID);
	void SetActive(bool bInIsActive);
	void ProcessOverlap(class AActor* OtherActor);
	void PlayContestedMapTimeline();
	void OnTimelineFlashing(float IconOpacity);
	void OnRep_TeamsOnCapturePoint();
	void OnRep_OwningTeam();
	void OnRep_HydrogenCaptureStateEnum();
	void OnRep_bIsActive();
	void OnOverlapBegin(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void OnMutatorAvailable();
	void OnComponentBeginOverlap(class AActor* OverlappedActor, class AActor* OtherActor);
	bool GetIsActive();
	void FlashIcon();
	void CheckForStorm();
};


// Class HydrogenRuntime.HydrogenPathActor
// 0x0028 (0x0248 - 0x0220)
class AHydrogenPathActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0220(0x0008) MISSED OFFSET
	struct FGameplayTagContainer                       PathGameplayTags;                                         // 0x0228(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class HydrogenRuntime.HydrogenPathActor");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
