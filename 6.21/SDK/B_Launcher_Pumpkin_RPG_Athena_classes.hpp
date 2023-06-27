#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x1C (0x1038 - 0x101C)
// BlueprintGeneratedClass B_Launcher_Pumpkin_RPG_Athena.B_Launcher_Pumpkin_RPG_Athena_C
class AB_Launcher_Pumpkin_RPG_Athena_C : public AB_RocketLauncher_Generic_C
{
public:
	uint8                                        Pad_5BF4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1020(0x8)(Transient, DuplicateTransient)
	class UParticleSystemComponent*              P_PumpkinLauncher_EyeFire;                         // 0x1028(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              RearMuzzle_0;                                      // 0x1030(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("B_Launcher_Pumpkin_RPG_Athena_C");
		return Clss;
	}

	void UserConstructionScript(bool CallFunc_K2_AttachToComponent_ReturnValue);
	void Muzzle_Flash_FX(bool Persistent_Fire);
	void ExecuteUbergraph_B_Launcher_Pumpkin_RPG_Athena(int32 EntryPoint, bool K2Node_Event_Persistent_Fire);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
