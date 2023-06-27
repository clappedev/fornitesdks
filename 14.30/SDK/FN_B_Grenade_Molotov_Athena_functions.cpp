// Fortnite (14.30) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function B_Grenade_Molotov_Athena.B_Grenade_Molotov_Athena_C.OnWeaponAttached
// (Event, Public, BlueprintEvent)

void AB_Grenade_Molotov_Athena_C::OnWeaponAttached()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Grenade_Molotov_Athena.B_Grenade_Molotov_Athena_C.OnWeaponAttached");

	AB_Grenade_Molotov_Athena_C_OnWeaponAttached_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Grenade_Molotov_Athena.B_Grenade_Molotov_Athena_C.K2_OnUnEquip
// (Event, Public, BlueprintEvent)

void AB_Grenade_Molotov_Athena_C::K2_OnUnEquip()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Grenade_Molotov_Athena.B_Grenade_Molotov_Athena_C.K2_OnUnEquip");

	AB_Grenade_Molotov_Athena_C_K2_OnUnEquip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Grenade_Molotov_Athena.B_Grenade_Molotov_Athena_C.ExecuteUbergraph_B_Grenade_Molotov_Athena
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Grenade_Molotov_Athena_C::ExecuteUbergraph_B_Grenade_Molotov_Athena(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Grenade_Molotov_Athena.B_Grenade_Molotov_Athena_C.ExecuteUbergraph_B_Grenade_Molotov_Athena");

	AB_Grenade_Molotov_Athena_C_ExecuteUbergraph_B_Grenade_Molotov_Athena_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
