#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x8 (0x378 - 0x370)
// BlueprintGeneratedClass BP_BattleMapZoneNode.BP_BattleMapZoneNode_C
class ABP_BattleMapZoneNode_C : public ABP_BattleMapBaseNode_C
{
public:
	class UStaticMeshComponent*                  StaticMesh_Inverted;                               // 0x370(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BP_BattleMapZoneNode_C");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
