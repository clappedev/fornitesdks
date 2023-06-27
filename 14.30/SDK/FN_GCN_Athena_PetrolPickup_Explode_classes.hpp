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

// BlueprintGeneratedClass GCN_Athena_PetrolPickup_Explode.GCN_Athena_PetrolPickup_Explode_C
// 0x0010 (0x01C8 - 0x01B8)
class UGCN_Athena_PetrolPickup_Explode_C : public UFortGameplayCueNotify_Burst
{
public:
	TArray<class USoundCue*>                           OverrideSoundCues;                                        // 0x01B8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GCN_Athena_PetrolPickup_Explode.GCN_Athena_PetrolPickup_Explode_C");
		
		return ptr;
	}


	void OnBurst(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, TArray<class UParticleSystemComponent*> ParticleComponents, TArray<class UAudioComponent*> AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
