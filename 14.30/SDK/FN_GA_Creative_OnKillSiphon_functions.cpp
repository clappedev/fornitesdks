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

// Function GA_Creative_OnKillSiphon.GA_Creative_OnKillSiphon_C.GiveResourcesToPlayer
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bShouldGrant                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            GiveAmount                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EFortResourceType> GiveType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGA_Creative_OnKillSiphon_C::GiveResourcesToPlayer(bool bShouldGrant, int GiveAmount, TEnumAsByte<EFortResourceType> GiveType, bool* Success)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Creative_OnKillSiphon.GA_Creative_OnKillSiphon_C.GiveResourcesToPlayer");

	UGA_Creative_OnKillSiphon_C_GiveResourcesToPlayer_Params params;
	params.bShouldGrant = bShouldGrant;
	params.GiveAmount = GiveAmount;
	params.GiveType = GiveType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function GA_Creative_OnKillSiphon.GA_Creative_OnKillSiphon_C.CalculateResources
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EFortResourceType> ResourceGrantType              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            ResourceToGive                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EFortResourceType> ResourceType                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGA_Creative_OnKillSiphon_C::CalculateResources(TEnumAsByte<EFortResourceType> ResourceGrantType, bool* bSuccess, int* ResourceToGive, TEnumAsByte<EFortResourceType>* ResourceType)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Creative_OnKillSiphon.GA_Creative_OnKillSiphon_C.CalculateResources");

	UGA_Creative_OnKillSiphon_C_CalculateResources_Params params;
	params.ResourceGrantType = ResourceGrantType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
	if (ResourceToGive != nullptr)
		*ResourceToGive = params.ResourceToGive;
	if (ResourceType != nullptr)
		*ResourceType = params.ResourceType;
}


// Function GA_Creative_OnKillSiphon.GA_Creative_OnKillSiphon_C.AttemptMats
// (Public, BlueprintCallable, BlueprintEvent)

void UGA_Creative_OnKillSiphon_C::AttemptMats()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Creative_OnKillSiphon.GA_Creative_OnKillSiphon_C.AttemptMats");

	UGA_Creative_OnKillSiphon_C_AttemptMats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Creative_OnKillSiphon.GA_Creative_OnKillSiphon_C.AttemptHeal
// (Public, BlueprintCallable, BlueprintEvent)

void UGA_Creative_OnKillSiphon_C::AttemptHeal()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Creative_OnKillSiphon.GA_Creative_OnKillSiphon_C.AttemptHeal");

	UGA_Creative_OnKillSiphon_C_AttemptHeal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Creative_OnKillSiphon.GA_Creative_OnKillSiphon_C.SetupRestoreModes
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ShouldContinue                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGA_Creative_OnKillSiphon_C::SetupRestoreModes(bool* ShouldContinue)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Creative_OnKillSiphon.GA_Creative_OnKillSiphon_C.SetupRestoreModes");

	UGA_Creative_OnKillSiphon_C_SetupRestoreModes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ShouldContinue != nullptr)
		*ShouldContinue = params.ShouldContinue;
}


// Function GA_Creative_OnKillSiphon.GA_Creative_OnKillSiphon_C.DetermineHealthDelta
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          HealingAmount                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          MaxHealth                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          CurrentHealth                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          HealthDelta                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          ExcessHealh                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGA_Creative_OnKillSiphon_C::DetermineHealthDelta(float HealingAmount, float* MaxHealth, float* CurrentHealth, float* HealthDelta, float* ExcessHealh)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Creative_OnKillSiphon.GA_Creative_OnKillSiphon_C.DetermineHealthDelta");

	UGA_Creative_OnKillSiphon_C_DetermineHealthDelta_Params params;
	params.HealingAmount = HealingAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MaxHealth != nullptr)
		*MaxHealth = params.MaxHealth;
	if (CurrentHealth != nullptr)
		*CurrentHealth = params.CurrentHealth;
	if (HealthDelta != nullptr)
		*HealthDelta = params.HealthDelta;
	if (ExcessHealh != nullptr)
		*ExcessHealh = params.ExcessHealh;
}


// Function GA_Creative_OnKillSiphon.GA_Creative_OnKillSiphon_C.AddShields
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bShouldConvertExcessHealthToShields (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ShieldToAdd                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAddedShields                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          ShieldAdded                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGA_Creative_OnKillSiphon_C::AddShields(bool bShouldConvertExcessHealthToShields, float ShieldToAdd, bool* bAddedShields, float* ShieldAdded)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Creative_OnKillSiphon.GA_Creative_OnKillSiphon_C.AddShields");

	UGA_Creative_OnKillSiphon_C_AddShields_Params params;
	params.bShouldConvertExcessHealthToShields = bShouldConvertExcessHealthToShields;
	params.ShieldToAdd = ShieldToAdd;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bAddedShields != nullptr)
		*bAddedShields = params.bAddedShields;
	if (ShieldAdded != nullptr)
		*ShieldAdded = params.ShieldAdded;
}


// Function GA_Creative_OnKillSiphon.GA_Creative_OnKillSiphon_C.RestoreHealth
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          InitialHealAmount              (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          ActualAppliedHeal              (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          ExcessHealing                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGA_Creative_OnKillSiphon_C::RestoreHealth(bool* Success, float* InitialHealAmount, float* ActualAppliedHeal, float* ExcessHealing)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Creative_OnKillSiphon.GA_Creative_OnKillSiphon_C.RestoreHealth");

	UGA_Creative_OnKillSiphon_C_RestoreHealth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (InitialHealAmount != nullptr)
		*InitialHealAmount = params.InitialHealAmount;
	if (ActualAppliedHeal != nullptr)
		*ActualAppliedHeal = params.ActualAppliedHeal;
	if (ExcessHealing != nullptr)
		*ExcessHealing = params.ExcessHealing;
}


// Function GA_Creative_OnKillSiphon.GA_Creative_OnKillSiphon_C.K2_ShouldAbilityRespondToEvent
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FGameplayAbilityActorInfo ActorInfo                      (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FGameplayEventData      Payload                        (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGA_Creative_OnKillSiphon_C::K2_ShouldAbilityRespondToEvent(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayEventData& Payload)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Creative_OnKillSiphon.GA_Creative_OnKillSiphon_C.K2_ShouldAbilityRespondToEvent");

	UGA_Creative_OnKillSiphon_C_K2_ShouldAbilityRespondToEvent_Params params;
	params.ActorInfo = ActorInfo;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GA_Creative_OnKillSiphon.GA_Creative_OnKillSiphon_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGameplayEventData      EventData                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_Creative_OnKillSiphon_C::K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Creative_OnKillSiphon.GA_Creative_OnKillSiphon_C.K2_ActivateAbilityFromEvent");

	UGA_Creative_OnKillSiphon_C_K2_ActivateAbilityFromEvent_Params params;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Creative_OnKillSiphon.GA_Creative_OnKillSiphon_C.ExecuteUbergraph_GA_Creative_OnKillSiphon
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Creative_OnKillSiphon_C::ExecuteUbergraph_GA_Creative_OnKillSiphon(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Creative_OnKillSiphon.GA_Creative_OnKillSiphon_C.ExecuteUbergraph_GA_Creative_OnKillSiphon");

	UGA_Creative_OnKillSiphon_C_ExecuteUbergraph_GA_Creative_OnKillSiphon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
