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

// BlueprintGeneratedClass GC_Abilities_Activation_DBNOResurrect.GC_Abilities_Activation_DBNOResurrect_C
// 0x0000 (0x01B8 - 0x01B8)
class UGC_Abilities_Activation_DBNOResurrect_C : public UFortGameplayCueNotify_Burst
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GC_Abilities_Activation_DBNOResurrect.GC_Abilities_Activation_DBNOResurrect_C");
		
		return ptr;
	}


	void OnBurst(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, TArray<class UParticleSystemComponent*> ParticleComponents, TArray<class UAudioComponent*> AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
