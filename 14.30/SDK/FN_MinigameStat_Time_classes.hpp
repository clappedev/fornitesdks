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

// BlueprintGeneratedClass MinigameStat_Time.MinigameStat_Time_C
// 0x0001 (0x0191 - 0x0190)
class UMinigameStat_Time_C : public UFortMinigameStatFilter
{
public:
	bool                                               NewVar_1;                                                 // 0x0190(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MinigameStat_Time.MinigameStat_Time_C");
		
		return ptr;
	}


	int Accumulate(int A, int B);
	int Compare(int FirstScore, int SecondScore);
	struct FText FormatStat(int InCount);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
