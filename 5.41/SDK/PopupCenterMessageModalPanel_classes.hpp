#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x70 (0x398 - 0x328)
// WidgetBlueprintGeneratedClass PopupCenterMessageModalPanel.PopupCenterMessageModalPanel_C
class UPopupCenterMessageModalPanel_C : public UFortActivatablePanel
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x328(0x8)(Transient, DuplicateTransient)
	class UCommonTextBlock*                      CenterMessageText;                                 // 0x330(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULeaveButton_C*                        LeaveButton;                                       // 0x338(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              MessageOverlay;                                    // 0x340(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  WaitingForPlayersText;                             // 0x348(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  WaitingForOutpostOwnerText;                        // 0x360(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTimerHandle                          MatchTimerHandle;                                  // 0x378(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FText                                  WaitingForMatchToBeginText;                        // 0x380(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PopupCenterMessageModalPanel_C");
		return Clss;
	}

	void LeaveZone(class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortPartyContext* CallFunc_GetContext_ReturnValue1);
	void UpdateMatchTimerText(bool* StopTimer, int32 CurrentCount, bool CallFunc_LessEqual_IntInt_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class FText CallFunc_Format_ReturnValue, class AFortGameStatePvP* K2Node_DynamicCast_AsFort_Game_State_Pv_P, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetStartMatchDelayTimer_ReturnValue);
	void UpdateState(enum class ECenterPopupMessageStateEnum NewState, class FText CurrentMessage, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_UpdateMatchTimerText_StopTimer, bool CallFunc_Not_PreBool_ReturnValue);
	void UpdateMatchTimer();
	void StartMatchTimer();
	void OnActivated();
	void ExecuteUbergraph_PopupCenterMessageModalPanel(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_UpdateMatchTimerText_StopTimer, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
