#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x30 (0x288 - 0x258)
// WidgetBlueprintGeneratedClass MainTabTutorialWrapper.MainTabTutorialWrapper_C
class UMainTabTutorialWrapper_C : public UFortBangWrapper_NUI
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x258(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      TutorialGlow;                                      // 0x260(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UFancyToastWidget_C*                   FancyToastWidget;                                  // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTutorialToastWidget_C*                TutorialToastWidget;                               // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USoundBase*                            Play_Callout_Sound;                                // 0x278(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         ParentButton;                                      // 0x280(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MainTabTutorialWrapper_C");
		return Clss;
	}

	void SetParentButton(class UCommonButton* ParentButton);
	void GetTutorialCalloutData(const struct FFortUITutorialData& TutorialData, struct FFortToastDisplayInfo* FortToastDisplayInfo, class FText CallFunc_Array_Get_Item, TSoftObjectPtr<class UTexture2D> CallFunc_Array_Get_Item1, const struct FFortToastDisplayInfo& K2Node_MakeStruct_FortToastDisplayInfo);
	void HasValidData(struct FFortUITutorialData& FortUITutorialData, bool* Result, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue);
	void HandleTutorialCallout(class FName& TutorialObjectiveName, enum class ETutorialType TutorialType, const struct FFortUITutorialData& TutorialData, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_GetSelected_ReturnValue, class UFortTutorialContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FFortUITutorialData& CallFunc_GetTutorialData_OutTutorialData, bool CallFunc_GetTutorialData_ReturnValue, bool CallFunc_HasValidData_Result, const struct FFortToastDisplayInfo& CallFunc_GetTutorialCalloutData_FortToastDisplayInfo);
	void CheckFinishTutorialWrapper(class UFortTutorialContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsTutorialCalloutVisible_ReturnValue);
	void OnBangStateChanged(bool bEnabled, int32 Count);
	void OnStopCallout();
	void OnStartCallout(class FName TutorialObjectiveName, enum class ETutorialType TutorialType);
	void Tab_Reveal_Message_Closed();
	void ExecuteUbergraph_MainTabTutorialWrapper(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, bool K2Node_Event_bEnabled, int32 K2Node_Event_Count, class FName K2Node_Event_TutorialObjectiveName, enum class ETutorialType K2Node_Event_TutorialType, enum class ESlateVisibility K2Node_Select_Default);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
