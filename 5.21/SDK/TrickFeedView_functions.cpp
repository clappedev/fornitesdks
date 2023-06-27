#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function TrickFeedView.TrickFeedView_C.FadeOutMusic
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UTrickFeedView_C::FadeOutMusic(bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("TrickFeedView_C", "FadeOutMusic");

	Params::UTrickFeedView_C_FadeOutMusic_Params Parms;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

// Function TrickFeedView.TrickFeedView_C.GetCalloutText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Callout                                                          (Parm, OutParm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FText>                K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// TArray<class FText>                K2Node_Select_Default                                            (ZeroConstructor, ReferenceParm)
// TArray<class FText>                K2Node_Select1_Default                                           (ZeroConstructor, ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Array_Get_Item                                          ()

void UTrickFeedView_C::GetCalloutText(class FText* Callout, bool Temp_bool_Variable, bool Temp_bool_Variable1, TArray<class FText>& K2Node_MakeArray_Array, TArray<class FText>& K2Node_Select_Default, TArray<class FText>& K2Node_Select1_Default, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, class FText CallFunc_Array_Get_Item)
{
	static auto Func = Class->GetFunction("TrickFeedView_C", "GetCalloutText");

	Params::UTrickFeedView_C_GetCalloutText_Params Parms;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue = CallFunc_RandomIntegerInRange_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);
	if (Callout != nullptr)
		*Callout = Parms.Callout;

}

