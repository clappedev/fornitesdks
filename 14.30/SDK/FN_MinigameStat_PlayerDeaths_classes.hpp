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

// BlueprintGeneratedClass MinigameStat_PlayerDeaths.MinigameStat_PlayerDeaths_C
// 0x0000 (0x0190 - 0x0190)
class UMinigameStat_PlayerDeaths_C : public UFortMinigameStatFilter
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MinigameStat_PlayerDeaths.MinigameStat_PlayerDeaths_C");
		
		return ptr;
	}


	int Compare(int FirstScore, int SecondScore);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
