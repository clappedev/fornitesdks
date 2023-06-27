#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0xB0 (0x500 - 0x450)
// AnimBlueprintGeneratedClass F_SML_CAU_Sarah_Head_01_Dyn_AnimBP.F_SML_CAU_Sarah_Head_01_Dyn_AnimBP_C
class UF_SML_CAU_Sarah_Head_01_Dyn_AnimBP_C : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x450(0x8)(Transient, DuplicateTransient)
	struct FAnimNode_SubInput                    AnimGraphNode_SubInput_7C93049B4FDE4AB382791F8242A36627; // 0x458(0x68)()
	struct FAnimNode_Root                        AnimGraphNode_Root_B45D4D6B4C79D1ED63C9FC9F1E5CCCD6; // 0x4C0(0x40)()

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("F_SML_CAU_Sarah_Head_01_Dyn_AnimBP_C");
		return Clss;
	}

	void ExecuteUbergraph_F_SML_CAU_Sarah_Head_01_Dyn_AnimBP(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
