#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function BP_PDW.BP_PDW_C.ExecuteUbergraph_BP_PDW
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PDW_C::ExecuteUbergraph_BP_PDW(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("BP_PDW_C", "ExecuteUbergraph_BP_PDW");

	Params::UBP_PDW_C_ExecuteUbergraph_BP_PDW_Params Parms;
	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
