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

// BlueprintGeneratedClass B_Prj_Athena_Generic_CurieFireball_Parent.B_Prj_Athena_Generic_CurieFireball_Parent_C
// 0x0078 (0x08F0 - 0x0878)
class AB_Prj_Athena_Generic_CurieFireball_Parent_C : public AFortProjectileBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0878(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*                    FireTrail;                                                // 0x0880(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     Fire_Plane_Trace_Offset;                                  // 0x0888(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Fire_Plane_Spawn_Offset;                                  // 0x0894(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class ABuildingGameplayActor*                      BGAToSpawn;                                               // 0x0898(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             DesiredFireTrailParticle;                                 // 0x08A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DoesMeshAngleNeedAdjusted;                                // 0x08A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShouldFireSpawnWithRandomChance;                          // 0x08A9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x08AA(0x0002) MISSED OFFSET
	float                                              RandomSpawnChanceWeight;                                  // 0x08AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ShouldSpawnFire;                                          // 0x08B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x08B1(0x0007) MISSED OFFSET
	class USoundBase*                                  FireFizzle;                                               // 0x08B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  LineTraceTransform;                                       // 0x08C0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass B_Prj_Athena_Generic_CurieFireball_Parent.B_Prj_Athena_Generic_CurieFireball_Parent_C");
		
		return ptr;
	}


	struct FTransform Line_Trace_for_Mesh_Angle();
	void ReceiveBeginPlay();
	void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void Landed_In_Water();
	void BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature(class AFortWaterBodyActor* WaterBody, class UFortWaterInteractionComponent* WaterInteractionComponent, bool bIsFirstBody);
	void SpawnCurieBGA();
	void ExecuteUbergraph_B_Prj_Athena_Generic_CurieFireball_Parent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
