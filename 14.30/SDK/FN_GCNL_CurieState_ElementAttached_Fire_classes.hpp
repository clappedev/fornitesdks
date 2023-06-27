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

// BlueprintGeneratedClass GCNL_CurieState_ElementAttached_Fire.GCNL_CurieState_ElementAttached_Fire_C
// 0x004D (0x080D - 0x07C0)
class AGCNL_CurieState_ElementAttached_Fire_C : public AFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x07C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                           BodyFlamesParticleSystem;                                 // 0x07C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             OnFireAudioComponent;                                     // 0x07D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USoundBase*                                  SoundOnPlayerLoop;                                        // 0x07D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USkeletalMeshComponent*                      PawnSkeletalMesh;                                         // 0x07E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class APlayerPawn_Athena_C*                        Pawn;                                                     // 0x07E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                FadeBodyFXTimerHandle;                                    // 0x07F0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              FadeInDuration;                                           // 0x07F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EB_Enum_PlayerFireStates>              PlayerFireState;                                          // 0x07FC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x07FD(0x0003) MISSED OFFSET
	class UNiagaraComponent*                           BodyFXParticleSystem;                                     // 0x0800(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              FadeOutDuration;                                          // 0x0808(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EB_Enum_PlayerFireStates>              PreviousPlayerFireState;                                  // 0x080C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GCNL_CurieState_ElementAttached_Fire.GCNL_CurieState_ElementAttached_Fire_C");
		
		return ptr;
	}


	void FadeOnFireAudioComponent();
	void ClearAllHandles();
	void UpdatePlayerVisualsByState(TEnumAsByte<EB_Enum_PlayerFireStates> PlayerState);
	void DeactivateBodyFX();
	void ActivateBodyFX();
	void OnCurieStateChanged(class UObject* Owner, const struct FCurieContainerHandle& ContainerHandle, const struct FGameplayTag& StateIdentifier);
	void GetPlayerFireState(TEnumAsByte<EB_Enum_PlayerFireStates>* Player_State);
	void SetBodyFXParameters(TEnumAsByte<EB_Enum_PlayerFireStates> PreviousPlayerFireState);
	void OnRemoval(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, TArray<class UParticleSystemComponent*> ParticleComponents, TArray<class UAudioComponent*> AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
	void OnApplication(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, TArray<class UParticleSystemComponent*> ParticleComponents, TArray<class UAudioComponent*> AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
	void FadeBodyFXOut();
	void ExecuteUbergraph_GCNL_CurieState_ElementAttached_Fire(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
