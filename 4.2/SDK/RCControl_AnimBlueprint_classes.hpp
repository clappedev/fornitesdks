#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x170 (0x4D0 - 0x360)
// AnimBlueprintGeneratedClass RCControl_AnimBlueprint.RCControl_AnimBlueprint_C
class URCControl_AnimBlueprint_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x360(0x8)(Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_4BFB0E834E31FC0B04D397BB0A2CC05F; // 0x368(0x48)()
	struct FAnimNode_Slot                        AnimGraphNode_Slot_7A5C24A747EADBE3AD2AB3A97C48278F; // 0x3B0(0x70)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_C507D3604F783A593D65ED90D3094EA6; // 0x420(0xB0)()

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("RCControl_AnimBlueprint_C");
		return Clss;
	}

	void ExecuteUbergraph_RCControl_AnimBlueprint(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
