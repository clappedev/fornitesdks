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

// BlueprintGeneratedClass BP_BattleMapTeamFlightNode.BP_BattleMapTeamFlightNode_C
// 0x0000 (0x0358 - 0x0358)
class ABP_BattleMapTeamFlightNode_C : public ABP_BattleMapBaseNode_C
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_BattleMapTeamFlightNode.BP_BattleMapTeamFlightNode_C");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
