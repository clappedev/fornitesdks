#pragma once

// Fortnite (9.1) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MinigameSettingsMachine.MinigameSettingsMachine_C.GetUIExtensions
struct AMinigameSettingsMachine_C_GetUIExtensions_Params
{
	struct FGameplayTagContainer                       Return_Value;                                             // (Parm, OutParm)
};

// Function MinigameSettingsMachine.MinigameSettingsMachine_C.Game Mode Preset Upgrade Path
struct AMinigameSettingsMachine_C_Game_Mode_Preset_Upgrade_Path_Params
{
};

// Function MinigameSettingsMachine.MinigameSettingsMachine_C.GetScoreboardStatsArray
struct AMinigameSettingsMachine_C_GetScoreboardStatsArray_Params
{
	TArray<class UClass*>                              ScoreboardStats;                                          // (Parm, OutParm, ZeroConstructor)
};

// Function MinigameSettingsMachine.MinigameSettingsMachine_C.FillTrackedStats
struct AMinigameSettingsMachine_C_FillTrackedStats_Params
{
};

// Function MinigameSettingsMachine.MinigameSettingsMachine_C.LoadOrCreateVPL
struct AMinigameSettingsMachine_C_LoadOrCreateVPL_Params
{
};

// Function MinigameSettingsMachine.MinigameSettingsMachine_C.IsScriptedGame
struct AMinigameSettingsMachine_C_IsScriptedGame_Params
{
	int                                                GameModeIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsScriptedGame;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MinigameSettingsMachine.MinigameSettingsMachine_C.ToggleScriptedGameRules
struct AMinigameSettingsMachine_C_ToggleScriptedGameRules_Params
{
	bool                                               bIsScriptedGame;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MinigameSettingsMachine.MinigameSettingsMachine_C.TryAddEndCondition_DestroyObjects
struct AMinigameSettingsMachine_C_TryAddEndCondition_DestroyObjects_Params
{
	TArray<struct FFortMinigameStatQuery>              EndConditions;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               bResult;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MinigameSettingsMachine.MinigameSettingsMachine_C.UpdateTotalRounds
struct AMinigameSettingsMachine_C_UpdateTotalRounds_Params
{
};

// Function MinigameSettingsMachine.MinigameSettingsMachine_C.UpdateMinigameMutators
struct AMinigameSettingsMachine_C_UpdateMinigameMutators_Params
{
};

// Function MinigameSettingsMachine.MinigameSettingsMachine_C.UpdateJoinInProgress
struct AMinigameSettingsMachine_C_UpdateJoinInProgress_Params
{
};

// Function MinigameSettingsMachine.MinigameSettingsMachine_C.TryAddEndCondition_CollectItems
struct AMinigameSettingsMachine_C_TryAddEndCondition_CollectItems_Params
{
	TArray<struct FFortMinigameStatQuery>              EndConditions;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               bResult;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MinigameSettingsMachine.MinigameSettingsMachine_C.UpdateAutoStart
struct AMinigameSettingsMachine_C_UpdateAutoStart_Params
{
};

// Function MinigameSettingsMachine.MinigameSettingsMachine_C.UpdateEndConditions
struct AMinigameSettingsMachine_C_UpdateEndConditions_Params
{
};

// Function MinigameSettingsMachine.MinigameSettingsMachine_C.UpdateTeamToMoveToWhenOutOfSpawns
struct AMinigameSettingsMachine_C_UpdateTeamToMoveToWhenOutOfSpawns_Params
{
};

// Function MinigameSettingsMachine.MinigameSettingsMachine_C.UpdateAutoEndTeamThreshold
struct AMinigameSettingsMachine_C_UpdateAutoEndTeamThreshold_Params
{
};

// Function MinigameSettingsMachine.MinigameSettingsMachine_C.UpdatePlayerLives
struct AMinigameSettingsMachine_C_UpdatePlayerLives_Params
{
};

// Function MinigameSettingsMachine.MinigameSettingsMachine_C.UpdatePostGameSpawnLocationSetting
struct AMinigameSettingsMachine_C_UpdatePostGameSpawnLocationSetting_Params
{
};

// Function MinigameSettingsMachine.MinigameSettingsMachine_C.BlueprintGetFailedInteractionString
struct AMinigameSettingsMachine_C_BlueprintGetFailedInteractionString_Params
{
	class AFortPawn*                                   InteractingPawn;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MinigameSettingsMachine.MinigameSettingsMachine_C.UpdateTeamSetting
struct AMinigameSettingsMachine_C_UpdateTeamSetting_Params
{
};

// Function MinigameSettingsMachine.MinigameSettingsMachine_C.UpdateSpawnLocationSetting
struct AMinigameSettingsMachine_C_UpdateSpawnLocationSetting_Params
{
};

// Function MinigameSettingsMachine.MinigameSettingsMachine_C.GetCurrentMinigame
struct AMinigameSettingsMachine_C_GetCurrentMinigame_Params
{
	class AFortMinigame*                               Minigame;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MinigameSettingsMachine.MinigameSettingsMachine_C.UpdateTimeLimit
struct AMinigameSettingsMachine_C_UpdateTimeLimit_Params
{
};

// Function MinigameSettingsMachine.MinigameSettingsMachine_C.UpdateGameMode
struct AMinigameSettingsMachine_C_UpdateGameMode_Params
{
};

// Function MinigameSettingsMachine.MinigameSettingsMachine_C.HasMinigameStarted
struct AMinigameSettingsMachine_C_HasMinigameStarted_Params
{
	bool                                               bHasStarted;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MinigameSettingsMachine.MinigameSettingsMachine_C.GetPickupSpawnLocation
struct AMinigameSettingsMachine_C_GetPickupSpawnLocation_Params
{
	struct FVector                                     SpawnLocation;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MinigameSettingsMachine.MinigameSettingsMachine_C.BlueprintGetInteractionString
struct AMinigameSettingsMachine_C_BlueprintGetInteractionString_Params
{
	class AFortPawn*                                   InteractingPawn;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MinigameSettingsMachine.MinigameSettingsMachine_C.BlueprintCanInteract
struct AMinigameSettingsMachine_C_BlueprintCanInteract_Params
{
	class AFortPawn*                                   InteractingPawn;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MinigameSettingsMachine.MinigameSettingsMachine_C.ReceiveBeginPlay
struct AMinigameSettingsMachine_C_ReceiveBeginPlay_Params
{
};

// Function MinigameSettingsMachine.MinigameSettingsMachine_C.OnGameSettingsUpdated
struct AMinigameSettingsMachine_C_OnGameSettingsUpdated_Params
{
};

// Function MinigameSettingsMachine.MinigameSettingsMachine_C.StartMinigameHelper
struct AMinigameSettingsMachine_C_StartMinigameHelper_Params
{
};

// Function MinigameSettingsMachine.MinigameSettingsMachine_C.AbandonMinigameHelper
struct AMinigameSettingsMachine_C_AbandonMinigameHelper_Params
{
};

// Function MinigameSettingsMachine.MinigameSettingsMachine_C.ExecuteUbergraph_MinigameSettingsMachine
struct AMinigameSettingsMachine_C_ExecuteUbergraph_MinigameSettingsMachine_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
