#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x148 (0x4B8 - 0x370)
// AnimBlueprintGeneratedClass Crossbow_BP.Crossbow_BP_C
class UCrossbow_BP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x370(0x8)(Transient, DuplicateTransient)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_C2CE56F348B7595774725785CADC3973; // 0x378(0x68)()
	struct FAnimNode_Root                        AnimGraphNode_Root_F1B1D70144C41EE177919293C033515D; // 0x3E0(0x40)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_DB6FD6CD480FD66D7D67B3BB318137F7; // 0x420(0x98)()

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Crossbow_BP_C");
		return Clss;
	}

	void ExecuteUbergraph_Crossbow_BP(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
