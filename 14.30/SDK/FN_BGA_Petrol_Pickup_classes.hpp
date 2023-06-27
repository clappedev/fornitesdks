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

// BlueprintGeneratedClass BGA_Petrol_Pickup.BGA_Petrol_Pickup_C
// 0x0320 (0x0CC0 - 0x09A0)
class ABGA_Petrol_Pickup_C : public ABGA_HeldObject_Parent_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x09A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UFortItemEntryComponent*                     FortItemEntry;                                            // 0x09A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        PetrolCan;                                                // 0x09B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            Sphere;                                                   // 0x09B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AFortPlayerPawn*                             PlayerPawn;                                               // 0x09C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AFortPlayerControllerAthena*                 PlayerController;                                         // 0x09C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShouldExplode;                                            // 0x09D0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x09D1(0x0007) MISSED OFFSET
	TArray<class UGameplayEffect*>                     ExplodeDamageGE;                                          // 0x09D8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	class AFortPawn*                                   Explodeinstigator;                                        // 0x09E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<class AActor*>                              TargetedActors;                                           // 0x09F0(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	class UGameplayEffect*                             GE_Explode;                                               // 0x0A00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTag                                GC_Explode;                                               // 0x0A08(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<TEnumAsByte<EObjectTypeQuery>>              ObjectArray;                                              // 0x0A10(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              SpawnedProjectileMinSpeed;                                // 0x0A20(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              SpawnedProjectileMaxSpeed;                                // 0x0A40(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              ConeHalfAngleInDegrees;                                   // 0x0A60(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class ABuildingGameplayActor*                      CurieBGAtoSpawn;                                          // 0x0A80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AFortProjectileBase*                         CurieFireballsToSpawn;                                    // 0x0A88(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScalableFloat                              FireBallsToSPawn;                                         // 0x0A90(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UFortWorldItemDefinition*                    WeaponItemDefinition;                                     // 0x0AB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AFortPickup*                                 WeaponPickupToGrant;                                      // 0x0AB8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FHitResult                                  LastHit;                                                  // 0x0AC0(0x008C) (Edit, BlueprintVisible, Net, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0B4C(0x0004) MISSED OFFSET
	struct FTimerHandle                                FuseTimerHandle;                                          // 0x0B50(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              FuseMinDuration;                                          // 0x0B58(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              FuseMaxDuration;                                          // 0x0B78(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGuid                                       HeldItemGUID;                                             // 0x0B98(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TScriptInterface<class UFortInventoryOwnerInterface> HeldItemInventoryInterface;                               // 0x0BA8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsAttachedToWeapon;                                       // 0x0BB8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Dropped;                                                  // 0x0BB9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0BBA(0x0002) MISSED OFFSET
	struct FGameplayTag                                GC_OnFire;                                                // 0x0BBC(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0BC4(0x0004) MISSED OFFSET
	struct FScalableFloat                              ExplosionRadius;                                          // 0x0BC8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              VehicleDamage;                                            // 0x0BE8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class AFortWeapon*                                 WeaponAttachedTo;                                         // 0x0C08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTag                                GC_Refuel;                                                // 0x0C10(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<TEnumAsByte<EObjectTypeQuery>>              SpawnCollisionCheck_ObjectTypes;                          // 0x0C18(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              Max_Spawn_Z;                                              // 0x0C28(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SpawnCollisionBlocked;                                    // 0x0C2C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0C2D(0x0003) MISSED OFFSET
	struct FVector                                     VelocityAfterVehicleOverlap;                              // 0x0C30(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x0C3C(0x0004) MISSED OFFSET
	struct FScalableFloat                              HotfixExplodeVehicleImpulse;                              // 0x0C40(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              HotfixExplodeSpinThrust;                                  // 0x0C60(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UGameplayEffect*                             GE_ExplodePlayerDamage;                                   // 0x0C80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UGameplayEffect*                             GE_ExplodeVehicleDamage;                                  // 0x0C88(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               FuseLit;                                                  // 0x0C90(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0C91(0x0003) MISSED OFFSET
	float                                              MinSpeedOfNoStickBounce;                                  // 0x0C94(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  FailedInteractSound;                                      // 0x0C98(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTagContainer                       Tag_FailedInteract_InventoryIsFull;                       // 0x0CA0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BGA_Petrol_Pickup.BGA_Petrol_Pickup_C");
		
		return ptr;
	}


	bool BlueprintOnLocalInteract(class AFortPlayerPawn* InteractingPawn);
	void CalcVehicleImpulse(class AActor* Vehicle, float Magnitude, struct FVector* Vector);
	bool ShouldDie(float Damage, class AController* EventInstigator, class AActor* DamageCauser);
	void OnRep_LastHit();
	void OnRep_ShouldExplode();
	bool BlueprintCanInteract(class AFortPawn* InteractingPawn, TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted, TEnumAsByte<ETInteractionType> InteractionType);
	struct FText BlueprintGetInteractionString(class AFortPawn* InteractingPawn, TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted);
	bool BlueprintGetInteractionTime(class AFortPawn* InteractingPawn, TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted, float* OutInteractionTime);
	void BlueprintOnInteract(class AFortPawn* InteractingPawn, TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted);
	void ReceiveDestroyed();
	void OnDamageServer(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void SpawnCurieFireballs(class AFortPawn* Explodeinstigator);
	void OnDeathServer(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void SetFuseAndDrop();
	void SpawnFireBallsExplodeAndDie();
	void ExplodeAndDie();
	void SetHeldItemInfo(const TScriptInterface<class UFortInventoryOwnerInterface>& InventoryInterface, const struct FGuid& Guid, class AFortWeapon* WeaponAttachedTo);
	void DropHeldItem();
	void HideAndDestroy();
	void _ServerOnly_HideAndDestroy();
	void Refuel(int FuelToAdd);
	void ReceiveBeginPlay();
	void BndEvt__FortProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature(const struct FHitResult& ImpactResult, const struct FVector& ImpactVelocity);
	void OnCurieElementInteract_BP(const struct FCurieContainerHandle& CurieContainerHandle, const struct FGameplayTag& ElementTag, const struct FCurieInteractParamsHandle& InteractParamsHandle);
	void OnCurieElementInteractBegun_BP(const struct FCurieContainerHandle& CurieContainerHandle, const struct FGameplayTag& ElementTag, const struct FCurieInteractParamsHandle& InteractParamsHandle);
	void ExecuteUbergraph_BGA_Petrol_Pickup(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
