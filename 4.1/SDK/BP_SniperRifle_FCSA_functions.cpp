#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function BP_SniperRifle_FCSA.BP_SniperRifle_FCSA_C.ExecuteUbergraph_BP_SniperRifle_FCSA
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SniperRifle_FCSA_C::ExecuteUbergraph_BP_SniperRifle_FCSA(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("BP_SniperRifle_FCSA_C", "ExecuteUbergraph_BP_SniperRifle_FCSA");

	Params::UBP_SniperRifle_FCSA_C_ExecuteUbergraph_BP_SniperRifle_FCSA_Params Parms;
	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
