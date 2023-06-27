#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x8 (0x950 - 0x948)
// BlueprintGeneratedClass B_JollyRascal_Athena.B_JollyRascal_Athena_C
class AB_JollyRascal_Athena_C : public AB_ConsumableSmall_Athena_C
{
public:
	class UStaticMeshComponent*                  JollyRascal;                                       // 0x948(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("B_JollyRascal_Athena_C");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
