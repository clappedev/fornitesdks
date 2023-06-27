#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function Results_TeamScoreRow.Results_TeamScoreRow_C.ShowValidResidualScores
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonNumericTextBlock*     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UResults_PlayerScoreBox_C*   CallFunc_Array_Get_Item1                                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsValidScoreBox_bIsValidScoreBox                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UResults_TeamScoreRow_C::ShowValidResidualScores(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UCommonNumericTextBlock* CallFunc_Array_Get_Item, class UResults_PlayerScoreBox_C* CallFunc_Array_Get_Item1, bool CallFunc_GetIsValidScoreBox_bIsValidScoreBox, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("Results_TeamScoreRow_C", "ShowValidResidualScores");

	Params::UResults_TeamScoreRow_C_ShowValidResidualScores_Params Parms;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item1 = CallFunc_Array_Get_Item1;
	Parms.CallFunc_GetIsValidScoreBox_bIsValidScoreBox = CallFunc_GetIsValidScoreBox_bIsValidScoreBox;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Results_TeamScoreRow.Results_TeamScoreRow_C.SkipToFinalState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UResults_TeamScoreRow_C::SkipToFinalState()
{
	static auto Func = Class->GetFunction("Results_TeamScoreRow_C", "SkipToFinalState");

	Params::UResults_TeamScoreRow_C_SkipToFinalState_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Results_TeamScoreRow.Results_TeamScoreRow_C.SetSkippingToEnd
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsAnimationPlaying_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UResults_TeamScoreRow_C::SetSkippingToEnd(bool CallFunc_IsAnimationPlaying_ReturnValue)
{
	static auto Func = Class->GetFunction("Results_TeamScoreRow_C", "SetSkippingToEnd");

	Params::UResults_TeamScoreRow_C_SetSkippingToEnd_Params Parms;
	Parms.CallFunc_IsAnimationPlaying_ReturnValue = CallFunc_IsAnimationPlaying_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Results_TeamScoreRow.Results_TeamScoreRow_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUIScoreReport*          InScoreReport                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              PlayRate                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonNumericTextBlock*     CurrentResidualScoreText                                         (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CurrentScoreReportIndex                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UResults_PlayerScoreBox_C*   CurrentScoreBox                                                  (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUIScoreReport*          ScoreReport                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              BestScore                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UResults_PlayerScoreBox_C*   ScoreBoxBest                                                     (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UCommonNumericTextBlock*>K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<int32>                      CallFunc_GetScoreReportIndicesByPlayerID_SortedScoreReportIndices(ZeroConstructor, ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonNumericTextBlock*     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UResults_PlayerScoreBox_C*   CallFunc_Array_Get_Item1                                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Get_Item12                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonNumericTextBlock*     CallFunc_Array_Get_Item123                                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPlayerCount_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UResults_PlayerScoreBox_C*>K2Node_MakeArray_Array1                                          (ZeroConstructor, ReferenceParm)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetTeamScore_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UResults_PlayerScoreBox_C*   CallFunc_Array_Get_Item1234                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     ()
// bool                               CallFunc_GetIsValidScoreBox_bIsValidScoreBox                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetPlayerScore_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Max_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UResults_TeamScoreRow_C::Initialize(class UFortUIScoreReport* InScoreReport, float PlayRate, class UCommonNumericTextBlock* CurrentResidualScoreText, int32 CurrentScoreReportIndex, class UResults_PlayerScoreBox_C* CurrentScoreBox, class UFortUIScoreReport* ScoreReport, int32 BestScore, class UResults_PlayerScoreBox_C* ScoreBoxBest, TArray<class UCommonNumericTextBlock*>& K2Node_MakeArray_Array, bool CallFunc_GreaterEqual_IntInt_ReturnValue, TArray<int32>& CallFunc_GetScoreReportIndicesByPlayerID_SortedScoreReportIndices, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, class UCommonNumericTextBlock* CallFunc_Array_Get_Item, bool CallFunc_LessEqual_IntInt_ReturnValue, class UResults_PlayerScoreBox_C* CallFunc_Array_Get_Item1, int32 CallFunc_Array_Get_Item12, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class UCommonNumericTextBlock* CallFunc_Array_Get_Item123, int32 CallFunc_GetPlayerCount_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, TArray<class UResults_PlayerScoreBox_C*>& K2Node_MakeArray_Array1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_GetTeamScore_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue1, class UResults_PlayerScoreBox_C* CallFunc_Array_Get_Item1234, int32 CallFunc_Array_Length_ReturnValue1, bool CallFunc_Less_IntInt_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor, bool CallFunc_GetIsValidScoreBox_bIsValidScoreBox, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_GetPlayerScore_ReturnValue, int32 CallFunc_Max_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue)
{
	static auto Func = Class->GetFunction("Results_TeamScoreRow_C", "Initialize");

	Params::UResults_TeamScoreRow_C_Initialize_Params Parms;
	Parms.InScoreReport = InScoreReport;
	Parms.PlayRate = PlayRate;
	Parms.CurrentResidualScoreText = CurrentResidualScoreText;
	Parms.CurrentScoreReportIndex = CurrentScoreReportIndex;
	Parms.CurrentScoreBox = CurrentScoreBox;
	Parms.ScoreReport = ScoreReport;
	Parms.BestScore = BestScore;
	Parms.ScoreBoxBest = ScoreBoxBest;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetScoreReportIndicesByPlayerID_SortedScoreReportIndices = CallFunc_GetScoreReportIndicesByPlayerID_SortedScoreReportIndices;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item1 = CallFunc_Array_Get_Item1;
	Parms.CallFunc_Array_Get_Item12 = CallFunc_Array_Get_Item12;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item123 = CallFunc_Array_Get_Item123;
	Parms.CallFunc_GetPlayerCount_ReturnValue = CallFunc_GetPlayerCount_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_MakeArray_Array1 = K2Node_MakeArray_Array1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_GetTeamScore_ReturnValue = CallFunc_GetTeamScore_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue1 = CallFunc_Add_IntInt_ReturnValue1;
	Parms.CallFunc_Array_Get_Item1234 = CallFunc_Array_Get_Item1234;
	Parms.CallFunc_Array_Length_ReturnValue1 = CallFunc_Array_Length_ReturnValue1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.CallFunc_GetIsValidScoreBox_bIsValidScoreBox = CallFunc_GetIsValidScoreBox_bIsValidScoreBox;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetPlayerScore_ReturnValue = CallFunc_GetPlayerScore_ReturnValue;
	Parms.CallFunc_Max_ReturnValue = CallFunc_Max_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Results_TeamScoreRow.Results_TeamScoreRow_C.Intro Sequence
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UResults_TeamScoreRow_C::Intro_Sequence()
{
	static auto Func = Class->GetFunction("Results_TeamScoreRow_C", "Intro Sequence");

	Params::UResults_TeamScoreRow_C_Intro_Sequence_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Results_TeamScoreRow.Results_TeamScoreRow_C.BndEvt__Anim_Absorb_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UResults_TeamScoreRow_C::BndEvt__Anim_Absorb_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static auto Func = Class->GetFunction("Results_TeamScoreRow_C", "BndEvt__Anim_Absorb_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	Params::UResults_TeamScoreRow_C_BndEvt__Anim_Absorb_K2Node_ComponentBoundEvent_1_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Results_TeamScoreRow.Results_TeamScoreRow_C.Count Up Sequence
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UResults_TeamScoreRow_C::Count_Up_Sequence()
{
	static auto Func = Class->GetFunction("Results_TeamScoreRow_C", "Count Up Sequence");

	Params::UResults_TeamScoreRow_C_Count_Up_Sequence_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Results_TeamScoreRow.Results_TeamScoreRow_C.BndEvt__TeamScoreBox_K2Node_ComponentBoundEvent_5_CountUpFinished__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UResults_TeamScoreRow_C::BndEvt__TeamScoreBox_K2Node_ComponentBoundEvent_5_CountUpFinished__DelegateSignature()
{
	static auto Func = Class->GetFunction("Results_TeamScoreRow_C", "BndEvt__TeamScoreBox_K2Node_ComponentBoundEvent_5_CountUpFinished__DelegateSignature");

	Params::UResults_TeamScoreRow_C_BndEvt__TeamScoreBox_K2Node_ComponentBoundEvent_5_CountUpFinished__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Results_TeamScoreRow.Results_TeamScoreRow_C.Count Down Sequence
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UResults_TeamScoreRow_C::Count_Down_Sequence()
{
	static auto Func = Class->GetFunction("Results_TeamScoreRow_C", "Count Down Sequence");

	Params::UResults_TeamScoreRow_C_Count_Down_Sequence_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Results_TeamScoreRow.Results_TeamScoreRow_C.BndEvt__TeamScoreBox_K2Node_ComponentBoundEvent_0_CountDownFinished__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UResults_TeamScoreRow_C::BndEvt__TeamScoreBox_K2Node_ComponentBoundEvent_0_CountDownFinished__DelegateSignature()
{
	static auto Func = Class->GetFunction("Results_TeamScoreRow_C", "BndEvt__TeamScoreBox_K2Node_ComponentBoundEvent_0_CountDownFinished__DelegateSignature");

	Params::UResults_TeamScoreRow_C_BndEvt__TeamScoreBox_K2Node_ComponentBoundEvent_0_CountDownFinished__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Results_TeamScoreRow.Results_TeamScoreRow_C.BndEvt__TeamScoreBox_K2Node_ComponentBoundEvent_1_IntroFinished__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UResults_TeamScoreRow_C::BndEvt__TeamScoreBox_K2Node_ComponentBoundEvent_1_IntroFinished__DelegateSignature()
{
	static auto Func = Class->GetFunction("Results_TeamScoreRow_C", "BndEvt__TeamScoreBox_K2Node_ComponentBoundEvent_1_IntroFinished__DelegateSignature");

	Params::UResults_TeamScoreRow_C_BndEvt__TeamScoreBox_K2Node_ComponentBoundEvent_1_IntroFinished__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Results_TeamScoreRow.Results_TeamScoreRow_C.Stop Count Down Absorption
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UResults_TeamScoreRow_C::Stop_Count_Down_Absorption()
{
	static auto Func = Class->GetFunction("Results_TeamScoreRow_C", "Stop Count Down Absorption");

	Params::UResults_TeamScoreRow_C_Stop_Count_Down_Absorption_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Results_TeamScoreRow.Results_TeamScoreRow_C.ExecuteUbergraph_Results_TeamScoreRow
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue12                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue123                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue1234                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue12345                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UResults_PlayerScoreBox_C*   CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsValidScoreBox_bIsValidScoreBox                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue123456                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue1234567                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UResults_TeamScoreRow_C::ExecuteUbergraph_Results_TeamScoreRow(int32 EntryPoint, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue12, bool CallFunc_BooleanOR_ReturnValue123, bool CallFunc_BooleanOR_ReturnValue1234, int32 Temp_int_Array_Index_Variable, bool CallFunc_BooleanOR_ReturnValue12345, class UResults_PlayerScoreBox_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_GetIsValidScoreBox_bIsValidScoreBox, bool CallFunc_BooleanOR_ReturnValue123456, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue1234567)
{
	static auto Func = Class->GetFunction("Results_TeamScoreRow_C", "ExecuteUbergraph_Results_TeamScoreRow");

	Params::UResults_TeamScoreRow_C_ExecuteUbergraph_Results_TeamScoreRow_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue1 = CallFunc_BooleanOR_ReturnValue1;
	Parms.CallFunc_BooleanOR_ReturnValue12 = CallFunc_BooleanOR_ReturnValue12;
	Parms.CallFunc_BooleanOR_ReturnValue123 = CallFunc_BooleanOR_ReturnValue123;
	Parms.CallFunc_BooleanOR_ReturnValue1234 = CallFunc_BooleanOR_ReturnValue1234;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_BooleanOR_ReturnValue12345 = CallFunc_BooleanOR_ReturnValue12345;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetIsValidScoreBox_bIsValidScoreBox = CallFunc_GetIsValidScoreBox_bIsValidScoreBox;
	Parms.CallFunc_BooleanOR_ReturnValue123456 = CallFunc_BooleanOR_ReturnValue123456;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue1234567 = CallFunc_BooleanOR_ReturnValue1234567;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Results_TeamScoreRow.Results_TeamScoreRow_C.CountDownFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UResults_TeamScoreRow_C::CountDownFinished__DelegateSignature()
{
	static auto Func = Class->GetFunction("Results_TeamScoreRow_C", "CountDownFinished__DelegateSignature");

	Params::UResults_TeamScoreRow_C_CountDownFinished__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function Results_TeamScoreRow.Results_TeamScoreRow_C.CountUpFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UResults_TeamScoreRow_C::CountUpFinished__DelegateSignature()
{
	static auto Func = Class->GetFunction("Results_TeamScoreRow_C", "CountUpFinished__DelegateSignature");

	Params::UResults_TeamScoreRow_C_CountUpFinished__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
