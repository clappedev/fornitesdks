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

// BlueprintGeneratedClass AI_skill_DangerGrape_looting.AI_skill_DangerGrape_looting_C
// 0x0000 (0x0200 - 0x0200)
class UAI_skill_DangerGrape_looting_C : public UFortAthenaAIBotLootingSkillSet
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AI_skill_DangerGrape_looting.AI_skill_DangerGrape_looting_C");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
