#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x100 (0x360 - 0x260)
// WidgetBlueprintGeneratedClass TrickFeedView.TrickFeedView_C
class UTrickFeedView_C : public UAthenaTrickFeedBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(Transient, DuplicateTransient)
	class UWidgetAnimation*                      TrickReset;                                        // 0x268(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      TrickComplete;                                     // 0x270(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      TrickFailed;                                       // 0x278(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      TriangleFlare;                                     // 0x280(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      MultiplierBump;                                    // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      Crit;                                              // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      FailedText;                                        // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Glow;                                        // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Multiplier;                                        // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonNumericTextBlock*               TotalScore;                                        // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          TrickInformation;                                  // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortDynamicEntryBox*                  TrickList;                                         // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TrickStats;                                        // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FTimerHandle                          RemoveInfoTimer;                                   // 0x2D0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         IsCritical;                                        // 0x2D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_478F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CritThreshold;                                     // 0x2DC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsAmazing;                                         // 0x2E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4790[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        AmazingThreshold;                                  // 0x2E4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DEVCritDisplay;                                    // 0x2E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         DEVFinalDisplay;                                   // 0x2E9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4791[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FText>                          OkTricksDescription;                               // 0x2F0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class FText>                          NiceTricksDescription;                             // 0x300(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class FText>                          AmazingTricksDescription;                          // 0x310(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class FText>                          WipeoutDescription;                                // 0x320(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UAudioComponent*                       TrickSequenceMusic;                                // 0x330(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Sound_OnFail;                                      // 0x338(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Sound_OnCancel;                                    // 0x340(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Sound_OnSuccess;                                   // 0x348(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Sound_OnNewTrick;                                  // 0x350(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Sound_TrickSequenceMusic;                          // 0x358(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TrickFeedView_C");
		return Clss;
	}

	void FadeOutMusic(bool CallFunc_IsValid_ReturnValue);
	void GetCalloutText(class FText* Callout, bool Temp_bool_Variable, bool Temp_bool_Variable1, TArray<class FText>& K2Node_MakeArray_Array, TArray<class FText>& K2Node_Select_Default, TArray<class FText>& K2Node_Select1_Default, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, class FText CallFunc_Array_Get_Item);
	void HIdeTrickUI();
	void AddTrick(class FText& TrickName);
	void UpdateScore(class UFortVehicleTrickSet* TrickSet, int32 TotalScore);
	void UpdateMultiplier(int32 Multiplier);
	void SimulateTrick();
	void PreConstruct(bool IsDesignTime);
	void CritStyleEvent(bool IsCritical);
	void ToggleCompleteStyle(bool IsComplete);
	void EventTrickCompliment();
	void UpdateTrickStats(class FText& StatsText);
	void TrickSequenceStarted();
	void TrickSequenceFailed();
	void TrickSequenceComplete();
	void TrickSequenceCanceled();
	void BndEvt__TrickFailed_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature();
	void BndEvt__TrickComplete_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature();
	void ExecuteUbergraph_TrickFeedView(int32 EntryPoint, const struct FVector2D& Temp_struct_Variable, const struct FVector2D& Temp_struct_Variable1, bool Temp_bool_Variable, const struct FLinearColor& Temp_struct_Variable2, const struct FLinearColor& Temp_struct_Variable3, bool Temp_bool_Variable1, bool Temp_bool_Variable2, class UObject* Temp_object_Variable, class UObject* Temp_object_Variable1, bool Temp_bool_Variable3, bool Temp_bool_Variable4, class UObject* Temp_object_Variable2, class UObject* Temp_object_Variable3, class FText K2Node_Event_TrickName, class UUserWidget* CallFunc_BP_CreateEntry_ReturnValue, class UTrickEntry_C* K2Node_DynamicCast_AsTrick_Entry, bool K2Node_DynamicCast_bSuccess, class UFortVehicleTrickSet* K2Node_Event_TrickSet, int32 K2Node_Event_TotalScore, float CallFunc_Conv_IntToFloat_ReturnValue, int32 K2Node_Event_Multiplier, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue1, class FText CallFunc_MakeLiteralText_ReturnValue2, bool Temp_bool_Variable5, const struct FSlateColor& K2Node_MakeStruct_SlateColor, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 Temp_int_Variable, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool K2Node_Event_IsDesignTime, bool K2Node_CustomEvent_isCritical, const struct FVector2D& K2Node_Select_Default, const struct FLinearColor& K2Node_Select1_Default, const struct FSlateColor& K2Node_MakeStruct_SlateColor1, class UObject* K2Node_Select2_Default, int32 Temp_int_Variable1, bool Temp_bool_Variable6, int32 K2Node_Select3_Default, const struct FLinearColor& Temp_struct_Variable4, const struct FFontOutlineSettings& K2Node_MakeStruct_FontOutlineSettings, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo, const struct FLinearColor& Temp_struct_Variable5, bool Temp_bool_Variable7, const struct FLinearColor& K2Node_Select4_Default, const struct FSlateColor& K2Node_MakeStruct_SlateColor2, bool K2Node_CustomEvent_isComplete, class UObject* K2Node_Select5_Default, const struct FSlateColor& K2Node_MakeStruct_SlateColor3, const struct FSlateColor& K2Node_MakeStruct_SlateColor4, const struct FSlateColor& K2Node_Select6_Default, int32 CallFunc_Add_IntInt_ReturnValue, int32 K2Node_Select7_Default, enum class ESlateVisibility Temp_byte_Variable, const struct FFontOutlineSettings& K2Node_MakeStruct_FontOutlineSettings1, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo1, enum class ESlateVisibility Temp_byte_Variable1, bool Temp_bool_Variable8, bool CallFunc_GreaterEqual_IntInt_ReturnValue1, enum class ESlateVisibility K2Node_Select8_Default, class UUserWidget* CallFunc_BP_CreateEntryOfClass_ReturnValue, class FText CallFunc_GetCalloutText_Callout, class UCalloutEntry_C* K2Node_DynamicCast_AsCallout_Entry, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_TextIsEmpty_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue3, class FText CallFunc_MakeLiteralText_ReturnValue4, class FText K2Node_Event_StatsText, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue1, class FText CallFunc_Array_Get_Item, class FText CallFunc_TextToUpper_ReturnValue, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
