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

// Function GA_HeldObject_Throw_Component_TnTina.GA_HeldObject_Throw_Component_TnTina_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_HeldObject_Throw_Component_TnTina_C::K2_ActivateAbility()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_HeldObject_Throw_Component_TnTina.GA_HeldObject_Throw_Component_TnTina_C.K2_ActivateAbility");

	UGA_HeldObject_Throw_Component_TnTina_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_HeldObject_Throw_Component_TnTina.GA_HeldObject_Throw_Component_TnTina_C.ExecuteUbergraph_GA_HeldObject_Throw_Component_TnTina
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_HeldObject_Throw_Component_TnTina_C::ExecuteUbergraph_GA_HeldObject_Throw_Component_TnTina(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_HeldObject_Throw_Component_TnTina.GA_HeldObject_Throw_Component_TnTina_C.ExecuteUbergraph_GA_HeldObject_Throw_Component_TnTina");

	UGA_HeldObject_Throw_Component_TnTina_C_ExecuteUbergraph_GA_HeldObject_Throw_Component_TnTina_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
