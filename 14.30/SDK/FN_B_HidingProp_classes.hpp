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

// BlueprintGeneratedClass B_HidingProp.B_HidingProp_C
// 0x02C8 (0x0EA0 - 0x0BD8)
class AB_HidingProp_C : public ABuildingProp
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0BD8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             ProjectileLocation_ForwardVector;                         // 0x0BE0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        LandedOnCollisionMesh;                                    // 0x0BE8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            Sphere;                                                   // 0x0BF0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             HideLocation_ForwardVector;                               // 0x0BF8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FScalableFloat                              Enabled;                                                  // 0x0C00(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              HidingEnabled;                                            // 0x0C20(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              PlayerLimit;                                              // 0x0C40(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              TeleportEnabled;                                          // 0x0C60(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              CanTeleport;                                              // 0x0C80(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class AFortPawn*>                           HidingPlayers;                                            // 0x0CA0(0x0010) (Edit, BlueprintVisible, Net, DisableEditOnTemplate, DisableEditOnInstance)
	struct FGameplayTag                                EnterGameplayCue;                                         // 0x0CB0(0x0008) (Edit, BlueprintVisible)
	struct FGameplayTag                                ExitGameplayCue;                                          // 0x0CB8(0x0008) (Edit, BlueprintVisible)
	struct FGameplayTag                                LandedOnGameplayCue;                                      // 0x0CC0(0x0008) (Edit, BlueprintVisible)
	class UMaterialInstanceDynamic*                    Mid;                                                      // 0x0CC8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTag                                RustleGameplayCue;                                        // 0x0CD0(0x0008) (Edit, BlueprintVisible)
	struct FGameplayTag                                ExitGameplayCue_Player;                                   // 0x0CD8(0x0008) (Edit, BlueprintVisible)
	struct FGameplayTag                                WhileEnteringGameplayCue;                                 // 0x0CE0(0x0008) (Edit, BlueprintVisible)
	float                                              ObstructionTraceLength;                                   // 0x0CE8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0CEC(0x0004) MISSED OFFSET
	TArray<TEnumAsByte<EObjectTypeQuery>>              DestroyObjectTypes;                                       // 0x0CF0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class AFortPawn*>                           Array;                                                    // 0x0D00(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	int                                                iint;                                                      // 0x0D10(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     DeimosPropSpawnerOffset;                                  // 0x0D14(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               FixedEntranceDirection;                                   // 0x0D20(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0D21(0x0003) MISSED OFFSET
	float                                              MaxInteractAngle;                                         // 0x0D24(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     WobbleLocationOffset;                                     // 0x0D28(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InteractBelowPropDistance;                                // 0x0D34(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TMap<class AFortPawn*, float>                      HiddenPlayersAndEnterTimes;                               // 0x0D38(0x0050) (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	class AFortPawn*                                   LastPawnToInteract;                                       // 0x0D88(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AB_HidingProp_C*                             TargetTeleporter;                                         // 0x0D90(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	struct FGameplayTag                                TeleporterEnterGameplayCue;                               // 0x0D98(0x0008) (Edit, BlueprintVisible)
	struct FGameplayTag                                TeleporterExitGameplayCue;                                // 0x0DA0(0x0008) (Edit, BlueprintVisible)
	struct FGameplayTag                                LoopingTeleportingCue;                                    // 0x0DA8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                GC_Wobble;                                                // 0x0DB0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTimerHandle                                WobbleTimerHandle;                                        // 0x0DB8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FGameplayTag>                        BlockEntranceTags;                                        // 0x0DC0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FGameplayTag>                        BlockExitTags;                                            // 0x0DD0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UAnimMontage*                                EnterAnimMontage;                                         // 0x0DE0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                ExitAnimMontage;                                          // 0x0DE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AFortPawn*                                   LastPawnToHide;                                           // 0x0DF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTag                                TeleportingStateGC;                                       // 0x0DF8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               RandomWobbleNormal;                                       // 0x0E00(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SingleOccupant;                                           // 0x0E01(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Teleporting;                                              // 0x0E02(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               JumpOut;                                                  // 0x0E03(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DestroyInNonSpyLTM;                                       // 0x0E04(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ActiveInSpyLTM;                                           // 0x0E05(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0E06(0x0002) MISSED OFFSET
	TArray<struct FGameplayTag>                        ForceAllowInteractTags;                                   // 0x0E08(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                IsTeleporter;                                             // 0x0E18(0x0008) (Edit, BlueprintVisible, Net, DisableEditOnInstance)
	struct FGameplayTag                                ContainsPlayerRepNof;                                     // 0x0E20(0x0008) (Edit, BlueprintVisible, Net, DisableEditOnInstance)
	struct FVector                                     ObstructionTraceExtents;                                  // 0x0E28(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ObstructionTraceStartOffSet;                              // 0x0E34(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ExitLaunchVelocity;                                       // 0x0E40(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     AdditionalLaunchVelocity;                                 // 0x0E44(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     FixedEntraceObstructionTraceEndOffset;                    // 0x0E50(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               isActiveTeleportExit;                                     // 0x0E5C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0E5D(0x0003) MISSED OFFSET
	class UGameplayEffect*                             GE_TeleportAbilityGranted;                                // 0x0E60(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DisableWhenSubmergedInWater;                              // 0x0E68(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0E69(0x0007) MISSED OFFSET
	struct FGameplayTagContainer                       DisableWhenSubmergedExceptionTags;                        // 0x0E70(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class AFortPawn*>                           NonCosmeticPawns;                                         // 0x0E90(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass B_HidingProp.B_HidingProp_C");
		
		return ptr;
	}


	void Allow_Cosmetics_For_Pawn(class AFortPawn* Pawn, bool* Allow);
	void OnRep_ContainsPlayer();
	void OnRep_IsTeleporter();
	bool CheckCanUsePassage(class UObject* Object);
	bool IsInInfiltrationLTM();
	void OnRep_Teleporting();
	struct FText BlueprintGetFailedInteractionString(class AFortPawn* InteractingPawn, TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted);
	void RemoveHiddenPlayer(class AFortPawn* FortPawn);
	void AddHiddenPlayer(class AFortPawn* FortPawn);
	void OnRep_HidingPlayers();
	bool BlueprintGetInteractionTime(class AFortPawn* InteractingPawn, TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted, float* OutInteractionTime);
	struct FText BlueprintGetInteractionString(class AFortPawn* InteractingPawn, TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted);
	bool BlueprintCanInteract(class AFortPawn* InteractingPawn, TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted, TEnumAsByte<ETInteractionType> InteractionType);
	void OnReady_64CBF02E419FF250B433D5B2A6E5D744(class AFortGameStateAthena* GameState, class UFortPlaylist* Playlist, const struct FGameplayTagContainer& PlaylistContextTags);
	void OnCurieActive_F2BFC8C54691C42FB5230BA7B7DEE141();
	void BlueprintOnInteract(class AFortPawn* InteractingPawn, TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted);
	void OnDeathServer(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void BndEvt__S_Athena_Launchpad_Collision_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void LandedOnHayStack(class AFortPlayerPawn* PlayerPawn, float Z_Velocity_Mag);
	void LaunchPlayersOffTop(class AFortPlayerPawn* PlayerPawn);
	void ReceiveActorBeginOverlap(class AActor* OtherActor);
	void StopHidingLoop();
	void HidingPlayerCountChanged();
	void InteractEnter();
	void EndHidingAnalyticSession(class AFortPawn* FortPawn, EEnvironmentalItemEndReason EndReason);
	void WatchForPlayerDeath(class AFortPawn* FortPawn);
	void Pawn_Died(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, const struct FName& BoneName, const struct FVector& Momentum);
	void StopHiding(class AFortPawn* Pawn);
	void ReceiveBeginPlay();
	void Teleport(class AActor* Pawn);
	void IgnorePawnCollision(class AFortPawn* Target, float InIgnoreDuration);
	void ToggleCameraCollisionForClients();
	void StartHiding(class AFortPawn* InteractingPawn);
	void TurnClientCameraCollisionOn();
	void AddGameplayCue(const struct FGameplayTag& GameplayCueTag, const struct FGameplayCueParameters& CueParameters);
	void RemoveGameplayCue(const struct FGameplayTag& GameplayCueTag, const struct FGameplayCueParameters& CueParameters);
	void ExecuteGameplayCue(const struct FGameplayTag& GameplayCueTag, const struct FGameplayCueParameters& CueParameters);
	void OnMatchStarted();
	void ExecuteUbergraph_B_HidingProp(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
