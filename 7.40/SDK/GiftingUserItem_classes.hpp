#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x40 (0xB88 - 0xB48)
// WidgetBlueprintGeneratedClass GiftingUserItem.GiftingUserItem_C
class UGiftingUserItem_C : public UFortGiftingUserItem
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB48(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Toggle;                                            // 0xB50(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                ImageEmptyCheck;                                   // 0xB58(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ImageErrorState;                                   // 0xB60(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ImageSelectedCheck;                                // 0xB68(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 Switcher_UserStatus;                               // 0xB70(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Text_Message;                                      // 0xB78(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBox_UserDetails;                           // 0xB80(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GiftingUserItem_C");
		return Clss;
	}

	void SetSelectionState(enum class ESelectionState NewState, bool bAnimateOnSelect);
	void UpdateMessageText(class FText& NewMessage);
	void ExecuteUbergraph_GiftingUserItem(int32 EntryPoint, enum class ESelectionState K2Node_Event_NewState, bool K2Node_Event_bAnimateOnSelect, bool K2Node_SwitchEnum_CmpSuccess, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class FText K2Node_Event_NewMessage, bool CallFunc_TextIsEmpty_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
