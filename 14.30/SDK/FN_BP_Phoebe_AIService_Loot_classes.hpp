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

// BlueprintGeneratedClass BP_Phoebe_AIService_Loot.BP_Phoebe_AIService_Loot_C
// 0x0000 (0x0360 - 0x0360)
class UBP_Phoebe_AIService_Loot_C : public UAthenaAIServiceLoot
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Phoebe_AIService_Loot.BP_Phoebe_AIService_Loot_C");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
