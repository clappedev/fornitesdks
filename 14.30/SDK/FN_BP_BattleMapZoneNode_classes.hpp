#pragma once

// Fortnite (14.30) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_BattleMapZoneNode.BP_BattleMapZoneNode_C
// 0x0008 (0x0360 - 0x0358)
class ABP_BattleMapZoneNode_C : public ABP_BattleMapBaseNode_C
{
public:
	class UStaticMeshComponent*                        StaticMesh_Inverted;                                      // 0x0358(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_BattleMapZoneNode.BP_BattleMapZoneNode_C");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
