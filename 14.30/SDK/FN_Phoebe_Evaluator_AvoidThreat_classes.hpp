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

// BlueprintGeneratedClass Phoebe_Evaluator_AvoidThreat.Phoebe_Evaluator_AvoidThreat_C
// 0x0000 (0x0178 - 0x0178)
class UPhoebe_Evaluator_AvoidThreat_C : public UFortAthenaAIBotEvaluator_AvoidThreat
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Phoebe_Evaluator_AvoidThreat.Phoebe_Evaluator_AvoidThreat_C");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
