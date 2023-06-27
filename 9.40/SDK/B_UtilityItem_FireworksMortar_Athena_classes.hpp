#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x10 (0x960 - 0x950)
// BlueprintGeneratedClass B_UtilityItem_FireworksMortar_Athena.B_UtilityItem_FireworksMortar_Athena_C
class AB_UtilityItem_FireworksMortar_Athena_C : public AB_UtilityItem_Generic_C
{
public:
	class UStaticMeshComponent*                  Base;                                              // 0x950(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Top;                                               // 0x958(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("B_UtilityItem_FireworksMortar_Athena_C");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
