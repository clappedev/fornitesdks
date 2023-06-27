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

// BlueprintGeneratedClass BGA_HeldObject_Parent.BGA_HeldObject_Parent_C
// 0x01E0 (0x09A0 - 0x07C0)
class ABGA_HeldObject_Parent_C : public ABuildingGameplayActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x07C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UFortWaterInteractionComponent*              FortWaterInteraction;                                     // 0x07C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFortLinkToActorComponent*                   FortLinkToActor;                                          // 0x07D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFortHeldObjectComponent*                    FortHeldObject;                                           // 0x07D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFortProjectileMovementComponent*            FortProjectileMovement;                                   // 0x07E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCapsuleComponent*                           Capsule;                                                  // 0x07E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                RepStartMoving;                                           // 0x07F0(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	struct FGameplayTag                                GC_HitPlayer;                                             // 0x07F4(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                GC_HitWorld;                                              // 0x07FC(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                GC_Throw;                                                 // 0x0804(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                GC_EnterWater;                                            // 0x080C(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                GC_Pickup;                                                // 0x0814(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                GC_Death;                                                 // 0x081C(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               PlayDeathGC;                                              // 0x0824(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               RepHideActor;                                             // 0x0825(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	bool                                               SetHideActorOnDeath;                                      // 0x0826(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsDestructable;                                           // 0x0827(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTag                                GC_GenericDeath;                                          // 0x0828(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              WorldStopSlop;                                            // 0x0830(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AttachToWallsAndCeilings;                                 // 0x0834(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0835(0x0003) MISSED OFFSET
	TMap<ELinkToDirection, struct FVector>             Map_DirectionToRelativeVector;                            // 0x0838(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	ELinkToDirection                                   DirectionToAttach;                                        // 0x0888(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0889(0x0007) MISSED OFFSET
	class AActor*                                      EmptyAttachLinkActor;                                     // 0x0890(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0898(0x0008) MISSED OFFSET
	struct FTransform                                  AttachRelativeTrans;                                      // 0x08A0(0x0030) (Edit, BlueprintVisible, Net, DisableEditOnInstance, SaveGame, IsPlainOldData)
	struct FTransform                                  AttachTransform;                                          // 0x08D0(0x0030) (Edit, BlueprintVisible, Net, DisableEditOnInstance, SaveGame, IsPlainOldData)
	struct FText                                       FirstInteractString;                                      // 0x0900(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       SecondInteractString;                                     // 0x0918(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              SecondInteractTime;                                       // 0x0930(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FirstInteractTime;                                        // 0x0934(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               EverBeenThrownPlaced;                                     // 0x0938(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	bool                                               AutoEnableInteractionsOnStop;                             // 0x0939(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AlreadySavedDefaultTransform;                             // 0x093A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	TEnumAsByte<Enum_HeldObject_GenericWeights>        ObjectWeights;                                            // 0x093B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               StopOnFlatSurface;                                        // 0x093C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x093D(0x0003) MISSED OFFSET
	struct FGameplayTagContainer                       ThrownQuestCreditTargetTag;                               // 0x0940(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_BlockPickup;                                           // 0x0960(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              Hit_Velocity_Threshold;                                   // 0x0980(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShouldKillWhenSpawningUnderwater;                         // 0x0984(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0985(0x0003) MISSED OFFSET
	class UPrimitiveComponent*                         HitComponentToAttachTo;                                   // 0x0988(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    CapsuleDefaultCollisionResponseToPawn;                    // 0x0990(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               RestoreDefaultPawnCollisionOnInteract;                    // 0x0991(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsAttachedToVehicle;                                      // 0x0992(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x5];                                       // 0x0993(0x0005) MISSED OFFSET
	class AActor*                                      VehicleAttached;                                          // 0x0998(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BGA_HeldObject_Parent.BGA_HeldObject_Parent_C");
		
		return ptr;
	}


	void Server_Only_Handle_Attach_To_Vehicle(const struct FVector& HitLoc, class UPrimitiveComponent* HitComponentToAttachTo);
	void OnDetachFromVehicle();
	void OnAttachedToVehicle();
	void OnRep_IsAttachedToVehicle();
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
	void OnReady_BC2B03BE47B5044C184341970EAD7AAB(class AFortGameStateAthena* GameState, class UFortPlaylist* Playlist, const struct FGameplayTagContainer& PlaylistContextTags);
	void OnDeathServer(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void HideActor();
	void PlayGenericDeath();
	void BndEvt__FortProjectileMovement_K2Node_ComponentBoundEvent_1_OnProjectileBounceDelegate__DelegateSignature(const struct FHitResult& ImpactResult, const struct FVector& ImpactVelocity);
	void BndEvt__FortWaterInteraction_K2Node_ComponentBoundEvent_3_WaterInteractionOnEnterWater__DelegateSignature(class AFortWaterBodyActor* WaterBody, class UFortWaterInteractionComponent* WaterInteractionComponent, bool bIsFirstBody);
	void BndEvt__FortHeldObject_K2Node_ComponentBoundEvent_2_OnHeldObjectThrown__DelegateSignature();
	void BndEvt__FortProjectileMovement_K2Node_ComponentBoundEvent_4_OnProjectileStopDelegate__DelegateSignature(const struct FHitResult& ImpactResult);
	void AttachSetup(const struct FVector& Location, const struct FVector& HitNormal, bool NewParam);
	void BndEvt__FortHeldObject_K2Node_ComponentBoundEvent_6_OnHeldObjectPickedUp__DelegateSignature();
	void ReceiveBeginPlay();
	void ResetRelativeTransformOnAttach();
	void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void BndEvt__FortLinkToActor_K2Node_ComponentBoundEvent_0_OnLinkedActorDestroyed__DelegateSignature();
	void OnFirstInteract(class AFortPawn* Interacting_Pawn);
	void BndEvt__FortHeldObject_K2Node_ComponentBoundEvent_5_OnHeldObjectPlaced__DelegateSignature();
	void OnSecondInteract(class AFortPawn* InteractingPawn);
	void ReceiveDestroyed();
	void BlueprintOnInteract(class AFortPawn* InteractingPawn, TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted);
	void OnVehicleDestroyed(class AActor* DestroyedActor);
	void ExecuteUbergraph_BGA_HeldObject_Parent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
