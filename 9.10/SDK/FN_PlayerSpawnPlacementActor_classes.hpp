#pragma once

// Fortnite (9.1) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PlayerSpawnPlacementActor.PlayerSpawnPlacementActor_C
// 0x0008 (0x05C8 - 0x05C0)
class APlayerSpawnPlacementActor_C : public AFortPlacementActor
{
public:
	class UArrowComponent*                             Arrow;                                                    // 0x05C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PlayerSpawnPlacementActor.PlayerSpawnPlacementActor_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
