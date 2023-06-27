#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x10 (0x220 - 0x210)
// WidgetBlueprintGeneratedClass XpReasonFeedItem.XpReasonFeedItem_C
class UXpReasonFeedItem_C : public UCommonUserWidget
{
public:
	class UWidgetAnimation*                      Present_PopIn;                                     // 0x210(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                        XpText;                                            // 0x218(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("XpReasonFeedItem_C");
		return Clss;
	}

	void SetXpText(class FText Text);
	void PlayPresentEffect(float PlaybackSpeed);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
