#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x8 (0xB88 - 0xB80)
// BlueprintGeneratedClass DA_GuidedMissilePack.DA_GuidedMissilePack_C
class ADA_GuidedMissilePack_C : public AFortCustomizableAbilityDecoTool
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB80(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DA_GuidedMissilePack_C");
		return Clss;
	}

	void UserConstructionScript();
	void BPPressTrigger(class AFortDecoHelper* FortDecoHelper);
	void ExecuteUbergraph_DA_GuidedMissilePack(int32 EntryPoint, class APawn* CallFunc_GetInstigator_ReturnValue, class AFortDecoHelper* K2Node_Event_FortDecoHelper);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
