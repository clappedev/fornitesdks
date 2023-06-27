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

// BlueprintGeneratedClass BGA_GenericCurieFuel_Parent.BGA_GenericCurieFuel_Parent_C
// 0x0090 (0x0850 - 0x07C0)
class ABGA_GenericCurieFuel_Parent_C : public ABuildingGameplayActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x07C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        Curie_Mesh;                                               // 0x07C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            Sphere;                                                   // 0x07D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFortProjectileMovementComponent*            FortProjectileMovement;                                   // 0x07D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFortCurieComponent*                         FortCurie;                                                // 0x07E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              ActorLifespanAfterIgnition;                               // 0x07E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x07EC(0x0004) MISSED OFFSET
	class ABuildingWall*                               LocalWall;                                                // 0x07F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               IgniteSelf;                                               // 0x07F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x07F9(0x0003) MISSED OFFSET
	float                                              SelfFireMagnitude;                                        // 0x07FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                SelfPropagationFuel;                                      // 0x0800(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SelfCurieLandscapeIgnitionRadius;                         // 0x0804(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ShouldFireFallWithGravity;                                // 0x0808(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IgniteNearbyMaterialsImmediately;                         // 0x0809(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x080A(0x0002) MISSED OFFSET
	float                                              IgniteNearbyMaterialsRadius;                              // 0x080C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              IgniteNearbyMaterialsFireMagnitude;                       // 0x0810(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                IgniteNearbyMaterialsPropogationFuel;                     // 0x0814(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              IgniteNearbyMaterialsLandscapeIgnitionRadius;             // 0x0818(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x081C(0x0004) MISSED OFFSET
	TArray<TEnumAsByte<EObjectTypeQuery>>              IgniteMaterialsObjectTypes;                               // 0x0820(0x0010) (Edit, BlueprintVisible)
	class UObject*                                     IgniteMaterialsClassFilter;                               // 0x0830(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ResumeSimulation;                                         // 0x0838(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CurieActive;                                              // 0x0839(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CurieHitVehicle;                                          // 0x083A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x5];                                       // 0x083B(0x0005) MISSED OFFSET
	class AActor*                                      HitActor;                                                 // 0x0840(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UPrimitiveComponent*                         HitComponent;                                             // 0x0848(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BGA_GenericCurieFuel_Parent.BGA_GenericCurieFuel_Parent_C");
		
		return ptr;
	}


	void ShouldPlayNativeCurieFX(EFortCurieNativeFXType FXType, struct FFortNativeCurieFXResponse* OutResponse);
	void IgniteNearbyMaterials(const struct FVector& SpherePos);
	void OnRep_ResumeSimulation();
	void HitBuildingActor(class UObject* ObjectRef, class UPrimitiveComponent* PrimitiveObjectRef, bool* Success);
	void HitBuildingWall(class UObject* ObjectRef, class UPrimitiveComponent* PrimitiveObjectRef, bool* Success);
	void HitVehicle(class UObject* ObjectRef, class UPrimitiveComponent* PrimitiveObjectRef, bool* Success);
	void HandleHits(class UObject* ObjectRef, class UPrimitiveComponent* PrimitiveObjectRef);
	void SelfIgnite();
	void OnCurieActive_112B241847E303B58BF962A699068D1C();
	void AttachedComponentDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, const struct FName& BoneName, const struct FVector& Momentum);
	void BaseDied(class AActor* DestroyedActor);
	void BndEvt__FortProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature(const struct FHitResult& ImpactResult, const struct FVector& ImpactVelocity);
	void OnCurieElementDetached_BP(const struct FCurieContainerHandle& CurieContainerHandle, const struct FGameplayTag& ElementTag);
	void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BGA_GenericCurieFuel_Parent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
