#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0xE8 (0x358 - 0x270)
// AnimBlueprintGeneratedClass Balloons_Rope_AnimBP.Balloons_Rope_AnimBP_C
class UBalloons_Rope_AnimBP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_AE1B6F214BD7D654DA01BCBD0E7A0859; // 0x278(0x20)()
	struct FAnimNode_Slot                        AnimGraphNode_Slot_FF3F5BEB44F536DA6931F79BCDC105EF; // 0x298(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_8B9A49D14E95A0CE4382AE90073E47B1; // 0x2E0(0x78)()

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Balloons_Rope_AnimBP_C");
		return Clss;
	}

	void ExecuteUbergraph_Balloons_Rope_AnimBP(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
