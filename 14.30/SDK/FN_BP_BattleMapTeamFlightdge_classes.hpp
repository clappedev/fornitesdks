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

// BlueprintGeneratedClass BP_BattleMapTeamFlightdge.BP_BattleMapTeamFlightdge_C
// 0x0000 (0x0288 - 0x0288)
class ABP_BattleMapTeamFlightdge_C : public ABP_BattleMapBaseEdge_C
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_BattleMapTeamFlightdge.BP_BattleMapTeamFlightdge_C");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif