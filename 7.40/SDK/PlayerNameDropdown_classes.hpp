#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x10 (0x368 - 0x358)
// WidgetBlueprintGeneratedClass PlayerNameDropdown.PlayerNameDropdown_C
class UPlayerNameDropdown_C : public UFortPlayerNameDropdown
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x358(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UScrollBox*                            MainButtonScrollBox;                               // 0x360(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PlayerNameDropdown_C");
		return Clss;
	}

	void Destruct();
	void Construct();
	void OnActivated();
	void ExecuteUbergraph_PlayerNameDropdown(int32 EntryPoint, class UCommonUISubsystem* CallFunc_GetContext_ReturnValue, class UCommonInputManager* CallFunc_GetInputManager_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class UIconTextButton_C* CallFunc_Create_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UFortGameFeedbackBase* K2Node_DynamicCast_AsFort_Game_Feedback_Base, bool K2Node_DynamicCast_bSuccess, const struct FPlayerNameInfoContainer& CallFunc_GetPlayerNameInfoContainer_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FPlayerNameInfo& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
