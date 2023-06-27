#pragma once

// Fortnite SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ScoreBadgeProviderMission.ScoreBadgeProviderMission_C
// 0x0000 (0x0028 - 0x0028)
class UScoreBadgeProviderMission_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ScoreBadgeProviderMission.ScoreBadgeProviderMission_C");
		return ptr;
	}


	void GetTotalScore(int* Score);
	void GetScoreBadgeInfos(TArray<struct FCollectionMissionBadgeDisplayInfo>* BadgeInfos);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
