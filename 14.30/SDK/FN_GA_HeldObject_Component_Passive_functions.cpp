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

// Function GA_HeldObject_Component_Passive.GA_HeldObject_Component_Passive_C.Added_EB79E5C3467383D5FAE134978A7BDE59
// (BlueprintCallable, BlueprintEvent)

void UGA_HeldObject_Component_Passive_C::Added_EB79E5C3467383D5FAE134978A7BDE59()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_HeldObject_Component_Passive.GA_HeldObject_Component_Passive_C.Added_EB79E5C3467383D5FAE134978A7BDE59");

	UGA_HeldObject_Component_Passive_C_Added_EB79E5C3467383D5FAE134978A7BDE59_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_HeldObject_Component_Passive.GA_HeldObject_Component_Passive_C.EventReceived_DD24550D4856E973AC41D9BDAECD0498
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData      Payload                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_HeldObject_Component_Passive_C::EventReceived_DD24550D4856E973AC41D9BDAECD0498(const struct FGameplayEventData& Payload)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_HeldObject_Component_Passive.GA_HeldObject_Component_Passive_C.EventReceived_DD24550D4856E973AC41D9BDAECD0498");

	UGA_HeldObject_Component_Passive_C_EventReceived_DD24550D4856E973AC41D9BDAECD0498_Params params;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_HeldObject_Component_Passive.GA_HeldObject_Component_Passive_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bWasCancelled                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_HeldObject_Component_Passive_C::K2_OnEndAbility(bool bWasCancelled)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_HeldObject_Component_Passive.GA_HeldObject_Component_Passive_C.K2_OnEndAbility");

	UGA_HeldObject_Component_Passive_C_K2_OnEndAbility_Params params;
	params.bWasCancelled = bWasCancelled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_HeldObject_Component_Passive.GA_HeldObject_Component_Passive_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_HeldObject_Component_Passive_C::K2_ActivateAbility()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_HeldObject_Component_Passive.GA_HeldObject_Component_Passive_C.K2_ActivateAbility");

	UGA_HeldObject_Component_Passive_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_HeldObject_Component_Passive.GA_HeldObject_Component_Passive_C.DropHeldObject
// (BlueprintCallable, BlueprintEvent)

void UGA_HeldObject_Component_Passive_C::DropHeldObject()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_HeldObject_Component_Passive.GA_HeldObject_Component_Passive_C.DropHeldObject");

	UGA_HeldObject_Component_Passive_C_DropHeldObject_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_HeldObject_Component_Passive.GA_HeldObject_Component_Passive_C.ExecuteUbergraph_GA_HeldObject_Component_Passive
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_HeldObject_Component_Passive_C::ExecuteUbergraph_GA_HeldObject_Component_Passive(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_HeldObject_Component_Passive.GA_HeldObject_Component_Passive_C.ExecuteUbergraph_GA_HeldObject_Component_Passive");

	UGA_HeldObject_Component_Passive_C_ExecuteUbergraph_GA_HeldObject_Component_Passive_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
