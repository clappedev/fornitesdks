#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass SkillTreeColorSetup.SkillTreeColorSetup_C
class USkillTreeColorSetup_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SkillTreeColorSetup_C");
		return Clss;
	}

	void SkillTreeBGSetup(const struct FSkillTreePageColors& Page_Color, enum class ESkillTreePages Pages, class UMaterialInstanceDynamic* Mid, class UObject* __WorldContext, enum class ESkillTreePages Temp_byte_Variable, enum class ESkillTreePages Temp_byte_Variable1, const struct FLinearColor& K2Node_Select_Default, const struct FLinearColor& K2Node_Select1_Default, enum class ESkillTreePages Temp_byte_Variable2, const struct FLinearColor& K2Node_Select2_Default);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
