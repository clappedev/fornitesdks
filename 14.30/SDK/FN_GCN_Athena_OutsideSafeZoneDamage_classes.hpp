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

// BlueprintGeneratedClass GCN_Athena_OutsideSafeZoneDamage.GCN_Athena_OutsideSafeZoneDamage_C
// 0x0008 (0x01C0 - 0x01B8)
class UGCN_Athena_OutsideSafeZoneDamage_C : public UFortGameplayCueNotify_Burst
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GCN_Athena_OutsideSafeZoneDamage.GCN_Athena_OutsideSafeZoneDamage_C");
		
		return ptr;
	}


	void ZapFX(int ZapCount, class APlayerPawn_Athena_C* PlayerPawnAthena);
	void OnBurst(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, TArray<class UParticleSystemComponent*> ParticleComponents, TArray<class UAudioComponent*> AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
	void ExecuteUbergraph_GCN_Athena_OutsideSafeZoneDamage(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
