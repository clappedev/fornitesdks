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

// BlueprintGeneratedClass MinimapChallengeIndicators.MinimapChallengeIndicators_C
// 0x0000 (0x0210 - 0x0210)
class UMinimapChallengeIndicators_C : public UFortMiniMapChallengeIndicators
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MinimapChallengeIndicators.MinimapChallengeIndicators_C");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
