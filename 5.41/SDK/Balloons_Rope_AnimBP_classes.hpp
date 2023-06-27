#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x150 (0x4B0 - 0x360)
// AnimBlueprintGeneratedClass Balloons_Rope_AnimBP.Balloons_Rope_AnimBP_C
class UBalloons_Rope_AnimBP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x360(0x8)(Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_AE1B6F214BD7D654DA01BCBD0E7A0859; // 0x368(0x40)()
	struct FAnimNode_Slot                        AnimGraphNode_Slot_FF3F5BEB44F536DA6931F79BCDC105EF; // 0x3A8(0x68)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_8B9A49D14E95A0CE4382AE90073E47B1; // 0x410(0xA0)()

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
