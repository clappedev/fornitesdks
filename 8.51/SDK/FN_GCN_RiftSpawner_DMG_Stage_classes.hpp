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

// BlueprintGeneratedClass GCN_RiftSpawner_DMG_Stage.GCN_RiftSpawner_DMG_Stage
// 0x0008 (0x0798 - 0x0790)
class AGCN_RiftSpawner_DMG_Stage : public AFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0790(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GCN_RiftSpawner_DMG_Stage.GCN_RiftSpawner_DMG_Stage");
		return ptr;
	}


	void ReceiveBeginPlay();
	void OnLoopingStart(class AActor* MyTarget, struct FGameplayCueParameters Parameters, TArray<class UParticleSystemComponent*> ParticleComponents, TArray<class UAudioComponent*> AudioComponents);
	void ExecuteUbergraph_GCN_RiftSpawner_DMG_Stage(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
