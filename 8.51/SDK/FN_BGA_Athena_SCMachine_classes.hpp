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

// BlueprintGeneratedClass BGA_Athena_SCMachine.BGA_Athena_SCMachine_C
// 0x0250 (0x0A20 - 0x07D0)
class ABGA_Athena_SCMachine_C : public ABuildingGameplayActorSpawnMachine
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x07D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                             SC_Machine_Cooldown_Cue_End;                              // 0x07D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             SC_Machine_Cooldown_Cue;                                  // 0x07E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    P_SCMachine_HoloLogo;                                     // 0x07E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USpotLightComponent*                         HeadlightR;                                               // 0x07F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USpotLightComponent*                         HeadlightL;                                               // 0x07F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    P_SCMachine_PedestalGlow;                                 // 0x0800(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             ActivateSound;                                            // 0x0808(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             AmbientSound;                                             // 0x0810(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCapsuleComponent*                           BlockingVolume;                                           // 0x0818(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UChildActorComponent*                        ResurrectionLocation;                                     // 0x0820(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        PadCollision;                                             // 0x0828(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Van;                                                      // 0x0830(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               InteractionBox;                                           // 0x0838(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              LightFlash_LightBrightness;                               // 0x0840(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    LightFlash__Direction;                                    // 0x0844(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0845(0x0003) MISSED OFFSET
	class UTimelineComponent*                          LightFlash;                                               // 0x0848(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     WarpVan_Scale;                                            // 0x0850(0x000C) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    WarpVan__Direction;                                       // 0x085C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x085D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          WarpVan;                                                  // 0x0860(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystem*                             SpawnInParticle;                                          // 0x0868(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     SpawnInParticleOffset;                                    // 0x0870(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     MannequinTransitionOffset;                                // 0x087C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FXDoneDelay;                                              // 0x0888(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x088C(0x0004) MISSED OFFSET
	TArray<class AActor*>                              PawnsBehindVan;                                           // 0x0890(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	struct FTimerHandle                                Timer_Cooldown;                                           // 0x08A0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              FXDelayThenBotSpawn;                                      // 0x08A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                VanState;                                                 // 0x08AC(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    ScreensMaterial;                                          // 0x08B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScalableFloat                              Row_DestroyIfOff;                                         // 0x08B8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              PlayRate;                                                 // 0x08D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              XYKnockAmountPlayer;                                      // 0x08DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ZKnockAmountPlayer;                                       // 0x08E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x08E4(0x0004) MISSED OFFSET
	class USoundBase*                                  DefaultAmbientAudio;                                      // 0x08E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  CooldownAmbientAudio;                                     // 0x08F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DelayBeforeCooldown;                                      // 0x08F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x08FC(0x0004) MISSED OFFSET
	struct FScalableFloat                              Row_RespawnTime;                                          // 0x0900(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              Row_InteractTime;                                         // 0x0920(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               RepServerInteract;                                        // 0x0940(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0941(0x0007) MISSED OFFSET
	class UFortWorldItemDefinition*                    WeaponToGive;                                             // 0x0948(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UFortWorldItemDefinition*                    MatsToGive;                                               // 0x0950(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MatNumberToGive;                                          // 0x0958(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                AmmoNumberToGive;                                         // 0x095C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FText                                       FailedTextNoCard;                                         // 0x0960(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UFortWorldItemDefinition*                    AmmoToGive;                                               // 0x0978(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                SoundIndicatorTint;                                       // 0x0980(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTexture*                                    SoundIndicatorIcon;                                       // 0x0990(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  SoundIndicatorSoundRef;                                   // 0x0998(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FText                                       FailedTextRecharging;                                     // 0x09A0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       FailedTextRebooting;                                      // 0x09B8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       PassedText;                                               // 0x09D0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UMaterialInstanceDynamic*                    VanBodyMaterial;                                          // 0x09E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HeadlightIntensity;                                       // 0x09F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Did_Horn_Play_;                                           // 0x09F4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x09F5(0x0003) MISSED OFFSET
	TArray<class AFortPlayerControllerAthena*>         PlayersInteracting;                                       // 0x09F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	struct FName                                       GrantedItemsLootTier;                                     // 0x0A08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HeightCheckForSkydive;                                    // 0x0A10(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ZKnockAmountVehicle;                                      // 0x0A14(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              XYKnockAmountVehicle;                                     // 0x0A18(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InvincibleVisualsDuration;                                // 0x0A1C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BGA_Athena_SCMachine.BGA_Athena_SCMachine_C");
		return ptr;
	}


	void KnockVehicles();
	void GiveWeaponsAndResources(class AFortPlayerController* FortPC);
	bool ShouldDie(float Damage, class AController* EventInstigator, class AActor* DamageCauser);
	void CheckQuestCredit();
	struct FText BlueprintGetFailedInteractionString(class AFortPawn* InteractingPawn);
	void OnRep_RepServerInteract();
	void UpdateScreen();
	void KnockPlayerPawns(class AActor* IgnoreKnock);
	struct FText BlueprintGetInteractionString(class AFortPawn* InteractingPawn);
	bool BlueprintCanInteract(class AFortPawn* InteractingPawn);
	void UserConstructionScript();
	void WarpVan__FinishedFunc();
	void WarpVan__UpdateFunc();
	void LightFlash__FinishedFunc();
	void LightFlash__UpdateFunc();
	void OnPlayerPawnResurrected(class AFortPlayerPawn* PlayerPawn);
	void OnResurrectionStarted();
	void OnResurrectionCompleted();
	void ReceiveBeginPlay();
	void HandleAmbientSound();
	void BndEvt__BlockingVolume_K2Node_ComponentBoundEvent(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult);
	void TriggerRespawnFX(class AFortPawn* PhaseInPawn);
	void OnBeginLongUse(class AFortPlayerControllerAthena* AthenaPC);
	void OnInterruptLongUse(class AFortPlayerControllerAthena* AthenaPC);
	void OnSpawnMachineStateChanged();
	void ToggleHologram(bool TurnOn);
	void CooldownTimer();
	void StartCooldown();
	void Play_Horn_Sound();
	void Update_Cooldown_Sound();
	void SkydiveIfAirborne(class AFortPlayerPawn* Player);
	void InteactComplete(class AFortPawn* InteractingPawn);
	void ExecuteUbergraph_BGA_Athena_SCMachine(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
