#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x230 (0xD80 - 0xB50)
// WidgetBlueprintGeneratedClass AthenaCustomizationSlotButton.AthenaCustomizationSlotButton_C
class UAthenaCustomizationSlotButton_C : public UAthenaCustomizationSlotSelectorButton
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB50(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      OnBackedOutFromSelection;                          // 0xB58(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      OnConfirmedSelection;                              // 0xB60(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      OnSelected;                                        // 0xB68(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      OnHover;                                           // 0xB70(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                ConfirmSelectionFlash;                             // 0xB78(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ConfirmSelectionShine;                             // 0xB80(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                EmptyImage;                                        // 0xB88(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ImageSlotType;                                     // 0xB90(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNormalBangWrapper_C*                  NormalBangWrapper;                                 // 0xB98(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              SlotImageOverlay;                                  // 0xBA0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  TooltipBody;                                       // 0xBA8(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FText                                  TooltipHeader;                                     // 0xBC0(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                         ShowSubTypeIcon;                                   // 0xBD8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_5651[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           SubTypeIcon;                                       // 0xBE0(0x88)(Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                         bSuppressTooltip;                                  // 0xC68(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_5652[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TypeIconVerticalOffset;                            // 0xC6C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FSlateBrush                           EmptyImage_M;                                      // 0xC70(0x88)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateBrush                           EmptyImage_S;                                      // 0xCF8(0x88)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaCustomizationSlotButton_C");
		return Clss;
	}

	void SetCardSizeAndSlotImage(enum class EFortItemCardSize CardSize, const struct FSlateBrush& SlotImage, const struct FVector2D& Temp_struct_Variable, const struct FVector2D& Temp_struct_Variable1, const struct FVector2D& Temp_struct_Variable2, const struct FVector2D& Temp_struct_Variable3, const struct FVector2D& Temp_struct_Variable4, enum class EFortItemCardSize Temp_byte_Variable, const struct FVector2D& Temp_struct_Variable5, const struct FVector2D& Temp_struct_Variable6, const struct FVector2D& Temp_struct_Variable7, const struct FVector2D& Temp_struct_Variable8, const struct FVector2D& Temp_struct_Variable9, const struct FVector2D& Temp_struct_Variable10, const struct FVector2D& Temp_struct_Variable11, enum class EFortItemCardSize Temp_byte_Variable1, const struct FVector2D& K2Node_Select_Default, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const struct FVector2D& Temp_struct_Variable12, const struct FVector2D& Temp_struct_Variable13, enum class EFortItemCardSize Temp_byte_Variable2, const struct FVector2D& K2Node_Select1_Default, const struct FSlateBrush& K2Node_Select2_Default);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void ExecuteUbergraph_AthenaCustomizationSlotButton(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
