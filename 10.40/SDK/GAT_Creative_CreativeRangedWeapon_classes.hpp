#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0xF (0x998 - 0x989)
// BlueprintGeneratedClass GAT_Creative_CreativeRangedWeapon.GAT_Creative_CreativeRangedWeapon_C
class UGAT_Creative_CreativeRangedWeapon_C : public UGAT_ActiveAbility_C
{
public:
	uint8                                        Pad_1401[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x990(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GAT_Creative_CreativeRangedWeapon_C");
		return Clss;
	}

	void K2_ActivateAbility();
	void ExecuteUbergraph_GAT_Creative_CreativeRangedWeapon(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
