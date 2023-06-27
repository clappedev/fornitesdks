#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x650 (0x8C0 - 0x270)
// AnimBlueprintGeneratedClass TNT_Bundle_Skeleton_AnimBlueprint.TNT_Bundle_Skeleton_AnimBlueprint_C
class UTNT_Bundle_Skeleton_AnimBlueprint_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_0E80607941CA5A58311D7BA7D9236346; // 0x278(0x30)()
	struct FAnimNode_SubInput                    AnimGraphNode_SubInput_32C7856A4D26D995F6C882A32CC23B8A; // 0x2A8(0x70)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_BD65FF0045636DFF1FF3C7B74BBDF795; // 0x318(0x20)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_70244CF849E450BB78DF9998D765E8BA; // 0x338(0x20)()
	uint8                                        Pad_4F72[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_RigidBody                   AnimGraphNode_RigidBody_6FB8161844712FE393C4D1B1C2EB894D; // 0x360(0x560)()

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TNT_Bundle_Skeleton_AnimBlueprint_C");
		return Clss;
	}

	void AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_TNT_Bundle_Skeleton_AnimBlueprint(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
