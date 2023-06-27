#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x308 (0x578 - 0x270)
// AnimBlueprintGeneratedClass Deployable_Storm_AnimBP.Deployable_Storm_AnimBP_C
class UDeployable_Storm_AnimBP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_D344AFC8413DF723E047E78ADD2E0DD6; // 0x278(0x30)()
	uint8                                        Pad_50E9[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_Trail                       AnimGraphNode_Trail_1C634D8E45891FB94D43B5BD813D438B; // 0x2B0(0x270)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_185924524B7BE7955259708940C33F36; // 0x520(0x20)()
	struct FAnimNode_RefPose                     AnimGraphNode_LocalRefPose_E8A01EAC47FEDA138AA2668F3318055B; // 0x540(0x18)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_93B4626D459F82C2494A2F9063BDC117; // 0x558(0x20)()

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Deployable_Storm_AnimBP_C");
		return Clss;
	}

	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_Deployable_Storm_AnimBP(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
