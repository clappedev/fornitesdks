#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x80 (0x3F0 - 0x370)
// BlueprintGeneratedClass BP_ProjectileTrajectory_Athena_SnapBoxToGrid.BP_ProjectileTrajectory_Athena_SnapBoxToGrid_C
class ABP_ProjectileTrajectory_Athena_SnapBoxToGrid_C : public ABP_ProjectileTrajectory_Athena_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x370(0x8)(Transient, DuplicateTransient)
	class UStaticMeshComponent*                  SM_BuildingPreview;                                // 0x378(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       Building;                                          // 0x380(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        GridSizeXY;                                        // 0x388(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        GridSizeZ;                                         // 0x38C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        GridYOffset;                                       // 0x390(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LastPointDist;                                     // 0x394(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        GridZOffset;                                       // 0x398(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              YawOffset;                                         // 0x39C(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                              LastYawOffset;                                     // 0x3A8(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                               GridSnapPosition;                                  // 0x3B4(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               LastGridSnapPosition;                              // 0x3C0(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5B0E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundBase*                            GridSnapSound;                                     // 0x3D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECardinalDirection                CardinalDirection;                                 // 0x3D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5B0F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStaticMesh*                           BuildingPreviewMesh;                               // 0x3E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortPlaysetItemDefinition*            CachedPlayset;                                     // 0x3E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BP_ProjectileTrajectory_Athena_SnapBoxToGrid_C");
		return Clss;
	}

	void UpdateScaleForPlayset(class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetPlaysetSize_SizeX, int32 CallFunc_GetPlaysetSize_SizeY, class UFortPlaysetItemDefinition* CallFunc_GetPlayset_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue1, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue1, float CallFunc_Multiply_FloatFloat_ReturnValue1, const struct FVector& CallFunc_K2_GetComponentScale_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_GetComponentBounds_Origin, const struct FVector& CallFunc_GetComponentBounds_BoxExtent, float CallFunc_GetComponentBounds_SphereRadius, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, const struct FVector& CallFunc_Divide_VectorVector_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector& CallFunc_MakeVector_ReturnValue1);
	void HandleGridSnapUpdates(const struct FVector& NewLocation, const struct FRotator& PlaysetRotation, class APawn* CallFunc_GetInstigator_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_BreakVector_X1, float CallFunc_BreakVector_Y1, float CallFunc_BreakVector_Z1, int32 CallFunc_Round_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, float CallFunc_Abs_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue1, float CallFunc_Abs_ReturnValue1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue2, float CallFunc_Divide_FloatFloat_ReturnValue1, int32 CallFunc_Round_ReturnValue1, float CallFunc_Divide_FloatFloat_ReturnValue2, float CallFunc_Multiply_IntFloat_ReturnValue1, int32 CallFunc_Round_ReturnValue2, float CallFunc_Multiply_IntFloat_ReturnValue2, const struct FVector& CallFunc_MakeVector_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FRotator& CallFunc_ComposeRotators_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult1, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult, bool CallFunc_NotEqual_RotatorRotator_ReturnValue, bool CallFunc_NotEqual_VectorVector_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void UserConstructionScript(bool CallFunc_SetStaticMesh_ReturnValue);
	void ReceiveBeginPlay();
	void SetTrajectorySpline(TArray<struct FVector>& SplinePoints, TArray<struct FVector>& SplineTangents);
	void ExecuteUbergraph_BP_ProjectileTrajectory_Athena_SnapBoxToGrid(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue1, TArray<struct FVector>& K2Node_Event_SplinePoints, TArray<struct FVector>& K2Node_Event_SplineTangents, const struct FVector& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, const struct FVector& CallFunc_Array_Get_Item1, const struct FVector& CallFunc_Array_Get_Item2, const struct FVector& CallFunc_Normal_ReturnValue1, const struct FVector& CallFunc_Array_Get_Item3, int32 CallFunc_Array_LastIndex_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, int32 CallFunc_Array_Length_ReturnValue1, float CallFunc_VSize_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue1, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue1, int32 Temp_int_Loop_Counter_Variable, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue2, int32 Temp_int_Loop_Counter_Variable1, bool CallFunc_Less_IntInt_ReturnValue1, int32 CallFunc_Add_IntInt_ReturnValue3, int32 Temp_int_Array_Index_Variable1, class USplineMeshComponent* CallFunc_Array_Get_Item4, const struct FVector& CallFunc_GetLocationAtSplinePoint_ReturnValue, const struct FVector& CallFunc_GetLeaveTangentAtSplinePoint_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue4, bool CallFunc_Less_IntInt_ReturnValue2, const struct FVector& CallFunc_GetArriveTangentAtSplinePoint_ReturnValue, const struct FVector& CallFunc_GetLocationAtSplinePoint_ReturnValue1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
