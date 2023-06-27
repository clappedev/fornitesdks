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

// BlueprintGeneratedClass AI_skill_phoebe_bot_attacking.AI_skill_phoebe_bot_attacking_C
// 0x0000 (0x00B0 - 0x00B0)
class UAI_skill_phoebe_bot_attacking_C : public UFortAthenaAIBotAttackingSkillSet
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AI_skill_phoebe_bot_attacking.AI_skill_phoebe_bot_attacking_C");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
