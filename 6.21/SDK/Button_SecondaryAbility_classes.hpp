#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x8 (0x3F8 - 0x3F0)
// WidgetBlueprintGeneratedClass Button_SecondaryAbility.Button_SecondaryAbility_C
class UButton_SecondaryAbility_C : public UCommonBacchusButton_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3F0(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Button_SecondaryAbility_C");
		return Clss;
	}

	struct FEventReply OnTouchEnded(const struct FGeometry& MyGeometry, struct FPointerEvent& InTouchEvent, const struct FEventReply& CallFunc_Handled_ReturnValue, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue, class UFortHUDContext* CallFunc_GetContext_ReturnValue1, const struct FFortHUDState& CallFunc_GetCurrentHUDState_ReturnValue);
	struct FEventReply OnTouchStarted(const struct FGeometry& MyGeometry, struct FPointerEvent& InTouchEvent, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue, class UFortHUDContext* CallFunc_GetContext_ReturnValue1, const struct FFortHUDState& CallFunc_GetCurrentHUDState_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue2, class FName CallFunc_GetVehicleExitActionName_ReturnValue);
	void OnHUDStateUpdate(struct FFortHUDState& NewState);
	void ExecuteUbergraph_Button_SecondaryAbility(int32 EntryPoint, const struct FFortHUDState& K2Node_Event_NewState);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
