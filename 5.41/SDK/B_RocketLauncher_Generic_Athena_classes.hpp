#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x10 (0xF80 - 0xF70)
// BlueprintGeneratedClass B_RocketLauncher_Generic_Athena.B_RocketLauncher_Generic_Athena_C
class AB_RocketLauncher_Generic_Athena_C : public AB_Ranged_Generic_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xF70(0x8)(Transient, DuplicateTransient)
	class UParticleSystemComponent*              RearMuzzle;                                        // 0xF78(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("B_RocketLauncher_Generic_Athena_C");
		return Clss;
	}

	void UserConstructionScript();
	void Muzzle_Flash_FX(bool Persistent_Fire);
	void ExecuteUbergraph_B_RocketLauncher_Generic_Athena(int32 EntryPoint, bool K2Node_Event_Persistent_Fire);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
