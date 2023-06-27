#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function TournamentDateEntry.TournamentDateEntry_C.RefreshDataBP
// (Event, Protected, BlueprintEvent)
// Parameters:

void UTournamentDateEntry_C::RefreshDataBP()
{
	static auto Func = Class->GetFunction("TournamentDateEntry_C", "RefreshDataBP");

	Params::UTournamentDateEntry_C_RefreshDataBP_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function TournamentDateEntry.TournamentDateEntry_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UTournamentDateEntry_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("TournamentDateEntry_C", "PreConstruct");

	Params::UTournamentDateEntry_C_PreConstruct_Params Parms;
	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

// Function TournamentDateEntry.TournamentDateEntry_C.EventColor
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortTournamentDisplayInfo  ShowdownData                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UTournamentDateEntry_C::EventColor(struct FFortTournamentDisplayInfo& ShowdownData)
{
	static auto Func = Class->GetFunction("TournamentDateEntry_C", "EventColor");

	Params::UTournamentDateEntry_C_EventColor_Params Parms;
	Parms.ShowdownData = ShowdownData;

	UObject::ProcessEvent(Func, &Parms);
}

// Function TournamentDateEntry.TournamentDateEntry_C.ExecuteUbergraph_TournamentDateEntry
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDateTime                   CallFunc_GetEventEndTime_ReturnValue                             (NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetEventTimeAsText_ReturnValue                          ()
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                Temp_struct_Variable                                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortShowdownEventState CallFunc_GetEventState_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable1                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortTournamentDisplayInfo  K2Node_CustomEvent_showdownData                                  (ConstParm)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     ()
// int32                              K2Node_Select1_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor1                                    ()
// struct FDateTime                   CallFunc_GetEventBeginTime_ReturnValue                           (NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetEventDateAsText_ReturnValue                          ()
// struct FLinearColor                K2Node_Select2_Default                                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDateTime                   CallFunc_GetEventBeginTime_ReturnValue1                          (NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetEventTimeAsText_ReturnValue1                         ()
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData1                            (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      ()

void UTournamentDateEntry_C::ExecuteUbergraph_TournamentDateEntry(int32 EntryPoint, const struct FDateTime& CallFunc_GetEventEndTime_ReturnValue, bool Temp_bool_Variable, class FText CallFunc_GetEventTimeAsText_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, enum class ESlateVisibility Temp_byte_Variable1, bool Temp_bool_Variable1, const struct FLinearColor& Temp_struct_Variable, enum class EFortShowdownEventState CallFunc_GetEventState_ReturnValue, int32 Temp_int_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, int32 Temp_int_Variable1, bool CallFunc_BooleanOR_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, float CallFunc_RandomFloatInRange_ReturnValue, bool K2Node_Event_IsDesignTime, const struct FFortTournamentDisplayInfo& K2Node_CustomEvent_showdownData, bool Temp_bool_Variable2, const struct FSlateColor& K2Node_MakeStruct_SlateColor, int32 K2Node_Select1_Default, const struct FSlateColor& K2Node_MakeStruct_SlateColor1, const struct FDateTime& CallFunc_GetEventBeginTime_ReturnValue, class FText CallFunc_GetEventDateAsText_ReturnValue, const struct FLinearColor& K2Node_Select2_Default, const struct FDateTime& CallFunc_GetEventBeginTime_ReturnValue1, class FText CallFunc_GetEventTimeAsText_ReturnValue1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static auto Func = Class->GetFunction("TournamentDateEntry_C", "ExecuteUbergraph_TournamentDateEntry");

	Params::UTournamentDateEntry_C_ExecuteUbergraph_TournamentDateEntry_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetEventEndTime_ReturnValue = CallFunc_GetEventEndTime_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetEventTimeAsText_ReturnValue = CallFunc_GetEventTimeAsText_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_GetEventState_ReturnValue = CallFunc_GetEventState_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue1 = CallFunc_EqualEqual_ByteByte_ReturnValue1;
	Parms.Temp_int_Variable1 = Temp_int_Variable1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_CustomEvent_showdownData = K2Node_CustomEvent_showdownData;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.K2Node_MakeStruct_SlateColor1 = K2Node_MakeStruct_SlateColor1;
	Parms.CallFunc_GetEventBeginTime_ReturnValue = CallFunc_GetEventBeginTime_ReturnValue;
	Parms.CallFunc_GetEventDateAsText_ReturnValue = CallFunc_GetEventDateAsText_ReturnValue;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.CallFunc_GetEventBeginTime_ReturnValue1 = CallFunc_GetEventBeginTime_ReturnValue1;
	Parms.CallFunc_GetEventTimeAsText_ReturnValue1 = CallFunc_GetEventTimeAsText_ReturnValue1;
	Parms.K2Node_MakeStruct_FormatArgumentData1 = K2Node_MakeStruct_FormatArgumentData1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
