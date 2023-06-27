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

// Function LagerRuntime.FortAthenaLivingWorldManager.OnSpawnedActorDestroy
struct UFortAthenaLivingWorldManager_OnSpawnedActorDestroy_Params
{
	class AActor*                                      DestroyedActor;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LagerRuntime.FortAthenaLivingWorldManager.OnPatrolPathAdded
struct UFortAthenaLivingWorldManager_OnPatrolPathAdded_Params
{
	class AFortAthenaPatrolPath*                       PatrolPath;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LagerRuntime.FortAthenaLivingWorldManager.OnCurrentPlaylistLoaded
struct UFortAthenaLivingWorldManager_OnCurrentPlaylistLoaded_Params
{
	struct FName                                       PlaylistName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer                       PlaylistContextTags;                                      // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerUnregisterPointProvider
struct UFortAthenaLivingWorldManager_LivingWorldManagerUnregisterPointProvider_Params
{
	class AActor*                                      PointProvider;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerToggleVerboseLogging
struct UFortAthenaLivingWorldManager_LivingWorldManagerToggleVerboseLogging_Params
{
};

// Function LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerToggleGenerateEvents
struct UFortAthenaLivingWorldManager_LivingWorldManagerToggleGenerateEvents_Params
{
};

// Function LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerToggleActorMinimap
struct UFortAthenaLivingWorldManager_LivingWorldManagerToggleActorMinimap_Params
{
};

// Function LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerRegisterPointProvider
struct UFortAthenaLivingWorldManager_LivingWorldManagerRegisterPointProvider_Params
{
	class AActor*                                      PointProvider;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerProviderDebugActor
struct UFortAthenaLivingWorldManager_LivingWorldManagerProviderDebugActor_Params
{
	int                                                ProviderIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerGenerateEvents
struct UFortAthenaLivingWorldManager_LivingWorldManagerGenerateEvents_Params
{
};

// Function LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerFlush
struct UFortAthenaLivingWorldManager_LivingWorldManagerFlush_Params
{
};

// Function LagerRuntime.FortAthenaLivingWorldPointProviderInterface.OnSpawnedActorFailed
struct UFortAthenaLivingWorldPointProviderInterface_OnSpawnedActorFailed_Params
{
};

// Function LagerRuntime.FortAthenaLivingWorldPointProviderInterface.OnSpawnedActor
struct UFortAthenaLivingWorldPointProviderInterface_OnSpawnedActor_Params
{
	class AActor*                                      SpawnedActor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LagerRuntime.FortAthenaLivingWorldPointProviderInterface.OnEventRequested
struct UFortAthenaLivingWorldPointProviderInterface_OnEventRequested_Params
{
};

// Function LagerRuntime.FortAthenaLivingWorldPointProviderInterface.IsEnabled
struct UFortAthenaLivingWorldPointProviderInterface_IsEnabled_Params
{
	struct FFortAthenaLivingWorldPointProviderFilterRules PointFilter;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LagerRuntime.FortAthenaLivingWorldPointProviderInterface.GetValidLocation
struct UFortAthenaLivingWorldPointProviderInterface_GetValidLocation_Params
{
	struct FFortAthenaLivingWorldPointProviderFilterRules PointFilter;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FVector                                     OutPosition;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    OutRotation;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LagerRuntime.FortAthenaLivingWorldPointProviderInterface.GetFiltersTags
struct UFortAthenaLivingWorldPointProviderInterface_GetFiltersTags_Params
{
	struct FGameplayTagContainer                       FilterTags;                                               // (Parm, OutParm)
};

// Function LagerRuntime.FortAthenaLivingWorldVolume.OnPointProviderRegistered
struct AFortAthenaLivingWorldVolume_OnPointProviderRegistered_Params
{
	class AActor*                                      PointProvider;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LagerRuntime.FortAthenaLivingWorldVolume.OnCurrentPlaylistLoaded
struct AFortAthenaLivingWorldVolume_OnCurrentPlaylistLoaded_Params
{
	struct FName                                       PlaylistName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer                       PlaylistContextTags;                                      // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function LagerRuntime.FortAthenaPatrolPathPointProvider.OnSpawnedActorDestroyed
struct AFortAthenaPatrolPathPointProvider_OnSpawnedActorDestroyed_Params
{
	class AActor*                                      DestroyedActor;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LagerRuntime.FortAthenaPatrolPathPointProvider.OnCurrentPlaylistLoaded
struct AFortAthenaPatrolPathPointProvider_OnCurrentPlaylistLoaded_Params
{
	struct FName                                       PlaylistName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer                       PlaylistContextTags;                                      // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function LagerRuntime.FortCheatManager_LivingWorldManager.LivingWorldManagerSpawn
struct UFortCheatManager_LivingWorldManager_LivingWorldManagerSpawn_Params
{
	struct FString                                     EventDataName;                                            // (Parm, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
