#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x10 (0x2B0 - 0x2A0)
// WidgetBlueprintGeneratedClass MiniCraftingIngredientList.MiniCraftingIngredientList_C
class UMiniCraftingIngredientList_C : public UFortItemQuantityListBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2A0(0x8)(Transient, DuplicateTransient)
	class UWrapBox*                              EntriesWrapBox;                                    // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MiniCraftingIngredientList_C");
		return Clss;
	}

	void AddListEntry(class UFortItemQuantityListEntryBase* ListEntry);
	void ExecuteUbergraph_MiniCraftingIngredientList(int32 EntryPoint, const struct FMargin& K2Node_MakeStruct_Margin, class UFortItemQuantityListEntryBase* K2Node_Event_ListEntry, class UWrapBoxSlot* CallFunc_AddChildWrapBox_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
