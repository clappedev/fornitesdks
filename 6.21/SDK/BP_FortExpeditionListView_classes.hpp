#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x28 (0x280 - 0x258)
// WidgetBlueprintGeneratedClass BP_FortExpeditionListView.BP_FortExpeditionListView_C
class UBP_FortExpeditionListView_C : public UFortExpeditionListViewWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x258(0x8)(Transient, DuplicateTransient)
	UMulticastDelegateProperty_                  OnItemClicked;                                     // 0x260(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                  OnItemHovered;                                     // 0x270(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BP_FortExpeditionListView_C");
		return Clss;
	}

	void BndEvt__ExpeditionListView_K2Node_ComponentBoundEvent_10_OnListViewItemClicked__DelegateSignature(class UObject* Item);
	void BndEvt__ExpeditionListView_K2Node_ComponentBoundEvent_52_OnListViewItemClicked__DelegateSignature(class UObject* Item);
	void BndEvt__ExpeditionListView_K2Node_ComponentBoundEvent_6_OnListViewItemClicked__DelegateSignature(class UObject* Item, bool bIsHovered);
	void ExecuteUbergraph_BP_FortExpeditionListView(int32 EntryPoint, class UCommonInputSubsystem* CallFunc_GetContext_ReturnValue, class UObject* K2Node_ComponentBoundEvent_Item1, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UObject* K2Node_ComponentBoundEvent_Item2, class UObject* K2Node_ComponentBoundEvent_Item, bool K2Node_ComponentBoundEvent_bIsHovered, class UCommonInputSubsystem* CallFunc_GetContext_ReturnValue1, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue1, bool CallFunc_EqualEqual_ByteByte_ReturnValue1);
	void OnItemHovered__DelegateSignature(class UObject* Item);
	void OnItemClicked__DelegateSignature(class UObject* Item);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif