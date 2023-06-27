#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x5CA (0x822 - 0x258)
// WidgetBlueprintGeneratedClass ItemDetailsStackCounter.ItemDetailsStackCounter_C
class UItemDetailsStackCounter_C : public UFortItemDetailElementWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x258(0x8)(Transient, DuplicateTransient)
	class USizeBox*                              _SizeBox_;                                         // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         BorderBase;                                        // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TextCounter;                                       // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FFortMultiSizeBrush                   MultiSizeBase;                                     // 0x278(0x330)(Edit, BlueprintVisible)
	struct FFortMultiSizeFont                    MultiSizeFont;                                     // 0x5A8(0x210)(Edit, BlueprintVisible)
	struct FFortMultiSizeMargin                  MultiSizeMargin;                                   // 0x7B8(0x60)(Edit, BlueprintVisible, NoDestructor)
	enum class EFortBrushSize                    Brush_Size;                                        // 0x818(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4443[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Count;                                             // 0x81C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AlwaysVisible;                                     // 0x820(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         TruncateValue;                                     // 0x821(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ItemDetailsStackCounter_C");
		return Clss;
	}

	void Refresh_Visibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void Update_Stack_Count(bool Temp_bool_Variable, class FText CallFunc_Truncate_Integer_Value_Formatted_Value, int32 CallFunc_GetNumInStack_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, bool CallFunc_IsValid_ReturnValue, class FText K2Node_Select_Default);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void HandlePreDifferentItemToDetailSet();
	void HandlePostDifferentItemToDetailSet();
	void HandleOnItemChanged(bool bItemChanged, bool bAmmoChanged, bool bIngredientsChanged);
	void ExecuteUbergraph_ItemDetailsStackCounter(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_Event_IsDesignTime, bool K2Node_CustomEvent_bItemChanged, bool K2Node_CustomEvent_bAmmoChanged, bool K2Node_CustomEvent_bIngredientsChanged, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
