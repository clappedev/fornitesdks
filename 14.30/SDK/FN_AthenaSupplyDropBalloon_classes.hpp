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

// BlueprintGeneratedClass AthenaSupplyDropBalloon.AthenaSupplyDropBalloon_C
// 0x0040 (0x0BA8 - 0x0B68)
class AAthenaSupplyDropBalloon_C : public AFortAthenaSupplyDropBalloon
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0B68(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UFortHealthBarComponent*                     FortHealthBar;                                            // 0x0B70(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               CrateDestroyed;                                           // 0x0B78(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0B79(0x0007) MISSED OFFSET
	unsigned char                                      UnknownData01[0x10];                                      // 0x0B79(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty AthenaSupplyDropBalloon.AthenaSupplyDropBalloon_C.OnBalloonDestroyed
	class USoundBase*                                  BalloonPopSound;                                          // 0x0B90(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             BalloonPopFX;                                             // 0x0B98(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UGameplayEffect*                             GE_DamageReduction;                                       // 0x0BA0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AthenaSupplyDropBalloon.AthenaSupplyDropBalloon_C");
		
		return ptr;
	}


	void OnDamageServer(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void ReceiveBeginPlay();
	void OnDeathPlayEffects(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void OnDeathServer(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void ExecuteUbergraph_AthenaSupplyDropBalloon(int EntryPoint);
	void OnBalloonDestroyed__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
