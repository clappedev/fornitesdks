#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x6A0 (0xA00 - 0x360)
// AnimBlueprintGeneratedClass SK_Military_M202_Launcher_AnimBP.SK_Military_M202_Launcher_AnimBP_C
class USK_Military_M202_Launcher_AnimBP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x360(0x8)(Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_17CF37A94A2C7AC4053A03A9139BF1E7; // 0x368(0x40)()
	struct FAnimNode_SubInput                    AnimGraphNode_SubInput_E162F90747951BA3BEDA4896DEED9E40; // 0x3A8(0x68)()
	struct FAnimNode_RigidBody                   AnimGraphNode_RigidBody_B765535648D151547097BEA864D8C8D4; // 0x410(0x570)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_43CF7C314AA3EFEE15AD1687FA14E458; // 0x980(0x40)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_68F46D374AA96ADBF7D82B82DA19EDA7; // 0x9C0(0x40)()

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SK_Military_M202_Launcher_AnimBP_C");
		return Clss;
	}

	void ExecuteUbergraph_SK_Military_M202_Launcher_AnimBP(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
