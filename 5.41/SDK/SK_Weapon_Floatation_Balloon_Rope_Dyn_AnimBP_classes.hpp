#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x500 (0x860 - 0x360)
// AnimBlueprintGeneratedClass SK_Weapon_Floatation_Balloon_Rope_Dyn_AnimBP.SK_Weapon_Floatation_Balloon_Rope_Dyn_AnimBP_C
class USK_Weapon_Floatation_Balloon_Rope_Dyn_AnimBP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x360(0x8)(Transient, DuplicateTransient)
	uint8                                        Pad_6099[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_559AF0C94F5CA228ADB798A2ADFD8BCE; // 0x370(0x390)()
	struct FAnimNode_Root                        AnimGraphNode_Root_DC1F1F9F42FD2C9E66F4008757202573; // 0x700(0x40)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_E356704D4C3D5D37F66FF48BB02A62A8; // 0x740(0x40)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_3BB47F6D427F21C3720BA18E2E07F8F8; // 0x780(0x40)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_6FAE4FD444FFC02B99B5F58C51D50D29; // 0x7C0(0xA0)()

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SK_Weapon_Floatation_Balloon_Rope_Dyn_AnimBP_C");
		return Clss;
	}

	void ExecuteUbergraph_SK_Weapon_Floatation_Balloon_Rope_Dyn_AnimBP(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
