#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0xB8 (0x418 - 0x360)
// AnimBlueprintGeneratedClass F_SML_CAU_Jess_Head_01_Dyn_AnimBP.F_SML_CAU_Jess_Head_01_Dyn_AnimBP_C
class UF_SML_CAU_Jess_Head_01_Dyn_AnimBP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x360(0x8)(Transient, DuplicateTransient)
	struct FAnimNode_SubInput                    AnimGraphNode_SubInput_E9C497CE4272446DE820C7AC4F9475C9; // 0x368(0x68)()
	struct FAnimNode_Root                        AnimGraphNode_Root_A8263707428C6C1716519682DC411824; // 0x3D0(0x48)()

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("F_SML_CAU_Jess_Head_01_Dyn_AnimBP_C");
		return Clss;
	}

	void ExecuteUbergraph_F_SML_CAU_Jess_Head_01_Dyn_AnimBP(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
