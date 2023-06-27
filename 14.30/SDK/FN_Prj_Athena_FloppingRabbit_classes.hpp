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

// BlueprintGeneratedClass Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C
// 0x038D (0x0CA1 - 0x0914)
class APrj_Athena_FloppingRabbit_C : public AB_Prj_ThrownConsumable_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0914(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0918(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             LineLoc;                                                  // 0x0920(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_0_NewTrack_0_5E59FE3C4CA5776FE578F391478AB1A6;   // 0x0928(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_5E59FE3C4CA5776FE578F391478AB1A6;   // 0x092C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x092D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_1;                                               // 0x0930(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              BigBob_BigDip_9789CB934FE6D3F1A956D993031B4307;           // 0x0938(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    BigBob__Direction_9789CB934FE6D3F1A956D993031B4307;       // 0x093C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x093D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          BigBob;                                                   // 0x0940(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FHitResult                                  NullHit;                                                  // 0x0948(0x008C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    WaterRotation;                                            // 0x09D4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     MeshLocAfterHit;                                          // 0x09E0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ChanceForBigBob;                                          // 0x09EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<TEnumAsByte<EObjectTypeQuery>>              ObjectTypes;                                              // 0x09F0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              DistanceCheckInterval;                                    // 0x0A00(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0A04(0x0004) MISSED OFFSET
	class AActor*                                      Spawner;                                                  // 0x0A08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              StartingCatchBigBobChance;                                // 0x0A10(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Delay_CatchWindow;                                        // 0x0A14(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CanCatch;                                                 // 0x0A18(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               InWater;                                                  // 0x0A19(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x6];                                       // 0x0A1A(0x0006) MISSED OFFSET
	class AFortPlayerPawn*                             PlayerPawn;                                               // 0x0A20(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AB_Athena_FloppingRabbit_Wire_C*             Wire;                                                     // 0x0A28(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTag                                Event_Fire;                                               // 0x0A30(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                Event_InWorld;                                            // 0x0A38(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              MaxDistanceFromPlayer;                                    // 0x0A40(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DefaultSpawner;                                           // 0x0A44(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0A45(0x0003) MISSED OFFSET
	float                                              IncreaseBigBobChanceAmount;                               // 0x0A48(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x0A4C(0x0004) MISSED OFFSET
	struct FScalableFloat                              Row_ChanceForBigBob;                                      // 0x0A50(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              Row_ChanceForBigBobIncrease;                              // 0x0A70(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              Row_CatchWindow;                                          // 0x0A90(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UParticleSystem*                             FX_HitWater;                                              // 0x0AB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     FXScaleHitWater;                                          // 0x0AB8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x0AC4(0x0004) MISSED OFFSET
	class USoundBase*                                  Sound_HitWater;                                           // 0x0AC8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             FX_WaterDip;                                              // 0x0AD0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UNiagaraSystem*                              NS_FX_HitWater;                                           // 0x0AD8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UNiagaraSystem*                              NS_FX_SpawnItems;                                         // 0x0AE0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UNiagaraSystem*                              NS_FX_WaterDip;                                           // 0x0AE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UNiagaraSystem*                              NS_FX_WaterDip_HighTier;                                  // 0x0AF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             FX_WaterDip_HighTier;                                     // 0x0AF8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     FXScaleWaterDip;                                          // 0x0B00(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x0B0C(0x0004) MISSED OFFSET
	class USoundBase*                                  Sound_WaterDip;                                           // 0x0B10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTag                                Event_ProjDestroyed;                                      // 0x0B18(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                Event_Hooked;                                             // 0x0B20(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              Row_DistanceCheck;                                        // 0x0B28(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              Row_DistanceCheckZ;                                       // 0x0B48(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               Dipping;                                                  // 0x0B68(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x7];                                       // 0x0B69(0x0007) MISSED OFFSET
	class AActor*                                      SpawnedDefaultSpawner;                                    // 0x0B70(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FScalableFloat                              Row_BobChanceDelayMin;                                    // 0x0B78(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              Row_BobChanceDelayMax;                                    // 0x0B98(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               SpawnedItem;                                              // 0x0BB8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x7];                                       // 0x0BB9(0x0007) MISSED OFFSET
	class ABP_FluidSim_FN_C*                           FluidSim;                                                 // 0x0BC0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Sound_WaterDip_HighTier;                                  // 0x0BC8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               WorldSpawner;                                             // 0x0BD0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x7];                                       // 0x0BD1(0x0007) MISSED OFFSET
	class UParticleSystem*                             FX_SpawnItems;                                            // 0x0BD8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Sound_SpawnItems;                                         // 0x0BE0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ItemAttachMinDist;                                        // 0x0BE8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ItemAttachDistanceRequirement;                            // 0x0BEC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bStartedFishingSession;                                   // 0x0BF0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x3];                                       // 0x0BF1(0x0003) MISSED OFFSET
	float                                              BounceOutOfWaterDelay;                                    // 0x0BF4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTag                                Event_Unhooked;                                           // 0x0BF8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector                                     TowardPlayerVector;                                       // 0x0C00(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     BobberStartLocation;                                      // 0x0C0C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Target;                                                   // 0x0C18(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData13[0x4];                                       // 0x0C24(0x0004) MISSED OFFSET
	struct FFortAIAssignmentIdentifier                 AIAssignmentIdentifier;                                   // 0x0C28(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UFortAIAssignmentSettings*                   AIAssignmentSettings;                                     // 0x0C58(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       TetherSocket;                                             // 0x0C60(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bTetherCanChangeWeapons;                                  // 0x0C68(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData14[0x7];                                       // 0x0C69(0x0007) MISSED OFFSET
	struct FGameplayTagContainer                       FishingRodTag;                                            // 0x0C70(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class AB_Athena_FloppingRabbit_Wire_C*             FloppingRabbitWire;                                       // 0x0C90(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTag                                GC_MiniGameSplash;                                        // 0x0C98(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               bDidHitMeatball;                                          // 0x0CA0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C");
		
		return ptr;
	}


	struct FName DetermineFishLootTierNameAndSetLootForSpawner(bool bIsExplosion);
	void IgnoreTetherablePawn(class AActor* HitActor, bool* isIgnored);
	void UnRegisterWithGoalManager();
	void RegisterWithGoalManager();
	void AttemptTether(class AActor* HitActor, bool* bTethered);
	void GetSheetVals();
	void BigBob__FinishedFunc();
	void BigBob__UpdateFunc();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void FullDip(bool InWorldSpawner);
	void CatchWindow();
	void TryCatch();
	void HideAndKill();
	void ReceiveBeginPlay();
	void DistanceCheck();
	void ForceKill();
	void OnExploded(TArray<class AActor*> HitActors, TArray<struct FHitResult> HitResults);
	void HitWater(bool FishSpawner);
	void ReceiveDestroyed();
	void CheckForDip();
	void CheckForHighTierSpawner();
	void SpawnItemsFX();
	void CustomPickupAttach(class AFortPickup* FortPickup);
	void WriteNothingCaughtFishingAnalytic();
	void BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnExitWater__DelegateSignature(class AFortWaterBodyActor* WaterBody, class UFortWaterInteractionComponent* WaterInteractionComponent, bool bIsLastBody);
	void ReelIn();
	void ServerAttemptTether(class APawn* TetherActor);
	void Minigame_MoveBobber();
	void DipFx();
	void ReceiveTick(float DeltaSeconds);
	void ClientReelIn();
	void ToggleMiniGameSplashLoop(bool On);
	void ExecuteUbergraph_Prj_Athena_FloppingRabbit(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
