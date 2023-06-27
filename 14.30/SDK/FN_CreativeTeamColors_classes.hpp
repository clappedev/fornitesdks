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

// BlueprintGeneratedClass CreativeTeamColors.CreativeTeamColors_C
// 0x0020 (0x0220 - 0x0200)
class UCreativeTeamColors_C : public USceneComponent
{
public:
	TArray<struct FLinearColor>                        TeamLightColors;                                          // 0x0200(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FLinearColor>                        TeamSelectorColors;                                       // 0x0210(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CreativeTeamColors.CreativeTeamColors_C");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
