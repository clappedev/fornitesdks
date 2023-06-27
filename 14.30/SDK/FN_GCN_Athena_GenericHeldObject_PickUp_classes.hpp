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

// BlueprintGeneratedClass GCN_Athena_GenericHeldObject_PickUp.GCN_Athena_GenericHeldObject_PickUp_C
// 0x0008 (0x01C0 - 0x01B8)
class UGCN_Athena_GenericHeldObject_PickUp_C : public UFortGameplayCueNotify_Burst
{
public:
	class USoundBase*                                  Pick_Up_Sound;                                            // 0x01B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GCN_Athena_GenericHeldObject_PickUp.GCN_Athena_GenericHeldObject_PickUp_C");
		
		return ptr;
	}


	void OnBurst(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, TArray<class UParticleSystemComponent*> ParticleComponents, TArray<class UAudioComponent*> AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif