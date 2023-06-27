#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x8B0 (0xE10 - 0x560)
// AnimBlueprintGeneratedClass SK_Weapon_Flotation_Balloon_Skeleton_AnimBP.SK_Weapon_Flotation_Balloon_Skeleton_AnimBP_C
class USK_Weapon_Flotation_Balloon_Skeleton_AnimBP_C : public UCustomCharacterPartAnimInstance_Balloons
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x560(0x8)(Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_84DBDC5E48D5C47BF629D8899BCA1531; // 0x568(0x40)()
	struct FAnimNode_CopyPoseFromMesh            AnimGraphNode_CopyPoseFromMesh_2D7BF4A847530D38E2D24285CC0D9B49; // 0x5A8(0xF0)(ContainsInstancedReference)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_1870934749976874408594AE24405264; // 0x698(0x40)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_17811BD8492A719214EC19AD77BD6A29; // 0x6D8(0x40)()
	uint8                                        Pad_5B46[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_LookAt                      AnimGraphNode_LookAt_7B57FE4C487DC6F9E32018A7A0DBA84B; // 0x720(0x200)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_3B803E214CCD9CFCB5B5D09DB5A8B420; // 0x920(0x128)()
	struct FAnimNode_SpringBone                  AnimGraphNode_SpringBone_A2B0CFAC4A512F3CE1A066B8890AFC5B; // 0xA48(0x158)()
	struct FAnimNode_Trail                       AnimGraphNode_Trail_4DD306434D40186579746DBD80665345; // 0xBA0(0x270)()

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SK_Weapon_Flotation_Balloon_Skeleton_AnimBP_C");
		return Clss;
	}

	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Weapon_Flotation_Balloon_Skeleton_AnimBP_AnimGraphNode_SpringBone_A2B0CFAC4A512F3CE1A066B8890AFC5B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Weapon_Flotation_Balloon_Skeleton_AnimBP_AnimGraphNode_ModifyBone_3B803E214CCD9CFCB5B5D09DB5A8B420();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Weapon_Flotation_Balloon_Skeleton_AnimBP_AnimGraphNode_LookAt_7B57FE4C487DC6F9E32018A7A0DBA84B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Weapon_Flotation_Balloon_Skeleton_AnimBP_AnimGraphNode_Trail_4DD306434D40186579746DBD80665345();
	void ExecuteUbergraph_SK_Weapon_Flotation_Balloon_Skeleton_AnimBP(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
