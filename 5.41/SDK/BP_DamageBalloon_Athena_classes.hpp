#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x30 (0xB88 - 0xB58)
// BlueprintGeneratedClass BP_DamageBalloon_Athena.BP_DamageBalloon_Athena_C
class ABP_DamageBalloon_Athena_C : public ABuildingSMActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB58(0x8)(Transient, DuplicateTransient)
	class UParticleSystemComponent*              ExplosionParticle;                                 // 0xB60(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFortHealthBarComponent*               FortHealthBar;                                     // 0xB68(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         DestroyBalloon;                                    // 0xB70(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	bool                                         DontPlayDestroyAudio;                              // 0xB71(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5BCA[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  OnBalloonDestroyed;                                // 0xB78(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BP_DamageBalloon_Athena_C");
		return Clss;
	}

	void OnRep_DestroyBalloon(const struct FVector& CallFunc_GetSocketLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue);
	bool ShouldDie(float Damage, class AController* EventInstigator, class AActor* DamageCauser);
	void UserConstructionScript();
	void OnDamageServer(float Damage, struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void CrateIsGone();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_DamageBalloon_Athena(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, float K2Node_Event_Damage, const struct FGameplayTagContainer& K2Node_Event_DamageTags, const struct FVector& K2Node_Event_Momentum, const struct FHitResult& K2Node_Event_HitInfo, class AController* K2Node_Event_InstigatedBy, class AActor* K2Node_Event_DamageCauser, const struct FGameplayEffectContextHandle& K2Node_Event_EffectContext, float CallFunc_GetHealth_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, const struct FFortAnalyticsEventAttribute& K2Node_MakeStruct_FortAnalyticsEventAttribute);
	void OnBalloonDestroyed__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
