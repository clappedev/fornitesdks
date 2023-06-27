#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0xC8 (0x2E0 - 0x218)
// WidgetBlueprintGeneratedClass AthenaEventMatchStatusText.AthenaEventMatchStatusText_C
class UAthenaEventMatchStatusText_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x218(0x8)(Transient, DuplicateTransient)
	class UWidgetAnimation*                      HighlightStat3;                                    // 0x220(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      HighlightStat1;                                    // 0x228(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      NewTopScore;                                       // 0x230(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock;                                         // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSlateFontInfo                        Font;                                              // 0x240(0x50)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FSlateColor                           Color;                                             // 0x290(0x28)(Edit, BlueprintVisible)
	bool                                         ShowMaterialHighlight;                             // 0x2B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5260[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstance*                     HighlightMaterial;                                 // 0x2C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  TextToDisplay;                                     // 0x2C8(0x18)(Edit, BlueprintVisible)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaEventMatchStatusText_C");
		return Clss;
	}

	void ApplyText();
	void HighlightMaterialControl(const struct FSlateFontInfo& NewLocalVar_0, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo1);
	void SetOpacityAndColor(const struct FSlateColor& ColorIn);
	void GetFont(struct FSlateFontInfo* Output);
	void SetFont(const struct FSlateFontInfo& FontIn);
	void SetText(class FText InText, bool ApplyImmediately);
	void PreConstruct(bool IsDesignTime);
	void ApplyNewText();
	void ExecuteUbergraph_AthenaEventMatchStatusText(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
