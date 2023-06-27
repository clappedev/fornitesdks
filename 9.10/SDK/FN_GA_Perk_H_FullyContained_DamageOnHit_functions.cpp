// Fortnite (9.1) SDK
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

// Function GA_Perk_H_FullyContained_DamageOnHit.GA_Perk_H_FullyContained_DamageOnHit_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGameplayEventData      EventData                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_Perk_H_FullyContained_DamageOnHit_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData EventData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Perk_H_FullyContained_DamageOnHit.GA_Perk_H_FullyContained_DamageOnHit_C.K2_ActivateAbilityFromEvent");

	UGA_Perk_H_FullyContained_DamageOnHit_C_K2_ActivateAbilityFromEvent_Params params;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Perk_H_FullyContained_DamageOnHit.GA_Perk_H_FullyContained_DamageOnHit_C.ExecuteUbergraph_GA_Perk_H_FullyContained_DamageOnHit
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Perk_H_FullyContained_DamageOnHit_C::ExecuteUbergraph_GA_Perk_H_FullyContained_DamageOnHit(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Perk_H_FullyContained_DamageOnHit.GA_Perk_H_FullyContained_DamageOnHit_C.ExecuteUbergraph_GA_Perk_H_FullyContained_DamageOnHit");

	UGA_Perk_H_FullyContained_DamageOnHit_C_ExecuteUbergraph_GA_Perk_H_FullyContained_DamageOnHit_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
