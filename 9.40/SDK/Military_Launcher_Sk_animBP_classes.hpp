#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x98 (0x308 - 0x270)
// AnimBlueprintGeneratedClass Military_Launcher_Sk_animBP.Military_Launcher_Sk_animBP_C
class UMilitary_Launcher_Sk_animBP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_A7FEA80847975222BB6C1D92D89BD944; // 0x278(0x30)()
	struct FAnimNode_RefPose                     AnimGraphNode_LocalRefPose_717BB9D64402F05E800B1BB5F80076A5; // 0x2A8(0x18)()
	struct FAnimNode_Slot                        AnimGraphNode_Slot_D51EB8ED4CA9A117A59091AFD524A65D; // 0x2C0(0x48)()

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Military_Launcher_Sk_animBP_C");
		return Clss;
	}

	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_Military_Launcher_Sk_animBP(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
