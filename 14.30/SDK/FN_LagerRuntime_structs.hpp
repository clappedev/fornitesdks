#pragma once

// Fortnite (14.30) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct LagerRuntime.FortAthenaLivingWorldEventDataActorSpawnDescription
// 0x00E8
struct FFortAthenaLivingWorldEventDataActorSpawnDescription
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) UNKNOWN PROPERTY: SoftClassProperty LagerRuntime.FortAthenaLivingWorldEventDataActorSpawnDescription.ActorClass
	unsigned char                                      UnknownData01[0x28];                                      // 0x0028(0x0028) UNKNOWN PROPERTY: SoftClassProperty LagerRuntime.FortAthenaLivingWorldEventDataActorSpawnDescription.SpawnerData
	struct FGameplayTagQuery                           SpawnerDataTagQuery;                                      // 0x0050(0x0048) (Edit, DisableEditOnInstance)
	bool                                               bUseProviderTagOverrides;                                 // 0x0098(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0099(0x0007) MISSED OFFSET
	struct FGameplayTagQuery                           ProviderFiltersTagQueryOverride;                          // 0x00A0(0x0048) (Edit, DisableEditOnInstance)
};

// ScriptStruct LagerRuntime.FortAthenaLivingWorldPointProviderFilterRules
// 0x0001
struct FFortAthenaLivingWorldPointProviderFilterRules
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct LagerRuntime.FortAthenaLivingWorldCategory
// 0x0050 (0x0058 - 0x0008)
struct FFortAthenaLivingWorldCategory : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0008(0x0028) UNKNOWN PROPERTY: SoftObjectProperty LagerRuntime.FortAthenaLivingWorldCategory.EventTable
	int                                                MaxCount;                                                 // 0x0030(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Weight;                                                   // 0x0034(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTagContainer                       RequirePlaylistTags;                                      // 0x0038(0x0020) (Edit, DisableEditOnInstance)
};

// ScriptStruct LagerRuntime.FortAthenaLivingWorldEvent
// 0x00C0 (0x00C8 - 0x0008)
struct FFortAthenaLivingWorldEvent : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0008(0x0028) UNKNOWN PROPERTY: SoftObjectProperty LagerRuntime.FortAthenaLivingWorldEvent.EventData
	struct FScalableFloat                              IsEnabled;                                                // 0x0030(0x0020) (Edit, DisableEditOnInstance)
	TArray<float>                                      MaxCount;                                                 // 0x0050(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      MaxSpawnedCount;                                          // 0x0060(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	float                                              Weight;                                                   // 0x0070(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0074(0x0004) MISSED OFFSET
	TArray<float>                                      MinRespawnTime;                                           // 0x0078(0x0010) (Edit, ZeroConstructor)
	TArray<float>                                      MaxRespawnTime;                                           // 0x0088(0x0010) (Edit, ZeroConstructor)
	bool                                               bOnlyInSafeZone;                                          // 0x0098(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EAthenaGamePhaseStep                               ActivationGamePhaseStep;                                  // 0x0099(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x009A(0x0002) MISSED OFFSET
	int                                                ActivationSafeZoneIndex;                                  // 0x009C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ActivationMinDelay;                                       // 0x00A0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ActivationMaxDelay;                                       // 0x00A4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTagContainer                       RequirePlaylistTags;                                      // 0x00A8(0x0020) (Edit, DisableEditOnInstance)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
