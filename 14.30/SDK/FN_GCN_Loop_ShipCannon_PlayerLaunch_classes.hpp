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

// BlueprintGeneratedClass GCN_Loop_ShipCannon_PlayerLaunch.GCN_Loop_ShipCannon_PlayerLaunch_C
// 0x0008 (0x07C8 - 0x07C0)
class AGCN_Loop_ShipCannon_PlayerLaunch_C : public AFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x07C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GCN_Loop_ShipCannon_PlayerLaunch.GCN_Loop_ShipCannon_PlayerLaunch_C");
		
		return ptr;
	}


	void OnLoopingStart(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, TArray<class UParticleSystemComponent*> ParticleComponents, TArray<class UAudioComponent*> AudioComponents);
	void OnRemoval(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, TArray<class UParticleSystemComponent*> ParticleComponents, TArray<class UAudioComponent*> AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
	void ExecuteUbergraph_GCN_Loop_ShipCannon_PlayerLaunch(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
