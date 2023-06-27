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

// WidgetBlueprintGeneratedClass PlayerSurveyPanelAnswerSelectorWidget.PlayerSurveyPanelAnswerSelectorWidget_C
// 0x0000 (0x0300 - 0x0300)
class UPlayerSurveyPanelAnswerSelectorWidget_C : public UFortPlayerSurveyQuestionDisplayWidgetBase
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PlayerSurveyPanelAnswerSelectorWidget.PlayerSurveyPanelAnswerSelectorWidget_C");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
