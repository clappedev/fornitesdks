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

// BlueprintGeneratedClass BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C
// 0x0233 (0x0B20 - 0x08ED)
class ABGA_Athena_PurpleMouse_Jumper_C : public ABGA_Athena_WithGravity_Parent_C
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x08ED(0x0003) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x08F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                             Proximity_Spin_Sound;                                     // 0x08F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        SM_Cylinder_Beam;                                         // 0x0900(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        VisibleMesh;                                              // 0x0908(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             MeshPivot;                                                // 0x0910(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             AmbientHumAudio;                                          // 0x0918(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            BeepBlinkTrigger;                                         // 0x0920(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            ExplosionTrigger;                                         // 0x0928(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              JumpOut_Rotation_X_2F05E8C8489AA60C8C830FAFF1B78CA0;      // 0x0930(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              JumpOut_Rotation_Z_2F05E8C8489AA60C8C830FAFF1B78CA0;      // 0x0934(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              JumpOut_Lifetime_2F05E8C8489AA60C8C830FAFF1B78CA0;        // 0x0938(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              JumpOut_SpawnRate_2F05E8C8489AA60C8C830FAFF1B78CA0;       // 0x093C(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    JumpOut__Direction_2F05E8C8489AA60C8C830FAFF1B78CA0;      // 0x0940(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0941(0x0007) MISSED OFFSET
	class UTimelineComponent*                          JumpOut;                                                  // 0x0948(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FScalableFloat                              BeepTriggerRadius;                                        // 0x0950(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              TriggerRadius;                                            // 0x0970(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              DamageRadius;                                             // 0x0990(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              MarkPlayers;                                              // 0x09B0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              MarkDuration;                                             // 0x09D0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              TimeToArm;                                                // 0x09F0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              PlayBeepSoundOnArm;                                       // 0x0A10(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       InteractText;                                             // 0x0A30(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               IsExlode_;                                                // 0x0A48(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0A49(0x0003) MISSED OFFSET
	struct FGameplayTag                                CameraShakeGC;                                            // 0x0A4C(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0A54(0x0004) MISSED OFFSET
	TArray<class AActor*>                              ActorsInBeepRadius;                                       // 0x0A58(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                               IsInteract_;                                              // 0x0A68(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0A69(0x0007) MISSED OFFSET
	class USoundBase*                                  ExplodeSound;                                             // 0x0A70(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    BeepParticles;                                            // 0x0A78(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USoundBase*                                  BeepSound;                                                // 0x0A80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UFortWorldItemDefinition*                    ItemToPickUpOnDisarm;                                     // 0x0A88(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UGameplayEffect*                             ExplosionGE;                                              // 0x0A90(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SetMeshMat;                                               // 0x0A98(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0A99(0x0003) MISSED OFFSET
	float                                              JumpHeight;                                               // 0x0A9C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     OriginalLocation;                                         // 0x0AA0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                EnemyParticleColor;                                       // 0x0AAC(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                FriendlyParticleColor;                                    // 0x0ABC(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x0ACC(0x0004) MISSED OFFSET
	class USoundBase*                                  PickupSound;                                              // 0x0AD0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                EnemyEmissiveColor;                                       // 0x0AD8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                FriendlyEmissiveColor;                                    // 0x0AE8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CanPickUp;                                                // 0x0AF8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      MyTeam;                                                   // 0x0AF9(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Jumped;                                                   // 0x0AFA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               TeamHasBeenSet;                                           // 0x0AFB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x0AFC(0x0004) MISSED OFFSET
	class UFortAbilitySystemComponent*                 DamageDealingAbilitySystemComponent;                      // 0x0B00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FGameplayEffectContextHandle                ExplosionEffectContext;                                   // 0x0B08(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C");
		
		return ptr;
	}


	struct FVector GetFocusedSocketLocation();
	bool CanBeSavedToCreativeVolume();
	void GetAllPawns(TArray<class AActor*>* _Array, TArray<class AActor*>* _Result);
	bool Is_in_Infiltration_Mode();
	bool BlueprintGetInteractionTime(class AFortPawn* InteractingPawn, TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted, float* OutInteractionTime);
	void Init(const struct FVector& GravHitNormal);
	void FilterByLOS(TArray<class AActor*>* _Array, TArray<class AActor*>* _Result);
	void CheckLOSAgain(class AActor* ActorToCheckLOSAgainst);
	struct FText BlueprintGetInteractionString(class AFortPawn* InteractingPawn, TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted);
	bool BlueprintCanInteract(class AFortPawn* InteractingPawn, TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted, TEnumAsByte<ETInteractionType> InteractionType);
	void Launch(const struct FVector& LaunchSource, float Amount);
	void UserConstructionScript();
	void JumpOut__FinishedFunc();
	void JumpOut__UpdateFunc();
	void ReceiveBeginPlay();
	void BndEvt__ExplosionTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void JumpIntoExplosion();
	void OnDamageServer(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void BlueprintOnInteract(class AFortPawn* InteractingPawn, TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted);
	void SpawnFXSounds();
	void BndEvt__ExplosionTrigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void Beep(const struct FName& EventName, float EmitterTime, const struct FVector& Location, const struct FVector& Velocity);
	void TriggerBeep();
	void DetachAndLaunch();
	void Explode();
	void TriggerJumpTimeline();
	void Destroyed(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, const struct FName& BoneName, const struct FVector& Momentum);
	void BndEvt__BeepBlinkTrigger_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__BeepBlinkTrigger_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void StopBeep();
	void Damaged(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, const struct FName& BoneName, const struct FVector& Momentum);
	void ResetExplosionTimer();
	void BndEvt__FortWaterInteraction_K2Node_ComponentBoundEvent_4_WaterInteractionOnEnterWater__DelegateSignature(class AFortWaterBodyActor* WaterBody, class UFortWaterInteractionComponent* WaterInteractionComponent, bool bIsFirstBody);
	void StopSim(const struct FHitResult& Hit);
	void Pushback(const struct FVector& V);
	void OnInstigatorDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, const struct FName& BoneName, const struct FVector& Momentum);
	void SetMyTeam(unsigned char Team);
	void ExecuteUbergraph_BGA_Athena_PurpleMouse_Jumper(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
