// Fortnite (8.51) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GA_FerretVehicleWeapon.GA_FerretVehicleWeapon_C.Removed_CD5722AC44659FF60EA697B33A729C46
// (BlueprintCallable, BlueprintEvent)

void UGA_FerretVehicleWeapon_C::Removed_CD5722AC44659FF60EA697B33A729C46()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_FerretVehicleWeapon.GA_FerretVehicleWeapon_C.Removed_CD5722AC44659FF60EA697B33A729C46");

	UGA_FerretVehicleWeapon_C_Removed_CD5722AC44659FF60EA697B33A729C46_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_FerretVehicleWeapon.GA_FerretVehicleWeapon_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_FerretVehicleWeapon_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_FerretVehicleWeapon.GA_FerretVehicleWeapon_C.K2_ActivateAbility");

	UGA_FerretVehicleWeapon_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_FerretVehicleWeapon.GA_FerretVehicleWeapon_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bWasCancelled                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_FerretVehicleWeapon_C::K2_OnEndAbility(bool bWasCancelled)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_FerretVehicleWeapon.GA_FerretVehicleWeapon_C.K2_OnEndAbility");

	UGA_FerretVehicleWeapon_C_K2_OnEndAbility_Params params;
	params.bWasCancelled = bWasCancelled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_FerretVehicleWeapon.GA_FerretVehicleWeapon_C.ExecuteUbergraph_GA_FerretVehicleWeapon
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_FerretVehicleWeapon_C::ExecuteUbergraph_GA_FerretVehicleWeapon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_FerretVehicleWeapon.GA_FerretVehicleWeapon_C.ExecuteUbergraph_GA_FerretVehicleWeapon");

	UGA_FerretVehicleWeapon_C_ExecuteUbergraph_GA_FerretVehicleWeapon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
