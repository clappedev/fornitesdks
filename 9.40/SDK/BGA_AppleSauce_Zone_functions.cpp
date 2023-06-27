#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function BGA_AppleSauce_Zone.BGA_AppleSauce_Zone_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABGA_AppleSauce_Zone_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("BGA_AppleSauce_Zone_C", "ReceiveBeginPlay");

	Params::ABGA_AppleSauce_Zone_C_ReceiveBeginPlay_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function BGA_AppleSauce_Zone.BGA_AppleSauce_Zone_C.ExecuteUbergraph_BGA_AppleSauce_Zone
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueAtLevel_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABGA_AppleSauce_Zone_C::ExecuteUbergraph_BGA_AppleSauce_Zone(int32 EntryPoint, float CallFunc_GetValueAtLevel_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue)
{
	static auto Func = Class->GetFunction("BGA_AppleSauce_Zone_C", "ExecuteUbergraph_BGA_AppleSauce_Zone");

	Params::ABGA_AppleSauce_Zone_C_ExecuteUbergraph_BGA_AppleSauce_Zone_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetValueAtLevel_ReturnValue = CallFunc_GetValueAtLevel_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
