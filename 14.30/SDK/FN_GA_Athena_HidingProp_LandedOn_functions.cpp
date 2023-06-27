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

// Function GA_Athena_HidingProp_LandedOn.GA_Athena_HidingProp_LandedOn_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGameplayEventData      EventData                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_Athena_HidingProp_LandedOn_C::K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_HidingProp_LandedOn.GA_Athena_HidingProp_LandedOn_C.K2_ActivateAbilityFromEvent");

	UGA_Athena_HidingProp_LandedOn_C_K2_ActivateAbilityFromEvent_Params params;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_HidingProp_LandedOn.GA_Athena_HidingProp_LandedOn_C.ExecuteUbergraph_GA_Athena_HidingProp_LandedOn
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_HidingProp_LandedOn_C::ExecuteUbergraph_GA_Athena_HidingProp_LandedOn(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_HidingProp_LandedOn.GA_Athena_HidingProp_LandedOn_C.ExecuteUbergraph_GA_Athena_HidingProp_LandedOn");

	UGA_Athena_HidingProp_LandedOn_C_ExecuteUbergraph_GA_Athena_HidingProp_LandedOn_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
