#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x0 (0x1A0 - 0x1A0)
// BlueprintGeneratedClass GCN_Athena_Ostrich_Jump_OnRelease.GCN_Athena_Ostrich_Jump_OnRelease_C
class UGCN_Athena_Ostrich_Jump_OnRelease_C : public UFortGameplayCueNotify_Burst
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GCN_Athena_Ostrich_Jump_OnRelease_C");
		return Clss;
	}

	void OnBurst(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UParticleSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance, class UParticleSystemComponent* CallFunc_Array_Get_Item, class ATestMechVehicle_C* K2Node_DynamicCast_AsTest_Mech_Vehicle, bool K2Node_DynamicCast_bSuccess, class USkeletalMeshComponent* CallFunc_GetMechMesh_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
