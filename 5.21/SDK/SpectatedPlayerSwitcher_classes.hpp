#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x10 (0x240 - 0x230)
// WidgetBlueprintGeneratedClass SpectatedPlayerSwitcher.SpectatedPlayerSwitcher_C
class USpectatedPlayerSwitcher_C : public UFortSpectatedPlayerSwitcher
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(Transient, DuplicateTransient)
	class UVerticalBox*                          VerticalBox_0;                                     // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SpectatedPlayerSwitcher_C");
		return Clss;
	}

	void PreConstruct(bool IsDesignTime);
	void OnDisplayedTargetsUpdated();
	void ExecuteUbergraph_SpectatedPlayerSwitcher(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool K2Node_Event_IsDesignTime, class USpectatedPlayerItem_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, int32 Temp_int_Variable, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue1, class USpectatedPlayerItem_C* CallFunc_Create_ReturnValue1, bool CallFunc_LessEqual_IntInt_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue1, int32 CallFunc_Add_IntInt_ReturnValue1, const struct FPotentialSpectatorTarget& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
