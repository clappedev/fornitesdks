#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x41 (0x269 - 0x228)
// WidgetBlueprintGeneratedClass FrontEndRewardWrapperWidget.FrontEndRewardWrapperWidget_C
class UFrontEndRewardWrapperWidget_C : public UFortUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x228(0x8)(Transient, DuplicateTransient)
	class UWidgetAnimation*                      IntroAnim;                                         // 0x230(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_Container;                                 // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox_Container;                                 // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TextName;                                          // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class ESlateVisibility                  StackCounterDefaultVisibility;                     // 0x250(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EItemDisplayStyle                 DefaultDisplayStyle;                               // 0x251(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_5005[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  EventDispatcher_Go_Trigger;                        // 0x258(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         ShowText;                                          // 0x268(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FrontEndRewardWrapperWidget_C");
		return Clss;
	}

	void IntroAnimation();
	void AddToWrapper(class UWidget* Widget, class FText DisplayName, const struct FMargin& K2Node_MakeStruct_Margin, class UOverlaySlot* CallFunc_AddChildToOverlay_ReturnValue);
	void Construct();
	void Go_Trigger();
	void ExecuteUbergraph_FrontEndRewardWrapperWidget(int32 EntryPoint);
	void EventDispatcher_Go_Trigger__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
