// Fortnite (14.30) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AthenaQuestFunctionLibrary.AthenaQuestFunctionLibrary_C.Athena_CheckActorHasTags
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  TargetActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer   TagsToCheck                    (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           OnlyExactMatch                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bDidActorHaveTags              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAthenaQuestFunctionLibrary_C::STATIC_Athena_CheckActorHasTags(class AActor* TargetActor, const struct FGameplayTagContainer& TagsToCheck, bool OnlyExactMatch, class UObject* __WorldContext, bool* bDidActorHaveTags)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function AthenaQuestFunctionLibrary.AthenaQuestFunctionLibrary_C.Athena_CheckActorHasTags");

	UAthenaQuestFunctionLibrary_C_Athena_CheckActorHasTags_Params params;
	params.TargetActor = TargetActor;
	params.TagsToCheck = TagsToCheck;
	params.OnlyExactMatch = OnlyExactMatch;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bDidActorHaveTags != nullptr)
		*bDidActorHaveTags = params.bDidActorHaveTags;
}


// Function AthenaQuestFunctionLibrary.AthenaQuestFunctionLibrary_C.Athena_PartyAssistCheck
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerController*   PlayerController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ObjectiveBackendName           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsAssistingObjective          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bIsValidPlayerController       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAthenaQuestFunctionLibrary_C::STATIC_Athena_PartyAssistCheck(class AFortPlayerController* PlayerController, const struct FName& ObjectiveBackendName, class UObject* __WorldContext, bool* bIsAssistingObjective, bool* bIsValidPlayerController)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function AthenaQuestFunctionLibrary.AthenaQuestFunctionLibrary_C.Athena_PartyAssistCheck");

	UAthenaQuestFunctionLibrary_C_Athena_PartyAssistCheck_Params params;
	params.PlayerController = PlayerController;
	params.ObjectiveBackendName = ObjectiveBackendName;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bIsAssistingObjective != nullptr)
		*bIsAssistingObjective = params.bIsAssistingObjective;
	if (bIsValidPlayerController != nullptr)
		*bIsValidPlayerController = params.bIsValidPlayerController;
}


// Function AthenaQuestFunctionLibrary.AthenaQuestFunctionLibrary_C.Athena_PlayQuestRewardFeedback
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           PlayFX_onPlayer_               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USoundBase*              Success_Sound                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UParticleSystem*         Success_Particles              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UForceFeedbackEffect*    Success_Shake                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  QuestActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AFortPlayerPawn*         PlayerPawn                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaQuestFunctionLibrary_C::STATIC_Athena_PlayQuestRewardFeedback(bool PlayFX_onPlayer_, class USoundBase* Success_Sound, class UParticleSystem* Success_Particles, class UForceFeedbackEffect* Success_Shake, class AActor* QuestActor, class AFortPlayerPawn* PlayerPawn, class UObject* __WorldContext)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function AthenaQuestFunctionLibrary.AthenaQuestFunctionLibrary_C.Athena_PlayQuestRewardFeedback");

	UAthenaQuestFunctionLibrary_C_Athena_PlayQuestRewardFeedback_Params params;
	params.PlayFX_onPlayer_ = PlayFX_onPlayer_;
	params.Success_Sound = Success_Sound;
	params.Success_Particles = Success_Particles;
	params.Success_Shake = Success_Shake;
	params.QuestActor = QuestActor;
	params.PlayerPawn = PlayerPawn;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaQuestFunctionLibrary.AthenaQuestFunctionLibrary_C.Athena_IsCreativeOrPlaygroundPlaylist
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer   TagContainer                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAthenaQuestFunctionLibrary_C::STATIC_Athena_IsCreativeOrPlaygroundPlaylist(const struct FGameplayTagContainer& TagContainer, class UObject* __WorldContext)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function AthenaQuestFunctionLibrary.AthenaQuestFunctionLibrary_C.Athena_IsCreativeOrPlaygroundPlaylist");

	UAthenaQuestFunctionLibrary_C_Athena_IsCreativeOrPlaygroundPlaylist_Params params;
	params.TagContainer = TagContainer;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AthenaQuestFunctionLibrary.AthenaQuestFunctionLibrary_C.Athena_CheckCreativeMode
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGameStateBase*          InGameState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CanCompleteQuest               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAthenaQuestFunctionLibrary_C::STATIC_Athena_CheckCreativeMode(class AGameStateBase* InGameState, class UObject* __WorldContext, bool* CanCompleteQuest)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function AthenaQuestFunctionLibrary.AthenaQuestFunctionLibrary_C.Athena_CheckCreativeMode");

	UAthenaQuestFunctionLibrary_C_Athena_CheckCreativeMode_Params params;
	params.InGameState = InGameState;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanCompleteQuest != nullptr)
		*CanCompleteQuest = params.CanCompleteQuest;
}


