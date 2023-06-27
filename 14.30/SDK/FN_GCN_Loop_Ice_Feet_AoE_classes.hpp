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

// BlueprintGeneratedClass GCN_Loop_Ice_Feet_AoE.GCN_Loop_Ice_Feet_AoE_C
// 0x00A8 (0x0868 - 0x07C0)
class AGCN_Loop_Ice_Feet_AoE_C : public AFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x07C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              Duration;                                                 // 0x07C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ExpirationTellDuration;                                   // 0x07CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AFortPlayerPawn*                             TargetPlayer;                                             // 0x07D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                ExpireTellDelayTimer;                                     // 0x07D8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTimerHandle                                ExpirationSoundTimer;                                     // 0x07E0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              ExpirationSoundPeriod;                                    // 0x07E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x07EC(0x0004) MISSED OFFSET
	TArray<class UParticleSystemComponent*>            SpawnedEmitters;                                          // 0x07F0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              Crack;                                                    // 0x0800(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0804(0x0004) MISSED OFFSET
	struct FScalableFloat                              DataTellDuration;                                         // 0x0808(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class USoundBase*                                  SC_Footstep_Local;                                        // 0x0828(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  SC_Footstep_Remote;                                       // 0x0830(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  SC_Collision;                                             // 0x0838(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UFortCollisionAudioComponent*                CollisionAudioComp;                                       // 0x0840(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	TArray<class UAudioComponent*>                     SpawnedAudioComps;                                        // 0x0848(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	class USoundBase*                                  SC_OnJumpOrBeginFalling;                                  // 0x0858(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  SC_OnLand;                                                // 0x0860(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GCN_Loop_Ice_Feet_AoE.GCN_Loop_Ice_Feet_AoE_C");
		
		return ptr;
	}


	void OnLoopingStart(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, TArray<class UParticleSystemComponent*> ParticleComponents, TArray<class UAudioComponent*> AudioComponents);
	void OnRemoval(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, TArray<class UParticleSystemComponent*> ParticleComponents, TArray<class UAudioComponent*> AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
	void BeginExpireTell();
	void ClearExpireTell();
	void ExpireWarningTick();
	void On_Player_Step();
	void On_Target_Pawn_Hit_Event(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void ReceiveTick(float DeltaSeconds);
	void On_Target_Pawn_Landed(const struct FHitResult& Hit);
	void On_Target_Pawn_Movement_Mode_Changed(class ACharacter* Character, TEnumAsByte<EMovementMode> PrevMovementMode, unsigned char PreviousCustomMode);
	void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void ExecuteUbergraph_GCN_Loop_Ice_Feet_AoE(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
