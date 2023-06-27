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

// BlueprintGeneratedClass BGA_Athena_Petrol.BGA_Athena_Petrol_C
// 0x0150 (0x09B0 - 0x0860)
class ABGA_Athena_Petrol_C : public ABuildingGameplayActorPetrol
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0860(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x0868(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFortCurieComponent*                         FortCurie;                                                // 0x0870(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     ImpactNormal;                                             // 0x0878(0x000C) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0884(0x0004) MISSED OFFSET
	class UMaterialInstanceDynamic*                    Dynamic_Decal;                                            // 0x0888(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TMap<class AActor*, struct FCurieInteractHandle>   InteractHandleMap;                                        // 0x0890(0x0050) (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                               Lit;                                                      // 0x08E0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x08E1(0x0003) MISSED OFFSET
	float                                              ActorLifespanAfterIgnition;                               // 0x08E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SelfFireMagnitude;                                        // 0x08E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                SelfPropagationFuel;                                      // 0x08EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SelfCurieLandscapeIgnitionRadius;                         // 0x08F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IgniteSelf;                                               // 0x08F4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x08F5(0x0003) MISSED OFFSET
	float                                              IgniteNearbyMaterialsRadius;                              // 0x08F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x08FC(0x0004) MISSED OFFSET
	TArray<TEnumAsByte<EObjectTypeQuery>>              IgniteMaterialsObjectTypes;                               // 0x0900(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UObject*                                     IgniteMaterialsClassFilter;                               // 0x0910(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              IgniteNearbyMaterialsFireMagnitude;                       // 0x0918(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                IgniteNearbyMaterialsPropogationFuel;                     // 0x091C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              IgniteNearbyMaterialsLandscapeIgnitionRadius;             // 0x0920(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FHitResult                                  HitResult;                                                // 0x0924(0x008C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BGA_Athena_Petrol.BGA_Athena_Petrol_C");
		
		return ptr;
	}


	void IgniteNearbyMaterials();
	void Ignite_Self();
	void OnRep_Lit();
	void UserConstructionScript();
	void ClientOnIgnite();
	void BndEvt__SphereCollisionComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__SphereCollisionComponent_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void ReceiveBeginPlay();
	void InteractingWithFire(class AActor* OverlappingActor, const struct FHitResult& HitResult);
	void ReceiveDestroyed();
	void OnCurieElementInteract_BP(const struct FCurieContainerHandle& CurieContainerHandle, const struct FGameplayTag& ElementTag, const struct FCurieInteractParamsHandle& InteractParamsHandle);
	void OnCurieStateDetached_BP(const struct FCurieContainerHandle& CurieContainerHandle, const struct FGameplayTag& StateTag);
	void ExecuteUbergraph_BGA_Athena_Petrol(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
