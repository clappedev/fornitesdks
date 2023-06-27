#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x7DC (0xC0C - 0x430)
// AnimBlueprintGeneratedClass SK_Weapon_Flotation_Balloon_Skeleton_AnimBP.SK_Weapon_Flotation_Balloon_Skeleton_AnimBP_C
class USK_Weapon_Flotation_Balloon_Skeleton_AnimBP_C : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x430(0x8)(Transient, DuplicateTransient)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_1870934749976874408594AE24405264; // 0x438(0x40)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_17811BD8492A719214EC19AD77BD6A29; // 0x478(0x40)()
	uint8                                        Pad_6092[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_LookAt                      AnimGraphNode_LookAt_7B57FE4C487DC6F9E32018A7A0DBA84B; // 0x4C0(0x220)()
	struct FAnimNode_CopyPoseFromMesh            AnimGraphNode_CopyPoseFromMesh_2D7BF4A847530D38E2D24285CC0D9B49; // 0x6E0(0xE8)(ContainsInstancedReference)
	struct FAnimNode_SpringBone                  AnimGraphNode_SpringBone_A2B0CFAC4A512F3CE1A066B8890AFC5B; // 0x7C8(0x158)()
	struct FAnimNode_Trail                       AnimGraphNode_Trail_4DD306434D40186579746DBD80665345; // 0x920(0x280)()
	struct FAnimNode_Root                        AnimGraphNode_Root_84DBDC5E48D5C47BF629D8899BCA1531; // 0xBA0(0x40)()
	struct FRotator                              World_up_rotator;                                  // 0xBE0(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                               Root_socket_loc;                                   // 0xBEC(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ResetDyn;                                          // 0xBF8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6093[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        PawnZvelcheck;                                     // 0xBFC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CharVel;                                           // 0xC00(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SK_Weapon_Flotation_Balloon_Skeleton_AnimBP_C");
		return Clss;
	}

	void BlueprintUpdateAnimation(float DeltaTimeX);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Weapon_Flotation_Balloon_Skeleton_AnimBP_AnimGraphNode_Trail_4DD306434D40186579746DBD80665345();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Weapon_Flotation_Balloon_Skeleton_AnimBP_AnimGraphNode_SpringBone_A2B0CFAC4A512F3CE1A066B8890AFC5B();
	void ExecuteUbergraph_SK_Weapon_Flotation_Balloon_Skeleton_AnimBP(int32 EntryPoint, class USkeletalMeshComponent* CallFunc_GetPartSkeletalMeshComponent_ReturnValue, float K2Node_Event_DeltaTimeX, class AActor* CallFunc_GetOwner_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue1, class ACharacter* K2Node_DynamicCast_AsCharacter, bool K2Node_DynamicCast_bSuccess, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, bool CallFunc_NotEqual_FloatFloat_ReturnValue, float CallFunc_SelectFloat_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
