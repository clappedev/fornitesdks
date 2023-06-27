#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0xB8 (0x300 - 0x248)
// WidgetBlueprintGeneratedClass AthenaSpectatorHitPointBar.AthenaSpectatorHitPointBar_C
class UAthenaSpectatorHitPointBar_C : public UAthenaSpectatorHitPointBarBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x248(0x8)(Transient, DuplicateTransient)
	class USimpleMaterialProgressBar_C*          ProgressBarDelta;                                  // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USimpleMaterialProgressBar_C*          ProgressBarFill;                                   // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FLinearColor                          HealthFillColorA;                                  // 0x260(0x10)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          HealthFillColorB;                                  // 0x270(0x10)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          HealthDeltaColorA;                                 // 0x280(0x10)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          HealthDeltaColorB;                                 // 0x290(0x10)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          HealthBackgroundColor;                             // 0x2A0(0x10)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          ShieldFillColorA;                                  // 0x2B0(0x10)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          ShieldFillColorB;                                  // 0x2C0(0x10)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          ShieldDeltaColorA;                                 // 0x2D0(0x10)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          ShieldDeltaColorB;                                 // 0x2E0(0x10)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          ShieldBackgroundColor;                             // 0x2F0(0x10)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaSpectatorHitPointBar_C");
		return Clss;
	}

	void InitializeBar(enum class EAthenaSpectatorHitPointBarType Temp_byte_Variable, enum class EAthenaSpectatorHitPointBarType Temp_byte_Variable1, enum class EAthenaSpectatorHitPointBarType Temp_byte_Variable2, enum class EAthenaSpectatorHitPointBarType Temp_byte_Variable3, enum class EAthenaSpectatorHitPointBarType Temp_byte_Variable4, const struct FLinearColor& K2Node_Select_Default, const struct FLinearColor& K2Node_Select1_Default, const struct FLinearColor& K2Node_Select2_Default, const struct FLinearColor& K2Node_Select3_Default, const struct FLinearColor& K2Node_Select4_Default);
	void PreConstruct(bool IsDesignTime);
	void UpdateBars_BP();
	void OnDBNOChanged_BP();
	void OnDBNOChanged(bool bInIsDBNO);
	void OnCurrentValueChanged(float InCurrentValue);
	void OnDeltaValueChanged(float InDeltaValue);
	void ExecuteUbergraph_AthenaSpectatorHitPointBar(int32 EntryPoint, float K2Node_Event_InDeltaValue, bool K2Node_Event_IsDesignTime, bool K2Node_SwitchEnum_CmpSuccess, float CallFunc_SelectFloat_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, bool K2Node_SwitchEnum1_CmpSuccess, enum class ESlateVisibility Temp_byte_Variable1, bool Temp_bool_Variable, bool K2Node_Event_bInIsDBNO, enum class ESlateVisibility K2Node_Select_Default, float K2Node_Event_InCurrentValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
