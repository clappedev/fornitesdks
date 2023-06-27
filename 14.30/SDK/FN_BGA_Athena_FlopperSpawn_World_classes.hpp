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

// BlueprintGeneratedClass BGA_Athena_FlopperSpawn_World.BGA_Athena_FlopperSpawn_World_C
// 0x0154 (0x0CF0 - 0x0B9C)
class ABGA_Athena_FlopperSpawn_World_C : public ABGA_Athena_FlopperSpawn_Parent_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0B9C(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0BA0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                             Audio_FlopperLoop;                                        // 0x0BA8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UNiagaraComponent*                           NS_Flopper_Spot;                                          // 0x0BB0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Time_Interval;                                            // 0x0BB8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OffsetDistance;                                           // 0x0BBC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TimeIntervalOffset;                                       // 0x0BC0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0BC4(0x0004) MISSED OFFSET
	class UNiagaraSystem*                              NS_FX_Jump;                                               // 0x0BC8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             FX_Jump;                                                  // 0x0BD0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     TraceOffsetAmount;                                        // 0x0BD8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0BE4(0x0004) MISSED OFFSET
	class AFortWaterBodyActor*                         FortWaterBody;                                            // 0x0BE8(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     WaterPlaneOffset;                                         // 0x0BF0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0BFC(0x0004) MISSED OFFSET
	class USoundBase*                                  Sound_AmbientFishFlop;                                    // 0x0C00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ExplosionItemSpawnOffset;                                 // 0x0C08(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0C14(0x0004) MISSED OFFSET
	struct FGameplayTagContainer                       T_FlopperSpawn;                                           // 0x0C18(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              MinDistanceToExplosion;                                   // 0x0C38(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x0C3C(0x0004) MISSED OFFSET
	TMap<struct FGameplayTag, struct FName>            MAP_TagToLootExplode;                                     // 0x0C40(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FName                                       ExplodeItemsToDrop;                                       // 0x0C90(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ExplodeRolls;                                             // 0x0C98(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     WaterNormalHit;                                           // 0x0C9C(0x000C) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHasWrittenAnalytic;                                      // 0x0CA8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x0CA9(0x0007) MISSED OFFSET
	struct FGameplayTagContainer                       BattleLabProjectileTag;                                   // 0x0CB0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       ExplosionSpawnTag;                                        // 0x0CD0(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BGA_Athena_FlopperSpawn_World.BGA_Athena_FlopperSpawn_World_C");
		
		return ptr;
	}


	void GetLootTier(bool IsExplosion, bool IsProFishingRod, struct FName* Output_Get);
	void ExplosionQuestProgress(class AActor* Instigator, class AActor* DamageCauser);
	void OnRep_FortWaterBody();
	float RandomTimeInterval();
	void ReceiveBeginPlay();
	void OnDeathPlayEffects(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void SpawnJumpingFish();
	void OnDamageServer(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void SpawnFromExplosion(class AActor* Instigator, class AActor* DamageCauser);
	void ExecuteUbergraph_BGA_Athena_FlopperSpawn_World(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
