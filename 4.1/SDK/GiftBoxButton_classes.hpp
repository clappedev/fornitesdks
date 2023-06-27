#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x29 (0x841 - 0x818)
// WidgetBlueprintGeneratedClass GiftBoxButton.GiftBoxButton_C
class UGiftBoxButton_C : public UFortGiftBoxButton
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x818(0x8)(Transient, DuplicateTransient)
	class UWidgetAnimation*                      Hover;                                             // 0x820(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      Deselected;                                        // 0x828(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      Selected;                                          // 0x830(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ButtonSelected;                                    // 0x838(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         LocalIsHovered;                                    // 0x840(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GiftBoxButton_C");
		return Clss;
	}

	void Construct();
	void PlayGiftSelectedAnimation(bool bIsSelected);
	void ExecuteUbergraph_GiftBoxButton(int32 EntryPoint, bool K2Node_Event_bIsSelected);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
