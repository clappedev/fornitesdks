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

// BlueprintGeneratedClass BP_BattleMapGroundMoveEdge.BP_BattleMapGroundMoveEdge_C
// 0x0000 (0x0288 - 0x0288)
class ABP_BattleMapGroundMoveEdge_C : public ABP_BattleMapBaseEdge_C
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_BattleMapGroundMoveEdge.BP_BattleMapGroundMoveEdge_C");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
