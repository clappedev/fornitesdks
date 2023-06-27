#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0xE8 (0x448 - 0x360)
// AnimBlueprintGeneratedClass BP_Pistol_FC_SA.BP_Pistol_FC_SA_C
class UBP_Pistol_FC_SA_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x360(0x8)(Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_59F2F7924C02FD42668752B6AD5C5D7D; // 0x368(0x40)()
	struct FAnimNode_Slot                        AnimGraphNode_Slot_3C404E374989FC3E37A4538744D810DA; // 0x3A8(0x68)()
	struct FAnimNode_RefPose                     AnimGraphNode_LocalRefPose_16F5A0174D756BCD3A56E2A54C593E88; // 0x410(0x38)()

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BP_Pistol_FC_SA_C");
		return Clss;
	}

	void ExecuteUbergraph_BP_Pistol_FC_SA(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
