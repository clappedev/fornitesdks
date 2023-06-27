#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function SK_Pickaxe_Street_Basketball_AnimBP.SK_Pickaxe_Street_Basketball_AnimBP_C.ExecuteUbergraph_SK_Pickaxe_Street_Basketball_AnimBP
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USK_Pickaxe_Street_Basketball_AnimBP_C::ExecuteUbergraph_SK_Pickaxe_Street_Basketball_AnimBP(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("SK_Pickaxe_Street_Basketball_AnimBP_C", "ExecuteUbergraph_SK_Pickaxe_Street_Basketball_AnimBP");

	Params::USK_Pickaxe_Street_Basketball_AnimBP_C_ExecuteUbergraph_SK_Pickaxe_Street_Basketball_AnimBP_Params Parms;
	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
