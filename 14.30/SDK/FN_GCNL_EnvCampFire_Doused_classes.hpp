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

// BlueprintGeneratedClass GCNL_EnvCampFire_Doused.GCNL_EnvCampFire_Doused_C
// 0x0038 (0x07F8 - 0x07C0)
class AGCNL_EnvCampFire_Doused_C : public AFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x07C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              Fade_Doused_Smoke_Fade_50A77D974140FDA04967E2BABB987458;  // 0x07C8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Fade_Doused_Smoke__Direction_50A77D974140FDA04967E2BABB987458;// 0x07CC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x07CD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Fade_Doused_Smoke;                                        // 0x07D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FScalableFloat                              Row_Duration;                                             // 0x07D8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GCNL_EnvCampFire_Doused.GCNL_EnvCampFire_Doused_C");
		
		return ptr;
	}


	void Fade_Doused_Smoke__FinishedFunc();
	void Fade_Doused_Smoke__UpdateFunc();
	void OnLoopingStart(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, TArray<class UParticleSystemComponent*> ParticleComponents, TArray<class UAudioComponent*> AudioComponents);
	void OnRemoval(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, TArray<class UParticleSystemComponent*> ParticleComponents, TArray<class UAudioComponent*> AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
	void DestroyOnDestroy(class AActor* DestroyedActor);
	void ExecuteUbergraph_GCNL_EnvCampFire_Doused(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
