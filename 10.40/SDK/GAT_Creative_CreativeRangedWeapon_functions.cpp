#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function GAT_Creative_CreativeRangedWeapon.GAT_Creative_CreativeRangedWeapon_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGAT_Creative_CreativeRangedWeapon_C::K2_ActivateAbility()
{
	static auto Func = Class->GetFunction("GAT_Creative_CreativeRangedWeapon_C", "K2_ActivateAbility");

	Params::UGAT_Creative_CreativeRangedWeapon_C_K2_ActivateAbility_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function GAT_Creative_CreativeRangedWeapon.GAT_Creative_CreativeRangedWeapon_C.ExecuteUbergraph_GAT_Creative_CreativeRangedWeapon
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGAT_Creative_CreativeRangedWeapon_C::ExecuteUbergraph_GAT_Creative_CreativeRangedWeapon(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("GAT_Creative_CreativeRangedWeapon_C", "ExecuteUbergraph_GAT_Creative_CreativeRangedWeapon");

	Params::UGAT_Creative_CreativeRangedWeapon_C_ExecuteUbergraph_GAT_Creative_CreativeRangedWeapon_Params Parms;
	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
