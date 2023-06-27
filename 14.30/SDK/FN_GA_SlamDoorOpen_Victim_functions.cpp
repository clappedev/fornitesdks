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

// Function GA_SlamDoorOpen_Victim.GA_SlamDoorOpen_Victim_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGameplayEventData      EventData                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_SlamDoorOpen_Victim_C::K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_SlamDoorOpen_Victim.GA_SlamDoorOpen_Victim_C.K2_ActivateAbilityFromEvent");

	UGA_SlamDoorOpen_Victim_C_K2_ActivateAbilityFromEvent_Params params;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_SlamDoorOpen_Victim.GA_SlamDoorOpen_Victim_C.ExecuteUbergraph_GA_SlamDoorOpen_Victim
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_SlamDoorOpen_Victim_C::ExecuteUbergraph_GA_SlamDoorOpen_Victim(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_SlamDoorOpen_Victim.GA_SlamDoorOpen_Victim_C.ExecuteUbergraph_GA_SlamDoorOpen_Victim");

	UGA_SlamDoorOpen_Victim_C_ExecuteUbergraph_GA_SlamDoorOpen_Victim_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
