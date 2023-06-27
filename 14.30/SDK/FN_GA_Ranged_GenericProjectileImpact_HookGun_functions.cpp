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

// Function GA_Ranged_GenericProjectileImpact_HookGun.GA_Ranged_GenericProjectileImpact_HookGun_C.Overflow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortWorldItem*          Item_Dropped                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Ranged_GenericProjectileImpact_HookGun_C::Overflow(class UFortWorldItem* Item_Dropped)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Ranged_GenericProjectileImpact_HookGun.GA_Ranged_GenericProjectileImpact_HookGun_C.Overflow");

	UGA_Ranged_GenericProjectileImpact_HookGun_C_Overflow_Params params;
	params.Item_Dropped = Item_Dropped;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Ranged_GenericProjectileImpact_HookGun.GA_Ranged_GenericProjectileImpact_HookGun_C.K2_OnEndAbility
// (Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bWasCancelled                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Ranged_GenericProjectileImpact_HookGun_C::K2_OnEndAbility(bool bWasCancelled)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Ranged_GenericProjectileImpact_HookGun.GA_Ranged_GenericProjectileImpact_HookGun_C.K2_OnEndAbility");

	UGA_Ranged_GenericProjectileImpact_HookGun_C_K2_OnEndAbility_Params params;
	params.bWasCancelled = bWasCancelled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Ranged_GenericProjectileImpact_HookGun.GA_Ranged_GenericProjectileImpact_HookGun_C.K2_CommitExecute
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGA_Ranged_GenericProjectileImpact_HookGun_C::K2_CommitExecute()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Ranged_GenericProjectileImpact_HookGun.GA_Ranged_GenericProjectileImpact_HookGun_C.K2_CommitExecute");

	UGA_Ranged_GenericProjectileImpact_HookGun_C_K2_CommitExecute_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
