#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x82C (0x4BAC - 0x4380)
// AnimBlueprintGeneratedClass MountedTurret_Gunner_AnimBP.MountedTurret_Gunner_AnimBP_C
class UMountedTurret_Gunner_AnimBP_C : public UFortPlayerAnimInstance_MountedTurret
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4380(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_LegIK                       AnimGraphNode_LegIK_EA99B7B8421846838D4B2EA9E3E1CF69; // 0x4388(0xF8)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_AB5E7EE04FD942996FFE84801A0C0FFF; // 0x4480(0x20)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_490B730C4D3612B56BF047918267E18F; // 0x44A0(0x20)()
	struct FAnimNode_LegIK                       AnimGraphNode_LegIK_48C11BA2470BF641C7E0C8B70AEF7F40; // 0x44C0(0xF8)()
	struct FAnimNode_Root                        AnimGraphNode_Root_2B80D546472B689BD0B5ABB23390F217; // 0x45B8(0x20)()
	struct FAnimNode_Slot                        AnimGraphNode_Slot_221FD1B34567A8B8784CB4AB81D1E5B5; // 0x45D8(0x48)()
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_41B2C0ED4B73B9B6492BEE9541D99135; // 0x4620(0xB0)()
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_D906DC2D4CCAB5B10A19AAB7140D34C9; // 0x46D0(0xC8)()
	struct FAnimNode_RefPose                     AnimGraphNode_IdentityPose_E6B2D7944E459199A162B78A736662D2; // 0x4798(0x18)()
	struct FAnimNode_RotationOffsetBlendSpace    AnimGraphNode_RotationOffsetBlendSpace_B42B4CC64E43087EE5F75AAA3AC31B87; // 0x47B0(0x188)()
	struct FAnimNode_RefPose                     AnimGraphNode_IdentityPose_E12A1B75416454F164AF9C8FFBC99FCD; // 0x4938(0x18)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_FFEC5A2C451F8B6DE9C3D0BF63D47EDB; // 0x4950(0x78)()
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_307F98F94ACED67B0AC1628B3827E568; // 0x49C8(0xC8)()
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_D604CC9941458E8F6D56F5AC018805FB; // 0x4A90(0x48)()
	struct FAnimNode_Slot                        AnimGraphNode_Slot_202C876C4609006B94125DA140FCE5F2; // 0x4AD8(0x48)()
	class AFortAthenaVehicle*                    Pawn;                                              // 0x4B20(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               LocalLeftOffset;                                   // 0x4B28(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               WorldPosLeft;                                      // 0x4B34(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              LocalRotLeftOffset;                                // 0x4B40(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_391C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortMountedTurret*                    MountedTurret;                                     // 0x4B50(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              WorldRotLeft;                                      // 0x4B58(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                               LocalRightOffset;                                  // 0x4B64(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              LocalRotRightOffset;                               // 0x4B70(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                              WorldRotRight;                                     // 0x4B7C(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                               WorldPosRight;                                     // 0x4B88(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Speed;                                             // 0x4B94(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsTurning;                                         // 0x4B98(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_391D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TurnRate;                                          // 0x4B9C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        AimingPitchLastTick;                               // 0x4BA0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        PitchRate;                                         // 0x4BA4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        PedalScaler;                                       // 0x4BA8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MountedTurret_Gunner_AnimBP_C");
		return Clss;
	}

	void EvaluateGraphExposedInputs_ExecuteUbergraph_MountedTurret_Gunner_AnimBP_AnimGraphNode_RotationOffsetBlendSpace_B42B4CC64E43087EE5F75AAA3AC31B87();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_MountedTurret_Gunner_AnimBP(int32 EntryPoint, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, float K2Node_Event_DeltaTimeX, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, class AFortAthenaVehicle* CallFunc_GetVehicle_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue1, class AFortMountedTurret* K2Node_DynamicCast_AsFort_Mounted_Turret, bool K2Node_DynamicCast_bSuccess1, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UAnimBP_MountedTurret_C* K2Node_DynamicCast_AsAnim_BP_Mounted_Turret, bool K2Node_DynamicCast_bSuccess2, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_SelectFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue1, float CallFunc_Divide_FloatFloat_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
