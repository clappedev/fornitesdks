#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x1228 (0x1598 - 0x370)
// AnimBlueprintGeneratedClass ShoppingCartVehicleSK_AnimBP.ShoppingCartVehicleSK_AnimBP_C
class UShoppingCartVehicleSK_AnimBP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x370(0x8)(Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_8FDF89204E958A5F299D6C81CC05AEC0; // 0x378(0x40)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_F89D0F4F47020ADDE62FB5919F7EECC0; // 0x3B8(0x40)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_2EB7C951424DBBEA5313F78EBCA54D4E; // 0x3F8(0x128)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_293BD4664A42001B01053FAFD13526BA; // 0x520(0x128)()
	uint8                                        Pad_2B58[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_RigidBody                   AnimGraphNode_RigidBody_02FB628C4E1C416029F3FC8C0A2F6265; // 0x650(0x560)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_DE585B894EEDCED6D97829830D1FC06C; // 0xBB0(0x128)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_D64F465247EA5F954458BF995216BCE2; // 0xCD8(0x128)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_E3A0212F42252A3B35E387BD4E915843; // 0xE00(0x128)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_89E126974E81E2145D3B3991782D45BD; // 0xF28(0x128)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_F1D8E9314864DADDBE8742B1B63F1178; // 0x1050(0x128)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_C91EA21B47AF3D14096DFFBF9DAB1219; // 0x1178(0x128)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_E647C0094FE076130E619996120F88BA; // 0x12A0(0x128)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_1B1D442A4E63EB172E7CF2ADCD71EAC5; // 0x13C8(0x128)()
	struct FTransform                            TruckTransformF;                                   // 0x14F0(0x30)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FTransform                            TruckTransformB;                                   // 0x1520(0x30)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                        WheelSpinFR;                                       // 0x1550(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        WheelSpinFL;                                       // 0x1554(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        WheelSpinBR;                                       // 0x1558(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        WheelSpinBL;                                       // 0x155C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        WheelRotationFR;                                   // 0x1560(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        WheelRotationFL;                                   // 0x1564(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              SeatCoverRotation;                                 // 0x1568(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                               SeatCoverForce;                                    // 0x1574(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               SeatBasePosition;                                  // 0x1580(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              SeatBaseRotation;                                  // 0x158C(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ShoppingCartVehicleSK_AnimBP_C");
		return Clss;
	}

	void EvaluateGraphExposedInputs_ExecuteUbergraph_ShoppingCartVehicleSK_AnimBP_AnimGraphNode_ModifyBone_D64F465247EA5F954458BF995216BCE2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ShoppingCartVehicleSK_AnimBP_AnimGraphNode_ModifyBone_DE585B894EEDCED6D97829830D1FC06C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ShoppingCartVehicleSK_AnimBP_AnimGraphNode_RigidBody_02FB628C4E1C416029F3FC8C0A2F6265();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ShoppingCartVehicleSK_AnimBP_AnimGraphNode_ModifyBone_293BD4664A42001B01053FAFD13526BA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ShoppingCartVehicleSK_AnimBP_AnimGraphNode_ModifyBone_89E126974E81E2145D3B3991782D45BD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ShoppingCartVehicleSK_AnimBP_AnimGraphNode_ModifyBone_1B1D442A4E63EB172E7CF2ADCD71EAC5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ShoppingCartVehicleSK_AnimBP_AnimGraphNode_ModifyBone_2EB7C951424DBBEA5313F78EBCA54D4E();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ShoppingCartVehicleSK_AnimBP_AnimGraphNode_ModifyBone_E647C0094FE076130E619996120F88BA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ShoppingCartVehicleSK_AnimBP_AnimGraphNode_ModifyBone_C91EA21B47AF3D14096DFFBF9DAB1219();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ShoppingCartVehicleSK_AnimBP_AnimGraphNode_ModifyBone_F1D8E9314864DADDBE8742B1B63F1178();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ShoppingCartVehicleSK_AnimBP_AnimGraphNode_ModifyBone_E3A0212F42252A3B35E387BD4E915843();
	void ExecuteUbergraph_ShoppingCartVehicleSK_AnimBP(int32 EntryPoint, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue1, const struct FRotator& CallFunc_MakeRotator_ReturnValue2, const struct FRotator& CallFunc_MakeRotator_ReturnValue3, const struct FRotator& CallFunc_MakeRotator_ReturnValue4, const struct FRotator& CallFunc_MakeRotator_ReturnValue5, float K2Node_Event_DeltaTimeX, class AActor* CallFunc_GetOwningActor_ReturnValue, class AFortAthenaSKPushVehicle* K2Node_DynamicCast_AsFort_Athena_SKPush_Vehicle, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_GetPreviousLinearVelocity_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue, float CallFunc_VSize_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue1, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, const struct FVector& CallFunc_TransformToBoneSpace_OutPosition, const struct FRotator& CallFunc_TransformToBoneSpace_OutRotation, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FRotator& CallFunc_MakeRotator_ReturnValue6, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue1, const struct FRotator& CallFunc_MakeRotator_ReturnValue7, const struct FRotator& CallFunc_MakeRotator_ReturnValue8, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue1, const struct FRotator& CallFunc_TransformRotation_ReturnValue, const struct FVector& CallFunc_TransformLocation_ReturnValue, const struct FRotator& CallFunc_TransformRotation_ReturnValue1, const struct FVector& CallFunc_TransformLocation_ReturnValue1, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue1, const struct FRotator& CallFunc_MakeRotator_ReturnValue9);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
