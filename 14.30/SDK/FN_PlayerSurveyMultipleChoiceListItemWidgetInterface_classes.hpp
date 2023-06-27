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

// BlueprintGeneratedClass PlayerSurveyMultipleChoiceListItemWidgetInterface.PlayerSurveyMultipleChoiceListItemWidgetInterface_C
// 0x0000 (0x0028 - 0x0028)
class UPlayerSurveyMultipleChoiceListItemWidgetInterface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PlayerSurveyMultipleChoiceListItemWidgetInterface.PlayerSurveyMultipleChoiceListItemWidgetInterface_C");
		
		return ptr;
	}


	void SetIndex(int Value);
	void SetChoiceData(const struct FFortPlayerSurveyQuestionChoice& Value);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
