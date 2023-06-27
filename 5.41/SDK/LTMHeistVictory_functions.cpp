#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function LTMHeistVictory.LTMHeistVictory_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void ULTMHeistVictory_C::Construct()
{
	static auto Func = Class->GetFunction("LTMHeistVictory_C", "Construct");

	Params::ULTMHeistVictory_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function LTMHeistVictory.LTMHeistVictory_C.Event Intro
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ULTMHeistVictory_C::Event_Intro()
{
	static auto Func = Class->GetFunction("LTMHeistVictory_C", "Event Intro");

	Params::ULTMHeistVictory_C_Event_Intro_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function LTMHeistVictory.LTMHeistVictory_C.Event Outro
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ULTMHeistVictory_C::Event_Outro()
{
	static auto Func = Class->GetFunction("LTMHeistVictory_C", "Event Outro");

	Params::ULTMHeistVictory_C_Event_Outro_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function LTMHeistVictory.LTMHeistVictory_C.ExecuteUbergraph_LTMHeistVictory
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UAthenaHUDContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULTMHeistVictory_C::ExecuteUbergraph_LTMHeistVictory(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue)
{
	static auto Func = Class->GetFunction("LTMHeistVictory_C", "ExecuteUbergraph_LTMHeistVictory");

	Params::ULTMHeistVictory_C_ExecuteUbergraph_LTMHeistVictory_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
