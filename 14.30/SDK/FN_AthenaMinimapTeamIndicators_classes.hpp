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

// BlueprintGeneratedClass AthenaMinimapTeamIndicators.AthenaMinimapTeamIndicators_C
// 0x0000 (0x0588 - 0x0588)
class UAthenaMinimapTeamIndicators_C : public UFortMiniMapTeamIndicators
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AthenaMinimapTeamIndicators.AthenaMinimapTeamIndicators_C");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
