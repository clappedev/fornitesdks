#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function SK_Assault_Bullpup_01_Skeleton_AnimBlueprint.SK_Assault_Bullpup_01_Skeleton_AnimBlueprint_C.ExecuteUbergraph_SK_Assault_Bullpup_01_Skeleton_AnimBlueprint
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USK_Assault_Bullpup_01_Skeleton_AnimBlueprint_C::ExecuteUbergraph_SK_Assault_Bullpup_01_Skeleton_AnimBlueprint(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("SK_Assault_Bullpup_01_Skeleton_AnimBlueprint_C", "ExecuteUbergraph_SK_Assault_Bullpup_01_Skeleton_AnimBlueprint");

	Params::USK_Assault_Bullpup_01_Skeleton_AnimBlueprint_C_ExecuteUbergraph_SK_Assault_Bullpup_01_Skeleton_AnimBlueprint_Params Parms;
	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
