#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0xD (0xEB1 - 0xEA4)
// BlueprintGeneratedClass B_Assault_InfantryRifle_SR_Athena.B_Assault_InfantryRifle_SR_Athena_C
class AB_Assault_InfantryRifle_SR_Athena_C : public AB_Assault_Generic_C
{
public:
	uint8                                        Pad_5344[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystemComponent*              ClipEject;                                         // 0xEA8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         Is_Equiping;                                       // 0xEB0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("B_Assault_InfantryRifle_SR_Athena_C");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
