#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass PlayerSurveyMultipleChoiceListItemWidgetInterface.PlayerSurveyMultipleChoiceListItemWidgetInterface_C
class UPlayerSurveyMultipleChoiceListItemWidgetInterface_C : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PlayerSurveyMultipleChoiceListItemWidgetInterface_C");
		return Clss;
	}

	void SetIndex(int32 Value);
	void SetChoiceData(const struct FFortPlayerSurveyQuestionChoice& Value);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
