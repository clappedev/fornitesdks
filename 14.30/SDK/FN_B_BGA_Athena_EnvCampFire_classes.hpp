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

// BlueprintGeneratedClass B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C
// 0x0290 (0x0A50 - 0x07C0)
class AB_BGA_Athena_EnvCampFire_C : public ABuildingGameplayActorCampFire
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x07C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USphereComponent*                            Sphere;                                                   // 0x07C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        FirePitEmpty;                                             // 0x07D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Cylinder;                                                 // 0x07D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UArrowComponent*                             FireLoc;                                                  // 0x07E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Wood;                                                     // 0x07E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Root;                                                     // 0x07F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFortCurieComponent*                         FortCurie;                                                // 0x07F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AFortPawn*                                   InteractingPawn;                                          // 0x0800(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               BeenUsed;                                                 // 0x0808(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0809(0x0003) MISSED OFFSET
	float                                              DousedSmokeLife;                                          // 0x080C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScalableFloat                              Row_DousedSmokeLife;                                      // 0x0810(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               HotfixedEnabled;                                          // 0x0830(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DestroyIfDisabled;                                        // 0x0831(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	bool                                               Destroyed;                                                // 0x0832(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x0833(0x0005) MISSED OFFSET
	struct FScalableFloat                              Row_HotfixEnabled;                                        // 0x0838(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector                                     TraceOffset;                                              // 0x0858(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Season7Campfire;                                          // 0x0864(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0865(0x0003) MISSED OFFSET
	struct FGameplayTagContainer                       CustomSpecialS7Tags;                                      // 0x0868(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              SpecialS7FireTime;                                        // 0x0888(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x088C(0x0004) MISSED OFFSET
	struct FTimerHandle                                DousedSmokeWispTimer;                                     // 0x0890(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UParticleSystem*                             S7SuccessEmitter;                                         // 0x0898(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  S7SuccessSound;                                           // 0x08A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BlockInteraction;                                         // 0x08A8(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x08A9(0x0003) MISSED OFFSET
	int                                                LitRepBool;                                               // 0x08AC(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTag                                DousedCue;                                                // 0x08B0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                DeathCue;                                                 // 0x08B8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              Row_Light_Cost;                                           // 0x08C0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       Text_Light;                                               // 0x08E0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       Text_LightCost;                                           // 0x08F8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       Text_LightCostNeedMore;                                   // 0x0910(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UFortWorldItemDefinition*                    Item_Wood;                                                // 0x0928(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Stoked;                                                   // 0x0930(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0931(0x0003) MISSED OFFSET
	struct FGameplayTag                                StokedCue;                                                // 0x0934(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	unsigned char                                      UnknownData06[0x4];                                       // 0x093C(0x0004) MISSED OFFSET
	struct FScalableFloat                              Row_Stoke_Cost;                                           // 0x0940(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              Row_HotfixStokeEnabled;                                   // 0x0960(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       Text_StokeCostNeedMore;                                   // 0x0980(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               HasBeenLit;                                               // 0x0998(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x7];                                       // 0x0999(0x0007) MISSED OFFSET
	struct FScalableFloat                              Row_ReplaceCampfire;                                      // 0x09A0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class ABuildingActor*                              ActorToReplaceWith;                                       // 0x09C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CurieActivated;                                           // 0x09C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x7];                                       // 0x09C9(0x0007) MISSED OFFSET
	struct FScalableFloat                              FloodLevel;                                               // 0x09D0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              FloodHeightPerLevel;                                      // 0x09F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OceanHeight;                                              // 0x09F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TMap<class AActor*, struct FCurieInteractHandle>   InteractHandleMap;                                        // 0x09F8(0x0050) (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	struct FGameplayTag                                FireCue;                                                  // 0x0A48(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C");
		
		return ptr;
	}


	void DisableIfBelowFlood();
	void ShouldPlayNativeCurieFX(EFortCurieNativeFXType FXType, struct FFortNativeCurieFXResponse* OutResponse);
	void HasInfiniteResources(class APawn* Pawn, bool* HasInfiniteResources);
	void OnRep_Stoked();
	struct FText BlueprintGetFailedInteractionString(class AFortPawn* InteractingPawn, TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted);
	int GetCostReActivate();
	void OnRep_LitRepBool();
	void OnRep_Destroyed();
	void CheckIfUserIsSpecialS7(class AFortPawn* PawnWhoLitFire, bool* UserIsSpecial);
	bool RowToBool(const struct FScalableFloat& Input);
	void SetSheetValues();
	struct FText BlueprintGetInteractionString(class AFortPawn* InteractingPawn, TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted);
	bool BlueprintCanInteract(class AFortPawn* InteractingPawn, TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted, TEnumAsByte<ETInteractionType> InteractionType);
	void OnReady_9F4554BE40FCB41157835B9AD897EE69(class AFortGameStateAthena* GameState, class UFortPlaylist* Playlist, const struct FGameplayTagContainer& PlaylistContextTags);
	void OnCurieActive_A24E3C804D14344FC0E5E0B5CDB4FF55();
	void BlueprintOnInteract(class AFortPawn* InteractingPawn, TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted);
	void Light();
	void GoOut();
	void ReceiveBeginPlay();
	void Start();
	void BuildingActorDestroyedCleanUp(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, const struct FName& BoneName, const struct FVector& Momentum);
	void BindToFloor();
	void HandleBoundDestroyed();
	void CheckDestroyDisabled();
	void SpecialS7LightsFireAfterOut();
	void KillDouseSmokeWisp();
	void Server_QuestObjectiveUpdated(class AFortPlayerController* Controller, class UFortQuestItemDefinition* QuestDef, const struct FName& BackendName, int CompletionCount, bool ObjectiveCompleted, bool QuestCompleted);
	void HandleCharacterVariantTransition(class AFortPawn* TransitioningPawn);
	void PayLightCost(class AFortPawn* InteractingPawn);
	void PayStokeCost(class AFortPawn* InteractingPawn);
	void CheckReplaceCampfire();
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void EndFireInteract();
	void OnCurieElementAttached_BP(const struct FCurieContainerHandle& CurieContainerHandle, const struct FGameplayTag& ElementTag);
	void OnCurieElementDetached_BP(const struct FCurieContainerHandle& CurieContainerHandle, const struct FGameplayTag& ElementTag);
	void ReceiveDestroyed();
	void CheckInitialOverlappingActors();
	void ExecuteUbergraph_B_BGA_Athena_EnvCampFire(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
