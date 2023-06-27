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

// Function B_Shotgun_Charge_Athena.B_Shotgun_Charge_Athena_C.K2_OnUnEquip
// (Event, Public, BlueprintEvent)

void AB_Shotgun_Charge_Athena_C::K2_OnUnEquip()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Shotgun_Charge_Athena.B_Shotgun_Charge_Athena_C.K2_OnUnEquip");

	AB_Shotgun_Charge_Athena_C_K2_OnUnEquip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Shotgun_Charge_Athena.B_Shotgun_Charge_Athena_C.OnStartCharge
// (Event, Protected, BlueprintEvent)

void AB_Shotgun_Charge_Athena_C::OnStartCharge()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Shotgun_Charge_Athena.B_Shotgun_Charge_Athena_C.OnStartCharge");

	AB_Shotgun_Charge_Athena_C_OnStartCharge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Shotgun_Charge_Athena.B_Shotgun_Charge_Athena_C.OnReachedMaxCharge
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)

void AB_Shotgun_Charge_Athena_C::OnReachedMaxCharge()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Shotgun_Charge_Athena.B_Shotgun_Charge_Athena_C.OnReachedMaxCharge");

	AB_Shotgun_Charge_Athena_C_OnReachedMaxCharge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Shotgun_Charge_Athena.B_Shotgun_Charge_Athena_C.OnEndCharge
// (Event, Protected, BlueprintEvent)

void AB_Shotgun_Charge_Athena_C::OnEndCharge()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Shotgun_Charge_Athena.B_Shotgun_Charge_Athena_C.OnEndCharge");

	AB_Shotgun_Charge_Athena_C_OnEndCharge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Shotgun_Charge_Athena.B_Shotgun_Charge_Athena_C.ChargeAudioVisualizer
// (BlueprintCallable, BlueprintEvent)

void AB_Shotgun_Charge_Athena_C::ChargeAudioVisualizer()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Shotgun_Charge_Athena.B_Shotgun_Charge_Athena_C.ChargeAudioVisualizer");

	AB_Shotgun_Charge_Athena_C_ChargeAudioVisualizer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Shotgun_Charge_Athena.B_Shotgun_Charge_Athena_C.OnPlayWeaponFireFX
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bPersistentFire                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSecondaryFire                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Shotgun_Charge_Athena_C::OnPlayWeaponFireFX(bool bPersistentFire, bool bSecondaryFire)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Shotgun_Charge_Athena.B_Shotgun_Charge_Athena_C.OnPlayWeaponFireFX");

	AB_Shotgun_Charge_Athena_C_OnPlayWeaponFireFX_Params params;
	params.bPersistentFire = bPersistentFire;
	params.bSecondaryFire = bSecondaryFire;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Shotgun_Charge_Athena.B_Shotgun_Charge_Athena_C.ExecuteUbergraph_B_Shotgun_Charge_Athena
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Shotgun_Charge_Athena_C::ExecuteUbergraph_B_Shotgun_Charge_Athena(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Shotgun_Charge_Athena.B_Shotgun_Charge_Athena_C.ExecuteUbergraph_B_Shotgun_Charge_Athena");

	AB_Shotgun_Charge_Athena_C_ExecuteUbergraph_B_Shotgun_Charge_Athena_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
