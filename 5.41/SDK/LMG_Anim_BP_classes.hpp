#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x1A8 (0x508 - 0x360)
// AnimBlueprintGeneratedClass LMG_Anim_BP.LMG_Anim_BP_C
class ULMG_Anim_BP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x360(0x8)(Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_BB04A6824ABBAEED5901A6947B88E4BF; // 0x368(0x40)()
	struct FAnimNode_Slot                        AnimGraphNode_Slot_9A4A91854D66514A7B527393E20AA106; // 0x3A8(0x68)()
	struct FAnimNode_RefPose                     AnimGraphNode_LocalRefPose_7CA80C604BB336829EC42F95092AE7CA; // 0x410(0x38)()
	struct FAnimNode_SubInstance                 AnimGraphNode_SubInstance_5BE6D33E46B42B5E2CFBC697BBEE2195; // 0x448(0xC0)()

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LMG_Anim_BP_C");
		return Clss;
	}

	void ExecuteUbergraph_LMG_Anim_BP(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
