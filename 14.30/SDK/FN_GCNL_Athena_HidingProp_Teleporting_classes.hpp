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

// BlueprintGeneratedClass GCNL_Athena_HidingProp_Teleporting.GCNL_Athena_HidingProp_Teleporting_C
// 0x0028 (0x07E8 - 0x07C0)
class AGCNL_Athena_HidingProp_Teleporting_C : public AFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x07C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              Timeline_0_LerpWhiteWash_3C12694840EC8C9B33E562A2C6B279BA;// 0x07C8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_3C12694840EC8C9B33E562A2C6B279BA;   // 0x07CC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x07CD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_1;                                               // 0x07D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AEmitterCameraLensEffectBase*                LensEffect;                                               // 0x07D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UAudioComponent*                             _1PTravelAudio;                                           // 0x07E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GCNL_Athena_HidingProp_Teleporting.GCNL_Athena_HidingProp_Teleporting_C");
		
		return ptr;
	}


	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void Timeline_0__DoFlash__EventFunc();
	void OnLoopingStart(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, TArray<class UParticleSystemComponent*> ParticleComponents, TArray<class UAudioComponent*> AudioComponents);
	void OnRemoval(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, TArray<class UParticleSystemComponent*> ParticleComponents, TArray<class UAudioComponent*> AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
	void ExecuteUbergraph_GCNL_Athena_HidingProp_Teleporting(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
