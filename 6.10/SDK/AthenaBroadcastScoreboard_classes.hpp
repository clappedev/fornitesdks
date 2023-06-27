#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0xB8 (0x360 - 0x2A8)
// WidgetBlueprintGeneratedClass AthenaBroadcastScoreboard.AthenaBroadcastScoreboard_C
class UAthenaBroadcastScoreboard_C : public UAthenaSpectatorScoreboardScreenBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2A8(0x8)(Transient, DuplicateTransient)
	class UAthenaBroadcastScoreboardListView_C*  AthenaBroadcastScoreboardListView;                 // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                SortByKillsAscending;                              // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     SortByKillsButton;                                 // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                SortByKillsDescending;                             // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                SortByNameAscending;                               // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     SortByNameButton;                                  // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                SortByNameDescending;                              // 0x2E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                SortByStateAscending;                              // 0x2E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     SortByStateButton;                                 // 0x2F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                SortByStateDescending;                             // 0x2F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                SortByTeamAscending;                               // 0x300(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     SortByTeamButton;                                  // 0x308(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                SortByTeamDescending;                              // 0x310(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaBroadcastMapPanel_C*            MapPanel;                                          // 0x318(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          SortArrowActiveColor;                              // 0x320(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          SortArrowInactiveColor;                            // 0x330(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UIconTextButton_C*>             SortButtons;                                       // 0x340(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UImage*>                        SortArrows;                                        // 0x350(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaBroadcastScoreboard_C");
		return Clss;
	}

	bool UpdateListUI(class UAthenaSpectatorScoreboardRowData* Local_SelectedRow, class UAthenaSpectatorScoreboardRowData* CallFunc_RetrieveSpectatorTargetRowData_ReturnValue, bool Temp_bool_Variable, class UObject* CallFunc_BP_GetSelectedItem_ReturnValue, class UAthenaSpectatorScoreboardRowData* K2Node_DynamicCast_AsAthena_Spectator_Scoreboard_Row_Data, bool K2Node_DynamicCast_bSuccess, class UAthenaSpectatorScoreboardRowData* K2Node_Select_Default);
	void SortByState(bool* bPassThrough);
	void SortByName(bool* bPassThrough);
	void SortByTeam(bool* bPassThrough);
	void SortByKills(bool* bPassThrough);
	void SetArrowStates(class UImage* Local_CurrentSortArrow, class UImage* Temp_object_Variable, int32 Temp_int_Array_Index_Variable, enum class EScoreboardSortMethod Temp_byte_Variable, int32 Temp_int_Loop_Counter_Variable, class UImage* K2Node_Select_Default, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UImage* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, const struct FLinearColor& CallFunc_SelectColor_ReturnValue);
	void SetButtonStates(class UIconTextButton_C* Local_CurrentSortButton, class UIconTextButton_C* Temp_object_Variable, int32 Temp_int_Array_Index_Variable, enum class EScoreboardSortMethod Temp_byte_Variable, int32 Temp_int_Loop_Counter_Variable, class UIconTextButton_C* K2Node_Select_Default, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UIconTextButton_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue);
	bool IsMapWidgetLocationVisible(struct FVector2D& MapWidgetLocation, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsWidgetLocationVisible_Visible);
	void Construct();
	void BndEvt__SortByKillsButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__SortByNameButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__SortByStateButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__SortByTeamButton_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void SetSortMethod(enum class EScoreboardSortMethod InSortMethod);
	void ResetFocus();
	void ExecuteUbergraph_AthenaBroadcastScoreboard(int32 EntryPoint, class UAthenaSpectatorScoreboardRowData* CallFunc_RetrieveSpectatorTargetRowData_ReturnValue, TArray<class UIconTextButton_C*>& K2Node_MakeArray_Array, TArray<class UImage*>& K2Node_MakeArray_Array1, class UCommonButton* K2Node_ComponentBoundEvent_Button3, bool CallFunc_SortByKills_bPassthrough, class UCommonButton* K2Node_ComponentBoundEvent_Button2, bool CallFunc_SortByName_bPassthrough, class UCommonButton* K2Node_ComponentBoundEvent_Button1, bool CallFunc_SortByState_bPassthrough, class UCommonButton* K2Node_ComponentBoundEvent_Button, bool CallFunc_SortByTeam_bPassthrough, enum class EScoreboardSortMethod K2Node_Event_InSortMethod);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
