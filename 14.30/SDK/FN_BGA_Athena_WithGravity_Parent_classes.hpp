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

// BlueprintGeneratedClass BGA_Athena_WithGravity_Parent.BGA_Athena_WithGravity_Parent_C
// 0x012D (0x08ED - 0x07C0)
class ABGA_Athena_WithGravity_Parent_C : public ABuildingGameplayActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x07C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UFortWaterInteractionComponent*              FortWaterInteraction;                                     // 0x07C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x07D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UProjectileMovementComponent*                ProjectileMovement;                                       // 0x07D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ResumeGravSimOnBegin;                                     // 0x07E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bResumeSimulation;                                        // 0x07E1(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x07E2(0x0002) MISSED OFFSET
	struct FHitResult                                  NullHit;                                                  // 0x07E4(0x008C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     GravImpact_Loc;                                           // 0x0870(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     GravHitNormal;                                            // 0x087C(0x000C) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GravMaxSlope;                                             // 0x0888(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CheckForBounce;                                           // 0x088C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x088D(0x0003) MISSED OFFSET
	float                                              ForcedBounceExtraZ;                                       // 0x0890(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ForcedBounceCurrentCount;                                 // 0x0894(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ForcedBounceMult;                                         // 0x0898(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x089C(0x0004) MISSED OFFSET
	TArray<class AActor*>                              GravFoundBuildingOnDied;                                  // 0x08A0(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                               RepCollision;                                             // 0x08B0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x08B1(0x0007) MISSED OFFSET
	class UObject*                                     AdditionalBounceObject;                                   // 0x08B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ForcedBounceMaxCount;                                     // 0x08C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ForceBounce;                                              // 0x08C4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CountNonForceBounces;                                     // 0x08C5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x08C6(0x0002) MISSED OFFSET
	float                                              BounceExtraZ;                                             // 0x08C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BounceMult;                                               // 0x08CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShouldAttach;                                             // 0x08D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x08D1(0x0007) MISSED OFFSET
	TArray<class AActor*>                              ActorsToNotAttachTo;                                      // 0x08D8(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                               DontAttachToOthersOfThisClass;                            // 0x08E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DebugText;                                                // 0x08E9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShouldNotReattach;                                        // 0x08EA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BlockStoppingSim;                                         // 0x08EB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AllowReattachmentToActors;                                // 0x08EC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BGA_Athena_WithGravity_Parent.BGA_Athena_WithGravity_Parent_C");
		
		return ptr;
	}


	void Init(const struct FVector& GravHitNormal);
	void OnAttach(class AActor* AttachedActor);
	void RestartSimulation();
	void AttachToBindedActor(class UPrimitiveComponent* AttachComp);
	void BounceBGA();
	void CheckForSameClassToBounce(class AActor* Hit, bool* HitSameClass);
	void OnRep_RepCollision();
	void ForceBounceBGA();
	void OnRep_bResumeSimulation();
	void BaseDestroyed(class AActor* DestroyedActor);
	void HandleBinding(class AActor* Actor, class UPrimitiveComponent* HitComp);
	void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void BaseDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, const struct FName& BoneName, const struct FVector& Momentum);
	void StopSim(const struct FHitResult& Hit);
	void ReceiveBeginPlay();
	void Impulse(float DelayBeforeImpulse, float DelayBeforeCollision, const struct FVector& ImpulseOrigin, const struct FVector& ImpulseAmount, bool SetCollisionAfterImpulse);
	void PlayHitFX();
	void SpawnFXSounds();
	void AttachedWasDestroyed();
	void SlidingDoorOpened();
	void ExecuteUbergraph_BGA_Athena_WithGravity_Parent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
