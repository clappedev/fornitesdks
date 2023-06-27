#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function B_CameraLens_Wind_Tunnel_Transition.B_CameraLens_Wind_Tunnel_Transition_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AB_CameraLens_Wind_Tunnel_Transition_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("B_CameraLens_Wind_Tunnel_Transition_C", "ReceiveBeginPlay");

	Params::AB_CameraLens_Wind_Tunnel_Transition_C_ReceiveBeginPlay_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function B_CameraLens_Wind_Tunnel_Transition.B_CameraLens_Wind_Tunnel_Transition_C.ExecuteUbergraph_B_CameraLens_Wind_Tunnel_Transition
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_CameraLens_Wind_Tunnel_Transition_C::ExecuteUbergraph_B_CameraLens_Wind_Tunnel_Transition(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("B_CameraLens_Wind_Tunnel_Transition_C", "ExecuteUbergraph_B_CameraLens_Wind_Tunnel_Transition");

	Params::AB_CameraLens_Wind_Tunnel_Transition_C_ExecuteUbergraph_B_CameraLens_Wind_Tunnel_Transition_Params Parms;
	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
