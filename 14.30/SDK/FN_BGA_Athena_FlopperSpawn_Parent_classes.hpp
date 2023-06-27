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

// BlueprintGeneratedClass BGA_Athena_FlopperSpawn_Parent.BGA_Athena_FlopperSpawn_Parent_C
// 0x03DC (0x0B9C - 0x07C0)
class ABGA_Athena_FlopperSpawn_Parent_C : public ABuildingGameplayActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x07C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                               OverlapVolume;                                            // 0x07C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x07D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FScalableFloat                              Row_MaxUses;                                              // 0x07D8(0x0020) (Edit, BlueprintVisible)
	struct FScalableFloat                              Row_MinUses;                                              // 0x07F8(0x0020) (Edit, BlueprintVisible)
	int                                                Uses;                                                     // 0x0818(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AfterHideLifeSpan;                                        // 0x081C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       ItemsToDrop;                                              // 0x0820(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTag                                GC_Spawn;                                                 // 0x0828(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              Row_SpawnChanceMax;                                       // 0x0830(0x0020) (Edit, BlueprintVisible)
	bool                                               IsWorldSpawner;                                           // 0x0850(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0851(0x0007) MISSED OFFSET
	struct FScalableFloat                              Row_SpawnChanceMin;                                       // 0x0858(0x0020) (Edit, BlueprintVisible)
	TMap<struct FGameplayTag, struct FName>            TagToLoot_FishingSpotTier;                                // 0x0878(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               AlreadySpawnChecked;                                      // 0x08C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x08C9(0x0007) MISSED OFFSET
	TMap<struct FGameplayTag, struct FName>            TagToLoot_DefaultTier;                                    // 0x08D0(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<struct FGameplayTag, struct FName>            TagToLoot_ToUse;                                          // 0x0920(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<struct FGameplayTag, struct FName>            TagToLoot_HighTier_FishingRod;                            // 0x0970(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               HasTypeTag;                                               // 0x09C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x09C1(0x0007) MISSED OFFSET
	TArray<TEnumAsByte<EObjectTypeQuery>>              ObjectTypes;                                              // 0x09C8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       LootTags;                                                 // 0x09D8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               MaxUses;                                                  // 0x09F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Debug;                                                    // 0x09F9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x6];                                       // 0x09FA(0x0006) MISSED OFFSET
	struct FScalableFloat                              Row_AddedBobChanceOnOverlapMin;                           // 0x0A00(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              Row_AddedBobChanceOnOverlapMax;                           // 0x0A20(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class AFortPickup*                                 SpawnedItem;                                              // 0x0A40(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Sound_HighTierPoolSpawn;                                  // 0x0A48(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTagContainer                       QuestTag_DefaultSpawn;                                    // 0x0A50(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       QuestTag_WorldSpawn;                                      // 0x0A70(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class APrj_Athena_FloppingRabbit_C*                Projectile;                                               // 0x0A90(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 FishSizeCurve;                                            // 0x0A98(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TMap<class UFortItemDefinition*, struct FScalableFloat> FishSizeMap;                                              // 0x0AA0(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              MiniGameFishSizeThreshold;                                // 0x0AF0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0AF4(0x0004) MISSED OFFSET
	struct FScalableFloat                              MiniGameFishSizePercentileThreshold;                      // 0x0AF8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               AlwaysStartMiniGame;                                      // 0x0B18(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0B19(0x0003) MISSED OFFSET
	struct FGameplayTag                                HighTierFishingRod;                                       // 0x0B1C(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FName                                       HighTierLootData;                                         // 0x0B24(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTag                                DefaultLootTag;                                           // 0x0B2C(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	unsigned char                                      UnknownData06[0x4];                                       // 0x0B34(0x0004) MISSED OFFSET
	struct FString                                     Fish_Variant_String;                                      // 0x0B38(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               New_Best_Fish;                                            // 0x0B48(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0B49(0x0003) MISSED OFFSET
	float                                              Fish_Length;                                              // 0x0B4C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RespawnDelay;                                             // 0x0B50(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x0B54(0x0004) MISSED OFFSET
	struct FScalableFloat                              Row_RespawnDelayMin;                                      // 0x0B58(0x0020) (Edit, BlueprintVisible)
	struct FScalableFloat                              Row_RespawnDelayMax;                                      // 0x0B78(0x0020) (Edit, BlueprintVisible)
	float                                              ForcedRespawnDelay;                                       // 0x0B98(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BGA_Athena_FlopperSpawn_Parent.BGA_Athena_FlopperSpawn_Parent_C");
		
		return ptr;
	}


	bool Can_Respawn();
	void SetRespawnDelay();
	void GetLootTier(bool IsExplosion, bool IsProFishingRod, struct FName* Output_Get);
	void ShouldKill();
	void HandleUseTracking();
	void SetBalanceValues();
	bool BlueprintCanInteract(class AFortPawn* InteractingPawn, TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted, TEnumAsByte<ETInteractionType> InteractionType);
	void UserConstructionScript();
	void OnReady_5804F209455A50B3EE64E3AED087DE64(class AFortGameStateAthena* GameState, class UFortPlaylist* Playlist, const struct FGameplayTagContainer& PlaylistContextTags);
	void BndEvt__OverlapVolume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void PlaySpawnItemHightier(const struct FVector& Location);
	void FishingComplete();
	void HideAndKill();
	void ReceiveBeginPlay();
	void SpawnItem(class AActor* Target, bool Hooked, class USceneComponent* HookComponent, const struct FVector& SpawnLoc, class AActor* Player, float ItemSpawnDelay, bool CaughtWithFishingRod, bool CaughtWithHappyGhost, class AActor* ItemUsedToFish, class APrj_Athena_FloppingRabbit_C* Projectile, const struct FGameplayTagContainer& Required_Tags);
	void UpdateCollectionsComponent(bool bCaughtFish, class AActor* Player, class UFortItemDefinition* ItemDefinition, class AFortPickup* Pickup, float Length);
	void Clear_Saved_Collection_Data();
	void HideAndDelayForRespawn(float TimeToDelay);
	void ExecuteUbergraph_BGA_Athena_FlopperSpawn_Parent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
