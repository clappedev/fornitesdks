#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function LTMVictory.LTMVictory_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void ULTMVictory_C::Construct()
{
	static auto Func = Class->GetFunction("LTMVictory_C", "Construct");

	Params::ULTMVictory_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function LTMVictory.LTMVictory_C.Event Intro
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ULTMVictory_C::Event_Intro()
{
	static auto Func = Class->GetFunction("LTMVictory_C", "Event Intro");

	Params::ULTMVictory_C_Event_Intro_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function LTMVictory.LTMVictory_C.ExecuteUbergraph_LTMVictory
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaHUDContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetVictoryText_ReturnValue                              ()
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 ()
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      ()

void ULTMVictory_C::ExecuteUbergraph_LTMVictory(int32 EntryPoint, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue, class FText CallFunc_GetVictoryText_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static auto Func = Class->GetFunction("LTMVictory_C", "ExecuteUbergraph_LTMVictory");

	Params::ULTMVictory_C_ExecuteUbergraph_LTMVictory_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetVictoryText_ReturnValue = CallFunc_GetVictoryText_ReturnValue;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