// Function TrickFeedView.TrickFeedView_C.HIdeTrickUI
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UTrickFeedView_C::HIdeTrickUI()
{
	static auto Func = Class->GetFunction("TrickFeedView_C", "HIdeTrickUI");

	Params::UTrickFeedView_C_HIdeTrickUI_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function TrickFeedView.TrickFeedView_C.AddTrick
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        TrickName                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UTrickFeedView_C::AddTrick(class FText& TrickName)
{
	static auto Func = Class->GetFunction("TrickFeedView_C", "AddTrick");

	Params::UTrickFeedView_C_AddTrick_Params Parms;
	Parms.TrickName = TrickName;

	UObject::ProcessEvent(Func, &Parms);
}

// Function TrickFeedView.TrickFeedView_C.UpdateScore
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortVehicleTrickSet*        TrickSet                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              TotalScore                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTrickFeedView_C::UpdateScore(class UFortVehicleTrickSet* TrickSet, int32 TotalScore)
{
	static auto Func = Class->GetFunction("TrickFeedView_C", "UpdateScore");

	Params::UTrickFeedView_C_UpdateScore_Params Parms;
	Parms.TrickSet = TrickSet;
	Parms.TotalScore = TotalScore;

	UObject::ProcessEvent(Func, &Parms);
}

// Function TrickFeedView.TrickFeedView_C.UpdateMultiplier
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Multiplier                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTrickFeedView_C::UpdateMultiplier(int32 Multiplier)
{
	static auto Func = Class->GetFunction("TrickFeedView_C", "UpdateMultiplier");

	Params::UTrickFeedView_C_UpdateMultiplier_Params Parms;
	Parms.Multiplier = Multiplier;

	UObject::ProcessEvent(Func, &Parms);
}

// Function TrickFeedView.TrickFeedView_C.SimulateTrick
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UTrickFeedView_C::SimulateTrick()
{
	static auto Func = Class->GetFunction("TrickFeedView_C", "SimulateTrick");

	Params::UTrickFeedView_C_SimulateTrick_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function TrickFeedView.TrickFeedView_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UTrickFeedView_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("TrickFeedView_C", "PreConstruct");

	Params::UTrickFeedView_C_PreConstruct_Params Parms;
	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

// Function TrickFeedView.TrickFeedView_C.CritStyleEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsCritical                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UTrickFeedView_C::CritStyleEvent(bool IsCritical)
{
	static auto Func = Class->GetFunction("TrickFeedView_C", "CritStyleEvent");

	Params::UTrickFeedView_C_CritStyleEvent_Params Parms;
	Parms.IsCritical = IsCritical;

	UObject::ProcessEvent(Func, &Parms);
}

// Function TrickFeedView.TrickFeedView_C.ToggleCompleteStyle
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsComplete                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UTrickFeedView_C::ToggleCompleteStyle(bool IsComplete)
{
	static auto Func = Class->GetFunction("TrickFeedView_C", "ToggleCompleteStyle");

	Params::UTrickFeedView_C_ToggleCompleteStyle_Params Parms;
	Parms.IsComplete = IsComplete;

	UObject::ProcessEvent(Func, &Parms);
}

// Function TrickFeedView.TrickFeedView_C.EventTrickCompliment
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UTrickFeedView_C::EventTrickCompliment()
{
	static auto Func = Class->GetFunction("TrickFeedView_C", "EventTrickCompliment");

	Params::UTrickFeedView_C_EventTrickCompliment_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function TrickFeedView.TrickFeedView_C.UpdateTrickStats
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        StatsText                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UTrickFeedView_C::UpdateTrickStats(class FText& StatsText)
{
	static auto Func = Class->GetFunction("TrickFeedView_C", "UpdateTrickStats");

	Params::UTrickFeedView_C_UpdateTrickStats_Params Parms;
	Parms.StatsText = StatsText;

	UObject::ProcessEvent(Func, &Parms);
}

// Function TrickFeedView.TrickFeedView_C.TrickSequenceStarted
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTrickFeedView_C::TrickSequenceStarted()
{
	static auto Func = Class->GetFunction("TrickFeedView_C", "TrickSequenceStarted");

	Params::UTrickFeedView_C_TrickSequenceStarted_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function TrickFeedView.TrickFeedView_C.TrickSequenceFailed
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTrickFeedView_C::TrickSequenceFailed()
{
	static auto Func = Class->GetFunction("TrickFeedView_C", "TrickSequenceFailed");

	Params::UTrickFeedView_C_TrickSequenceFailed_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function TrickFeedView.TrickFeedView_C.TrickSequenceComplete
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTrickFeedView_C::TrickSequenceComplete()
{
	static auto Func = Class->GetFunction("TrickFeedView_C", "TrickSequenceComplete");

	Params::UTrickFeedView_C_TrickSequenceComplete_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function TrickFeedView.TrickFeedView_C.TrickSequenceCanceled
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTrickFeedView_C::TrickSequenceCanceled()
{
	static auto Func = Class->GetFunction("TrickFeedView_C", "TrickSequenceCanceled");

	Params::UTrickFeedView_C_TrickSequenceCanceled_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function TrickFeedView.TrickFeedView_C.BndEvt__TrickFailed_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UTrickFeedView_C::BndEvt__TrickFailed_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto Func = Class->GetFunction("TrickFeedView_C", "BndEvt__TrickFailed_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	Params::UTrickFeedView_C_BndEvt__TrickFailed_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function TrickFeedView.TrickFeedView_C.BndEvt__TrickComplete_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UTrickFeedView_C::BndEvt__TrickComplete_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto Func = Class->GetFunction("TrickFeedView_C", "BndEvt__TrickComplete_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	Params::UTrickFeedView_C_BndEvt__TrickComplete_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function TrickFeedView.TrickFeedView_C.ExecuteUbergraph_TrickFeedView
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Temp_struct_Variable                                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Temp_struct_Variable1                                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                Temp_struct_Variable2                                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable3                                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     Temp_object_Variable2                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable3                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Event_TrickName                                           (ConstParm)
// class UUserWidget*                 CallFunc_BP_CreateEntry_ReturnValue                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTrickEntry_C*               K2Node_DynamicCast_AsTrick_Entry                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortVehicleTrickSet*        K2Node_Event_TrickSet                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_TotalScore                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_Multiplier                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      ()
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             ()
// class FText                        CallFunc_MakeLiteralText_ReturnValue1                            ()
// class FText                        CallFunc_MakeLiteralText_ReturnValue2                            ()
// bool                               Temp_bool_Variable5                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     ()
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_isCritical                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   K2Node_Select_Default                                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select1_Default                                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor1                                    ()
// class UObject*                     K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable1                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable6                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select3_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable4                                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFontOutlineSettings        K2Node_MakeStruct_FontOutlineSettings                            (NoDestructor, HasGetValueTypeHash)
// struct FSlateFontInfo              K2Node_MakeStruct_SlateFontInfo                                  (HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable5                                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable7                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                K2Node_Select4_Default                                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor2                                    ()
// bool                               K2Node_CustomEvent_isComplete                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     K2Node_Select5_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor3                                    ()
// struct FSlateColor                 K2Node_MakeStruct_SlateColor4                                    ()
// struct FSlateColor                 K2Node_Select6_Default                                           ()
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select7_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFontOutlineSettings        K2Node_MakeStruct_FontOutlineSettings1                           (NoDestructor, HasGetValueTypeHash)
// struct FSlateFontInfo              K2Node_MakeStruct_SlateFontInfo1                                 (HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable8                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select8_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_BP_CreateEntryOfClass_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetCalloutText_Callout                                  ()
// class UCalloutEntry_C*             K2Node_DynamicCast_AsCallout_Entry                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue3                            ()
// class FText                        CallFunc_MakeLiteralText_ReturnValue4                            ()
// class FText                        K2Node_Event_StatsText                                           (ConstParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Array_Get_Item                                          ()
// class FText                        CallFunc_TextToUpper_ReturnValue                                 ()
// class UAudioComponent*             CallFunc_SpawnSound2D_ReturnValue                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)

void UTrickFeedView_C::ExecuteUbergraph_TrickFeedView(int32 EntryPoint, const struct FVector2D& Temp_struct_Variable, const struct FVector2D& Temp_struct_Variable1, bool Temp_bool_Variable, const struct FLinearColor& Temp_struct_Variable2, const struct FLinearColor& Temp_struct_Variable3, bool Temp_bool_Variable1, bool Temp_bool_Variable2, class UObject* Temp_object_Variable, class UObject* Temp_object_Variable1, bool Temp_bool_Variable3, bool Temp_bool_Variable4, class UObject* Temp_object_Variable2, class UObject* Temp_object_Variable3, class FText K2Node_Event_TrickName, class UUserWidget* CallFunc_BP_CreateEntry_ReturnValue, class UTrickEntry_C* K2Node_DynamicCast_AsTrick_Entry, bool K2Node_DynamicCast_bSuccess, class UFortVehicleTrickSet* K2Node_Event_TrickSet, int32 K2Node_Event_TotalScore, float CallFunc_Conv_IntToFloat_ReturnValue, int32 K2Node_Event_Multiplier, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue1, class FText CallFunc_MakeLiteralText_ReturnValue2, bool Temp_bool_Variable5, const struct FSlateColor& K2Node_MakeStruct_SlateColor, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 Temp_int_Variable, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool K2Node_Event_IsDesignTime, bool K2Node_CustomEvent_isCritical, const struct FVector2D& K2Node_Select_Default, const struct FLinearColor& K2Node_Select1_Default, const struct FSlateColor& K2Node_MakeStruct_SlateColor1, class UObject* K2Node_Select2_Default, int32 Temp_int_Variable1, bool Temp_bool_Variable6, int32 K2Node_Select3_Default, const struct FLinearColor& Temp_struct_Variable4, const struct FFontOutlineSettings& K2Node_MakeStruct_FontOutlineSettings, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo, const struct FLinearColor& Temp_struct_Variable5, bool Temp_bool_Variable7, const struct FLinearColor& K2Node_Select4_Default, const struct FSlateColor& K2Node_MakeStruct_SlateColor2, bool K2Node_CustomEvent_isComplete, class UObject* K2Node_Select5_Default, const struct FSlateColor& K2Node_MakeStruct_SlateColor3, const struct FSlateColor& K2Node_MakeStruct_SlateColor4, const struct FSlateColor& K2Node_Select6_Default, int32 CallFunc_Add_IntInt_ReturnValue, int32 K2Node_Select7_Default, enum class ESlateVisibility Temp_byte_Variable, const struct FFontOutlineSettings& K2Node_MakeStruct_FontOutlineSettings1, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo1, enum class ESlateVisibility Temp_byte_Variable1, bool Temp_bool_Variable8, bool CallFunc_GreaterEqual_IntInt_ReturnValue1, enum class ESlateVisibility K2Node_Select8_Default, class UUserWidget* CallFunc_BP_CreateEntryOfClass_ReturnValue, class FText CallFunc_GetCalloutText_Callout, class UCalloutEntry_C* K2Node_DynamicCast_AsCallout_Entry, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_TextIsEmpty_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue3, class FText CallFunc_MakeLiteralText_ReturnValue4, class FText K2Node_Event_StatsText, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue1, class FText CallFunc_Array_Get_Item, class FText CallFunc_TextToUpper_ReturnValue, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue)
{
	static auto Func = Class->GetFunction("TrickFeedView_C", "ExecuteUbergraph_TrickFeedView");

	Params::UTrickFeedView_C_ExecuteUbergraph_TrickFeedView_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable1 = Temp_struct_Variable1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_struct_Variable2 = Temp_struct_Variable2;
	Parms.Temp_struct_Variable3 = Temp_struct_Variable3;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable1 = Temp_object_Variable1;
	Parms.Temp_bool_Variable3 = Temp_bool_Variable3;
	Parms.Temp_bool_Variable4 = Temp_bool_Variable4;
	Parms.Temp_object_Variable2 = Temp_object_Variable2;
	Parms.Temp_object_Variable3 = Temp_object_Variable3;
	Parms.K2Node_Event_TrickName = K2Node_Event_TrickName;
	Parms.CallFunc_BP_CreateEntry_ReturnValue = CallFunc_BP_CreateEntry_ReturnValue;
	Parms.K2Node_DynamicCast_AsTrick_Entry = K2Node_DynamicCast_AsTrick_Entry;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Event_TrickSet = K2Node_Event_TrickSet;
	Parms.K2Node_Event_TotalScore = K2Node_Event_TotalScore;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.K2Node_Event_Multiplier = K2Node_Event_Multiplier;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue1 = CallFunc_MakeLiteralText_ReturnValue1;
	Parms.CallFunc_MakeLiteralText_ReturnValue2 = CallFunc_MakeLiteralText_ReturnValue2;
	Parms.Temp_bool_Variable5 = Temp_bool_Variable5;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_CustomEvent_isCritical = K2Node_CustomEvent_isCritical;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.K2Node_MakeStruct_SlateColor1 = K2Node_MakeStruct_SlateColor1;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.Temp_int_Variable1 = Temp_int_Variable1;
	Parms.Temp_bool_Variable6 = Temp_bool_Variable6;
	Parms.K2Node_Select3_Default = K2Node_Select3_Default;
	Parms.Temp_struct_Variable4 = Temp_struct_Variable4;
	Parms.K2Node_MakeStruct_FontOutlineSettings = K2Node_MakeStruct_FontOutlineSettings;
	Parms.K2Node_MakeStruct_SlateFontInfo = K2Node_MakeStruct_SlateFontInfo;
	Parms.Temp_struct_Variable5 = Temp_struct_Variable5;
	Parms.Temp_bool_Variable7 = Temp_bool_Variable7;
	Parms.K2Node_Select4_Default = K2Node_Select4_Default;
	Parms.K2Node_MakeStruct_SlateColor2 = K2Node_MakeStruct_SlateColor2;
	Parms.K2Node_CustomEvent_isComplete = K2Node_CustomEvent_isComplete;
	Parms.K2Node_Select5_Default = K2Node_Select5_Default;
	Parms.K2Node_MakeStruct_SlateColor3 = K2Node_MakeStruct_SlateColor3;
	Parms.K2Node_MakeStruct_SlateColor4 = K2Node_MakeStruct_SlateColor4;
	Parms.K2Node_Select6_Default = K2Node_Select6_Default;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_Select7_Default = K2Node_Select7_Default;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_MakeStruct_FontOutlineSettings1 = K2Node_MakeStruct_FontOutlineSettings1;
	Parms.K2Node_MakeStruct_SlateFontInfo1 = K2Node_MakeStruct_SlateFontInfo1;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.Temp_bool_Variable8 = Temp_bool_Variable8;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue1 = CallFunc_GreaterEqual_IntInt_ReturnValue1;
	Parms.K2Node_Select8_Default = K2Node_Select8_Default;
	Parms.CallFunc_BP_CreateEntryOfClass_ReturnValue = CallFunc_BP_CreateEntryOfClass_ReturnValue;
	Parms.CallFunc_GetCalloutText_Callout = CallFunc_GetCalloutText_Callout;
	Parms.K2Node_DynamicCast_AsCallout_Entry = K2Node_DynamicCast_AsCallout_Entry;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue = CallFunc_RandomIntegerInRange_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue3 = CallFunc_MakeLiteralText_ReturnValue3;
	Parms.CallFunc_MakeLiteralText_ReturnValue4 = CallFunc_MakeLiteralText_ReturnValue4;
	Parms.K2Node_Event_StatsText = K2Node_Event_StatsText;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue1 = CallFunc_RandomIntegerInRange_ReturnValue1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;
	Parms.CallFunc_SpawnSound2D_ReturnValue = CallFunc_SpawnSound2D_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
