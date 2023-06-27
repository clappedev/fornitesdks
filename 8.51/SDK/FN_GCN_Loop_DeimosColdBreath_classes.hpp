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

// BlueprintGeneratedClass GCN_Loop_DeimosColdBreath.GCN_Loop_DeimosColdBreath_C
// 0x0018 (0x07A8 - 0x0790)
class AGCN_Loop_DeimosColdBreath_C : public AFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0790(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystem*                             LoopingSnow;                                              // 0x0798(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    ActiveLoopingSnow;                                        // 0x07A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GCN_Loop_DeimosColdBreath.GCN_Loop_DeimosColdBreath_C");
		return ptr;
	}


	void OnLoopingStart(class AActor* MyTarget, struct FGameplayCueParameters Parameters, TArray<class UParticleSystemComponent*> ParticleComponents, TArray<class UAudioComponent*> AudioComponents);
	void OnRemoval(class AActor* MyTarget, struct FGameplayCueParameters Parameters, TArray<class UParticleSystemComponent*> ParticleComponents, TArray<class UAudioComponent*> AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
	void Begin_Overlap(class AActor* OverlappedActor, class AActor* OtherActor);
	void End_Overlap(class AActor* OverlappedActor, class AActor* OtherActor);
	void ExecuteUbergraph_GCN_Loop_DeimosColdBreath(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
