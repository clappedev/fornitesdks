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

// BlueprintGeneratedClass AthenaSupplyDrop.AthenaSupplyDrop_C
// 0x01A0 (0x0A70 - 0x08D0)
class AAthenaSupplyDrop_C : public AFortAthenaSupplyDrop
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x08D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USphereComponent*                            WaterCollisionSphere;                                     // 0x08D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFortProjectileMovementComponent*            FortProjectileMovement;                                   // 0x08E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFortWaterInteractionComponent*              FortWaterInteraction;                                     // 0x08E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             FallingAudio;                                             // 0x08F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    ReticlePSC;                                               // 0x08F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               CrateCollision;                                           // 0x0900(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UChildActorComponent*                        ChildActor;                                               // 0x0908(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             FlareAudio;                                               // 0x0910(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    FlarePSC;                                                 // 0x0918(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             ReticleAudio;                                             // 0x0920(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        CrateStaticMesh;                                          // 0x0928(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AFortPawn*                                   MyInteractingPawn;                                        // 0x0930(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       LootTableName;                                            // 0x0938(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LootSpawnOffset;                                          // 0x0940(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x094C(0x0004) MISSED OFFSET
	class USoundBase*                                  Sound_Looted;                                             // 0x0950(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Sound_Destroyed;                                          // 0x0958(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Sound_Landing;                                            // 0x0960(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Opened;                                                   // 0x0968(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BalloonPopped;                                            // 0x0969(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x096A(0x0006) MISSED OFFSET
	class UParticleSystem*                             LandingFX;                                                // 0x0970(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             DestroyedFX;                                              // 0x0978(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             LootedFX;                                                 // 0x0980(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FallSpeed;                                                // 0x0988(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ReticleUpdateInterval;                                    // 0x098C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InitialFallDelay;                                         // 0x0990(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0994(0x0004) MISSED OFFSET
	struct FCurveTableRowHandle                        CurveTable_FallTime;                                      // 0x0998(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UParticleSystem*                             FallTrailFX;                                              // 0x09A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Sound_Appear;                                             // 0x09B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Sound_ReticleAppear;                                      // 0x09B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Sound_AlmostLanded;                                       // 0x09C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LandingLocation;                                          // 0x09C8(0x000C) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AutoOpen;                                                 // 0x09D4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x09D5(0x0003) MISSED OFFSET
	float                                              FallHeight;                                               // 0x09D8(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DescentOffsetMin;                                         // 0x09DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DescentOffsetMax;                                         // 0x09E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     FallDirection;                                            // 0x09E4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     GroundLocation;                                           // 0x09F0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DescentYOffsetMin;                                        // 0x09FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DescentYOffsetMax;                                        // 0x0A00(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bGroundLocationInitialized;                               // 0x0A04(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bOverrideRotation;                                        // 0x0A05(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x0A06(0x0002) MISSED OFFSET
	struct FRotator                                    OverrideRotation;                                         // 0x0A08(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x0A14(0x0004) MISSED OFFSET
	struct FTimerHandle                                NewVar_1;                                                 // 0x0A18(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               BlingDrop;                                                // 0x0A20(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0A21(0x0003) MISSED OFFSET
	struct FName                                       LootTableNameToUse;                                       // 0x0A24(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x0A2C(0x0004) MISSED OFFSET
	class AFortAthenaVehicle*                          VehicleType;                                              // 0x0A30(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                FallingAudioCheckTimerHandle;                             // 0x0A38(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              PlayerDistanceCheckTimeLoop;                              // 0x0A40(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               InfDrop;                                                  // 0x0A44(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x0A45(0x0003) MISSED OFFSET
	class USoundBase*                                  Sound_Looted_Inf;                                         // 0x0A48(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Sound_Appear_Dialogue;                                    // 0x0A50(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FFortItemEntry>                      DelayedSpawnLoot;                                         // 0x0A58(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              RandomSpawnRangeMin;                                      // 0x0A68(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RandomSpawnRangeMax;                                      // 0x0A6C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AthenaSupplyDrop.AthenaSupplyDrop_C");
		
		return ptr;
	}


	void SpawnVehicle();
	void Analytics(TArray<struct FFortItemEntry> ItemsToSpawn);
	void OnSetCustomDepthStencilValue(TArray<class UPrimitiveComponent*> PrimComponents, bool bUseCustomDepth, int StencilValue, bool* bOutConsume);
	void HandleProjectileMovementStop(const struct FHitResult& ImpactResult);
	void ForceSetLocationOnLanding();
	void OnRep_LandingLocation();
	void AlmostLanded();
	void DisableFlare();
	void InitFallHeightAndSpeed();
	void PlayLandingFX(bool bSpawnVFX);
	void InitFall();
	void OnRep_BalloonPopped();
	void BalloonDestroyed();
	void UpdateReticleLocation();
	void OpenSupplyDrop();
	void OnRep_Opened();
	void Setup_Bind_To_Building_Actor(class UObject* Object);
	struct FText BlueprintGetInteractionString(class AFortPawn* InteractingPawn, TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted);
	void GetLootSpawnLocation(struct FVector* LootSpawnLocation);
	void SpawnLoot();
	bool BlueprintCanInteract(class AFortPawn* InteractingPawn, TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted, TEnumAsByte<ETInteractionType> InteractionType);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnLandingLocationChanged(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, const struct FName& BoneName, const struct FVector& Momentum);
	void Multicast_ApplyGravityForFall();
	void OnDeathServer(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void BlueprintOnInteract(class AFortPawn* InteractingPawn, TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted);
	void OnDeathPlayEffects(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void BeginFallAudioTimeline();
	void StopFallAudioTimeline();
	void OnLanding();
	void TimerCheckPlayerDistance();
	void DestroyGroundComponents();
	void Play_Looted_Dialogue();
	void BndEvt__FortProjectileMovement_K2Node_ComponentBoundEvent_2_OnProjectileStopDelegate__DelegateSignature(const struct FHitResult& ImpactResult);
	void SetupQuestData();
	void BndEvt__FortWaterInteraction_K2Node_ComponentBoundEvent_3_WaterInteractionOnEnterWater__DelegateSignature(class AFortWaterBodyActor* WaterBody, class UFortWaterInteractionComponent* WaterInteractionComponent, bool bIsFirstBody);
	void OnDelayedSpawnLoot();
	void ExecuteUbergraph_AthenaSupplyDrop(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
