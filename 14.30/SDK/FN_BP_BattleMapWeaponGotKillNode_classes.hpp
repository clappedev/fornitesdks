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

// BlueprintGeneratedClass BP_BattleMapWeaponGotKillNode.BP_BattleMapWeaponGotKillNode_C
// 0x0000 (0x0358 - 0x0358)
class ABP_BattleMapWeaponGotKillNode_C : public ABP_BattleMapBaseNode_C
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_BattleMapWeaponGotKillNode.BP_BattleMapWeaponGotKillNode_C");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
