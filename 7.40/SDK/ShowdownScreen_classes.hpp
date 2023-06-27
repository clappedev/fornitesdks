#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0xC8 (0x460 - 0x398)
// WidgetBlueprintGeneratedClass ShowdownScreen.ShowdownScreen_C
class UShowdownScreen_C : public UFortShowdownScreen
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x398(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Outro;                                             // 0x3A0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Intro;                                             // 0x3A8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCircleArrowButton_C*                  CircleArrowButton_Left;                            // 0x3B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCircleArrowButton_C*                  CircleArrowButton_Right;                           // 0x3B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 CommonWidgetSwitcher_ErrorSwitcher;                // 0x3C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_BG;                                          // 0x3C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      NoTournamentsContent;                              // 0x3D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_NoTournamentContent;                       // 0x3D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UShowdownTournamentTile_C*             ShowdownTournamentTile;                            // 0x3E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UShowdownTournamentTile_C*             ShowdownTournamentTile_0;                          // 0x3E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UShowdownTournamentTile_C*             ShowdownTournamentTile_1;                          // 0x3F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox_Posters;                                   // 0x3F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortSwipePanel*                       SwipePanel;                                        // 0x400(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              TournamentsContent;                                // 0x408(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FDataTableRowHandle                   Input_ShowAbout;                                   // 0x410(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FSlateColor                           PrimaryColor;                                      // 0x420(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDataTableRowHandle                   Input_ShowDetails;                                 // 0x448(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class UWidget*                               SelectedTile;                                      // 0x458(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ShowdownScreen_C");
		return Clss;
	}

	void PreConstruct(bool IsDesignTime);
	void BndEvt__CircleArrowButton_Left_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__CircleArrowButton_Right_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__ScrollBox_TournamentList_K2Node_ComponentBoundEvent_2_OnUserScrolledEvent__DelegateSignature(float CurrentOffset);
	void ShowTournamentDetails(const class FString& SelectedTournament);
	void Construct();
	void OnActivated();
	void BndEvt__SwipePanel_K2Node_ComponentBoundEvent_3_OnFortSwipeEvent__DelegateSignature();
	void BndEvt__SwipePanel_K2Node_ComponentBoundEvent_4_OnFortSwipeEvent__DelegateSignature();
	void OnInputModeChanged(bool bUsingGamepad);
	void TournamentListSelect(class UWidget* CurrentWidget);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void SelectedFrontTournament(bool bFrontIsSelected);
	void SelectedEndTournament(bool bEndIsSelected);
	void ExecuteUbergraph_ShowdownScreen(int32 EntryPoint, class UCommonButton* K2Node_ComponentBoundEvent_Button1, class UCommonButton* K2Node_ComponentBoundEvent_Button, int32 CallFunc_GetChildrenCount_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, float K2Node_ComponentBoundEvent_CurrentOffset, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UShowdownTournamentScreen_C* CallFunc_Create_ReturnValue, const class FString& K2Node_Event_SelectedTournament, int32 Temp_int_Variable, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_Variable, class UWidget* K2Node_Select_Default, bool K2Node_Event_bUsingGamepad, const struct FVector4& CallFunc_GetSafeZonePadding_SafePadding, const struct FVector2D& CallFunc_GetSafeZonePadding_SafePaddingScale, const struct FVector4& CallFunc_GetSafeZonePadding_SpillOverPadding, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue, bool K2Node_Event_IsDesignTime, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue1, float CallFunc_Subtract_FloatFloat_ReturnValue2, float CallFunc_Subtract_FloatFloat_ReturnValue3, enum class ESlateVisibility Temp_byte_Variable, const struct FMargin& K2Node_MakeStruct_Margin, class UWidget* K2Node_CustomEvent_CurrentWidget, class UWidget* CallFunc_GetChildAt_ReturnValue, int32 CallFunc_GetChildIndex_ReturnValue, class UShowdownTournamentTile_C* K2Node_DynamicCast_AsShowdown_Tournament_Tile, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue1, class UShowdownTournamentTile_C* K2Node_DynamicCast_AsShowdown_Tournament_Tile1, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_Greater_IntInt_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue1, int32 CallFunc_Subtract_IntInt_ReturnValue1, enum class ESlateVisibility Temp_byte_Variable1, bool CallFunc_LessEqual_IntInt_ReturnValue, bool Temp_bool_Variable1, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, enum class ESlateVisibility K2Node_Select1_Default, bool CallFunc_IsValid_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue1, bool K2Node_Event_bFrontIsSelected, bool K2Node_Event_bEndIsSelected);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
