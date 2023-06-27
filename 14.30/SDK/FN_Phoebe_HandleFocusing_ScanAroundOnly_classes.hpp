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

// BlueprintGeneratedClass Phoebe_HandleFocusing_ScanAroundOnly.Phoebe_HandleFocusing_ScanAroundOnly_C
// 0x0000 (0x00F0 - 0x00F0)
class UPhoebe_HandleFocusing_ScanAroundOnly_C : public UFortAthenaAIBotEvaluator_HandleFocusing
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Phoebe_HandleFocusing_ScanAroundOnly.Phoebe_HandleFocusing_ScanAroundOnly_C");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
