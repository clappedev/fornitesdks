#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x30 (0x250 - 0x220)
// WidgetBlueprintGeneratedClass HudLayoutToolSnappingWidget.HudLayoutToolSnappingWidget_C
class UHudLayoutToolSnappingWidget_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(Transient, DuplicateTransient)
	class UCommonTextBlock*                      CurrentValueText;                                  // 0x228(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAnalogSlider*                         MySlider;                                          // 0x230(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          SliderBox;                                         // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        Minimum;                                           // 0x240(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Maximum;                                           // 0x244(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Current_Value;                                     // 0x248(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Step_Size;                                         // 0x24C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("HudLayoutToolSnappingWidget_C");
		return Clss;
	}

	void SetFromValue(int32 New_Value, class FText CallFunc_Conv_IntToText_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue1, class UHUDLayoutToolContext* CallFunc_GetContext_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue2, float CallFunc_MapRangeClamped_ReturnValue);
	void SetFromNormalizedValue(float Normalized_Value, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue1, float CallFunc_Conv_IntToFloat_ReturnValue2, float CallFunc_MapRangeClamped_ReturnValue, float CallFunc_GridSnap_Float_ReturnValue, int32 CallFunc_FTrunc_ReturnValue);
	void Construct();
	void BndEvt__MySlider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value);
	void ExecuteUbergraph_HudLayoutToolSnappingWidget(int32 EntryPoint, class UHUDLayoutToolContext* CallFunc_GetContext_ReturnValue, float K2Node_ComponentBoundEvent_Value);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
