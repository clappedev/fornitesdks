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

// BlueprintGeneratedClass BP_ProjectileTrajectory_Athena_SnapToGridArrow.BP_ProjectileTrajectory_Athena_SnapToGridArrow_C
// 0x00F7 (0x0360 - 0x0269)
class ABP_ProjectileTrajectory_Athena_SnapToGridArrow_C : public ABP_ProjectileTrajectory_Athena_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0269(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        SM_BuildingPreview;                                       // 0x0278(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             Building;                                                 // 0x0280(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              GridSizeXY;                                               // 0x0288(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GridSizeZ;                                                // 0x028C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GridYOffset;                                              // 0x0290(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LastPointDist;                                            // 0x0294(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GridZOffset;                                              // 0x0298(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    YawOffset;                                                // 0x029C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    LastYawOffset;                                            // 0x02A8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     GridSnapPosition;                                         // 0x02B4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LastGridSnapPosition;                                     // 0x02C0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x02CC(0x0004) MISSED OFFSET
	class USoundBase*                                  GridSnapSound;                                            // 0x02D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ECardinalDirection>                    CardinalDirection;                                        // 0x02D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x02D9(0x0007) MISSED OFFSET
	TMap<TEnumAsByte<ECardinalDirection>, struct FVector> OrientationDoortraceOffsets;                              // 0x02E0(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector                                     DoorTraceOffsetHigh;                                      // 0x0330(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     DoorTraceOffsetLow;                                       // 0x033C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               b_HitTerrain;                                             // 0x0348(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0349(0x0007) MISSED OFFSET
	class UStaticMesh*                                 BuildingPreviewMesh;                                      // 0x0350(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UStaticMesh*                                 BuildingPreviewMeshUnderground;                           // 0x0358(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_ProjectileTrajectory_Athena_SnapToGridArrow.BP_ProjectileTrajectory_Athena_SnapToGridArrow_C");
		
		return ptr;
	}


	void HandleGridSnapUpdates(const struct FVector& NewLocation);
	void ReceiveBeginPlay();
	void SetTrajectorySpline(TArray<struct FVector> SplinePoints, TArray<struct FVector> SplineTangents);
	void ExecuteUbergraph_BP_ProjectileTrajectory_Athena_SnapToGridArrow(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
