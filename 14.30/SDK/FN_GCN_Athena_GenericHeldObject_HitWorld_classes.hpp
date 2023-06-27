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

// BlueprintGeneratedClass GCN_Athena_GenericHeldObject_HitWorld.GCN_Athena_GenericHeldObject_HitWorld_C
// 0x0008 (0x01C0 - 0x01B8)
class UGCN_Athena_GenericHeldObject_HitWorld_C : public UFortGameplayCueNotify_Burst
{
public:
	class USoundBase*                                  Sound_To_Play;                                            // 0x01B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GCN_Athena_GenericHeldObject_HitWorld.GCN_Athena_GenericHeldObject_HitWorld_C");
		
		return ptr;
	}


	void OnBurst(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, TArray<class UParticleSystemComponent*> ParticleComponents, TArray<class UAudioComponent*> AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
