#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x6C (0x3AC - 0x340)
// WidgetBlueprintGeneratedClass FortReplayCameraSettingsTab.FortReplayCameraSettingsTab_C
class UFortReplayCameraSettingsTab_C : public UFortReplayViewSettingsTabBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x340(0x8)(Transient, DuplicateTransient)
	class URotatorSelectorReplaySettings_C*      BlendSettings;                                     // 0x348(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URotatorSelectorReplaySettings_C*      DamageEffects;                                     // 0x350(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URotatorSelectorReplaySettings_C*      MapWeaponTracers;                                  // 0x358(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URotatorSelectorReplaySettings_C*      NamePlates;                                        // 0x360(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptionsMenuSliderReplay_C*            NameViewDistance;                                  // 0x368(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptionsMenuSliderReplay_C*            OutsideSafeZoneOpacity;                            // 0x370(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URotatorSelectorReplaySettings_C*      PlayerOutlines;                                    // 0x378(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URotatorSelectorReplaySettings_C*      RelevancyZone;                                     // 0x380(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URotatorSelectorReplaySettings_C*      ShareLensSettings;                                 // 0x388(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URotatorSelectorReplaySettings_C*      StormEffects;                                      // 0x390(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URotatorSelectorReplaySettings_C*      TPAutoFollow;                                      // 0x398(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptionsMenuSliderReplay_C*            TPDistanceToSubject;                               // 0x3A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                        MaxNameplateViewDistanceMeters;                    // 0x3A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortReplayCameraSettingsTab_C");
		return Clss;
	}

	void CameraTypeChanged(class AFortPlayerControllerSpectating* SpectatorController, enum class ESpectatorCameraType New_Cam_Type, enum class ESpectatorCameraType Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, enum class ESlateVisibility Temp_byte_Variable2, enum class ESlateVisibility Temp_byte_Variable3, enum class ESlateVisibility Temp_byte_Variable4, enum class ESlateVisibility Temp_byte_Variable5, enum class ESlateVisibility Temp_byte_Variable6, enum class ESlateVisibility Temp_byte_Variable7, enum class ESlateVisibility Temp_byte_Variable8, enum class ESlateVisibility Temp_byte_Variable9, enum class ESlateVisibility Temp_byte_Variable10, enum class ESlateVisibility Temp_byte_Variable11, enum class ESlateVisibility K2Node_Select_Default);
	void SetOutsideSafeZoneOpacityWidget(const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, float CallFunc_GetOutsideSafeZoneOpacity_ReturnValue, class FText CallFunc_GetText_ReturnValue, float CallFunc_FClamp_ReturnValue);
	void SetNameplateViewDistanceWidget(const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, class FText CallFunc_GetText_ReturnValue, float CallFunc_GetNameplatesViewDistance_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue);
	void HideBlendSettingsInReplays(int32 CallFunc_GetConsoleVariableIntValue_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class AFortReplaySpectator* K2Node_DynamicCast_AsFort_Replay_Spectator, bool K2Node_DynamicCast_bSuccess);
	void SetTPAutoFollowWidget(class UFortSpectatorCameraComponent* CallFunc_GetCurrentSpectatorCameraComponent_ReturnValue, class UFortSpectatorCamComp_ThirdPerson* K2Node_DynamicCast_AsFort_Spectator_Cam_Comp_Third_Person, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_SelectInt_ReturnValue, int32 CallFunc_SelectInt_ReturnValue1);
	void SetTPDistanceToSubjectWidget(class UFortSpectatorCameraComponent* CallFunc_GetCurrentSpectatorCameraComponent_ReturnValue, class UFortSpectatorCamComp_ThirdPerson* K2Node_DynamicCast_AsFort_Spectator_Cam_Comp_Third_Person, bool K2Node_DynamicCast_bSuccess, class FText CallFunc_GetText_ReturnValue, float CallFunc_GetNormalizedDistance_ReturnValue);
	void ResetToDefault();
	void CenterOnTab();
	void OnCameraTypeChanged(class AFortPlayerControllerSpectating* FortPlayerControllerSpectating, enum class ESpectatorCameraType CameraType);
	void SetWidgetValues();
	void InitializeWidgets();
	void BndEvt__CameraCollision_K2Node_ComponentBoundEvent_0_Selection_Changed__DelegateSignature(int32 Selected_Index);
	void BndEvt__NamePlates_K2Node_ComponentBoundEvent_1_Selection_Changed__DelegateSignature(int32 Selected_Index);
	void BndEvt__PlayerOutlines_K2Node_ComponentBoundEvent_2_Selection_Changed__DelegateSignature(int32 Selected_Index);
	void BndEvt__RelevancyZone_K2Node_ComponentBoundEvent_3_Selection_Changed__DelegateSignature(int32 Selected_Index);
	void BndEvt__TPAutoFollow_K2Node_ComponentBoundEvent_4_Selection_Changed__DelegateSignature(int32 Selected_Index);
	void BndEvt__TPDistanceToSubject_K2Node_ComponentBoundEvent_0_SliderChanged__DelegateSignature(float Slider_Value);
	void Destruct();
	void BndEvt__DamageEffects_K2Node_ComponentBoundEvent_29_Selection_Changed__DelegateSignature(int32 Selected_Index);
	void Construct();
	void OnActivated();
	void BndEvt__ShareLensSettings_K2Node_ComponentBoundEvent_5_Selection_Changed__DelegateSignature(int32 Selected_Index);
	void BndEvt__BlendSettings_K2Node_ComponentBoundEvent_2_Selection_Changed__DelegateSignature(int32 Selected_Index);
	void BndEvt__NameViewDistance_K2Node_ComponentBoundEvent_3_SliderChanged__DelegateSignature(float Slider_Value);
	void BndEvt__StormEffects_K2Node_ComponentBoundEvent_4_Selection_Changed__DelegateSignature(int32 Selected_Index);
	void BndEvt__OutsideSafeZoneOpacity_K2Node_ComponentBoundEvent_6_SliderChanged__DelegateSignature(float Slider_Value);
	void BndEvt__MapWeaponTracers_K2Node_ComponentBoundEvent_7_Selection_Changed__DelegateSignature(int32 Selected_Index);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_FortReplayCameraSettingsTab(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class EFortSpectatorBlendType Temp_byte_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable1, int32 Temp_int_Variable2, int32 Temp_int_Variable3, enum class EFortSpectatorBlendType Temp_byte_Variable1, enum class EFortSpectatorBlendType Temp_byte_Variable2, enum class EFortSpectatorBlendType Temp_byte_Variable3, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable4, enum class ESlateVisibility Temp_byte_Variable5, class UFortReplayContext* CallFunc_GetContext_ReturnValue, enum class ESlateVisibility Temp_byte_Variable6, class AFortPlayerControllerSpectating* K2Node_Event_FortPlayerControllerSpectating, enum class ESpectatorCameraType K2Node_Event_CameraType, enum class ESlateVisibility Temp_byte_Variable7, bool CallFunc_EqualEqual_ByteByte_ReturnValue, TArray<class FText>& K2Node_MakeArray_Array, TArray<class FText>& K2Node_MakeArray_Array1, TArray<class FText>& K2Node_MakeArray_Array2, TArray<class FText>& K2Node_MakeArray_Array3, int32 K2Node_ComponentBoundEvent_Selected_Index9, bool CallFunc_Greater_IntInt_ReturnValue, int32 K2Node_ComponentBoundEvent_Selected_Index8, bool CallFunc_Greater_IntInt_ReturnValue1, enum class ESlateVisibility K2Node_Select_Default, int32 K2Node_ComponentBoundEvent_Selected_Index7, bool CallFunc_Greater_IntInt_ReturnValue2, int32 K2Node_ComponentBoundEvent_Selected_Index6, bool CallFunc_Greater_IntInt_ReturnValue3, int32 K2Node_ComponentBoundEvent_Selected_Index5, float K2Node_ComponentBoundEvent_Slider_Value2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, int32 K2Node_ComponentBoundEvent_Selected_Index4, bool CallFunc_Greater_IntInt_ReturnValue4, TArray<class FText>& K2Node_MakeArray_Array4, bool Temp_bool_Variable1, class UFortSpectatorCameraComponent* CallFunc_GetCurrentSpectatorCameraComponent_ReturnValue, class UFortSpectatorCamComp_ThirdPerson* K2Node_DynamicCast_AsFort_Spectator_Cam_Comp_Third_Person, bool K2Node_DynamicCast_bSuccess, class AFortReplaySpectator* K2Node_DynamicCast_AsFort_Replay_Spectator, bool K2Node_DynamicCast_bSuccess1, class UFortReplayContext* CallFunc_GetContext_ReturnValue1, enum class ESlateVisibility K2Node_Select1_Default, class AFortReplaySpectator* K2Node_DynamicCast_AsFort_Replay_Spectator1, bool K2Node_DynamicCast_bSuccess2, bool CallFunc_IsValid_ReturnValue, class UFortSpectatorCameraComponent* CallFunc_GetCurrentSpectatorCameraComponent_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, class UFortSpectatorCamComp_ThirdPerson* K2Node_DynamicCast_AsFort_Spectator_Cam_Comp_Third_Person1, bool K2Node_DynamicCast_bSuccess3, bool CallFunc_GetNameplatesEnabled_ReturnValue, bool CallFunc_GetOutlinesEnabled_ReturnValue, int32 CallFunc_SelectInt_ReturnValue, int32 CallFunc_SelectInt_ReturnValue1, class AFortReplaySpectator* K2Node_DynamicCast_AsFort_Replay_Spectator2, bool K2Node_DynamicCast_bSuccess4, bool CallFunc_GetRelevancyZoneVisible_ReturnValue, int32 CallFunc_SelectInt_ReturnValue2, bool CallFunc_GetDamageFXEnabled_ReturnValue, enum class ESlateVisibility Temp_byte_Variable8, int32 CallFunc_SelectInt_ReturnValue3, int32 K2Node_ComponentBoundEvent_Selected_Index3, bool CallFunc_Greater_IntInt_ReturnValue5, TArray<class FText>& K2Node_MakeArray_Array5, bool CallFunc_GetShareLensSettingsEnabled_ReturnValue, int32 CallFunc_SelectInt_ReturnValue4, enum class ESlateVisibility Temp_byte_Variable9, int32 K2Node_ComponentBoundEvent_Selected_Index2, enum class EFortSpectatorBlendType K2Node_Select2_Default, TArray<class FText>& K2Node_MakeArray_Array6, enum class EFortSpectatorBlendType CallFunc_GetBlendType_ReturnValue, int32 K2Node_Select3_Default, bool Temp_bool_Variable2, enum class ESlateVisibility K2Node_Select4_Default, float K2Node_ComponentBoundEvent_Slider_Value1, int32 K2Node_ComponentBoundEvent_Selected_Index1, float CallFunc_MapRangeClamped_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue6, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_GetStormEffectsEnabled_ReturnValue, int32 CallFunc_SelectInt_ReturnValue5, TArray<class FText>& K2Node_MakeArray_Array7, float K2Node_ComponentBoundEvent_Slider_Value, TArray<class FText>& K2Node_MakeArray_Array8, bool CallFunc_GetMapWeaponTracersEnabled_ReturnValue, int32 K2Node_ComponentBoundEvent_Selected_Index, int32 CallFunc_SelectInt_ReturnValue6, bool CallFunc_Greater_IntInt_ReturnValue7, bool K2Node_Event_IsDesignTime, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AFortPlayerControllerSpectating* K2Node_DynamicCast_AsFort_Player_Controller_Spectating, bool K2Node_DynamicCast_bSuccess5);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
