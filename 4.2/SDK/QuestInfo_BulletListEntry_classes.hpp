#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x20 (0x230 - 0x210)
// WidgetBlueprintGeneratedClass QuestInfo_BulletListEntry.QuestInfo_BulletListEntry_C
class UQuestInfo_BulletListEntry_C : public UCommonUserWidget
{
public:
	class UImage*                                ImageBorder;                                       // 0x210(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ImageEntryIcon;                                    // 0x218(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBoxIcon;                                       // 0x220(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TextBoxEntryText;                                  // 0x228(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("QuestInfo_BulletListEntry_C");
		return Clss;
	}

	void ShowBorder();
	struct FVector2D CalcBrushSize(const struct FVector2D& InImageSize, float Min, float Scale, const struct FVector2D& CallFunc_Multiply_Vector2DFloat_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_BreakVector2D_X1, float CallFunc_BreakVector2D_Y1, float CallFunc_Divide_FloatFloat_ReturnValue1, float CallFunc_BreakVector2D_X2, float CallFunc_BreakVector2D_Y2, bool CallFunc_Greater_FloatFloat_ReturnValue);
	void InitBrush(class FText EntryText, const struct FSlateBrush& EntryIconBrush, const struct FVector2D& CallFunc_CalcBrushSize_ReturnValue);
	void InitBullet(class FText EntryText);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
