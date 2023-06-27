#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x21 (0x279 - 0x258)
// WidgetBlueprintGeneratedClass AthenaRespawnIndicator.AthenaRespawnIndicator_C
class UAthenaRespawnIndicator_C : public UAthenaRespawnBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x258(0x8)(Transient, DuplicateTransient)
	class UCommonTextBlock*                      CommonTextBlock_StatusText;                        // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_backplate;                                   // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Check;                                       // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         CanRespawn;                                        // 0x278(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaRespawnIndicator_C");
		return Clss;
	}

	void ToggleRespawnState(bool CanRespawn);
	void SetVisibilty(bool Visible);
	void PreConstruct(bool IsDesignTime);
	void OnUpdateRespawnState(bool bEnabled);
	void ExecuteUbergraph_AthenaRespawnIndicator(int32 EntryPoint, bool K2Node_Event_bEnabled, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable1, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, bool Temp_bool_Variable1, enum class ESlateVisibility Temp_byte_Variable2, enum class ESlateVisibility Temp_byte_Variable3, bool Temp_bool_Variable2, bool Temp_bool_Variable3, class FText Temp_text_Variable, class FText Temp_text_Variable1, bool Temp_bool_Variable4, const struct FVector2D& Temp_struct_Variable2, const struct FVector2D& Temp_struct_Variable3, bool K2Node_CustomEvent_canRespawn, bool K2Node_CustomEvent_Visible, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select1_Default, class FText K2Node_Select2_Default, const struct FVector2D& K2Node_Select3_Default, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor1, const struct FSlateColor& K2Node_Select4_Default, bool K2Node_Event_IsDesignTime, bool Temp_bool_Variable5, const struct FLinearColor& K2Node_Select5_Default);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
