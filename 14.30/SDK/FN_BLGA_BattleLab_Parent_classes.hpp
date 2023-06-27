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

// BlueprintGeneratedClass BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C
// 0x01C8 (0x0990 - 0x07C8)
class ABLGA_BattleLab_Parent_C : public ABattleLabDeviceGameplayActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x07C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UFortWaterInteractionComponent*              FortWaterInteraction;                                     // 0x07D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFortLinkToActorComponent*                   FortLinkToActor;                                          // 0x07D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFortHeldObjectComponent*                    FortHeldObject;                                           // 0x07E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFortProjectileMovementComponent*            FortProjectileMovement;                                   // 0x07E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCapsuleComponent*                           Capsule;                                                  // 0x07F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFortCurieComponent*                         FortCurie;                                                // 0x07F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                RepStartMoving;                                           // 0x0800(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	struct FGameplayTag                                GC_HitPlayer;                                             // 0x0804(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                GC_HitWorld;                                              // 0x080C(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                GC_Throw;                                                 // 0x0814(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                GC_EnterWater;                                            // 0x081C(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                GC_Pickup;                                                // 0x0824(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                GC_Death;                                                 // 0x082C(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               PlayDeathGC;                                              // 0x0834(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               RepHideActor;                                             // 0x0835(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	bool                                               SetHideActorOnDeath;                                      // 0x0836(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsDestructable;                                           // 0x0837(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTag                                GC_GenericDeath;                                          // 0x0838(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              WorldStopSlop;                                            // 0x0840(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AttachToWallsAndCeilings;                                 // 0x0844(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0845(0x0003) MISSED OFFSET
	TMap<ELinkToDirection, struct FVector>             Map_DirectionToRelativeVector;                            // 0x0848(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	ELinkToDirection                                   DirectionToAttach;                                        // 0x0898(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0899(0x0007) MISSED OFFSET
	class AActor*                                      EmptyAttachLinkActor;                                     // 0x08A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x08A8(0x0008) MISSED OFFSET
	struct FTransform                                  AttachRelativeTrans;                                      // 0x08B0(0x0030) (Edit, BlueprintVisible, Net, DisableEditOnInstance, SaveGame, IsPlainOldData)
	struct FTransform                                  AttachTransform;                                          // 0x08E0(0x0030) (Edit, BlueprintVisible, Net, DisableEditOnInstance, SaveGame, IsPlainOldData)
	struct FText                                       FirstInteractString;                                      // 0x0910(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       SecondInteractString;                                     // 0x0928(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              SecondInteractTime;                                       // 0x0940(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FirstInteractTime;                                        // 0x0944(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               EverBeenThrownPlaced;                                     // 0x0948(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	bool                                               AutoEnableCurieInteractionsOnStop;                        // 0x0949(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AlreadySavedDefaultTransform;                             // 0x094A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	TEnumAsByte<Enum_HeldObject_GenericWeights>        ObjectWeights;                                            // 0x094B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x094C(0x0004) MISSED OFFSET
	unsigned char                                      UnknownData04[0x10];                                      // 0x094C(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C.OnStartedMoving
	class ABLGA_BattleLab_Parent_C*                    AttachBaseDevice;                                         // 0x0960(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EBL_HeldState>                         HeldState;                                                // 0x0968(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0969(0x0007) MISSED OFFSET
	struct FGameplayTagContainer                       TC_BlockPickup;                                           // 0x0970(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C");
		
		return ptr;
	}


	void OnRep_HeldState();
	void SetBeenThrownPlaced();
	void GetCanFirstInteract(class AFortPawn* InteractingPawn, bool* Return);
	void OnRep_AttachTransform();
	void SetAttachDefaultTransform();
	void GetAttachComponent(class USceneComponent** Component);
	void FindAttachAngle(const struct FVector& HitLoc);
	bool BlueprintGetInteractionTime(class AFortPawn* InteractingPawn, TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted, float* OutInteractionTime);
	struct FText BlueprintGetInteractionString(class AFortPawn* InteractingPawn, TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted);
	bool ShouldDie(float Damage, class AController* EventInstigator, class AActor* DamageCauser);
	void OnRep_RepHideActor();
	void OnRep_RepStartMoving();
	bool BlueprintCanInteract(class AFortPawn* InteractingPawn, TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted, TEnumAsByte<ETInteractionType> InteractionType);
	void BndEvt__FortHeldObject_K2Node_ComponentBoundEvent_2_OnHeldObjectThrown__DelegateSignature();
	void BndEvt__FortWaterInteraction_K2Node_ComponentBoundEvent_3_WaterInteractionOnEnterWater__DelegateSignature(class AFortWaterBodyActor* WaterBody, class UFortWaterInteractionComponent* WaterInteractionComponent, bool bIsFirstBody);
	void OnDeathServer(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void HideActor();
	void PlayGenericDeath();
	void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void BndEvt__FortProjectileMovement_K2Node_ComponentBoundEvent_1_OnProjectileBounceDelegate__DelegateSignature(const struct FHitResult& ImpactResult, const struct FVector& ImpactVelocity);
	void BndEvt__FortLinkToActor_K2Node_ComponentBoundEvent_0_OnLinkedActorDestroyed__DelegateSignature();
	void BlueprintOnInteract(class AFortPawn* InteractingPawn, TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted);
	void BndEvt__FortProjectileMovement_K2Node_ComponentBoundEvent_4_OnProjectileStopDelegate__DelegateSignature(const struct FHitResult& ImpactResult);
	void AttachSetup(const struct FVector& Location, const struct FVector& HitNormal, bool NewParam);
	void BndEvt__FortHeldObject_K2Node_ComponentBoundEvent_6_OnHeldObjectPickedUp__DelegateSignature();
	void ReceiveBeginPlay();
	void ResetRelativeTransformOnAttach();
	void OnFirstInteract(class AFortPawn* Interacting_Pawn);
	void BndEvt__FortHeldObject_K2Node_ComponentBoundEvent_5_OnHeldObjectPlaced__DelegateSignature();
	void OnSecondInteract(class AFortPawn* InteractingPawn);
	void ReceiveDestroyed();
	void BndEvt__FortProjectileMovement_K2Node_ComponentBoundEvent_7_OnProjectileVelocityReplicated__DelegateSignature(const struct FVector& ReplicatedVelocity);
	void OnBaseDeviceStartedMoving();
	void BndEvt__FortHeldObject_K2Node_ComponentBoundEvent_8_OnHeldObjectDropped__DelegateSignature();
	void OnHeldObjectStateChangedClient(TEnumAsByte<EBL_HeldState> HeldState);
	void ExecuteUbergraph_BLGA_BattleLab_Parent(int EntryPoint);
	void OnStartedMoving__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
