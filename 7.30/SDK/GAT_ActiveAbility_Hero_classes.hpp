#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x10 (0x971 - 0x961)
// BlueprintGeneratedClass GAT_ActiveAbility_Hero.GAT_ActiveAbility_Hero_C
class UGAT_ActiveAbility_Hero_C : public UGAT_ActiveAbility_C
{
public:
	uint8                                        Pad_40EA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x968(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         UseHeroLoadoutSystem;                              // 0x970(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GAT_ActiveAbility_Hero_C");
		return Clss;
	}

	void CommitAbilityWithEvent(bool* Passed, bool CallFunc_K2_CommitAbility_ReturnValue);
	void K2_ActivateAbility();
	void ExecuteUbergraph_GAT_ActiveAbility_Hero(int32 EntryPoint, bool CallFunc_IsHeroLoadoutSystemEnabled_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