// Function AthenaQuestFunctionLibrary.AthenaQuestFunctionLibrary_C.Athena_QuestObjectiveCounter
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerController*   FortPlayerControllerAthena     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UFortQuestItemDefinition* ObjectiveItem                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FDataTableRowHandle     ObjectiveStat                  (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            QuestCountAchieved             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            QuestCountRequired             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           CountSuccessfullyReturned      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAthenaQuestFunctionLibrary_C::STATIC_Athena_QuestObjectiveCounter(class AFortPlayerController* FortPlayerControllerAthena, class UFortQuestItemDefinition* ObjectiveItem, const struct FDataTableRowHandle& ObjectiveStat, class UObject* __WorldContext, int* QuestCountAchieved, int* QuestCountRequired, bool* CountSuccessfullyReturned)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function AthenaQuestFunctionLibrary.AthenaQuestFunctionLibrary_C.Athena_QuestObjectiveCounter");

	UAthenaQuestFunctionLibrary_C_Athena_QuestObjectiveCounter_Params params;
	params.FortPlayerControllerAthena = FortPlayerControllerAthena;
	params.ObjectiveItem = ObjectiveItem;
	params.ObjectiveStat = ObjectiveStat;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (QuestCountAchieved != nullptr)
		*QuestCountAchieved = params.QuestCountAchieved;
	if (QuestCountRequired != nullptr)
		*QuestCountRequired = params.QuestCountRequired;
	if (CountSuccessfullyReturned != nullptr)
		*CountSuccessfullyReturned = params.CountSuccessfullyReturned;
}


// Function AthenaQuestFunctionLibrary.AthenaQuestFunctionLibrary_C.Athena_GiveQuestUpdateToPlayers
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortQuestItemDefinition* InQuestItemRef                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ObjectiveBackendName           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FDataTableRowHandle     ObjectiveStatEvent             (BlueprintVisible, BlueprintReadOnly, Parm)
// TArray<class AFortPlayerController*> PlayerControllersForUpdate     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaQuestFunctionLibrary_C::STATIC_Athena_GiveQuestUpdateToPlayers(class UFortQuestItemDefinition* InQuestItemRef, const struct FName& ObjectiveBackendName, const struct FDataTableRowHandle& ObjectiveStatEvent, class UObject* __WorldContext, TArray<class AFortPlayerController*>* PlayerControllersForUpdate)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function AthenaQuestFunctionLibrary.AthenaQuestFunctionLibrary_C.Athena_GiveQuestUpdateToPlayers");

	UAthenaQuestFunctionLibrary_C_Athena_GiveQuestUpdateToPlayers_Params params;
	params.InQuestItemRef = InQuestItemRef;
	params.ObjectiveBackendName = ObjectiveBackendName;
	params.ObjectiveStatEvent = ObjectiveStatEvent;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerControllersForUpdate != nullptr)
		*PlayerControllersForUpdate = params.PlayerControllersForUpdate;
}


// Function AthenaQuestFunctionLibrary.AthenaQuestFunctionLibrary_C.Athena_CheckQuestAndObjectiveCompletionMP
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AFortPlayerController*> InPlayerControlle              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UFortQuestItemDefinition* InQuestItemRef                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ObjectiveBackendName           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           QuestIsValid                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           QuestCompleted                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ObjectiveCompleted             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAthenaQuestFunctionLibrary_C::STATIC_Athena_CheckQuestAndObjectiveCompletionMP(class UFortQuestItemDefinition* InQuestItemRef, const struct FName& ObjectiveBackendName, class UObject* __WorldContext, TArray<class AFortPlayerController*>* InPlayerControlle, bool* QuestIsValid, bool* QuestCompleted, bool* ObjectiveCompleted)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function AthenaQuestFunctionLibrary.AthenaQuestFunctionLibrary_C.Athena_CheckQuestAndObjectiveCompletionMP");

	UAthenaQuestFunctionLibrary_C_Athena_CheckQuestAndObjectiveCompletionMP_Params params;
	params.InQuestItemRef = InQuestItemRef;
	params.ObjectiveBackendName = ObjectiveBackendName;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InPlayerControlle != nullptr)
		*InPlayerControlle = params.InPlayerControlle;
	if (QuestIsValid != nullptr)
		*QuestIsValid = params.QuestIsValid;
	if (QuestCompleted != nullptr)
		*QuestCompleted = params.QuestCompleted;
	if (ObjectiveCompleted != nullptr)
		*ObjectiveCompleted = params.ObjectiveCompleted;
}


