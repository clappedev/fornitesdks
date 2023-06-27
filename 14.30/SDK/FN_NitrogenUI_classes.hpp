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

// Class NitrogenUI.NitrogenWidgetBase
// 0x0018 (0x0330 - 0x0318)
class UNitrogenWidgetBase : public ULTMWidgetBase
{
public:
	class AFortPlayerStateAthena*                      CurrentViewedPlayerState;                                 // 0x0318(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0320(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class NitrogenUI.NitrogenWidgetBase");
		
		return ptr;
	}


	void OnExitVehicle();
	void OnEnterVehicleDriver();
	void HandleNitrogenGamePhaseChanged(ENitrogenGamePhase NewGamePhase);
	void BP_BindToMutator(class AFortAthenaMutator_Nitrogen* Mutator);
};


// Class NitrogenUI.NitrogenFareBonusWidget
// 0x0090 (0x03C0 - 0x0330)
class UNitrogenFareBonusWidget : public UNitrogenWidgetBase
{
public:
	class UImage*                                      Image_BonusIcon;                                          // 0x0330(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FScalableFloat                              bEnableReminders;                                         // 0x0338(0x0020) (Edit, DisableEditOnInstance)
	struct FScalableFloat                              bLoopReminders;                                           // 0x0358(0x0020) (Edit, DisableEditOnInstance)
	struct FScalableFloat                              InitialReminderDelay;                                     // 0x0378(0x0020) (Edit, DisableEditOnInstance)
	struct FScalableFloat                              ReminderFrequency;                                        // 0x0398(0x0020) (Edit, DisableEditOnInstance)
	struct FTimerHandle                                ShowWidgetTimerHandle;                                    // 0x03B8(0x0008) (BlueprintVisible)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class NitrogenUI.NitrogenFareBonusWidget");
		
		return ptr;
	}


	void ShowBonus();
	void OnEndFare(bool bFareCompleted);
	void OnBeginFare();
	void OnActiveBonusUpdated(float Value, bool ShouldAwardBonus, struct FNitrogenBonusStat* BonusStat);
	void HideBonus();
};


// Class NitrogenUI.NitrogenFareInteractionWidget
// 0x0008 (0x0338 - 0x0330)
class UNitrogenFareInteractionWidget : public UNitrogenWidgetBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0330(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class NitrogenUI.NitrogenFareInteractionWidget");
		
		return ptr;
	}


	void UpdateTimerDisplay(bool bCanceled);
	void OnEndInteraction();
	void OnBeginInteraction(const struct FNitrogenFareInteractionData& FareInteractionData);
};


// Class NitrogenUI.NitrogenFareMeterWidget
// 0x0090 (0x03C0 - 0x0330)
class UNitrogenFareMeterWidget : public UNitrogenWidgetBase
{
public:
	class UCommonTextBlock*                            DeliveryTimeObjectiveText;                                // 0x0330(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCommonTextBlock*                            BonusObjectiveText;                                       // 0x0338(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FText                                       FastDeliveryTimeLeftText;                                 // 0x0340(0x0018) (Edit, DisableEditOnInstance)
	class UImage*                                      FarePortrait;                                             // 0x0358(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCommonTextBlock*                            FareNameTextBlock;                                        // 0x0360(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ANitrogenFare*                               CurrentFare;                                              // 0x0368(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bThresholdAwardCondition;                                 // 0x0370(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bFareBonusObjectiveComplete;                              // 0x0371(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0372(0x0002) MISSED OFFSET
	struct FName                                       PortraitMaterialParameterName;                            // 0x0374(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       BorderPercentMaterialParameterName;                       // 0x037C(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0384(0x0004) MISSED OFFSET
	class AFortPlayerState*                            PassengerPlayerState;                                     // 0x0388(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x30];                                      // 0x0390(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class NitrogenUI.NitrogenFareMeterWidget");
		
		return ptr;
	}


	void SetCurrentFareTimedDeliveryObjectiveState(ENitrogenFareObjectiveDisplayState DisplayState, bool bPlayAnimation);
	void SetCurrentFareBonusObjectiveState(ENitrogenFareObjectiveDisplayState DisplayState, bool bPlayAnimation);
	void SetCurrentFareBaseRewardValue(int Num);
	void OnFareBonusFinshed(bool BonusCompleted);
	void OnEndFare(bool bFareCompleted);
	void OnBeginInteraction(const struct FNitrogenFareInteractionData& FareInteractionData);
	void OnBeginFare();
	void OnActiveBonusUpdated(float Value, bool bShouldAwardBonus, struct FNitrogenBonusStat* BonusStat);
	void FastDeliveryTimeUpdate(float RemainingTimeRatio);
	void BonusProgressUpdate(float BonusProgressRatio);
};


