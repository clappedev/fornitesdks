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

// Class GooseRuntime.AthenaGoosePickup
// 0x0240 (0x0A00 - 0x07C0)
class AAthenaGoosePickup : public ABuildingGameplayActor
{
public:
	EGoosePickupState                                  PickupState;                                              // 0x07C0(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               bIsDespawning;                                            // 0x07C1(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x07C2(0x0006) MISSED OFFSET
	struct FScalableFloat                              DeployedLifetime;                                         // 0x07C8(0x0020) (Edit)
	struct FScalableFloat                              DespawnWarningTime;                                       // 0x07E8(0x0020) (Edit)
	struct FScalableFloat                              InStormLifetime;                                          // 0x0808(0x0020) (Edit)
	struct FScalableFloat                              DropGravityScale;                                         // 0x0828(0x0020) (Edit)
	int                                                DisplayIndex;                                             // 0x0848(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x084C(0x000C) MISSED OFFSET
	TMap<struct FName, class UGameplayEffect*>         Loot_To_Health_GE_Map;                                    // 0x0858(0x0050) (Edit)
	TMap<struct FName, class UGameplayEffect*>         Loot_To_Boost_GE_Map;                                     // 0x08A8(0x0050) (Edit)
	TMap<struct FName, class UGameplayEffect*>         Loot_To_Passengers_GE_Map;                                // 0x08F8(0x0050) (Edit)
	TMap<struct FName, class UGameplayEffect*>         Loot_to_Driver_GE_Map;                                    // 0x0948(0x0050) (Edit)
	TArray<struct FGooseWeaponTierData>                WeaponTierData;                                           // 0x0998(0x0010) (Edit, ZeroConstructor)
	struct FName                                       ForcedLootTableName;                                      // 0x09A8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FGooseDisplayData>                   DisplayData;                                              // 0x09B0(0x0010) (Edit, ZeroConstructor)
	float                                              DeployHeight;                                             // 0x09C0(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3C];                                      // 0x09C4(0x003C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class GooseRuntime.AthenaGoosePickup");
		
		return ptr;
	}


	void SetStaticMesh(class UStaticMesh* NewStaticMesh, TArray<class UMaterialInterface*> MaterialsToSwap, int InDisplayIndex);
	void OnStartDespawnWarning_Client();
	void OnRep_PickupState();
	void OnRep_DisplayIndex();
	void OnRep_bIsDespawning();
	void OnImpactedByPlane_Server();
	void OnImpactedByPlane_Client();
	void OnFalling_Server();
	void OnFalling_Client();
	void OnDeployed_Server();
	void OnDeployed_Client();
	void OnCollide(class AActor* CollidingActor);
	void DeployTimerUp_Server();
	void DeployTimerUp_Client();
};


// Class GooseRuntime.FortAthenaMutator_Goose
// 0x03C0 (0x0630 - 0x0270)
class AFortAthenaMutator_Goose : public AFortAthenaMutator
{
public:
	TArray<class UGameplayEffect*>                     PlaneStatusEffects;                                       // 0x0270(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0280(0x0008) MISSED OFFSET
	struct FScalableFloat                              AircraftPhaseLength;                                      // 0x0288(0x0020) (Edit)
	struct FScalableFloat                              PlaneSpawnZHeight;                                        // 0x02A8(0x0020) (Edit)
	struct FVector                                     PlaneSpawnOffsetFromPreviouslySpawnedPlane;               // 0x02C8(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x02D4(0x0004) MISSED OFFSET
	struct FScalableFloat                              InitialRadius;                                            // 0x02D8(0x0020) (Edit)
	struct FScalableFloat                              PlaneSpawnHeight;                                         // 0x02F8(0x0020) (Edit)
	struct FScalableFloat                              PlaneSkyCapOffset;                                        // 0x0318(0x0020) (Edit)
	struct FScalableFloat                              PlaneSpawnPitch;                                          // 0x0338(0x0020) (Edit)
	struct FScalableFloat                              InitialNumOfSleepingPlanes;                               // 0x0358(0x0020) (Edit)
	struct FScalableFloat                              PlaneSpawnStormRadiusMultiplier;                          // 0x0378(0x0020) (Edit)
	struct FScalableFloat                              GroundTestValue;                                          // 0x0398(0x0020) (Edit)
	struct FScalableFloat                              DriverRespawnScalar;                                      // 0x03B8(0x0020) (Edit)
	class AFortAthenaVehicle*                          VehicleClass;                                             // 0x03D8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UGameplayEffect*                             SiphonEffectForPlanes;                                    // 0x03E0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x20];                                      // 0x03E8(0x0020) MISSED OFFSET
	struct FScalableFloat                              NumberOfPlanesPerSquad;                                   // 0x0408(0x0020) (Edit)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0428(0x0008) MISSED OFFSET
	TArray<struct FPlaneLootTypeEntry>                 LootTypeEntries;                                          // 0x0430(0x0010) (Edit, ZeroConstructor)
	struct FScalableFloat                              HowOftenToUpdatePickupCount;                              // 0x0440(0x0020) (Edit)
	struct FName                                       DefaultLootTableName;                                     // 0x0460(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FScalableFloat                              DefaultDeployAltitude;                                    // 0x0468(0x0020) (Edit)
	struct FScalableFloat                              DefaultPickupSpawnHeight;                                 // 0x0488(0x0020) (Edit)
	class AAthenaGoosePickup*                          PickupClass;                                              // 0x04A8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FScalableFloat                              MaxNumOfAlivePickups;                                     // 0x04B0(0x0020) (Edit)
	class AActor*                                      BoundsXYSplineClass;                                      // 0x04D0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FPlaneSquadInfoArray                        SquadInfoArray;                                           // 0x04D8(0x0130) (Net)
	TArray<class AFortAthenaVehicle*>                  SpawnedVehicles;                                          // 0x0608(0x0010) (ZeroConstructor)
	TArray<class AAthenaGoosePickup*>                  SpawnedPickups;                                           // 0x0618(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData04[0x8];                                       // 0x0628(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class GooseRuntime.FortAthenaMutator_Goose");
		
		return ptr;
	}


	void OnVehicleStolen(unsigned char OldID, unsigned char NewID);
	void OnVehicleDied(class AFortAthenaVehicle* DestroyedVehicle, const struct FGameplayTagContainer& InTags, class AController* EventInstigator, class AActor* DamageCauser);
	void OnPlaylistLoaded(const struct FName& PlaylistName, const struct FGameplayTagContainer& PlaylistContainerTags);
	void OnPawnDied(class AFortPlayerPawnAthena* PlayerPawn);
	void OnGamePhaseChanged(EAthenaGamePhase NewPhase);
};


// Class GooseRuntime.FortCheatManager_Goose
// 0x0000 (0x0038 - 0x0038)
class UFortCheatManager_Goose : public UFortCheatManager_Coupled
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class GooseRuntime.FortCheatManager_Goose");
		
		return ptr;
	}


	void GooseUpgradePlaneGuns(int Index);
	void GooseToggleDrops(bool bToggleValue);
	void GooseStealPlane();
	void GooseSetPlaneLives(int NewLives);
	void GooseSetPlaneHealthPercent(float Percent);
	void GooseKillPlaneSquad();
	void GooseGivePlaneHealthGE(int Index);
	void GooseGivePlaneEffect(int Index);
	void GooseGivePlaneBoostGE(int Index);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
