#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x50 (0x270 - 0x220)
// WidgetBlueprintGeneratedClass PackResource.PackResource_C
class UPackResource_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(Transient, DuplicateTransient)
	class UCommonBorder*                         Background;                                        // 0x228(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       CountWidgetSwitcher;                               // 0x230(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ImageResourceIcon;                                 // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonNumericTextBlock*               NumericTextCount;                                  // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      ShorthandCount;                                    // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBoxContainer;                                  // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EFortResourceType                 ResourceType;                                      // 0x258(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_23A2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ResourceCount;                                     // 0x25C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ActiveResource;                                    // 0x260(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_23A3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDateTime                             TouchStart;                                        // 0x268(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PackResource_C");
		return Clss;
	}

	struct FEventReply OnTouchEnded(const struct FGeometry& MyGeometry, struct FPointerEvent& InTouchEvent, bool Temp_bool_Variable, const struct FEventReply& CallFunc_Unhandled_ReturnValue, const struct FDateTime& CallFunc_Now_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FTimespan& CallFunc_Subtract_DateTimeDateTime_ReturnValue, float CallFunc_GetTotalMilliseconds_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, const struct FEventReply& K2Node_Select_Default);
	struct FEventReply OnTouchMoved(const struct FGeometry& MyGeometry, struct FPointerEvent& InTouchEvent, bool Temp_bool_Variable, const struct FEventReply& CallFunc_Unhandled_ReturnValue, const struct FDateTime& CallFunc_Now_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FTimespan& CallFunc_Subtract_DateTimeDateTime_ReturnValue, float CallFunc_GetTotalMilliseconds_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, const struct FEventReply& K2Node_Select_Default);
	void GetCountOpacity(struct FSlateColor* SlateColor, bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable1, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, int32 CallFunc_GetResourceItemMaxStackSize_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, float K2Node_Select_Default, const struct FLinearColor& K2Node_MakeStruct_LinearColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor);
	void RefreshLargerCountLayout(float CallFunc_Conv_IntToFloat_ReturnValue, const struct FSlateColor& CallFunc_GetCountOpacity_SlateColor, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, class FText CallFunc_GetShorthandItemStackCount_ReturnValue);
	void RefreshSmallerCountLayout(const struct FSlateColor& CallFunc_GetCountOpacity_SlateColor, bool CallFunc_LessEqual_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue);
	void Change_Material(class UAthenaHUDContext* CallFunc_GetContext_ReturnValue);
	struct FEventReply OnTouchStarted(const struct FGeometry& MyGeometry, struct FPointerEvent& InTouchEvent, const struct FDateTime& CallFunc_Now_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue);
	void SetImageSize(bool UseLargeIcon, class UPaperSprite* Temp_object_Variable, class UPaperSprite* Temp_object_Variable1, class UPaperSprite* Temp_object_Variable2, class UPaperSprite* Temp_object_Variable3, class UPaperSprite* Temp_object_Variable4, enum class EFortResourceType Temp_byte_Variable, class UPaperSprite* Temp_object_Variable5, class UPaperSprite* Temp_object_Variable6, class UPaperSprite* Temp_object_Variable7, class UPaperSprite* Temp_object_Variable8, class UPaperSprite* Temp_object_Variable9, enum class EFortResourceType Temp_byte_Variable1, class UPaperSprite* K2Node_Select_Default, class UPaperSprite* K2Node_Select1_Default, const struct FSlateBrush& CallFunc_MakeBrushFromSprite_ReturnValue, const struct FSlateBrush& CallFunc_MakeBrushFromSprite_ReturnValue1);
	void TryUpdateCount(class UFortInventoryContext* CallFunc_GetContext_ReturnValue, class UFortInventoryContext* CallFunc_GetContext_ReturnValue1, int32 CallFunc_GetResourceCount_ReturnValue, int32 CallFunc_GetResourceCount_ReturnValue1, bool CallFunc_NotEqual_IntInt_ReturnValue);
	void TryUpdateBackground(bool Local_IsResourceActive, bool Temp_bool_Variable, class UClass* Temp_class_Variable, class UClass* Temp_class_Variable1, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, bool Temp_bool_Variable1, class UFortResourceItemDefinition* CallFunc_GetCurrentResourceItemDefinition_ReturnValue, class UClass* Temp_class_Variable2, class UClass* Temp_class_Variable3, bool CallFunc_IsMobileGame_ReturnValue, class UClass* K2Node_Select_Default, class UClass* K2Node_Select1_Default, bool CallFunc_EqualEqual_BoolBool_ReturnValue, class UFortResourceItemDefinition* CallFunc_GetResourceItemDefinition_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	void UpdateType(enum class EFortResourceType ResourceType, enum class EFortResourceType Temp_byte_Variable, class UPaperSprite* Temp_object_Variable, class UPaperSprite* Temp_object_Variable1, class UPaperSprite* Temp_object_Variable2, class UPaperSprite* Temp_object_Variable3, class UPaperSprite* Temp_object_Variable4, class UPaperSprite* K2Node_Select_Default, const struct FSlateBrush& CallFunc_MakeBrushFromSprite_ReturnValue);
	void UpdateCount();
	void Construct();
	void On_Material_Change();
	void ExecuteUbergraph_PackResource(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortHUDContext* CallFunc_GetContext_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
