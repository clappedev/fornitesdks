#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x8 (0x3E8 - 0x3E0)
// WidgetBlueprintGeneratedClass Button_Crouch.Button_Crouch_C
class UButton_Crouch_C : public UCommonBacchusButton_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3E0(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Button_Crouch_C");
		return Clss;
	}

	void ShouldHide(const struct FFortHUDState& Current_Hud_State, bool* ShouldHide, class UFortAbilitySystemContext* CallFunc_GetContext_ReturnValue, bool CallFunc_HasMatchingGameplayTag_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	struct FEventReply OnTouchStarted(const struct FGeometry& MyGeometry, struct FPointerEvent& InTouchEvent, class UFortHUDContext* CallFunc_GetContext_ReturnValue, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue1, const struct FFortHUDState& CallFunc_GetCurrentHUDState_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue2, class FName CallFunc_GetCrouchActionName_ReturnValue, class FName CallFunc_GetVehicleChangeSeatActionName_ReturnValue, bool Temp_bool_Variable, const struct FEventReply& CallFunc_Handled_ReturnValue, class FName K2Node_Select_Default);
	void OnHUDStateUpdate(struct FFortHUDState& NewState);
	void ExecuteUbergraph_Button_Crouch(int32 EntryPoint, const struct FFortHUDState& K2Node_Event_NewState, bool CallFunc_ShouldHide_ShouldHide);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
