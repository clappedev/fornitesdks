#pragma once

// Fortnite (8.51) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MinigameSettingsMachine.MinigameSettingsMachine_C
// 0x012C (0x03E4 - 0x02B8)
class AMinigameSettingsMachine_C : public AFortMinigameSettingsBuilding
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UToyOptionsComponent_C*                      ToyOptionsComponent;                                      // 0x02C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Outpost_Console;                                          // 0x02C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                GameModeIndex;                                            // 0x02D0(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TimeLimit;                                                // 0x02D4(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	EFortMinigamePlayerSpawnLocationSetting            SpawnLocationSetting;                                     // 0x02D8(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x02D9(0x0003) MISSED OFFSET
	int                                                NumTeams;                                                 // 0x02DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EFortMinigamePostGameSpawnLocationSetting          PostGameSpawnLocationSetting;                             // 0x02E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x02E1(0x0003) MISSED OFFSET
	int                                                PlayerLives;                                              // 0x02E4(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                AutoEndTeamThreshold;                                     // 0x02E8(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                TeamToMoveToWhenOutOfSpawns;                              // 0x02EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                NumKillsForEndCondition;                                  // 0x02F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                AutoStartDelay;                                           // 0x02F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                NumCollectItemsForEndCondition;                           // 0x02F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x02FC(0x0004) MISSED OFFSET
	TArray<struct FMinigameScoringPreset>              ScoringPresets;                                           // 0x0300(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClass*>                              TrackedStats;                                             // 0x0310(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                JoinInProgress;                                           // 0x0320(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                NumAIKillsForEndCondition;                                // 0x0324(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ScoreForEndCondition;                                     // 0x0328(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                TotalRounds;                                              // 0x032C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	int                                                NumObjectDestroysForWin;                                  // 0x0330(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WinnerDisplayTime;                                        // 0x0334(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ScoreDisplayTime;                                         // 0x0338(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                TrackedScoreStat0;                                        // 0x033C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                TrackedScoreStat1;                                        // 0x0340(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                TrackedScoreStat2;                                        // 0x0344(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                TrackedScoreStat3;                                        // 0x0348(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                TrackedScoreStat4;                                        // 0x034C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<int>                                        TrackedScoreStats;                                        // 0x0350(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FGameplayTagContainer>               AvailableUIExtensions;                                    // 0x0360(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FGameplayTagContainer                       CommonUIExtensions;                                       // 0x0370(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                UIExtensionSetting;                                       // 0x0390(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0394(0x0004) MISSED OFFSET
	class UPlaylistUserOptionIntEnum*                  TrackedScoreStat0_Definition;                             // 0x0398(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UPlaylistUserOptionIntEnum*                  TrackedScoreStat1_Definition;                             // 0x03A0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UPlaylistUserOptionIntEnum*                  TrackedScoreStat2_Definition;                             // 0x03A8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UPlaylistUserOptionIntEnum*                  TrackedScoreStat3_Definition;                             // 0x03B0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UPlaylistUserOptionIntEnum*                  TrackedScoreStat4_Definition;                             // 0x03B8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UPlaylistUserOptionIntEnum*                  UIExtensionSetting_Definition;                            // 0x03C0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                TeamSetting;                                              // 0x03C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x03CC(0x0004) MISSED OFFSET
	class UPlaylistUserOptionIntEnum*                  TeamSetting_Definition;                                   // 0x03D0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseIngameScoreboard;                                     // 0x03D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EMinigameFullscreenMapWidgetType                   MinigameFullscreenMapWidgetType;                          // 0x03D9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x2];                                       // 0x03DA(0x0002) MISSED OFFSET
	int                                                TimerDirection;                                           // 0x03DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                TeamRotationSetting;                                      // 0x03E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MinigameSettingsMachine.MinigameSettingsMachine_C");
		return ptr;
	}


	void GetUIExtensions(struct FGameplayTagContainer* Return_Value);
	void Game_Mode_Preset_Upgrade_Path();
	void GetScoreboardStatsArray(TArray<class UClass*>* ScoreboardStats);
	void FillTrackedStats();
	void LoadOrCreateVPL();
	void IsScriptedGame(int GameModeIndex, bool* bIsScriptedGame);
	void ToggleScriptedGameRules(bool bIsScriptedGame);
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
	struct FText BlueprintGetFailedInteractionString(class AFortPawn* InteractingPawn);
	void UpdateTeamSetting();
	void UpdateSpawnLocationSetting();
	void GetCurrentMinigame(class AFortMinigame** Minigame);
	void UpdateTimeLimit();
	void UpdateGameMode();
	void HasMinigameStarted(bool* bHasStarted);
	void GetPickupSpawnLocation(struct FVector* SpawnLocation);
	struct FText BlueprintGetInteractionString(class AFortPawn* InteractingPawn);
	bool BlueprintCanInteract(class AFortPawn* InteractingPawn);
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
