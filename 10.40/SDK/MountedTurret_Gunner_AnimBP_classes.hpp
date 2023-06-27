#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x834 (0xAC14 - 0xA3E0)
// AnimBlueprintGeneratedClass MountedTurret_Gunner_AnimBP.MountedTurret_Gunner_AnimBP_C
class UMountedTurret_Gunner_AnimBP_C : public UFortPlayerAnimInstance_MountedTurret
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA3E0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_LegIK                       AnimGraphNode_LegIK_EA99B7B8421846838D4B2EA9E3E1CF69; // 0xA3E8(0xF8)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_AB5E7EE04FD942996FFE84801A0C0FFF; // 0xA4E0(0x20)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_490B730C4D3612B56BF047918267E18F; // 0xA500(0x20)()
	struct FAnimNode_LegIK                       AnimGraphNode_LegIK_48C11BA2470BF641C7E0C8B70AEF7F40; // 0xA520(0xF8)()
	struct FAnimNode_Root                        AnimGraphNode_Root_2B80D546472B689BD0B5ABB23390F217; // 0xA618(0x30)()
	struct FAnimNode_Slot                        AnimGraphNode_Slot_221FD1B34567A8B8784CB4AB81D1E5B5; // 0xA648(0x48)()
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_41B2C0ED4B73B9B6492BEE9541D99135; // 0xA690(0xB0)()
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_D906DC2D4CCAB5B10A19AAB7140D34C9; // 0xA740(0xC8)()
	struct FAnimNode_RefPose                     AnimGraphNode_IdentityPose_E6B2D7944E459199A162B78A736662D2; // 0xA808(0x18)()
	struct FAnimNode_RotationOffsetBlendSpace    AnimGraphNode_RotationOffsetBlendSpace_B42B4CC64E43087EE5F75AAA3AC31B87; // 0xA820(0x188)()
	struct FAnimNode_RefPose                     AnimGraphNode_IdentityPose_E12A1B75416454F164AF9C8FFBC99FCD; // 0xA9A8(0x18)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_FFEC5A2C451F8B6DE9C3D0BF63D47EDB; // 0xA9C0(0x78)()
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_307F98F94ACED67B0AC1628B3827E568; // 0xAA38(0xC8)()
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_D604CC9941458E8F6D56F5AC018805FB; // 0xAB00(0x48)()
	struct FAnimNode_Slot                        AnimGraphNode_Slot_202C876C4609006B94125DA140FCE5F2; // 0xAB48(0x48)()
	struct FVector                               LocalLeftOffset;                                   // 0xAB90(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               WorldPosLeft;                                      // 0xAB9C(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              LocalRotLeftOffset;                                // 0xABA8(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_11E3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortMountedTurret*                    MountedTurret;                                     // 0xABB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              WorldRotLeft;                                      // 0xABC0(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                               LocalRightOffset;                                  // 0xABCC(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              LocalRotRightOffset;                               // 0xABD8(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                              WorldRotRight;                                     // 0xABE4(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                               WorldPosRight;                                     // 0xABF0(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Speed;                                             // 0xABFC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsTurning;                                         // 0xAC00(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_11E4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TurnRate;                                          // 0xAC04(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        AimingPitchLastTick;                               // 0xAC08(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        PitchRate;                                         // 0xAC0C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        PedalScaler;                                       // 0xAC10(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MountedTurret_Gunner_AnimBP_C");
		return Clss;
	}

	void AnimGraph(struct FPoseLink* AnimGraph);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MountedTurret_Gunner_AnimBP_AnimGraphNode_RotationOffsetBlendSpace_B42B4CC64E43087EE5F75AAA3AC31B87();
	void ExecuteUbergraph_MountedTurret_Gunner_AnimBP(int32 EntryPoint, float K2Node_Event_DeltaTimeX, bool CallFunc_IsValid_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UAnimBP_MountedTurret_C* K2Node_DynamicCast_AsAnim_BP_Mounted_Turret, bool K2Node_DynamicCast_bSuccess, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_SelectFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue_1, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess_1, class AActor* CallFunc_GetVehicleActor_ReturnValue, class AFortMountedTurret* K2Node_DynamicCast_AsFort_Mounted_Turret, bool K2Node_DynamicCast_bSuccess_2);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
