#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function PCB_InfoPannel.PCB_InfoPannel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UPCB_InfoPannel_C::Construct()
{
	static auto Func = Class->GetFunction("PCB_InfoPannel_C", "Construct");

	Params::UPCB_InfoPannel_C_Construct_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function PCB_InfoPannel.PCB_InfoPannel_C.ExecuteUbergraph_PCB_InfoPannel
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetPCBDescription_ReturnValue                           ()
// class FText                        CallFunc_GetPCBHeader_ReturnValue                                ()

void UPCB_InfoPannel_C::ExecuteUbergraph_PCB_InfoPannel(int32 EntryPoint, class FText CallFunc_GetPCBDescription_ReturnValue, class FText CallFunc_GetPCBHeader_ReturnValue)
{
	static auto Func = Class->GetFunction("PCB_InfoPannel_C", "ExecuteUbergraph_PCB_InfoPannel");

	Params::UPCB_InfoPannel_C_ExecuteUbergraph_PCB_InfoPannel_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetPCBDescription_ReturnValue = CallFunc_GetPCBDescription_ReturnValue;
	Parms.CallFunc_GetPCBHeader_ReturnValue = CallFunc_GetPCBHeader_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
