#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x48 (0xB70 - 0xB28)
// WidgetBlueprintGeneratedClass HelpListItem.HelpListItem_C
class UHelpListItem_C : public UFortHelpTreeItemBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB28(0x8)(Transient, DuplicateTransient)
	class UImage*                                Arrow;                                             // 0xB30(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        EntryHBox;                                         // 0xB38(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      EntryHeaderName;                                   // 0xB40(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HeaderHBox;                                        // 0xB48(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      HeaderText;                                        // 0xB50(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       PlayerHeaderSwitcher;                              // 0xB58(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	UMulticastDelegateProperty_                  InviteJoinChanged;                                 // 0xB60(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("HelpListItem_C");
		return Clss;
	}

	void SetupExpansion(bool Expanded, bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable1, float K2Node_Select_Default);
	void InitializeItem(bool K2Node_SwitchEnum_CmpSuccess);
	void OnListItemObjectSet(class UObject* ListItemObject);
	void BP_OnItemExpansionChanged(bool bIsExpanded);
	void ExecuteUbergraph_HelpListItem(int32 EntryPoint, bool K2Node_Event_bIsExpanded, bool CallFunc_IsListItemExpanded_ReturnValue, class UObject* K2Node_Event_ListItemObject);
	void InviteJoinChanged__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
