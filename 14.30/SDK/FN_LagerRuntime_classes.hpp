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

// Class LagerRuntime.FortAthenaLivingWorldConfigData
// 0x0088 (0x00B8 - 0x0030)
class UFortAthenaLivingWorldConfigData : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0030(0x0028) UNKNOWN PROPERTY: SoftObjectProperty LagerRuntime.FortAthenaLivingWorldConfigData.CategoryTable
	struct FScalableFloat                              MaxActorCount;                                            // 0x0058(0x0020) (Edit, DisableEditOnInstance)
	struct FScalableFloat                              MaxEventSpawnPerTick;                                     // 0x0078(0x0020) (Edit, DisableEditOnInstance)
	struct FScalableFloat                              MinimumEventGenerationInterval;                           // 0x0098(0x0020) (Edit, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class LagerRuntime.FortAthenaLivingWorldConfigData");
		
		return ptr;
	}

};


// Class LagerRuntime.FortAthenaLivingWorldEventData
// 0x0068 (0x0098 - 0x0030)
class UFortAthenaLivingWorldEventData : public UDataAsset
{
public:
	int                                                TimeOfDayFilters;                                         // 0x0030(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WaterLevelIndexMin;                                       // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              WaterLevelIndexMax;                                       // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	struct FGameplayTagQuery                           ProviderFiltersTagQuery;                                  // 0x0040(0x0048) (Edit, DisableEditOnInstance)
	TArray<struct FFortAthenaLivingWorldEventDataActorSpawnDescription> ActorDescriptions;                                        // 0x0088(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class LagerRuntime.FortAthenaLivingWorldEventData");
		
		return ptr;
	}

};


// Class LagerRuntime.FortAthenaLivingWorldManager
// 0x0300 (0x03B0 - 0x00B0)
class UFortAthenaLivingWorldManager : public UGameStateComponent
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x00B0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty LagerRuntime.FortAthenaLivingWorldManager.LagerConfig
	struct FScalableFloat                              LagerEnabled;                                             // 0x00D8(0x0020) (Edit, DisableEditOnInstance)
	TArray<class AActor*>                              PointProviders;                                           // 0x00F8(0x0010) (ZeroConstructor, Transient)
	struct FSlateBrush                                 SpecialActorMinimapIconBrush;                             // 0x0108(0x0088) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FVector2D                                   SpecialActorMinimapIconScale;                             // 0x0190(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FSlateBrush                                 SpecialActorCompassIconBrush;                             // 0x0198(0x0088) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FVector2D                                   SpecialActorCompassIconScale;                             // 0x0220(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UFortAthenaAISpawnerData*>            LoadedSpawnerDataClass;                                   // 0x0228(0x0010) (ZeroConstructor, Transient)
	class AFortGameStateAthena*                        CachedGameState;                                          // 0x0238(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0xF8];                                      // 0x0240(0x00F8) MISSED OFFSET
	TArray<class AActor*>                              RuntimePointProviderList;                                 // 0x0338(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData02[0x50];                                      // 0x0348(0x0050) UNKNOWN PROPERTY: SetProperty LagerRuntime.FortAthenaLivingWorldManager.RuntimePointProviderOwners
	unsigned char                                      UnknownData03[0x18];                                      // 0x0398(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class LagerRuntime.FortAthenaLivingWorldManager");
		
		return ptr;
	}


	void OnSpawnedActorDestroy(class AActor* DestroyedActor);
	void OnPatrolPathAdded(class AFortAthenaPatrolPath* PatrolPath);
	void OnCurrentPlaylistLoaded(const struct FName& PlaylistName, const struct FGameplayTagContainer& PlaylistContextTags);
	void STATIC_LivingWorldManagerUnregisterPointProvider(class AActor* PointProvider);
	void LivingWorldManagerToggleVerboseLogging();
	void LivingWorldManagerToggleGenerateEvents();
	void LivingWorldManagerToggleActorMinimap();
	void STATIC_LivingWorldManagerRegisterPointProvider(class AActor* PointProvider);
	void LivingWorldManagerProviderDebugActor(int ProviderIndex);
	void LivingWorldManagerGenerateEvents();
	void LivingWorldManagerFlush();
};


// Class LagerRuntime.FortAthenaLivingWorldPointProviderInterface
// 0x0000 (0x0028 - 0x0028)
class UFortAthenaLivingWorldPointProviderInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class LagerRuntime.FortAthenaLivingWorldPointProviderInterface");
		
		return ptr;
	}


	void OnSpawnedActorFailed();
	void OnSpawnedActor(class AActor* SpawnedActor);
	void OnEventRequested();
	bool IsEnabled(const struct FFortAthenaLivingWorldPointProviderFilterRules& PointFilter);
	bool GetValidLocation(const struct FFortAthenaLivingWorldPointProviderFilterRules& PointFilter, struct FVector* OutPosition, struct FRotator* OutRotation);
	void GetFiltersTags(struct FGameplayTagContainer* FilterTags);
};


// Class LagerRuntime.FortAthenaLivingWorldVolume
// 0x0108 (0x0360 - 0x0258)
class AFortAthenaLivingWorldVolume : public AVolume
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0258(0x0008) MISSED OFFSET
	struct FGameplayTagContainer                       FiltersTags;                                              // 0x0260(0x0020) (Edit)
	struct FGameplayTagQuery                           DeactivationTagsQuery;                                    // 0x0280(0x0048) (Edit)
	float                                              DeactivationTagsRange;                                    // 0x02C8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x02CC(0x0004) MISSED OFFSET
	class UEnvQuery*                                   EnvironmentQuery;                                         // 0x02D0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FScalableFloat                              WaterLevelIndexMin;                                       // 0x02D8(0x0020) (Edit)
	struct FScalableFloat                              WaterLevelIndexMax;                                       // 0x02F8(0x0020) (Edit)
	class AFortGameStateAthena*                        CachedGameState;                                          // 0x0318(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x40];                                      // 0x0320(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class LagerRuntime.FortAthenaLivingWorldVolume");
		
		return ptr;
	}


	void OnPointProviderRegistered(class AActor* PointProvider);
	void OnCurrentPlaylistLoaded(const struct FName& PlaylistName, const struct FGameplayTagContainer& PlaylistContextTags);
};


// Class LagerRuntime.FortAthenaPatrolPathPointProvider
// 0x0040 (0x0260 - 0x0220)
class AFortAthenaPatrolPathPointProvider : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0220(0x0008) MISSED OFFSET
	struct FGameplayTagContainer                       FiltersTags;                                              // 0x0228(0x0020) (Edit)
	TWeakObjectPtr<class AFortAthenaPatrolPath>        PatrolPathWeakPtr;                                        // 0x0248(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class AFortGameStateAthena*                        CachedGameState;                                          // 0x0250(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0258(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class LagerRuntime.FortAthenaPatrolPathPointProvider");
		
		return ptr;
	}


	void OnSpawnedActorDestroyed(class AActor* DestroyedActor);
	void OnCurrentPlaylistLoaded(const struct FName& PlaylistName, const struct FGameplayTagContainer& PlaylistContextTags);
};


// Class LagerRuntime.FortCheatManager_LivingWorldManager
// 0x0000 (0x0028 - 0x0028)
class UFortCheatManager_LivingWorldManager : public UChildCheatManager
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class LagerRuntime.FortCheatManager_LivingWorldManager");
		
		return ptr;
	}


	void LivingWorldManagerSpawn(const struct FString& EventDataName);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
