#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function GolfCartDriver_AnimBP.GolfCartDriver_AnimBP_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGolfCartDriver_AnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static auto Func = Class->GetFunction("GolfCartDriver_AnimBP_C", "BlueprintUpdateAnimation");

	Params::UGolfCartDriver_AnimBP_C_BlueprintUpdateAnimation_Params Parms;
	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);
}

// Function GolfCartDriver_AnimBP.GolfCartDriver_AnimBP_C.ExecuteUbergraph_GolfCartDriver_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGolfCartDriver_AnimBP_C::ExecuteUbergraph_GolfCartDriver_AnimBP(int32 EntryPoint, float K2Node_Event_DeltaTimeX)
{
	static auto Func = Class->GetFunction("GolfCartDriver_AnimBP_C", "ExecuteUbergraph_GolfCartDriver_AnimBP");

	Params::UGolfCartDriver_AnimBP_C_ExecuteUbergraph_GolfCartDriver_AnimBP_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);
}

// Function GolfCartDriver_AnimBP.GolfCartDriver_AnimBP_C.OnPedal__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGolfCartDriver_AnimBP_C::OnPedal__DelegateSignature()
{
	static auto Func = Class->GetFunction("GolfCartDriver_AnimBP_C", "OnPedal__DelegateSignature");

	Params::UGolfCartDriver_AnimBP_C_OnPedal__DelegateSignature_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
