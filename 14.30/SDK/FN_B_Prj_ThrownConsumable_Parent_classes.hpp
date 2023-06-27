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

// BlueprintGeneratedClass B_Prj_ThrownConsumable_Parent.B_Prj_ThrownConsumable_Parent_C
// 0x0012 (0x088A - 0x0878)
class AB_Prj_ThrownConsumable_Parent_C : public AFortProjectileBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0878(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              BouncePawnAgainstPawnGravityScale;                        // 0x0880(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FuseTime;                                                 // 0x0884(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSimulationRunning;                                       // 0x0888(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bShouldRestartSimulating;                                 // 0x0889(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass B_Prj_ThrownConsumable_Parent.B_Prj_ThrownConsumable_Parent_C");
		
		return ptr;
	}


	void ResetSimulatedComponents();
	void OnRep_bSimulationRunning();
	void SetBounceVelocityPawn();
	void SetBounceVelocity();
	void FuseEnded();
	void ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
	void BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__ProjectileMovementComponent_K2Node_ComponentBoundEvent_1_OnProjectileStopDelegate__DelegateSignature(const struct FHitResult& ImpactResult);
	void Event_BuildingActorDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, const struct FName& BoneName, const struct FVector& Momentum);
	void Event_OnVehicleDestroyed(class AActor* DestroyedActor);
	void RestartSimulating();
	void OnBounce(const struct FHitResult& Hit);
	void OnExploded(TArray<class AActor*> HitActors, TArray<struct FHitResult> HitResults);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_B_Prj_ThrownConsumable_Parent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
