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

// WidgetBlueprintGeneratedClass PlayerSurveyPanelContents.PlayerSurveyPanelContents_C
// 0x0000 (0x02F0 - 0x02F0)
class UPlayerSurveyPanelContents_C : public UFortPlayerSurveyWidgetBase
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PlayerSurveyPanelContents.PlayerSurveyPanelContents_C");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
