#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x13 (0xF78 - 0xF65)
// BlueprintGeneratedClass B_DualPistol_Athena.B_DualPistol_Athena_C
class AB_DualPistol_Athena_C : public AB_Ranged_Dual_Generic_Athena_C
{
public:
	uint8                                        Pad_54F8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xF68(0x8)(Transient, DuplicateTransient)
	class USoundCue*                             FireSoundOverride;                                 // 0xF70(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("B_DualPistol_Athena_C");
		return Clss;
	}

	void UserConstructionScript();
	void OnPlayWeaponFireFX(bool bPersistentFire, bool bSecondaryFire);
	void ExecuteUbergraph_B_DualPistol_Athena(int32 EntryPoint, bool K2Node_Event_bPersistentFire, bool K2Node_Event_bSecondaryFire);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
