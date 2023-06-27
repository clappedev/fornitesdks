#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x73C (0xC0C - 0x4D0)
// AnimBlueprintGeneratedClass SK_Weapon_Floatation_Balloon_Rope_Dyn_AnimBP.SK_Weapon_Floatation_Balloon_Rope_Dyn_AnimBP_C
class USK_Weapon_Floatation_Balloon_Rope_Dyn_AnimBP_C : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4D0(0x8)(Transient, DuplicateTransient)
	uint8                                        Pad_4132[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_559AF0C94F5CA228ADB798A2ADFD8BCE; // 0x4E0(0x360)()
	struct FAnimNode_Root                        AnimGraphNode_Root_DC1F1F9F42FD2C9E66F4008757202573; // 0x840(0x40)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_E356704D4C3D5D37F66FF48BB02A62A8; // 0x880(0x40)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_3BB47F6D427F21C3720BA18E2E07F8F8; // 0x8C0(0x40)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_6FAE4FD444FFC02B99B5F58C51D50D29; // 0x900(0x98)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_BFA4179842B36B89CB578CA0804E7CD0; // 0x998(0x128)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_16D3898C48DD26048D4670A73F3C2D9E; // 0xAC0(0x128)()
	struct FRotator                              SocketUpVector;                                    // 0xBE8(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4133[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACharacter*                            Character;                                         // 0xBF8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawnAthena*                 Player_pawn;                                       // 0xC00(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Pawn_speed_alpha;                                  // 0xC08(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SK_Weapon_Floatation_Balloon_Rope_Dyn_AnimBP_C");
		return Clss;
	}

	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Weapon_Floatation_Balloon_Rope_Dyn_AnimBP_AnimGraphNode_ModifyBone_BFA4179842B36B89CB578CA0804E7CD0();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void BlueprintInitializeAnimation();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Weapon_Floatation_Balloon_Rope_Dyn_AnimBP_AnimGraphNode_ModifyBone_16D3898C48DD26048D4670A73F3C2D9E();
	void ExecuteUbergraph_SK_Weapon_Floatation_Balloon_Rope_Dyn_AnimBP(int32 EntryPoint, float K2Node_Event_DeltaTimeX, class USkeletalMeshComponent* CallFunc_GetPartSkeletalMeshComponent_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue1, class AFortPlayerPawnAthena* K2Node_DynamicCast_AsFort_Player_Pawn_Athena, bool K2Node_DynamicCast_bSuccess, class ACharacter* K2Node_DynamicCast_AsCharacter, bool K2Node_DynamicCast_bSuccess1, class USkeletalMeshComponent* CallFunc_GetPartSkeletalMeshComponent_ReturnValue1, const struct FRotator& CallFunc_GetSocketRotation_ReturnValue, const struct FVector& CallFunc_GetUpVector_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector& CallFunc_GetVelocity_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, float CallFunc_BreakVector_X1, float CallFunc_BreakVector_Y1, float CallFunc_BreakVector_Z1, const struct FRotator& CallFunc_ComposeRotators_ReturnValue, bool CallFunc_NotEqual_FloatFloat_ReturnValue, float CallFunc_SelectFloat_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue1, const struct FVector& CallFunc_Conv_RotatorToVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, float CallFunc_BreakVector_X2, float CallFunc_BreakVector_Y2, float CallFunc_BreakVector_Z2, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
