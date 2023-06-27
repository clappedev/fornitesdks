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

// Function B_RocketLauncher_Generic_Athena_HighTier.B_RocketLauncher_Generic_Athena_HighTier_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AB_RocketLauncher_Generic_Athena_HighTier_C::UserConstructionScript()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_RocketLauncher_Generic_Athena_HighTier.B_RocketLauncher_Generic_Athena_HighTier_C.UserConstructionScript");

	AB_RocketLauncher_Generic_Athena_HighTier_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_RocketLauncher_Generic_Athena_HighTier.B_RocketLauncher_Generic_Athena_HighTier_C.Muzzle Flash FX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Persistent_Fire                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_RocketLauncher_Generic_Athena_HighTier_C::Muzzle_Flash_FX(bool Persistent_Fire)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_RocketLauncher_Generic_Athena_HighTier.B_RocketLauncher_Generic_Athena_HighTier_C.Muzzle Flash FX");

	AB_RocketLauncher_Generic_Athena_HighTier_C_Muzzle_Flash_FX_Params params;
	params.Persistent_Fire = Persistent_Fire;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_RocketLauncher_Generic_Athena_HighTier.B_RocketLauncher_Generic_Athena_HighTier_C.ExecuteUbergraph_B_RocketLauncher_Generic_Athena_HighTier
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_RocketLauncher_Generic_Athena_HighTier_C::ExecuteUbergraph_B_RocketLauncher_Generic_Athena_HighTier(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_RocketLauncher_Generic_Athena_HighTier.B_RocketLauncher_Generic_Athena_HighTier_C.ExecuteUbergraph_B_RocketLauncher_Generic_Athena_HighTier");

	AB_RocketLauncher_Generic_Athena_HighTier_C_ExecuteUbergraph_B_RocketLauncher_Generic_Athena_HighTier_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
