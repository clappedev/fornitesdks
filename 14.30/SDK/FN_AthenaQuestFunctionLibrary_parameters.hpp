#pragma once

// Fortnite (14.30) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function AthenaQuestFunctionLibrary.AthenaQuestFunctionLibrary_C.Athena_CheckActorHasTags
struct UAthenaQuestFunctionLibrary_C_Athena_CheckActorHasTags_Params
{
	class AActor*                                      TargetActor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer                       TagsToCheck;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               OnlyExactMatch;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDidActorHaveTags;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaQuestFunctionLibrary.AthenaQuestFunctionLibrary_C.Athena_PartyAssistCheck
struct UAthenaQuestFunctionLibrary_C_Athena_PartyAssistCheck_Params
{
	class AFortPlayerController*                       PlayerController;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ObjectiveBackendName;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsAssistingObjective;                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsValidPlayerController;                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaQuestFunctionLibrary.AthenaQuestFunctionLibrary_C.Athena_PlayQuestRewardFeedback
struct UAthenaQuestFunctionLibrary_C_Athena_PlayQuestRewardFeedback_Params
{
	bool                                               PlayFX_onPlayer_;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  Success_Sound;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             Success_Particles;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UForceFeedbackEffect*                        Success_Shake;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      QuestActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AFortPlayerPawn*                             PlayerPawn;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaQuestFunctionLibrary.AthenaQuestFunctionLibrary_C.Athena_IsCreativeOrPlaygroundPlaylist
struct UAthenaQuestFunctionLibrary_C_Athena_IsCreativeOrPlaygroundPlaylist_Params
{
	struct FGameplayTagContainer                       TagContainer;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AthenaQuestFunctionLibrary.AthenaQuestFunctionLibrary_C.Athena_CheckCreativeMode
struct UAthenaQuestFunctionLibrary_C_Athena_CheckCreativeMode_Params
{
	class AGameStateBase*                              InGameState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CanCompleteQuest;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaQuestFunctionLibrary.AthenaQuestFunctionLibrary_C.Athena_QuestObjectiveCounter
struct UAthenaQuestFunctionLibrary_C_Athena_QuestObjectiveCounter_Params
{
	class AFortPlayerController*                       FortPlayerControllerAthena;                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UFortQuestItemDefinition*                    ObjectiveItem;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FDataTableRowHandle                         ObjectiveStat;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                QuestCountAchieved;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                QuestCountRequired;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               CountSuccessfullyReturned;                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaQuestFunctionLibrary.AthenaQuestFunctionLibrary_C.Athena_GiveQuestUpdateToPlayers
struct UAthenaQuestFunctionLibrary_C_Athena_GiveQuestUpdateToPlayers_Params
{
	class UFortQuestItemDefinition*                    InQuestItemRef;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ObjectiveBackendName;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FDataTableRowHandle                         ObjectiveStatEvent;                                       // (BlueprintVisible, BlueprintReadOnly, Parm)
	TArray<class AFortPlayerController*>               PlayerControllersForUpdate;                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaQuestFunctionLibrary.AthenaQuestFunctionLibrary_C.Athena_CheckQuestAndObjectiveCompletionMP
struct UAthenaQuestFunctionLibrary_C_Athena_CheckQuestAndObjectiveCompletionMP_Params
{
	TArray<class AFortPlayerController*>               InPlayerControlle;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UFortQuestItemDefinition*                    InQuestItemRef;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ObjectiveBackendName;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               QuestIsValid;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               QuestCompleted;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ObjectiveCompleted;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaQuestFunctionLibrary.AthenaQuestFunctionLibrary_C.Athena_CheckQuestAndObjectiveCompletion
struct UAthenaQuestFunctionLibrary_C_Athena_CheckQuestAndObjectiveCompletion_Params
{
	class AFortPlayerController*                       InPlayerControlle;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UFortQuestItemDefinition*                    InQuestItemRef;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ObjectiveBackendName;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               QuestIsValid;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               QuestCompleted;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ObjectiveCompleted;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaQuestFunctionLibrary.AthenaQuestFunctionLibrary_C.Athena_HasPlayerCompletedQuest
struct UAthenaQuestFunctionLibrary_C_Athena_HasPlayerCompletedQuest_Params
{
	class AFortPlayerController*                       InPlayerControlle;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UFortQuestItemDefinition*                    InQuestItemRef;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               HasQuest;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               QuestCompleted;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaQuestFunctionLibrary.AthenaQuestFunctionLibrary_C.Athena_HasQuest
struct UAthenaQuestFunctionLibrary_C_Athena_HasQuest_Params
{
	class AFortPlayerController*                       InPlayerControlle;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UFortQuestItemDefinition*                    InQuestItemRef;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               PlayerHasQuest;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
