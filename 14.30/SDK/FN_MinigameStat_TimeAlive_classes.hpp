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

// BlueprintGeneratedClass MinigameStat_TimeAlive.MinigameStat_TimeAlive_C
// 0x0000 (0x0191 - 0x0191)
class UMinigameStat_TimeAlive_C : public UMinigameStat_Time_C
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MinigameStat_TimeAlive.MinigameStat_TimeAlive_C");
		
		return ptr;
	}


	int Compare(int FirstScore, int SecondScore);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