// Function AthenaQuestFunctionLibrary.AthenaQuestFunctionLibrary_C.Athena_CheckQuestAndObjectiveCompletion
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerController*   InPlayerControlle              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UFortQuestItemDefinition* InQuestItemRef                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ObjectiveBackendName           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           QuestIsValid                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           QuestCompleted                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ObjectiveCompleted             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAthenaQuestFunctionLibrary_C::STATIC_Athena_CheckQuestAndObjectiveCompletion(class AFortPlayerController* InPlayerControlle, class UFortQuestItemDefinition* InQuestItemRef, const struct FName& ObjectiveBackendName, class UObject* __WorldContext, bool* QuestIsValid, bool* QuestCompleted, bool* ObjectiveCompleted)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function AthenaQuestFunctionLibrary.AthenaQuestFunctionLibrary_C.Athena_CheckQuestAndObjectiveCompletion");

	UAthenaQuestFunctionLibrary_C_Athena_CheckQuestAndObjectiveCompletion_Params params;
	params.InPlayerControlle = InPlayerControlle;
	params.InQuestItemRef = InQuestItemRef;
	params.ObjectiveBackendName = ObjectiveBackendName;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (QuestIsValid != nullptr)
		*QuestIsValid = params.QuestIsValid;
	if (QuestCompleted != nullptr)
		*QuestCompleted = params.QuestCompleted;
	if (ObjectiveCompleted != nullptr)
		*ObjectiveCompleted = params.ObjectiveCompleted;
}


// Function AthenaQuestFunctionLibrary.AthenaQuestFunctionLibrary_C.Athena_HasPlayerCompletedQuest
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerController*   InPlayerControlle              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UFortQuestItemDefinition* InQuestItemRef                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           HasQuest                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           QuestCompleted                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAthenaQuestFunctionLibrary_C::STATIC_Athena_HasPlayerCompletedQuest(class AFortPlayerController* InPlayerControlle, class UFortQuestItemDefinition* InQuestItemRef, class UObject* __WorldContext, bool* HasQuest, bool* QuestCompleted)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function AthenaQuestFunctionLibrary.AthenaQuestFunctionLibrary_C.Athena_HasPlayerCompletedQuest");

	UAthenaQuestFunctionLibrary_C_Athena_HasPlayerCompletedQuest_Params params;
	params.InPlayerControlle = InPlayerControlle;
	params.InQuestItemRef = InQuestItemRef;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HasQuest != nullptr)
		*HasQuest = params.HasQuest;
	if (QuestCompleted != nullptr)
		*QuestCompleted = params.QuestCompleted;
}


// Function AthenaQuestFunctionLibrary.AthenaQuestFunctionLibrary_C.Athena_HasQuest
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerController*   InPlayerControlle              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UFortQuestItemDefinition* InQuestItemRef                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           PlayerHasQuest                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAthenaQuestFunctionLibrary_C::STATIC_Athena_HasQuest(class AFortPlayerController* InPlayerControlle, class UFortQuestItemDefinition* InQuestItemRef, class UObject* __WorldContext, bool* PlayerHasQuest)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function AthenaQuestFunctionLibrary.AthenaQuestFunctionLibrary_C.Athena_HasQuest");

	UAthenaQuestFunctionLibrary_C_Athena_HasQuest_Params params;
	params.InPlayerControlle = InPlayerControlle;
	params.InQuestItemRef = InQuestItemRef;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerHasQuest != nullptr)
		*PlayerHasQuest = params.PlayerHasQuest;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
