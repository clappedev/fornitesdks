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

// Function B_PetrolWeapon.B_PetrolWeapon_C.OnRep_AttachedBGAActor
// (BlueprintCallable, BlueprintEvent)

void AB_PetrolWeapon_C::OnRep_AttachedBGAActor()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_PetrolWeapon.B_PetrolWeapon_C.OnRep_AttachedBGAActor");

	AB_PetrolWeapon_C_OnRep_AttachedBGAActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_PetrolWeapon.B_PetrolWeapon_C.OnSpawnProjectile
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AFortProjectileBase*     SpawnProjectile                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_PetrolWeapon_C::OnSpawnProjectile(class AFortProjectileBase* SpawnProjectile)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_PetrolWeapon.B_PetrolWeapon_C.OnSpawnProjectile");

	AB_PetrolWeapon_C_OnSpawnProjectile_Params params;
	params.SpawnProjectile = SpawnProjectile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_PetrolWeapon.B_PetrolWeapon_C.OnWeaponAttached
// (Event, Public, BlueprintEvent)

void AB_PetrolWeapon_C::OnWeaponAttached()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_PetrolWeapon.B_PetrolWeapon_C.OnWeaponAttached");

	AB_PetrolWeapon_C_OnWeaponAttached_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_PetrolWeapon.B_PetrolWeapon_C.K2_OnUnEquip
// (Event, Public, BlueprintEvent)

void AB_PetrolWeapon_C::K2_OnUnEquip()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_PetrolWeapon.B_PetrolWeapon_C.K2_OnUnEquip");

	AB_PetrolWeapon_C_K2_OnUnEquip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_PetrolWeapon.B_PetrolWeapon_C.UpdateAndAttachBGA
// (BlueprintCallable, BlueprintEvent)

void AB_PetrolWeapon_C::UpdateAndAttachBGA()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_PetrolWeapon.B_PetrolWeapon_C.UpdateAndAttachBGA");

	AB_PetrolWeapon_C_UpdateAndAttachBGA_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_PetrolWeapon.B_PetrolWeapon_C.OnPlayWeaponFireFX
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bPersistentFire                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSecondaryFire                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_PetrolWeapon_C::OnPlayWeaponFireFX(bool bPersistentFire, bool bSecondaryFire)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_PetrolWeapon.B_PetrolWeapon_C.OnPlayWeaponFireFX");

	AB_PetrolWeapon_C_OnPlayWeaponFireFX_Params params;
	params.bPersistentFire = bPersistentFire;
	params.bSecondaryFire = bSecondaryFire;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_PetrolWeapon.B_PetrolWeapon_C.OnEquip(Copy)
// (BlueprintCallable, BlueprintEvent)

void AB_PetrolWeapon_C::OnEquip_Copy_()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_PetrolWeapon.B_PetrolWeapon_C.OnEquip(Copy)");

	AB_PetrolWeapon_C_OnEquip_Copy__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_PetrolWeapon.B_PetrolWeapon_C.OnStopWeaponFireFX
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)

void AB_PetrolWeapon_C::OnStopWeaponFireFX()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_PetrolWeapon.B_PetrolWeapon_C.OnStopWeaponFireFX");

	AB_PetrolWeapon_C_OnStopWeaponFireFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_PetrolWeapon.B_PetrolWeapon_C.OnUnEquip(Copy)
// (BlueprintCallable, BlueprintEvent)

void AB_PetrolWeapon_C::OnUnEquip_Copy_()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_PetrolWeapon.B_PetrolWeapon_C.OnUnEquip(Copy)");

	AB_PetrolWeapon_C_OnUnEquip_Copy__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_PetrolWeapon.B_PetrolWeapon_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_PetrolWeapon_C::ReceiveBeginPlay()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_PetrolWeapon.B_PetrolWeapon_C.ReceiveBeginPlay");

	AB_PetrolWeapon_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_PetrolWeapon.B_PetrolWeapon_C.HUDKeyAction_Targeting
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsTargeting                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_PetrolWeapon_C::HUDKeyAction_Targeting(bool IsTargeting)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_PetrolWeapon.B_PetrolWeapon_C.HUDKeyAction_Targeting");

	AB_PetrolWeapon_C_HUDKeyAction_Targeting_Params params;
	params.IsTargeting = IsTargeting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_PetrolWeapon.B_PetrolWeapon_C.OnHolstered
// (BlueprintCallable, BlueprintEvent)

void AB_PetrolWeapon_C::OnHolstered()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_PetrolWeapon.B_PetrolWeapon_C.OnHolstered");

	AB_PetrolWeapon_C_OnHolstered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_PetrolWeapon.B_PetrolWeapon_C.OnUnholstered
// (BlueprintCallable, BlueprintEvent)

void AB_PetrolWeapon_C::OnUnholstered()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_PetrolWeapon.B_PetrolWeapon_C.OnUnholstered");

	AB_PetrolWeapon_C_OnUnholstered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_PetrolWeapon.B_PetrolWeapon_C.BindHolsterEvents
// (BlueprintCallable, BlueprintEvent)

void AB_PetrolWeapon_C::BindHolsterEvents()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_PetrolWeapon.B_PetrolWeapon_C.BindHolsterEvents");

	AB_PetrolWeapon_C_BindHolsterEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_PetrolWeapon.B_PetrolWeapon_C.UnbindHolsterEvents
// (BlueprintCallable, BlueprintEvent)

void AB_PetrolWeapon_C::UnbindHolsterEvents()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_PetrolWeapon.B_PetrolWeapon_C.UnbindHolsterEvents");

	AB_PetrolWeapon_C_UnbindHolsterEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_PetrolWeapon.B_PetrolWeapon_C.BGADestroyedWhileHeld
// (BlueprintCallable, BlueprintEvent)

void AB_PetrolWeapon_C::BGADestroyedWhileHeld()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_PetrolWeapon.B_PetrolWeapon_C.BGADestroyedWhileHeld");

	AB_PetrolWeapon_C_BGADestroyedWhileHeld_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_PetrolWeapon.B_PetrolWeapon_C.ReplicateOnUnholstered
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void AB_PetrolWeapon_C::ReplicateOnUnholstered()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_PetrolWeapon.B_PetrolWeapon_C.ReplicateOnUnholstered");

	AB_PetrolWeapon_C_ReplicateOnUnholstered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_PetrolWeapon.B_PetrolWeapon_C.ReplicateOnHolstered
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void AB_PetrolWeapon_C::ReplicateOnHolstered()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_PetrolWeapon.B_PetrolWeapon_C.ReplicateOnHolstered");

	AB_PetrolWeapon_C_ReplicateOnHolstered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_PetrolWeapon.B_PetrolWeapon_C.ExecuteUbergraph_B_PetrolWeapon
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_PetrolWeapon_C::ExecuteUbergraph_B_PetrolWeapon(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_PetrolWeapon.B_PetrolWeapon_C.ExecuteUbergraph_B_PetrolWeapon");

	AB_PetrolWeapon_C_ExecuteUbergraph_B_PetrolWeapon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
