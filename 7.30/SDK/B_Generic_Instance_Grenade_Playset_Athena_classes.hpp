#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x8 (0x998 - 0x990)
// BlueprintGeneratedClass B_Generic_Instance_Grenade_Playset_Athena.B_Generic_Instance_Grenade_Playset_Athena_C
class AB_Generic_Instance_Grenade_Playset_Athena_C : public AB_Grenade_Playset_Athena_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x990(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("B_Generic_Instance_Grenade_Playset_Athena_C");
		return Clss;
	}

	void UserConstructionScript();
	void ReceiveBeginPlay();
	void K2_OnUnEquip();
	void OnWeaponAttached();
	void ExecuteUbergraph_B_Generic_Instance_Grenade_Playset_Athena(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
