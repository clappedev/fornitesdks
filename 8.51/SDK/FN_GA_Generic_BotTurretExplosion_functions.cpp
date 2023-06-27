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

// Function GA_Generic_BotTurretExplosion.GA_Generic_BotTurretExplosion_C.Cancelled
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Generic_BotTurretExplosion_C::Cancelled(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Generic_BotTurretExplosion.GA_Generic_BotTurretExplosion_C.Cancelled");

	UGA_Generic_BotTurretExplosion_C_Cancelled_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Generic_BotTurretExplosion.GA_Generic_BotTurretExplosion_C.Targeted
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Generic_BotTurretExplosion_C::Targeted(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Generic_BotTurretExplosion.GA_Generic_BotTurretExplosion_C.Targeted");

	UGA_Generic_BotTurretExplosion_C_Targeted_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Generic_BotTurretExplosion.GA_Generic_BotTurretExplosion_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGameplayEventData      EventData                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_Generic_BotTurretExplosion_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData EventData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Generic_BotTurretExplosion.GA_Generic_BotTurretExplosion_C.K2_ActivateAbilityFromEvent");

	UGA_Generic_BotTurretExplosion_C_K2_ActivateAbilityFromEvent_Params params;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Generic_BotTurretExplosion.GA_Generic_BotTurretExplosion_C.ExecuteUbergraph_GA_Generic_BotTurretExplosion
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Generic_BotTurretExplosion_C::ExecuteUbergraph_GA_Generic_BotTurretExplosion(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Generic_BotTurretExplosion.GA_Generic_BotTurretExplosion_C.ExecuteUbergraph_GA_Generic_BotTurretExplosion");

	UGA_Generic_BotTurretExplosion_C_ExecuteUbergraph_GA_Generic_BotTurretExplosion_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
