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

// BlueprintGeneratedClass B_Prj_Petrol.B_Prj_Petrol_C
// 0x00C8 (0x0978 - 0x08B0)
class AB_Prj_Petrol_C : public AFortProjectilePetrol
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x08B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*                    P_Petrol_Prj_Trail;                                       // 0x08B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x08C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FGameplayTagContainer                       RefillableVehicleTag;                                     // 0x08C8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class ABGA_Petrol_Pickup_C*                        ClosestPetrolPickupBGA;                                   // 0x08E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABGA_Petrol_Pickup_C*                        NullBGA;                                                  // 0x08F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              ShortestDistance;                                         // 0x08F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ClosestPetrolPickupBGAIndex;                              // 0x08FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class AActor*>                              HitActors;                                                // 0x0900(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	struct FScalableFloat                              OverrideFuelToAddToPetrolPickup;                          // 0x0910(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                FuelToAddToPetrolPickup;                                  // 0x0930(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0934(0x0004) MISSED OFFSET
	struct FGameplayTagContainer                       T_Quest;                                                  // 0x0938(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              Hotfix_RefillVehicleAmount;                               // 0x0958(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass B_Prj_Petrol.B_Prj_Petrol_C");
		
		return ptr;
	}


	void UserConstructionScript();
	void OnStop(const struct FHitResult& Hit);
	void ReceiveBeginPlay();
	void OnExploded(TArray<class AActor*> HitActors, TArray<struct FHitResult> HitResults);
	void ReceiveDestroyed();
	void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void ExecuteUbergraph_B_Prj_Petrol(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
