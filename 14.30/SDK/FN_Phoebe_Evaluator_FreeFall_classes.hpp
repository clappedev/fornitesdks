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

// BlueprintGeneratedClass Phoebe_Evaluator_FreeFall.Phoebe_Evaluator_FreeFall_C
// 0x0000 (0x0170 - 0x0170)
class UPhoebe_Evaluator_FreeFall_C : public UFortAthenaAIBotEvaluator_FreeFalling
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Phoebe_Evaluator_FreeFall.Phoebe_Evaluator_FreeFall_C");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
