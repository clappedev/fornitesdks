#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function B_BadgerBang_Athena_Child.B_BadgerBang_Athena_Child_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AB_BadgerBang_Athena_Child_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("B_BadgerBang_Athena_Child_C", "ReceiveBeginPlay");

	Params::AB_BadgerBang_Athena_Child_C_ReceiveBeginPlay_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function B_BadgerBang_Athena_Child.B_BadgerBang_Athena_Child_C.ExecuteUbergraph_B_BadgerBang_Athena_Child
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_BadgerBang_Athena_Child_C::ExecuteUbergraph_B_BadgerBang_Athena_Child(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("B_BadgerBang_Athena_Child_C", "ExecuteUbergraph_B_BadgerBang_Athena_Child");

	Params::AB_BadgerBang_Athena_Child_C_ExecuteUbergraph_B_BadgerBang_Athena_Child_Params Parms;
	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
