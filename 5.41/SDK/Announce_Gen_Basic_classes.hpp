#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x8 (0x488 - 0x480)
// BlueprintGeneratedClass Announce_Gen_Basic.Announce_Gen_Basic_C
class AAnnounce_Gen_Basic_C : public AFortClientAnnouncement_Basic
{
public:
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x480(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Announce_Gen_Basic_C");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
