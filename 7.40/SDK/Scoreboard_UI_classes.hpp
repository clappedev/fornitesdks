#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0xBD (0x345 - 0x288)
// WidgetBlueprintGeneratedClass Scoreboard_UI.Scoreboard_UI_C
class UScoreboard_UI_C : public UMinigameWidgetBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x288(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonTextBlock*                      CountdownText;                                     // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUniformGridPanel*                     DataGridPanel;                                     // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            DataScrollBox;                                     // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                             SafeZone_0;                                        // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         bIgnoreDisplayMinigameEndUI;                       // 0x2B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_5313[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           TeamFontColor;                                     // 0x2B8(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                           PlayerFontColor;                                   // 0x2E0(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FLinearColor                          TeamBorderColor;                                   // 0x308(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          PlayerBorderColor;                                 // 0x318(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bShouldUpdateStats;                                // 0x328(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5314[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CurrentTime;                                       // 0x32C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        PostGameResetDelay;                                // 0x330(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ScoreboardScrollTimePercent;                       // 0x334(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ScoreboardStartScrollDelayPercent;                 // 0x338(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bShouldScroll;                                     // 0x33C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5315[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ScrollHeight;                                      // 0x340(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         NewVar_0;                                          // 0x344(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Scoreboard_UI_C");
		return Clss;
	}

	void UpdateScrollBasedOnTime(float Delta, float ScrollLength, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_FMax_ReturnValue, int32 CallFunc_Round_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue1, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue1, float CallFunc_Multiply_FloatFloat_ReturnValue);
	void GetScoreboardStateNames(TArray<class FText>* OutNames, const TArray<class FText>& NamesArray, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class UClass* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	void UpdateStats(bool bIsATie, const TArray<struct FMinigameStatRow>& StatRows, bool bIsTeamMinigame, bool bAddChildAtEnd, class UVerticalBox* CurrentPlayerBox, const TArray<class FText>& ScoreboardStatNames, int32 TeamIndex, const struct FMinigameStatRow& CurrentMinigameStat, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, TArray<struct FMinigameStatRow>& CallFunc_GetOrderedMinigameStatsRows_OutStats, bool CallFunc_GetOrderedMinigameStatsRows_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, class FText CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FMinigameStatRow& CallFunc_Array_Get_Item1, bool CallFunc_Not_PreBool_ReturnValue1, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue1, const struct FMargin& K2Node_MakeStruct_Margin, const struct FMargin& K2Node_MakeStruct_Margin1, bool CallFunc_BooleanOR_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin2, bool CallFunc_BooleanAND_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UScoreboard_UI_Row_C* CallFunc_Create_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue2, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UUniformGridSlot* K2Node_DynamicCast_AsUniform_Grid_Slot, bool K2Node_DynamicCast_bSuccess, uint8 CallFunc_MakeLiteralByte_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue1, class UScoreboard_UI_Row_C* CallFunc_Create_ReturnValue1, bool CallFunc_IsValid_ReturnValue1, class UPanelSlot* CallFunc_AddChild_ReturnValue1, class UUniformGridSlot* K2Node_DynamicCast_AsUniform_Grid_Slot1, bool K2Node_DynamicCast_bSuccess1, class UPanelSlot* CallFunc_AddChild_ReturnValue2, int32 CallFunc_Divide_IntInt_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, TArray<class FText>& CallFunc_GetScoreboardStateNames_OutNames, uint8 CallFunc_MakeLiteralByte_ReturnValue1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue2, class UScoreboard_UI_Row_C* CallFunc_Create_ReturnValue2, class UScoreboard_Team_Widget_C* CallFunc_Create_ReturnValue3, class UPanelSlot* CallFunc_AddChild_ReturnValue3, class UUniformGridSlot* K2Node_DynamicCast_AsUniform_Grid_Slot2, bool K2Node_DynamicCast_bSuccess2, class UPanelSlot* CallFunc_AddChild_ReturnValue4, uint8 CallFunc_MakeLiteralByte_ReturnValue2, bool CallFunc_EqualEqual_IntInt_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue2);
	void Construct();
	void OnDisplayMinigameEndUI(bool bDisplay);
	void OnDisplayMinigameStartUI(bool bDisplay);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ShowMinigameEndUI();
	void HideMinigameEndUI();
	void ExecuteUbergraph_Scoreboard_UI(int32 EntryPoint, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_IsClosed_Variable, bool K2Node_Event_bDisplay1, bool K2Node_Event_bDisplay, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue1, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, const struct FVector2D& CallFunc_GetDesiredSize_ReturnValue, const struct FGeometry& CallFunc_GetCachedGeometry_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, const struct FVector2D& CallFunc_GetLocalSize_ReturnValue, float CallFunc_BreakVector2D_X1, float CallFunc_BreakVector2D_Y1, float CallFunc_Subtract_FloatFloat_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
