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

// Function B_HeldObject_Generic_Component.B_HeldObject_Generic_Component_C.K2_OnUnEquip
// (Event, Public, BlueprintEvent)

void AB_HeldObject_Generic_Component_C::K2_OnUnEquip()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_HeldObject_Generic_Component.B_HeldObject_Generic_Component_C.K2_OnUnEquip");

	AB_HeldObject_Generic_Component_C_K2_OnUnEquip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_HeldObject_Generic_Component.B_HeldObject_Generic_Component_C.OnWeaponAttached
// (Event, Public, BlueprintEvent)

void AB_HeldObject_Generic_Component_C::OnWeaponAttached()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_HeldObject_Generic_Component.B_HeldObject_Generic_Component_C.OnWeaponAttached");

	AB_HeldObject_Generic_Component_C_OnWeaponAttached_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_HeldObject_Generic_Component.B_HeldObject_Generic_Component_C.ExecuteUbergraph_B_HeldObject_Generic_Component
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_HeldObject_Generic_Component_C::ExecuteUbergraph_B_HeldObject_Generic_Component(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_HeldObject_Generic_Component.B_HeldObject_Generic_Component_C.ExecuteUbergraph_B_HeldObject_Generic_Component");

	AB_HeldObject_Generic_Component_C_ExecuteUbergraph_B_HeldObject_Generic_Component_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
