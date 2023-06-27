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

// Function LagerRuntime.FortAthenaLivingWorldManager.OnSpawnedActorDestroy
// (Final, Native, Private)
// Parameters:
// class AActor*                  DestroyedActor                 (Parm, ZeroConstructor, IsPlainOldData)

void UFortAthenaLivingWorldManager::OnSpawnedActorDestroy(class AActor* DestroyedActor)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function LagerRuntime.FortAthenaLivingWorldManager.OnSpawnedActorDestroy");

	UFortAthenaLivingWorldManager_OnSpawnedActorDestroy_Params params;
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LagerRuntime.FortAthenaLivingWorldManager.OnPatrolPathAdded
// (Final, Native, Private)
// Parameters:
// class AFortAthenaPatrolPath*   PatrolPath                     (Parm, ZeroConstructor, IsPlainOldData)

void UFortAthenaLivingWorldManager::OnPatrolPathAdded(class AFortAthenaPatrolPath* PatrolPath)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function LagerRuntime.FortAthenaLivingWorldManager.OnPatrolPathAdded");

	UFortAthenaLivingWorldManager_OnPatrolPathAdded_Params params;
	params.PatrolPath = PatrolPath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LagerRuntime.FortAthenaLivingWorldManager.OnCurrentPlaylistLoaded
// (Final, Native, Private, HasOutParms)
// Parameters:
// struct FName                   PlaylistName                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer   PlaylistContextTags            (ConstParm, Parm, OutParm, ReferenceParm)

void UFortAthenaLivingWorldManager::OnCurrentPlaylistLoaded(const struct FName& PlaylistName, const struct FGameplayTagContainer& PlaylistContextTags)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function LagerRuntime.FortAthenaLivingWorldManager.OnCurrentPlaylistLoaded");

	UFortAthenaLivingWorldManager_OnCurrentPlaylistLoaded_Params params;
	params.PlaylistName = PlaylistName;
	params.PlaylistContextTags = PlaylistContextTags;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerUnregisterPointProvider
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  PointProvider                  (Parm, ZeroConstructor, IsPlainOldData)

void UFortAthenaLivingWorldManager::STATIC_LivingWorldManagerUnregisterPointProvider(class AActor* PointProvider)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerUnregisterPointProvider");

	UFortAthenaLivingWorldManager_LivingWorldManagerUnregisterPointProvider_Params params;
	params.PointProvider = PointProvider;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerToggleVerboseLogging
// (Final, Exec, Native, Public)

void UFortAthenaLivingWorldManager::LivingWorldManagerToggleVerboseLogging()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerToggleVerboseLogging");

	UFortAthenaLivingWorldManager_LivingWorldManagerToggleVerboseLogging_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerToggleGenerateEvents
// (Final, Exec, Native, Public)

void UFortAthenaLivingWorldManager::LivingWorldManagerToggleGenerateEvents()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerToggleGenerateEvents");

	UFortAthenaLivingWorldManager_LivingWorldManagerToggleGenerateEvents_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerToggleActorMinimap
// (Final, Exec, Native, Public)

void UFortAthenaLivingWorldManager::LivingWorldManagerToggleActorMinimap()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerToggleActorMinimap");

	UFortAthenaLivingWorldManager_LivingWorldManagerToggleActorMinimap_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerRegisterPointProvider
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  PointProvider                  (Parm, ZeroConstructor, IsPlainOldData)

void UFortAthenaLivingWorldManager::STATIC_LivingWorldManagerRegisterPointProvider(class AActor* PointProvider)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerRegisterPointProvider");

	UFortAthenaLivingWorldManager_LivingWorldManagerRegisterPointProvider_Params params;
	params.PointProvider = PointProvider;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerProviderDebugActor
// (Final, Exec, Native, Public)
// Parameters:
// int                            ProviderIndex                  (Parm, ZeroConstructor, IsPlainOldData)

void UFortAthenaLivingWorldManager::LivingWorldManagerProviderDebugActor(int ProviderIndex)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerProviderDebugActor");

	UFortAthenaLivingWorldManager_LivingWorldManagerProviderDebugActor_Params params;
	params.ProviderIndex = ProviderIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerGenerateEvents
// (Final, Exec, Native, Public)

void UFortAthenaLivingWorldManager::LivingWorldManagerGenerateEvents()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerGenerateEvents");

	UFortAthenaLivingWorldManager_LivingWorldManagerGenerateEvents_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerFlush
// (Final, Exec, Native, Public)

void UFortAthenaLivingWorldManager::LivingWorldManagerFlush()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerFlush");

	UFortAthenaLivingWorldManager_LivingWorldManagerFlush_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LagerRuntime.FortAthenaLivingWorldPointProviderInterface.OnSpawnedActorFailed
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UFortAthenaLivingWorldPointProviderInterface::OnSpawnedActorFailed()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function LagerRuntime.FortAthenaLivingWorldPointProviderInterface.OnSpawnedActorFailed");

	UFortAthenaLivingWorldPointProviderInterface_OnSpawnedActorFailed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LagerRuntime.FortAthenaLivingWorldPointProviderInterface.OnSpawnedActor
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AActor*                  SpawnedActor                   (Parm, ZeroConstructor, IsPlainOldData)

void UFortAthenaLivingWorldPointProviderInterface::OnSpawnedActor(class AActor* SpawnedActor)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function LagerRuntime.FortAthenaLivingWorldPointProviderInterface.OnSpawnedActor");

	UFortAthenaLivingWorldPointProviderInterface_OnSpawnedActor_Params params;
	params.SpawnedActor = SpawnedActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LagerRuntime.FortAthenaLivingWorldPointProviderInterface.OnEventRequested
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UFortAthenaLivingWorldPointProviderInterface::OnEventRequested()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function LagerRuntime.FortAthenaLivingWorldPointProviderInterface.OnEventRequested");

	UFortAthenaLivingWorldPointProviderInterface_OnEventRequested_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LagerRuntime.FortAthenaLivingWorldPointProviderInterface.IsEnabled
