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

// BlueprintGeneratedClass BGA_AppleSun_Apple_Athena.BGA_AppleSun_Apple_Athena_C
// 0x0334 (0x0AF4 - 0x07C0)
class ABGA_AppleSun_Apple_Athena_C : public ABuildingGameplayActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x07C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                               PlayerDetector;                                           // 0x07C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             Applesun_Activate;                                        // 0x07D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             AppleSun_Warning_Loop_01;                                 // 0x07D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFortLinkToActorComponent*                   FortLinkToActor;                                          // 0x07E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               SidesPawnBlocker;                                         // 0x07E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Pad;                                                      // 0x07F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               Box;                                                      // 0x07F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    P_AppleSun_Spawn;                                         // 0x0800(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    P_AppleSun_DespawnTell;                                   // 0x0808(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              BeginDeflate_NewTrack_0_E511D36F4D2E46D8AE33548AA66A76B4; // 0x0810(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    BeginDeflate__Direction_E511D36F4D2E46D8AE33548AA66A76B4; // 0x0814(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0815(0x0003) MISSED OFFSET
	class UTimelineComponent*                          BeginDeflate;                                             // 0x0818(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     Destroy_Scale_A5AFC0D0430E50F432FB2FB260534172;           // 0x0820(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              Destroy_Deflate_A5AFC0D0430E50F432FB2FB260534172;         // 0x082C(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Destroy__Direction_A5AFC0D0430E50F432FB2FB260534172;      // 0x0830(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0831(0x0007) MISSED OFFSET
	class UTimelineComponent*                          Destroy;                                                  // 0x0838(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FScalableFloat                              GrowthStart;                                              // 0x0840(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               OverlapLaunchesActivated;                                 // 0x0860(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0861(0x0007) MISSED OFFSET
	class UCurveFloat*                                 LaunchCurve;                                              // 0x0868(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                LifespanTimer;                                            // 0x0870(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTimerHandle                                TimeoutTellTimer;                                         // 0x0878(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UCurveFloat*                                 LaunchAngleWeight;                                        // 0x0880(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     StartScale;                                               // 0x0888(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTag                                SpawnFeedbackGC;                                          // 0x0894(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                DeathFeedbackGC;                                          // 0x089C(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	unsigned char                                      UnknownData03[0x4];                                       // 0x08A4(0x0004) MISSED OFFSET
	struct FGameplayTagContainer                       T_Quest_AppleSun_Use;                                     // 0x08A8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector                                     WaterLocation;                                            // 0x08C8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     BounceLocation;                                           // 0x08D4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAudioComponent*                             NewVar_1;                                                 // 0x08E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FScalableFloat                              GrowthEnd;                                                // 0x08E8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              MinLaunch;                                                // 0x0908(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              MaxLaunch;                                                // 0x0928(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              VehicleLaunchMultiplierXY;                                // 0x0948(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              VehicleLaunchMultiplierZ;                                 // 0x0968(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              ProjectileLaunchMultiplierXY;                             // 0x0988(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              ProjectileLaunchMultiplierZ;                              // 0x09A8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              Lifespan_;                                                // 0x09C8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              TimeoutTellDuration_;                                     // 0x09E8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              HorizontalLaunch;                                         // 0x0A08(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              MinNonPawnVelocity;                                       // 0x0A28(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxNonPawnVelocity;                                       // 0x0A2C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      LinkedActor;                                              // 0x0A30(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TMap<class AFortPawn*, float>                      TrackedPlayers;                                           // 0x0A38(0x0050) (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_Crashpad_;                                             // 0x0A88(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              MinLaunch_Crashpad_;                                      // 0x0AA8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              MaxLaunch_Crashpad_;                                      // 0x0AC8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               HasLifespan;                                              // 0x0AE8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsWorldPlaced;                                            // 0x0AE9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UsesCollisionTimer;                                       // 0x0AEA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DestroyByShark;                                           // 0x0AEB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTag                                Tag_BuildingPhysics;                                      // 0x0AEC(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BGA_AppleSun_Apple_Athena.BGA_AppleSun_Apple_Athena_C");
		
		return ptr;
	}


	struct FVector Get_Launch_Reference_Vector(class ACharacter* Fort_Pawn);
	void CheckForSpyPerk(bool* HasPerk);
	void UserConstructionScript();
	void BeginDeflate__FinishedFunc();
	void BeginDeflate__UpdateFunc();
	void Destroy__FinishedFunc();
	void Destroy__UpdateFunc();
	void ReceiveBeginPlay();
	void BounceMulticast(const struct FVector& position, float BounceIntensity);
	void DespawnTell();
	void BndEvt__Box_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void DestroyPad();
	void OnDeathPlayEffects(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void BndEvt__FortLinkToActor_K2Node_ComponentBoundEvent_0_OnLinkedActorDestroyed__DelegateSignature();
	void BndEvt__PlayerDetector_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__PlayerDetector_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void CatchObjectsInside();
	void LaunchBuldingActors(class AActor* Actor);
	void ExecuteUbergraph_BGA_AppleSun_Apple_Athena(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
