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

// BlueprintGeneratedClass Phoebe_Evaluator_DangerDetection.Phoebe_Evaluator_DangerDetection_C
// 0x0000 (0x0138 - 0x0138)
class UPhoebe_Evaluator_DangerDetection_C : public UFortAthenaAIBotEvaluator_DangerDetection
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Phoebe_Evaluator_DangerDetection.Phoebe_Evaluator_DangerDetection_C");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
