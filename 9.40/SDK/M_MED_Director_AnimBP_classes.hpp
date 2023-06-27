#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x708 (0x978 - 0x270)
// AnimBlueprintGeneratedClass M_MED_Director_AnimBP.M_MED_Director_AnimBP_C
class UM_MED_Director_AnimBP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_CopyPoseFromMesh            AnimGraphNode_CopyPoseFromMesh_C2677E6A4F172F2B65E2A9B7724D6A32; // 0x278(0x140)(ContainsInstancedReference)
	struct FAnimNode_Root                        AnimGraphNode_Root_1256AF3C47D35C3FA27B1BA04EC2329E; // 0x3B8(0x30)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_013FDEE249F10CDB9C69C9B55885D859; // 0x3E8(0x20)()
	uint8                                        Pad_653D[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_0CA9A95E43C75448A8F0C9A0796B688E; // 0x410(0x440)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_2FE6CB2547BA00E460BC8D86D345541A; // 0x850(0x20)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_080EBBD84D2BE043A73A5E8715BB436D; // 0x870(0x108)()

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("M_MED_Director_AnimBP_C");
		return Clss;
	}

	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_M_MED_Director_AnimBP(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
