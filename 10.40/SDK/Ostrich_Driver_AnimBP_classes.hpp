#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x600 (0xA9F0 - 0xA3F0)
// AnimBlueprintGeneratedClass Ostrich_Driver_AnimBP.Ostrich_Driver_AnimBP_C
class UOstrich_Driver_AnimBP_C : public UFortPlayerAnimInstance_OstrichDriver
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA3F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_164FDF614BB71730DFEBDE9633BBBA80; // 0xA3F8(0x30)()
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_E5D121B74B489326A4DAF49C8618A563; // 0xA428(0xC8)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_CA7FB92B43D2CA635DA9959FC734DEDF; // 0xA4F0(0x78)()
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_61B5C72E42EA7F4DDDAA84B87975929B; // 0xA568(0xB8)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_D6788D4947DE142F09A98EAAFAF1879C; // 0xA620(0x28)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_077090084F233625AE22F89E77008F82; // 0xA648(0xA0)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_14FE49CA40283C0591A9EDA2EFFFFD06; // 0xA6E8(0x28)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_063238B348273163810CF5937DDB4FFF; // 0xA710(0x78)()
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_AED8F18D4B1C95CB4F6A278AA2FEF55C; // 0xA788(0xC8)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_0A03C9AC408CD49455C78598CEB8307A; // 0xA850(0x78)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_95E0F86F46FBD8F60BCB3E897B319CDA; // 0xA8C8(0x30)()
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_D9B52F9C4B9B99DA3DCD6084EBC1E5DA; // 0xA8F8(0xB0)()
	struct FAnimNode_Slot                        AnimGraphNode_Slot_89DB43FC45EC8F33380422BBF0F3958D; // 0xA9A8(0x48)()

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Ostrich_Driver_AnimBP_C");
		return Clss;
	}

	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_Ostrich_Driver_AnimBP(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
