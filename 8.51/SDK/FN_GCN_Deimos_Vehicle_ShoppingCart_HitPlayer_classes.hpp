#pragma once

// Fortnite (8.51) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass GCN_Deimos_Vehicle_ShoppingCart_HitPlayer.GCN_Deimos_Vehicle_ShoppingCart_HitPlayer_C
// 0x0008 (0x01A8 - 0x01A0)
class UGCN_Deimos_Vehicle_ShoppingCart_HitPlayer_C : public UFortGameplayCueNotify_Burst
{
public:
	class USoundConcurrency*                           ConcurrencySettings;                                      // 0x01A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GCN_Deimos_Vehicle_ShoppingCart_HitPlayer.GCN_Deimos_Vehicle_ShoppingCart_HitPlayer_C");
		return ptr;
	}


	void OnBurst(class AActor* MyTarget, struct FGameplayCueParameters Parameters, TArray<class UParticleSystemComponent*> ParticleComponents, TArray<class UAudioComponent*> AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
