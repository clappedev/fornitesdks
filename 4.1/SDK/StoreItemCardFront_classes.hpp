#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x50 (0x258 - 0x208)
// WidgetBlueprintGeneratedClass StoreItemCardFront.StoreItemCardFront_C
class UStoreItemCardFront_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x208(0x8)(Transient, DuplicateTransient)
	class UScaleBox*                             Card_ScaleBox;                                     // 0x210(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortMultiSizeItemCard*                ItemCard;                                          // 0x218(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               Mask;                                              // 0x220(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FCard                                 CardData;                                          // 0x228(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	enum class EFortRarity                       CurrentRarity;                                     // 0x240(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5105[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                SpacingText;                                       // 0x248(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("StoreItemCardFront_C");
		return Clss;
	}

	void Get_Type_Text(class FText* OutText, enum class EFortInventoryFilter Temp_byte_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable1, class FText Temp_text_Variable12, class FText Temp_text_Variable123, class FText Temp_text_Variable1234, class FText Temp_text_Variable12345, class FText Temp_text_Variable123456, class FText Temp_text_Variable1234567, class FText Temp_text_Variable12345678, class FText Temp_text_Variable123456789, class FText Temp_text_Variable12345678910, class FText Temp_text_Variable1234567891011, class FText Temp_text_Variable123456789101112, class FText Temp_text_Variable12345678910111213, class FText Temp_text_Variable1234567891011121314, class FText Temp_text_Variable123456789101112131415, class FText Temp_text_Variable12345678910111213141516, class FText Temp_text_Variable1234567891011121314151617, enum class EFortInventoryFilter CallFunc_GetFilterCategory_ReturnValue, class FText K2Node_Select_Default);
	class FText Get_Card_Name_Text(class FText Temp_text_Variable, class FText Temp_text_Variable1, class FText Temp_text_Variable12, class FText Temp_text_Variable123, class FText Temp_text_Variable1234, class FText Temp_text_Variable12345, class FText Temp_text_Variable123456, class FText Temp_text_Variable1234567, class FText Temp_text_Variable12345678, class FText Temp_text_Variable123456789, class FText Temp_text_Variable12345678910, class FText Temp_text_Variable1234567891011, class FText Temp_text_Variable123456789101112, class FText Temp_text_Variable12345678910111213, class FText Temp_text_Variable1234567891011121314, class FText Temp_text_Variable123456789101112131415, bool Temp_bool_Variable, enum class EFortInventoryFilter Temp_byte_Variable, class FText CallFunc_GetEmptyText_ReturnValue, class FText CallFunc_GetTertiaryCategory_ItemCategoryText, const struct FSlateBrush& CallFunc_GetTertiaryCategory_ItemCategoryBrush, bool CallFunc_GetTertiaryCategory_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, enum class EFortInventoryFilter CallFunc_GetFilterCategory_ReturnValue, class FText CallFunc_GetDisplayName_ReturnValue, bool CallFunc_EqualEqual_TextText_ReturnValue, class FText K2Node_Select_Default, class FText CallFunc_TextTrimPrecedingAndTrailing_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class FText K2Node_Select1_Default);
	void Draw_Card(const struct FFortRarityItemData& RarityData, const struct FFortRarityItemData& CallFunc_BPGetRarityData_ReturnValue);
	void Initialize_Card(const struct FCard& InCard, enum class EFortRarity CallFunc_GetRarity_ReturnValue);
	void Construct();
	void OnFortStoreStateChanged(enum class EFortStoreState NewStoreState);
	void InitFromObject(class UObject* InitObject);
	void ExecuteUbergraph_StoreItemCardFront(int32 EntryPoint, class UFortStoreContext* CallFunc_GetContext_ReturnValue, class UFortStoreContext* CallFunc_GetContext_ReturnValue1, enum class EFortStoreState K2Node_CustomEvent_NewStoreState, const struct FCard& CallFunc_GetCard_ResultOut, bool CallFunc_GetCard_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UObject* K2Node_Event_InitObject, class UFortStoreContext* CallFunc_GetContext_ReturnValue12, bool CallFunc_CardFrontRevealComplete_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
