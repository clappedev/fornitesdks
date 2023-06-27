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

// Function GA_LowGravity_Jump_UsingJump.GA_LowGravity_Jump_UsingJump_C.SetVariablesFromRows
// (Public, BlueprintCallable, BlueprintEvent)

void UGA_LowGravity_Jump_UsingJump_C::SetVariablesFromRows()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_LowGravity_Jump_UsingJump.GA_LowGravity_Jump_UsingJump_C.SetVariablesFromRows");

	UGA_LowGravity_Jump_UsingJump_C_SetVariablesFromRows_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_LowGravity_Jump_UsingJump.GA_LowGravity_Jump_UsingJump_C.K2_ShouldAbilityRespondToEvent
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FGameplayAbilityActorInfo ActorInfo                      (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FGameplayEventData      Payload                        (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGA_LowGravity_Jump_UsingJump_C::K2_ShouldAbilityRespondToEvent(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayEventData& Payload)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_LowGravity_Jump_UsingJump.GA_LowGravity_Jump_UsingJump_C.K2_ShouldAbilityRespondToEvent");

	UGA_LowGravity_Jump_UsingJump_C_K2_ShouldAbilityRespondToEvent_Params params;
	params.ActorInfo = ActorInfo;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GA_LowGravity_Jump_UsingJump.GA_LowGravity_Jump_UsingJump_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGameplayEventData      EventData                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_LowGravity_Jump_UsingJump_C::K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_LowGravity_Jump_UsingJump.GA_LowGravity_Jump_UsingJump_C.K2_ActivateAbilityFromEvent");

	UGA_LowGravity_Jump_UsingJump_C_K2_ActivateAbilityFromEvent_Params params;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_LowGravity_Jump_UsingJump.GA_LowGravity_Jump_UsingJump_C.ExecuteUbergraph_GA_LowGravity_Jump_UsingJump
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_LowGravity_Jump_UsingJump_C::ExecuteUbergraph_GA_LowGravity_Jump_UsingJump(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_LowGravity_Jump_UsingJump.GA_LowGravity_Jump_UsingJump_C.ExecuteUbergraph_GA_LowGravity_Jump_UsingJump");

	UGA_LowGravity_Jump_UsingJump_C_ExecuteUbergraph_GA_LowGravity_Jump_UsingJump_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
