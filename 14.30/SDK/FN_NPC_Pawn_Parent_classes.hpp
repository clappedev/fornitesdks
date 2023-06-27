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

// BlueprintGeneratedClass NPC_Pawn_Parent.NPC_Pawn_Parent_C
// 0x0238 (0x27AC - 0x2574)
class ANPC_Pawn_Parent_C : public AEnemyPawn_Parent_Deimos_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x2574(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x2578(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                             MovementAudioComponent;                                   // 0x2580(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UNPC_VoiceComponent_C*                       NPC_VoiceComponent;                                       // 0x2588(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             VOAudioComponent;                                         // 0x2590(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFortWidgetComponent*                        NPCStatusWidget;                                          // 0x2598(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGameplayEffect*                             GE_NPC_RecentlyDamaged;                                   // 0x25A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Enum_NPC_AlertLevel>                   NPC_AlertLevel;                                           // 0x25A8(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<Enum_NPC_AlertLevel>                   NPC_AlertLevelPrevious;                                   // 0x25A9(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x25AA(0x0006) MISSED OFFSET
	TMap<TEnumAsByte<Enum_NPC_AlertLevel>, struct FGameplayTag> NPC_AlertLevelToTagMap;                                   // 0x25B0(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              NPC_MaxDistanceFromDamageInstigatorToDrawHealthBar;       // 0x2600(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NPC_HealthBarHideTimeAfterDeath;                          // 0x2604(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               NPC_StatusWidgetHealthBarDisabled;                        // 0x2608(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x2609(0x0003) MISSED OFFSET
	struct FGameplayTag                                GameplayCue_PickupGrabbed;                                // 0x260C(0x0008) (Edit, BlueprintVisible)
	EFortRarity                                        NPC_BestLootRarityInInventory;                            // 0x2614(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x2615(0x0003) MISSED OFFSET
	struct FGameplayTagContainer                       GrantStartingItemsAbilityTC;                              // 0x2618(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               NPC_DebugPawn;                                            // 0x2638(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               NPC_ShowInventoryRarityVisuals;                           // 0x2639(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x263A(0x0002) MISSED OFFSET
	float                                              InventoryGlowDelay;                                       // 0x263C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScalableFloat                              NPC_NumberOfInventoryItemsToDeliverHF;                    // 0x2640(0x0020) (Edit, BlueprintVisible)
	bool                                               NPC_SpawnInvisible;                                       // 0x2660(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x2661(0x0007) MISSED OFFSET
	struct FGameplayTagContainer                       TC_NPC_SpawnAbilityTag;                                   // 0x2668(0x0020) (Edit, BlueprintVisible)
	bool                                               NPC_IsSpawning;                                           // 0x2688(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x2689(0x0003) MISSED OFFSET
	float                                              NPC_OriginalGravityScale;                                 // 0x268C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    NPC_OriginalRotationRate;                                 // 0x2690(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               NPC_HasPawnGoal;                                          // 0x269C(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x269D(0x0003) MISSED OFFSET
	class AActor*                                      NPC_PawnGoalActor;                                        // 0x26A0(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FScalableFloat                              NPC_NumberOfInventoryItemsToConsumeBeforeFullHF;          // 0x26A8(0x0020) (Edit, BlueprintVisible)
	bool                                               NPC_PawnIsDestroyingBuildingForNavigation;                // 0x26C8(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x7];                                       // 0x26C9(0x0007) MISSED OFFSET
	struct FScalableFloat                              MaxIdleVODelay;                                           // 0x26D0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              MinIdleVODelay;                                           // 0x26F0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              NPC_DeathDropLootDelay;                                   // 0x2710(0x0020) (Edit, BlueprintVisible)
	struct FName                                       NPC_DeathDropLootTierGroupName;                           // 0x2730(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer                       NPC_DeathDropLootRequiredDamageTags;                      // 0x2738(0x0020) (Edit, BlueprintVisible)
	struct FGameplayTagContainer                       NPC_DeathDropLootForbiddenDamageTags;                     // 0x2758(0x0020) (Edit, BlueprintVisible)
	bool                                               NPC_HasItemInInventory;                                   // 0x2778(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x2779(0x0003) MISSED OFFSET
	struct FGameplayTag                                VoiceTag_FullAlertIdle;                                   // 0x277C(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                VoiceTag_Idle;                                            // 0x2784(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                VoiceTag_ReturnToIdle;                                    // 0x278C(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                VoiceTag_LostTarget;                                      // 0x2794(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                VoiceTag_Suspicious;                                      // 0x279C(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                VoiceTag_FullAlert;                                       // 0x27A4(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass NPC_Pawn_Parent.NPC_Pawn_Parent_C");
		
		return ptr;
	}


	void NPC_CheckIsInSafeZone(bool* TestSucceeded, bool* isInSafeZone);
	void NPC_HandleAlertLevelVoice();
	void NPC_TryToDropLootOnDeath(const struct FGameplayTagContainer& DamageTags, bool* CanDropLoot);
	void NPC_ApplyGameplayEffectWithMMRScaling(class AActor* Actor, class UGameplayEffect* GE_Class);
	void NPC_SetLootCollectionPhaseCompleteToBlackboard(bool LootCollectionPhaseComplete);
	void NPC_ResetOriginalRotationRate();
	void NPC_ResetOriginalGravityScale();
	void NPC_SetReturnGatheredLootToBlackboard();
	void NPC_GetScalableFloatHotfixValue(const struct FScalableFloat& ScalableFloatHotfix, float AtLevel, bool* AsBool, int* AsIntRounded, float* AsFloat);
	void NPC_ScalableFloatIsValid(const struct FScalableFloat& ScalableFloat, bool* Valid);
	void NPC_PickupDropped(class AFortPickup* FortPickupDropped);
	void NPC_PickupGrabbed(class AFortPickup* FortPickupGrabbed);
	void OnRep_NPC_BestLootRarityInInventory();
	void NPC_SendGameplayCuePickupGrabbed();
	void NPC_PawnDebugMessage(const struct FString& String, bool OnlyWhenDebug);
	void NPC_GetInventoryInformation(bool* HasItemInInventory, int* TotalNumberOfInventoryItems, int* LastInventoryItemIndex, bool* HasEnoughItemsToDeliver, bool* ConsumedEnoughItemsToBeConsideredFull);
	void NPC_SetBestLootRarityInInventory(EFortRarity* NPC_BestLootRarityInInventory);
	void OnRep_NPC_AlertLevel();
	void NPC_GetAlertLevelInfo(TEnumAsByte<Enum_NPC_AlertLevel>* AlertLevel, struct FGameplayTag* AlertLevelTag, bool* ValidDataFound);
	void NPC_ApplyRecentlyDamagedTag(class UGameplayEffect* RecentlyDamagedOverride);
	bool ShouldUpdateSkeletalMesh();
	void OnDamageServer(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void OnDamagePlayEffects(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void ReceiveBeginPlay();
	void GrantStartingItems();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void WidgetVisibilityChanged(bool bVisible);
	void NPC_ParentLaunchVehicle(class AActor* Vehicle, const struct FVector& Velocity);
	void TestLoot();
	void OnDeathPlayEffects(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void NPC_SetupHealthBarOnDeath();
	void ReceivePossessed(class AController* NewController);
	void RequestUpdateNPCAlertLevel(TEnumAsByte<Enum_NPC_AlertLevel> NPC_AlertLevel);
	void NPCAlertLevelChanged(TEnumAsByte<Enum_NPC_AlertLevel> NPC_AlertLevel);
	void NPC_InitializeIdleVO();
	void TriggerIdleVO();
	void OnDeathServer(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void NPCEnableHealthBars();
	void NPCDisableHealthBars();
	void ExecuteUbergraph_NPC_Pawn_Parent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
