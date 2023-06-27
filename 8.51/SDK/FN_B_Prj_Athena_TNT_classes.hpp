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

// BlueprintGeneratedClass B_Prj_Athena_TNT.B_Prj_Athena_TNT_C
// 0x0060 (0x07F0 - 0x0790)
class AB_Prj_Athena_TNT_C : public AB_Prj_Athena_Grenade_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0790(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USphereComponent*                            InteractCollision;                                        // 0x0798(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USplineComponent*                            Spline;                                                   // 0x07A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      TNTBundle;                                                // 0x07A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              MaxCookTime;                                              // 0x07B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x07B4(0x0004) MISSED OFFSET
	struct FTimerHandle                                FuseTimer;                                                // 0x07B8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              DetonationTime;                                           // 0x07C0(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Use_Shockwave_Based_Explosion;                            // 0x07C4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x07C5(0x0003) MISSED OFFSET
	float                                              Actual_Radius;                                            // 0x07C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSimulationRunning;                                       // 0x07CC(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x07CD(0x0003) MISSED OFFSET
	struct FRotator                                    TargetRotation;                                           // 0x07D0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InterpSpeed;                                              // 0x07DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LerpDuration;                                             // 0x07E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x07E4(0x0004) MISSED OFFSET
	struct FTimerHandle                                LerpTimer;                                                // 0x07E8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_Prj_Athena_TNT.B_Prj_Athena_TNT_C");
		return ptr;
	}


	void OnRep_DetonationTime();
	void MakeOrthogonalZ(struct FRotator InRotation, struct FVector Normal, struct FRotator* OutRotation);
	void Spline_Point_Locations(TArray<struct FVector> Array);
	void Event_StartFuse(float DetonationTime);
	void OnExploded(TArray<class AActor*> HitActors, TArray<struct FHitResult> HitResults);
	void OnStop(struct FHitResult Hit);
	void FuseEnded();
	void ReceiveBeginPlay();
	void BndEvt__ProjectileMovementComponent_K2Node_ComponentBoundEvent(struct FHitResult ImpactResult);
	void Event_BuildingActorDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, struct FVector HitLocation, class UPrimitiveComponent* FHitComponent, struct FName BoneName, struct FVector Momentum);
	void Event_OnVehicleDestroyed(class AActor* DestroyedActor);
	void Lerp();
	void ReceiveDestroyed();
	void ExecuteUbergraph_B_Prj_Athena_TNT(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
