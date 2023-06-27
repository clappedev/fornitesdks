#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0xF8 (0x368 - 0x270)
// AnimBlueprintGeneratedClass ProxGrenadeLauncher_Sk_AnimBP.ProxGrenadeLauncher_Sk_AnimBP_C
class UProxGrenadeLauncher_Sk_AnimBP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_F9BC58EF4033A519DE3CAA8DDA2BB760; // 0x278(0x30)()
	struct FAnimNode_Slot                        AnimGraphNode_Slot_8B27DB514CE6CDF30157EABCD3F83551; // 0x2A8(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_B7BEC5FE444CD79EF0E18FB90AAF9A6E; // 0x2F0(0x78)()

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ProxGrenadeLauncher_Sk_AnimBP_C");
		return Clss;
	}

	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_ProxGrenadeLauncher_Sk_AnimBP(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
