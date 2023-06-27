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

// BlueprintGeneratedClass MinigameSettingsMachine.MinigameSettingsMachine_C
// 0x017C (0x049C - 0x0320)
class AMinigameSettingsMachine_C : public AFortMinigameSettingsBuilding
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0320(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UToyOptionsComponent_C*                      ToyOptionsComponent;                                      // 0x0328(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                GameModeIndex;                                            // 0x0330(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TimeLimit;                                                // 0x0334(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	EFortMinigamePlayerSpawnLocationSetting            SpawnLocationSetting;                                     // 0x0338(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0339(0x0003) MISSED OFFSET
	int                                                NumTeams;                                                 // 0x033C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EFortMinigamePostGameSpawnLocationSetting          PostGameSpawnLocationSetting;                             // 0x0340(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0341(0x0003) MISSED OFFSET
	int                                                PlayerLives;                                              // 0x0344(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                AutoEndTeamThreshold;                                     // 0x0348(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                TeamToMoveToWhenOutOfSpawns;                              // 0x034C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                NumKillsForEndCondition;                                  // 0x0350(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                AutoStartDelay;                                           // 0x0354(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                NumCollectItemsForEndCondition;                           // 0x0358(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x035C(0x0004) MISSED OFFSET
	TArray<struct FMinigameScoringPreset>              ScoringPresets;                                           // 0x0360(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UFortMinigameStatFilter*>             TrackedStats;                                             // 0x0370(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                NumAIKillsForEndCondition;                                // 0x0380(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ScoreForEndCondition;                                     // 0x0384(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                TotalRounds;                                              // 0x0388(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	int                                                NumObjectDestroysForWin;                                  // 0x038C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WinnerDisplayTime;                                        // 0x0390(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ScoreDisplayTime;                                         // 0x0394(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                TrackedScoreStat0;                                        // 0x0398(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                TrackedScoreStat1;                                        // 0x039C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                TrackedScoreStat2;                                        // 0x03A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                TrackedScoreStat3;                                        // 0x03A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                TrackedScoreStat4;                                        // 0x03A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x03AC(0x0004) MISSED OFFSET
	TArray<int>                                        TrackedScoreStats;                                        // 0x03B0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FGameplayTagContainer>               AvailableUIExtensions;                                    // 0x03C0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       CommonUIExtensions;                                       // 0x03D0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                UIExtensionSetting;                                       // 0x03F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x03F4(0x0004) MISSED OFFSET
	class UPlaylistUserOptionIntEnum*                  TrackedScoreStat0_Definition;                             // 0x03F8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UPlaylistUserOptionIntEnum*                  TrackedScoreStat1_Definition;                             // 0x0400(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UPlaylistUserOptionIntEnum*                  TrackedScoreStat2_Definition;                             // 0x0408(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UPlaylistUserOptionIntEnum*                  TrackedScoreStat3_Definition;                             // 0x0410(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UPlaylistUserOptionIntEnum*                  TrackedScoreStat4_Definition;                             // 0x0418(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UPlaylistUserOptionIntEnum*                  UIExtensionSetting_Definition;                            // 0x0420(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                TeamSetting;                                              // 0x0428(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x042C(0x0004) MISSED OFFSET
	class UPlaylistUserOptionIntEnum*                  TeamSetting_Definition;                                   // 0x0430(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseIngameScoreboard;                                     // 0x0438(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EMinigameFullscreenMapWidgetType                   MinigameFullscreenMapWidgetType;                          // 0x0439(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x2];                                       // 0x043A(0x0002) MISSED OFFSET
	int                                                TimerDirection;                                           // 0x043C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                TeamRotationSetting;                                      // 0x0440(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RoundScoreDisplayTime;                                    // 0x0444(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RoundWinnerDisplayTime;                                   // 0x0448(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bStopwatchMode;                                           // 0x044C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bStableTeamCosmetics;                                     // 0x044D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bShowCumulativeScoreOnHUD;                                // 0x044E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EMinigameWinCondition                              WinCondition;                                             // 0x044F(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                AllTeamsMustMatchEndConditions;                           // 0x0450(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                EndGameOnMatchPointWin;                                   // 0x0454(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                DefaultClassSlot;                                         // 0x0458(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EFortMinigameClassResetType                        ClassResetType;                                           // 0x045C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EMinigamePlayerPersistence                         PlayerPersistence;                                        // 0x045D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x2];                                       // 0x045E(0x0002) MISSED OFFSET
	int                                                OnlyAllowRespawningIfPlayerStartPadsFound;                // 0x0460(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ShowCumulativeScoreboard;                                 // 0x0464(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAllowFriendlyFire;                                       // 0x0468(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EMinigameGameEndCallout                            GameEndCallout;                                           // 0x0469(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x2];                                       // 0x046A(0x0002) MISSED OFFSET
	int                                                VictoryAudioIndex;                                        // 0x046C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                DrawAudioIndex;                                           // 0x0470(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                DefeatAudioIndex;                                         // 0x0474(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FString                                     CustomVictoryCallout;                                     // 0x0478(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     CustomDefeatCallout;                                      // 0x0488(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              StartCountdownDuration;                                   // 0x0498(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MinigameSettingsMachine.MinigameSettingsMachine_C");
		
		return ptr;
	}


	void UpdateGameStartCountdown();
	void AdditionalUIExtensionValidityChecks(const struct FGameplayTagContainer& TagContainer, bool* bUIExtensionIsValid);
	int GetTeamSetting();
	void UpdateGameSettings();
	void UpdatePlayerPersistence();
	void UpdateClassSettings();
	void GetUIExtensions(struct FGameplayTagContainer* Return_Value);
	void Game_Mode_Preset_Upgrade_Path();
	void GetScoreboardStatsArray(TArray<class UFortMinigameStatFilter*>* ScoreboardStats);
	void FillTrackedStats();
	void TryAddEndCondition_DestroyObjects(TArray<struct FFortMinigameStatQuery>* EndConditions, bool* bResult);
	void UpdateTotalRounds();
	void UpdateMinigameMutators();
	void UpdateJoinInProgress();
	void TryAddEndCondition_CollectItems(TArray<struct FFortMinigameStatQuery>* EndConditions, bool* bResult);
	void UpdateAutoStart();
	void UpdateEndConditions();
	void UpdateTeamToMoveToWhenOutOfSpawns();
	void UpdateAutoEndTeamThreshold();
	void UpdatePlayerLives();
	void UpdatePostGameSpawnLocationSetting();
	struct FText BlueprintGetFailedInteractionString(class AFortPawn* InteractingPawn, TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted);
	void UpdateTeamSetting();
	void UpdateSpawnLocationSetting();
	void GetCurrentMinigame(class AFortMinigame** Minigame);
	void UpdateTimeLimit();
	void UpdateGameMode();
	void HasMinigameStarted(bool* bHasStarted);
	void GetPickupSpawnLocation(struct FVector* SpawnLocation);
	struct FText BlueprintGetInteractionString(class AFortPawn* InteractingPawn, TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted);
	bool BlueprintCanInteract(class AFortPawn* InteractingPawn, TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted, TEnumAsByte<ETInteractionType> InteractionType);
	void ReceiveBeginPlay();
	void OnGameSettingsUpdated();
	void StartMinigameHelper();
	void AbandonMinigameHelper();
	void ExecuteUbergraph_MinigameSettingsMachine(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
