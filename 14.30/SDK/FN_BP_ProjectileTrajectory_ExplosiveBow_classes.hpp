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

// BlueprintGeneratedClass BP_ProjectileTrajectory_ExplosiveBow.BP_ProjectileTrajectory_ExplosiveBow_C
// 0x006C (0x02A4 - 0x0238)
class ABP_ProjectileTrajectory_ExplosiveBow_C : public AFortProjectileTrajectory
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0238(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        Target;                                                   // 0x0240(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USplineComponent*                            Spline;                                                   // 0x0248(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                MaxMeshCount;                                             // 0x0250(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0254(0x0004) MISSED OFFSET
	class UMaterialInstanceDynamic*                    SplineMID;                                                // 0x0258(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UObject*                                     Trajectory_Owner;                                         // 0x0260(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                Update_Timer_Handle;                                      // 0x0268(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector                                     EndPointOffset;                                           // 0x0270(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Right;                                                    // 0x027C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Up;                                                       // 0x0280(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SplineMeshLength;                                         // 0x0284(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SplineMeshOffsetDistance;                                 // 0x0288(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x028C(0x0004) MISSED OFFSET
	class AB_Ranged_Generic_Athena_C*                  OwnerWeapon;                                              // 0x0290(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     MuzzleOffset;                                             // 0x0298(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_ProjectileTrajectory_ExplosiveBow.BP_ProjectileTrajectory_ExplosiveBow_C");
		
		return ptr;
	}


	void SetShouldUpdateFromOwner(bool ShouldUpdate, class UObject* Owner, float Interval);
	void UpdateFromTrajectoryOwner();
	void SetTrajectorySplineInternal(TArray<struct FVector>* SplinePoints, TArray<struct FVector>* SplineTangents);
	void ReceiveBeginPlay();
	void Pulse();
	void SetTrajectorySpline(TArray<struct FVector> SplinePoints, TArray<struct FVector> SplineTangents);
	void ExecuteUbergraph_BP_ProjectileTrajectory_ExplosiveBow(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
