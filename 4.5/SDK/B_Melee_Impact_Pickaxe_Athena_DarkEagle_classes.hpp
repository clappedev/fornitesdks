#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x8 (0xBE8 - 0xBE0)
// BlueprintGeneratedClass B_Melee_Impact_Pickaxe_Athena_DarkEagle.B_Melee_Impact_Pickaxe_Athena_DarkEagle_C
class AB_Melee_Impact_Pickaxe_Athena_DarkEagle_C : public AB_Melee_Impact_Generic_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xBE0(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("B_Melee_Impact_Pickaxe_Athena_DarkEagle_C");
		return Clss;
	}

	void UserConstructionScript();
	void OnPlayWeaponFireFX(bool bPersistentFire, bool bSecondaryFire);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_B_Melee_Impact_Pickaxe_Athena_DarkEagle(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool K2Node_Event_bPersistentFire, bool K2Node_Event_bSecondaryFire, bool CallFunc_IsValid_ReturnValue1, float CallFunc_GetGameTimeInSeconds_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