// (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FFortAthenaLivingWorldPointProviderFilterRules PointFilter                    (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UFortAthenaLivingWorldPointProviderInterface::IsEnabled(const struct FFortAthenaLivingWorldPointProviderFilterRules& PointFilter)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function LagerRuntime.FortAthenaLivingWorldPointProviderInterface.IsEnabled");

	UFortAthenaLivingWorldPointProviderInterface_IsEnabled_Params params;
	params.PointFilter = PointFilter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LagerRuntime.FortAthenaLivingWorldPointProviderInterface.GetValidLocation
// (Native, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FFortAthenaLivingWorldPointProviderFilterRules PointFilter                    (ConstParm, Parm, OutParm, ReferenceParm)
// struct FVector                 OutPosition                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FRotator                OutRotation                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UFortAthenaLivingWorldPointProviderInterface::GetValidLocation(const struct FFortAthenaLivingWorldPointProviderFilterRules& PointFilter, struct FVector* OutPosition, struct FRotator* OutRotation)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function LagerRuntime.FortAthenaLivingWorldPointProviderInterface.GetValidLocation");

	UFortAthenaLivingWorldPointProviderInterface_GetValidLocation_Params params;
	params.PointFilter = PointFilter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutPosition != nullptr)
		*OutPosition = params.OutPosition;
	if (OutRotation != nullptr)
		*OutRotation = params.OutRotation;

	return params.ReturnValue;
}


// Function LagerRuntime.FortAthenaLivingWorldPointProviderInterface.GetFiltersTags
// (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FGameplayTagContainer   FilterTags                     (Parm, OutParm)

void UFortAthenaLivingWorldPointProviderInterface::GetFiltersTags(struct FGameplayTagContainer* FilterTags)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function LagerRuntime.FortAthenaLivingWorldPointProviderInterface.GetFiltersTags");

	UFortAthenaLivingWorldPointProviderInterface_GetFiltersTags_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FilterTags != nullptr)
		*FilterTags = params.FilterTags;
}


// Function LagerRuntime.FortAthenaLivingWorldVolume.OnPointProviderRegistered
// (Final, Native, Private)
// Parameters:
// class AActor*                  PointProvider                  (Parm, ZeroConstructor, IsPlainOldData)

void AFortAthenaLivingWorldVolume::OnPointProviderRegistered(class AActor* PointProvider)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function LagerRuntime.FortAthenaLivingWorldVolume.OnPointProviderRegistered");

	AFortAthenaLivingWorldVolume_OnPointProviderRegistered_Params params;
	params.PointProvider = PointProvider;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LagerRuntime.FortAthenaLivingWorldVolume.OnCurrentPlaylistLoaded
// (Final, Native, Private, HasOutParms)
// Parameters:
// struct FName                   PlaylistName                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer   PlaylistContextTags            (ConstParm, Parm, OutParm, ReferenceParm)

void AFortAthenaLivingWorldVolume::OnCurrentPlaylistLoaded(const struct FName& PlaylistName, const struct FGameplayTagContainer& PlaylistContextTags)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function LagerRuntime.FortAthenaLivingWorldVolume.OnCurrentPlaylistLoaded");

	AFortAthenaLivingWorldVolume_OnCurrentPlaylistLoaded_Params params;
	params.PlaylistName = PlaylistName;
	params.PlaylistContextTags = PlaylistContextTags;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LagerRuntime.FortAthenaPatrolPathPointProvider.OnSpawnedActorDestroyed
// (Final, Native, Private)
// Parameters:
// class AActor*                  DestroyedActor                 (Parm, ZeroConstructor, IsPlainOldData)

void AFortAthenaPatrolPathPointProvider::OnSpawnedActorDestroyed(class AActor* DestroyedActor)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function LagerRuntime.FortAthenaPatrolPathPointProvider.OnSpawnedActorDestroyed");

	AFortAthenaPatrolPathPointProvider_OnSpawnedActorDestroyed_Params params;
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LagerRuntime.FortAthenaPatrolPathPointProvider.OnCurrentPlaylistLoaded
// (Final, Native, Private, HasOutParms)
// Parameters:
// struct FName                   PlaylistName                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer   PlaylistContextTags            (ConstParm, Parm, OutParm, ReferenceParm)

void AFortAthenaPatrolPathPointProvider::OnCurrentPlaylistLoaded(const struct FName& PlaylistName, const struct FGameplayTagContainer& PlaylistContextTags)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function LagerRuntime.FortAthenaPatrolPathPointProvider.OnCurrentPlaylistLoaded");

	AFortAthenaPatrolPathPointProvider_OnCurrentPlaylistLoaded_Params params;
	params.PlaylistName = PlaylistName;
	params.PlaylistContextTags = PlaylistContextTags;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LagerRuntime.FortCheatManager_LivingWorldManager.LivingWorldManagerSpawn
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 EventDataName                  (Parm, ZeroConstructor)

void UFortCheatManager_LivingWorldManager::LivingWorldManagerSpawn(const struct FString& EventDataName)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function LagerRuntime.FortCheatManager_LivingWorldManager.LivingWorldManagerSpawn");

	UFortCheatManager_LivingWorldManager_LivingWorldManagerSpawn_Params params;
	params.EventDataName = EventDataName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
