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

// BlueprintGeneratedClass Phoebe_Evaluator_Healing.Phoebe_Evaluator_Healing_C
// 0x0000 (0x00A8 - 0x00A8)
class UPhoebe_Evaluator_Healing_C : public UFortAthenaAIBotEvaluator_Heal
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Phoebe_Evaluator_Healing.Phoebe_Evaluator_Healing_C");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
