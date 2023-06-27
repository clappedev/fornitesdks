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

// Function B_FerretWeapon.B_FerretWeapon_C.K2_OnUnEquip
// (Event, Public, BlueprintEvent)

void AB_FerretWeapon_C::K2_OnUnEquip()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_FerretWeapon.B_FerretWeapon_C.K2_OnUnEquip");

	AB_FerretWeapon_C_K2_OnUnEquip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_FerretWeapon.B_FerretWeapon_C.FerretSnowmanCheck
// (Net, NetServer, BlueprintCallable, BlueprintEvent)

void AB_FerretWeapon_C::FerretSnowmanCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_FerretWeapon.B_FerretWeapon_C.FerretSnowmanCheck");

	AB_FerretWeapon_C_FerretSnowmanCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_FerretWeapon.B_FerretWeapon_C.OnWeaponAttached
// (Event, Public, BlueprintEvent)

void AB_FerretWeapon_C::OnWeaponAttached()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_FerretWeapon.B_FerretWeapon_C.OnWeaponAttached");

	AB_FerretWeapon_C_OnWeaponAttached_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_FerretWeapon.B_FerretWeapon_C.HandFired
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EDualWeaponHand                Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bPersistantFire                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_FerretWeapon_C::HandFired(EDualWeaponHand Hand, bool bPersistantFire)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_FerretWeapon.B_FerretWeapon_C.HandFired");

	AB_FerretWeapon_C_HandFired_Params params;
	params.Hand = Hand;
	params.bPersistantFire = bPersistantFire;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_FerretWeapon.B_FerretWeapon_C.OnStartOverheated
// (Event, Protected, BlueprintEvent)

void AB_FerretWeapon_C::OnStartOverheated()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_FerretWeapon.B_FerretWeapon_C.OnStartOverheated");

	AB_FerretWeapon_C_OnStartOverheated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_FerretWeapon.B_FerretWeapon_C.ExecuteUbergraph_B_FerretWeapon
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_FerretWeapon_C::ExecuteUbergraph_B_FerretWeapon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_FerretWeapon.B_FerretWeapon_C.ExecuteUbergraph_B_FerretWeapon");

	AB_FerretWeapon_C_ExecuteUbergraph_B_FerretWeapon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
