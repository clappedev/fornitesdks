#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x0 (0x440 - 0x440)
// BlueprintGeneratedClass GC_HuskDeath.GC_HuskDeath_C
class AGC_HuskDeath_C : public AFortGameplayCueNotify_BurstLatent
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GC_HuskDeath_C");
		return Clss;
	}

	void OnBurst(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UParticleSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