// Class NitrogenUI.NitrogenLeaderboardWidget
// 0x0020 (0x0350 - 0x0330)
class UNitrogenLeaderboardWidget : public UNitrogenWidgetBase
{
public:
	int                                                MinimumScoreToDisplayTeam;                                // 0x0330(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseGenericEnemyTeamName;                                 // 0x0334(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0335(0x0003) MISSED OFFSET
	struct FText                                       GenericEnemyTeamNameDescription;                          // 0x0338(0x0018) (Edit, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class NitrogenUI.NitrogenLeaderboardWidget");
		
		return ptr;
	}


	void UpdateLeaderboardUI(TArray<struct FNitrogenLeaderboardData> LeaderboardInfo, int GoalScore);
};


// Class NitrogenUI.NitrogenMatchNearEndWidget
// 0x0040 (0x0370 - 0x0330)
class UNitrogenMatchNearEndWidget : public UNitrogenWidgetBase
{
public:
	class UCommonTextBlock*                            PointsFromWinningText;                                    // 0x0330(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FText                                       EnemyTeamWinningDescription;                              // 0x0338(0x0018) (Edit, DisableEditOnInstance)
	struct FText                                       PlayerTeamWinningDescription;                             // 0x0350(0x0018) (Edit, DisableEditOnInstance)
	bool                                               bMatchNearEnd;                                            // 0x0368(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0369(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class NitrogenUI.NitrogenMatchNearEndWidget");
		
		return ptr;
	}


	void OnMatchNearEnd();
	void HandleTopScoreUpdated();
};


// Class NitrogenUI.NitrogenObjectiveWidget
// 0x0008 (0x0338 - 0x0330)
class UNitrogenObjectiveWidget : public UNitrogenWidgetBase
{
public:
	ENitrogenObjectiveWidgetState                      ObjectiveWidgetState;                                     // 0x0330(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0331(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class NitrogenUI.NitrogenObjectiveWidget");
		
		return ptr;
	}


	void UpdateWidgetState(ENitrogenObjectiveWidgetState NewObjectiveWidgetState);
	void SetShouldBeHidden(bool bInShouldBeHidden);
	void OnEndFare(bool bFareCompleted);
	void OnBeginFare();
	void HandleVehicleExited();
	void HandleVehicleEntered(class AFortAthenaVehicle* NewVehicle);
};


// Class NitrogenUI.NitrogenPlacementWidget
// 0x0010 (0x0340 - 0x0330)
class UNitrogenPlacementWidget : public UNitrogenWidgetBase
{
public:
	float                                              UpdateTimerTickDuration;                                  // 0x0330(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0334(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class NitrogenUI.NitrogenPlacementWidget");
		
		return ptr;
	}


	void OnPlayerScoringUpdate(int CurrentPlayerTeamScore, int CurrentPlayerTeamPlacement, int GoalScore, TArray<unsigned char> SortedTeamScores);
	void OnPlayerScoreChanged(int NewScore);
	void OnPlayerPlacementChanged(int NewPlacement, int OldPlacement);
	void OnPlayerFareComplete(int StarsGained);
	void OnEndFare(bool bFareCompleted);
	void HandleScoreChanged(int Score);
};


// Class NitrogenUI.NitrogenScoreEventWidget
// 0x0020 (0x0350 - 0x0330)
class UNitrogenScoreEventWidget : public UNitrogenWidgetBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0330(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty NitrogenUI.NitrogenScoreEventWidget.OnNitrogenScoreEventDisplayed
	unsigned char                                      UnknownData01[0x10];                                      // 0x0340(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty NitrogenUI.NitrogenScoreEventWidget.OnNitrogenScoreEventHidden

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class NitrogenUI.NitrogenScoreEventWidget");
		
		return ptr;
	}


	void DisplayScoreEvent(ENitrogenScoreReason ScoreReason);
	void DisplayLeadChangedEvent(bool bInLead);
};


// Class NitrogenUI.NitrogenSpeedyBonusTimerWidget
// 0x0018 (0x0348 - 0x0330)
class UNitrogenSpeedyBonusTimerWidget : public UNitrogenWidgetBase
{
public:
	class ANitrogenFare*                               CurrentFare;                                              // 0x0330(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SecondsRemaining;                                         // 0x0338(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x033C(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class NitrogenUI.NitrogenSpeedyBonusTimerWidget");
		
		return ptr;
	}


	void OnSpeedyDeliveryTimeUpdate(float TimePrecentage, float TotalObjectiveTime);
	void OnSpeedyDeliveryFailed(bool bPlayAnimation);
	void OnSpeedyDeliveryCompleted();
	void OnEndFare(bool bFareCompleted);
	void OnBeginFare();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
