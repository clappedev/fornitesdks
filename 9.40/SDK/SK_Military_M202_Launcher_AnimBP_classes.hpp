#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x650 (0x8C0 - 0x270)
// AnimBlueprintGeneratedClass SK_Military_M202_Launcher_AnimBP.SK_Military_M202_Launcher_AnimBP_C
class USK_Military_M202_Launcher_AnimBP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_17CF37A94A2C7AC4053A03A9139BF1E7; // 0x278(0x30)()
	struct FAnimNode_SubInput                    AnimGraphNode_SubInput_E162F90747951BA3BEDA4896DEED9E40; // 0x2A8(0x70)()
	uint8                                        Pad_4E8D[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_RigidBody                   AnimGraphNode_RigidBody_B765535648D151547097BEA864D8C8D4; // 0x320(0x560)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_43CF7C314AA3EFEE15AD1687FA14E458; // 0x880(0x20)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_68F46D374AA96ADBF7D82B82DA19EDA7; // 0x8A0(0x20)()

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SK_Military_M202_Launcher_AnimBP_C");
		return Clss;
	}

	void AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_SK_Military_M202_Launcher_AnimBP(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
