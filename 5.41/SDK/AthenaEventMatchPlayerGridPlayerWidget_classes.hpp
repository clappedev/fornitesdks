#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x5C0 (0x7E0 - 0x220)
// WidgetBlueprintGeneratedClass AthenaEventMatchPlayerGridPlayerWidget.AthenaEventMatchPlayerGridPlayerWidget_C
class UAthenaEventMatchPlayerGridPlayerWidget_C : public UAthenaEventMatchPlayerWidgetBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(Transient, DuplicateTransient)
	class UWidgetAnimation*                      OnShieldDamagedAnim;                               // 0x228(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      OnHealthDamagedAnim;                               // 0x230(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         ActiveBorder;                                      // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaSpectatorKillsWidget_C*         AthenaSpectatorKillsWidget;                        // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         BeingRevivedBorder;                                // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         DBNOBorder;                                        // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         EliminatedBorder;                                  // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaSpectatorHitPointBar_C*         GridHealthBar;                                     // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         HealthDamagedBorder;                               // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                             HitPointBarsScaleBox;                              // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              KillsSizeBox;                                      // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         LowHealthBorder;                                   // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_1;                                         // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      PlayerName;                                        // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                             ScaleBox;                                          // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaSpectatorHitPointBar_C*         ShieldBar;                                         // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         ShieldDamagedBorder;                               // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        DesignTime_GridSize;                               // 0x2B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LowHealthPercent;                                  // 0x2B4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          ActiveColor;                                       // 0x2B8(0x10)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          LowHealthColor;                                    // 0x2C8(0x10)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          DBNOColor;                                         // 0x2D8(0x10)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          BeingRevivedColor;                                 // 0x2E8(0x10)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          EliminatedColor;                                   // 0x2F8(0x10)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          HealthDamagedColor;                                // 0x308(0x10)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          ShieldDamagedColor;                                // 0x318(0x10)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          ShadowColor;                                       // 0x328(0x10)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                           TextColorActive;                                   // 0x338(0x28)(Edit, BlueprintVisible)
	struct FSlateColor                           TextColorEliminated;                               // 0x360(0x28)(Edit, BlueprintVisible)
	enum class EAthenaEventMatchPlayerGridStatus PlayerStatus;                                      // 0x388(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DesignTime_ApplyHealthDamage;                      // 0x389(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         DesignTime_ApplyShieldDamage;                      // 0x38A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5477[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           ActiveBrush;                                       // 0x390(0x88)(Edit, BlueprintVisible)
	struct FSlateBrush                           LowHealthBrush;                                    // 0x418(0x88)(Edit, BlueprintVisible)
	struct FSlateBrush                           DBNOBrush;                                         // 0x4A0(0x88)(Edit, BlueprintVisible)
	struct FSlateBrush                           BeingRevivedBrush;                                 // 0x528(0x88)(Edit, BlueprintVisible)
	struct FSlateBrush                           EliminatedBrush;                                   // 0x5B0(0x88)(Edit, BlueprintVisible)
	struct FSlateBrush                           HealthDamagedBrush;                                // 0x638(0x88)(Edit, BlueprintVisible)
	struct FSlateBrush                           ShieldDamagedBrush;                                // 0x6C0(0x88)(Edit, BlueprintVisible)
	struct FSlateBrush                           ShadowBrush;                                       // 0x748(0x88)(Edit, BlueprintVisible)
	TArray<class UCommonBorder*>                 Backgrounds;                                       // 0x7D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaEventMatchPlayerGridPlayerWidget_C");
		return Clss;
	}

	void StopDamageAnimations();
	void IsGamePreAircraft(bool* bIsGamePreAircraft, uint8 CallFunc_MakeLiteralByte_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AFortGameStateAthena* K2Node_DynamicCast_AsFort_Game_State_Athena, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_ByteByte_ReturnValue);
	void IsAliveAndNotInAircraft(bool* bAliveAndNotInAircraft, bool CallFunc_IsValid_ReturnValue, bool CallFunc_GetInAircraft_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_GetIsEliminated_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue);
	void UpdateKillsWidget(bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FLinearColor& K2Node_MakeStruct_LinearColor);
	void UpdateHitPointBars(bool CallFunc_IsVisible_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void SetupBackgrounds(TArray<class UCommonBorder*>& K2Node_MakeArray_Array);
	void OnGridSizeChanged(int32 InGridSize, bool Temp_bool_Variable, float CallFunc_Conv_IntToFloat_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, bool Temp_bool_Variable1, enum class ESlateVisibility Temp_byte_Variable2, enum class ESlateVisibility Temp_byte_Variable3, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, float CallFunc_MakeLiteralFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_BooleanAND_ReturnValue, enum class ESlateVisibility K2Node_Select1_Default);
	void UpdateNameText(bool Temp_bool_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FSlateColor& K2Node_Select_Default);
	void UpdateStatus(enum class EAthenaEventMatchPlayerGridStatus Temp_byte_Variable, bool Temp_bool_Variable, enum class EAthenaEventMatchPlayerGridStatus Temp_byte_Variable1, bool Temp_bool_Variable1, enum class EAthenaEventMatchPlayerGridStatus Temp_byte_Variable2, bool Temp_bool_Variable2, enum class EAthenaEventMatchPlayerGridStatus Temp_byte_Variable3, bool CallFunc_IsValid_ReturnValue, bool CallFunc_GetIsDisconnected_ReturnValue, bool CallFunc_GetIsDead_ReturnValue, bool CallFunc_GetIsBeingRevived_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_GetIsDBNO_ReturnValue, class AFortPlayerPawn* CallFunc_GetPlayerPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_GetInAircraft_ReturnValue, float CallFunc_GetHealthPercent_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsGamePreAircraft_bIsGamePreAircraft, enum class EAthenaEventMatchPlayerGridStatus Temp_byte_Variable4, bool Temp_bool_Variable3, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue1, enum class EAthenaEventMatchPlayerGridStatus K2Node_Select_Default, enum class EAthenaEventMatchPlayerGridStatus K2Node_Select1_Default, enum class EAthenaEventMatchPlayerGridStatus K2Node_Select2_Default, enum class EAthenaEventMatchPlayerGridStatus K2Node_Select3_Default);
	void UpdateBackground(class UCommonBorder* Local_BackgroundToShow, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_Variable, class UCommonBorder* CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, bool K2Node_SwitchEnum_CmpSuccess);
	void OnPlayerNameChanged(class UAthenaRemotePlayerViewData* InPlayerData, const class FString& InPlayerName);
	void OnHealthDamaged(class UAthenaRemotePlayerViewData* InPlayerData, float InHealthPercent);
	void OnShieldDamaged(class UAthenaRemotePlayerViewData* InPlayerData, float InShieldPercent);
	void OnDBNOStateChanged(class UAthenaRemotePlayerViewData* InPlayerData, bool bIsDBNO);
	void OnDeadStateChanged(class UAthenaRemotePlayerViewData* InPlayerData, bool bIsDead);
	void OnBeingRevivedStateChanged(class UAthenaRemotePlayerViewData* InPlayerData, bool bIsBeingRevived);
	void OnPlayerStateChanged(class UAthenaRemotePlayerViewData* InPlayerData, class AFortPlayerStateAthena* InPlayerState);
	void OnHealthHealed(class UAthenaRemotePlayerViewData* InPlayerData, float InHealthPercent);
	void OnShieldHealed(class UAthenaRemotePlayerViewData* InPlayerData, float InShieldPercent);
	void OnDisconnectedChanged(class UAthenaRemotePlayerViewData* InPlayerData, bool bIsDisconnected);
	void PreConstruct(bool IsDesignTime);
	void OnPlayerDataChanged(class UAthenaRemotePlayerViewData* InPlayerData);
	void ExecuteUbergraph_AthenaEventMatchPlayerGridPlayerWidget(int32 EntryPoint, class UAthenaRemotePlayerViewData* K2Node_Event_InPlayerData9, float K2Node_Event_InHealthPercent1, class UAthenaRemotePlayerViewData* K2Node_Event_InPlayerData8, float K2Node_Event_InShieldPercent1, class UAthenaRemotePlayerViewData* K2Node_Event_InPlayerData7, bool K2Node_Event_bIsDBNO, class UAthenaRemotePlayerViewData* K2Node_Event_InPlayerData6, bool K2Node_Event_bIsDead, class UAthenaRemotePlayerViewData* K2Node_Event_InPlayerData5, bool K2Node_Event_bIsBeingRevived, class UAthenaRemotePlayerViewData* K2Node_Event_InPlayerData4, class AFortPlayerStateAthena* K2Node_Event_InPlayerState, class UAthenaRemotePlayerViewData* K2Node_Event_InPlayerData3, float K2Node_Event_InHealthPercent, class UAthenaRemotePlayerViewData* K2Node_Event_InPlayerData2, float K2Node_Event_InShieldPercent, class UAthenaRemotePlayerViewData* K2Node_Event_InPlayerData1, bool K2Node_Event_bIsDisconnected, bool K2Node_Event_IsDesignTime, bool CallFunc_IsAliveAndNotInAircraft_bAliveAndNotInAircraft, bool CallFunc_IsAliveAndNotInAircraft_bAliveAndNotInAircraft1, class UAthenaRemotePlayerViewData* K2Node_Event_InPlayerData, class UAthenaRemotePlayerViewData* K2Node_Event_InPlayerData10, const class FString& K2Node_Event_InPlayerName, class FText CallFunc_Conv_StringToText_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
