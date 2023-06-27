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

// BlueprintGeneratedClass GCNL_Athena_Tether.GCNL_Athena_Tether_C
// 0x0074 (0x0834 - 0x07C0)
class AGCNL_Athena_Tether_C : public AFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x07C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UFortLayeredAudioComponent*                  FortLayeredAudio;                                         // 0x07C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UNiagaraComponent*                           LandFX;                                                   // 0x07D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UNiagaraComponent*                           WaterFX;                                                  // 0x07D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        RightSki;                                                 // 0x07E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        LeftSki;                                                  // 0x07E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              ScaleInSkis_SkiScalar_93783D4A4F91BF9F887B16977978DDB4;   // 0x07F0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    ScaleInSkis__Direction_93783D4A4F91BF9F887B16977978DDB4;  // 0x07F4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x07F5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          ScaleInSkis;                                              // 0x07F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AFortPlayerPawn*                             OwningFPP;                                                // 0x0800(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsInWater;                                                // 0x0808(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0809(0x0003) MISSED OFFSET
	float                                              NormalizedSpeed;                                          // 0x080C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TurnSpeed;                                                // 0x0810(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0814(0x0004) MISSED OFFSET
	class AEmitterCameraLensEffectBase*                CameraLensEffect;                                         // 0x0818(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              ForceFeedbackIntensity;                                   // 0x0820(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0824(0x0004) MISSED OFFSET
	struct FTimerHandle                                ScaleInSkisTimerHandle;                                   // 0x0828(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              SkiScaleInDelay;                                          // 0x0830(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GCNL_Athena_Tether.GCNL_Athena_Tether_C");
		
		return ptr;
	}


	bool OnRemove(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	bool WhileActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	void UpdateAudio(int Surface);
	void ScaleInSkis__FinishedFunc();
	void ScaleInSkis__UpdateFunc();
	void ReceiveTick(float DeltaSeconds);
	void OnApplication(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, TArray<class UParticleSystemComponent*> ParticleComponents, TArray<class UAudioComponent*> AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
	void OnRemoval(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, TArray<class UParticleSystemComponent*> ParticleComponents, TArray<class UAudioComponent*> AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
	void BndEvt__FortLayeredAudio_K2Node_ComponentBoundEvent_0_OnLayeredAudioComponentOneshot__DelegateSignature(class UAudioComponent* AudioComponent, const struct FName& ParameterName, int OneshotIndex);
	void StartFF();
	void UpdateFF();
	void StopFF();
	void InitializeTetherGCNL(class UObject* Object);
	void ReceiveBeginPlay();
	void ScaleInSkisForPlayer();
	void ExecuteUbergraph_GCNL_Athena_Tether(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
