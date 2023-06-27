#pragma once

// Fortnite (14.30) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum GooseRuntime.EGoosePickupState
enum class EGoosePickupState : uint8_t
{
	None                           = 0,
	Falling                        = 1,
	Deployed                       = 2,
	ImpactedByPlane                = 3,
	DeployTimerUp                  = 4,
	EGoosePickupState_MAX          = 5
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct GooseRuntime.GooseWeaponTierData
// 0x0010
struct FGooseWeaponTierData
{
	TArray<class UFortWeaponItemDefinition*>           WeaponItemDefinitions;                                    // 0x0000(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct GooseRuntime.GooseDisplayData
// 0x0020
struct FGooseDisplayData
{
	struct FName                                       LootTableName;                                            // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UStaticMesh*                                 StaticMesh;                                               // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class UMaterialInterface*>                  MaterialsToSwap;                                          // 0x0010(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct GooseRuntime.PlaneLootEntry
// 0x0028
struct FPlaneLootEntry
{
	struct FName                                       LootTableName;                                            // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FScalableFloat                              LootWeight;                                               // 0x0008(0x0020) (Edit)
};

// ScriptStruct GooseRuntime.PlaneLootHeightEntry
// 0x0070
struct FPlaneLootHeightEntry
{
	struct FScalableFloat                              RelativeWeight;                                           // 0x0000(0x0020) (Edit)
	struct FScalableFloat                              MinHeightOffGround;                                       // 0x0020(0x0020) (Edit)
	struct FScalableFloat                              MaxHeightOffGround;                                       // 0x0040(0x0020) (Edit)
	TArray<struct FPlaneLootEntry>                     LootEntries;                                              // 0x0060(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct GooseRuntime.PlaneLootTypeEntry
// 0x0030
struct FPlaneLootTypeEntry
{
	struct FScalableFloat                              RelativeWeight;                                           // 0x0000(0x0020) (Edit)
	TArray<struct FPlaneLootHeightEntry>               LootHeightEntries;                                        // 0x0020(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct GooseRuntime.PlaneSquadInfo
// 0x0044 (0x0050 - 0x000C)
struct FPlaneSquadInfo : public FFastArraySerializerItem
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	TArray<class AFortPlayerControllerAthena*>         Controllers;                                              // 0x0010(0x0010) (ZeroConstructor, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class AFortPlayerStateAthena*                      LastDriver;                                               // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      SquadId;                                                  // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	int                                                PlanesRemaining;                                          // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FName                                       LastCollectedChest;                                       // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                NumOfPlaneEliminations;                                   // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	class AFortAthenaVehicle*                          LastCollectedChestVehicle;                                // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              LastCollectedChestServerTime;                             // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
};

// ScriptStruct GooseRuntime.PlaneSquadInfoArray
// 0x0028 (0x0130 - 0x0108)
struct FPlaneSquadInfoArray : public FFastArraySerializer
{
	TArray<struct FPlaneSquadInfo>                     SquadData;                                                // 0x0108(0x0010) (ZeroConstructor)
	TArray<class AFortPlayerControllerAthena*>         RemovedControllers;                                       // 0x0118(0x0010) (ZeroConstructor, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0128(0x0008) MISSED OFFSET
};

// ScriptStruct GooseRuntime.PlanePickupSpawnData
// 0x0030
struct FPlanePickupSpawnData
{
	class AAthenaGoosePickup*                          PickupClass;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0008(0x0028) MISSED OFFSET
};

// ScriptStruct GooseRuntime.PlaneSpawnData
// 0x0018
struct FPlaneSpawnData
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
