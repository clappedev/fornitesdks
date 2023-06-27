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

// Function Trap_Floor_Player_Campfire.Trap_Floor_Player_Campfire_C.GetCampFireTrapInstigator
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* ATrap_Floor_Player_Campfire_C::GetCampFireTrapInstigator()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Trap_Floor_Player_Campfire.Trap_Floor_Player_Campfire_C.GetCampFireTrapInstigator");

	ATrap_Floor_Player_Campfire_C_GetCampFireTrapInstigator_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Trap_Floor_Player_Campfire.Trap_Floor_Player_Campfire_C.CheckIfTargetIsSquadmate
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerPawn*         Target_Player                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATrap_Floor_Player_Campfire_C::CheckIfTargetIsSquadmate(class AFortPlayerPawn* Target_Player)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Trap_Floor_Player_Campfire.Trap_Floor_Player_Campfire_C.CheckIfTargetIsSquadmate");

	ATrap_Floor_Player_Campfire_C_CheckIfTargetIsSquadmate_Params params;
	params.Target_Player = Target_Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Floor_Player_Campfire.Trap_Floor_Player_Campfire_C.InitCampfireEffects
// (Public, BlueprintCallable, BlueprintEvent)

void ATrap_Floor_Player_Campfire_C::InitCampfireEffects()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Trap_Floor_Player_Campfire.Trap_Floor_Player_Campfire_C.InitCampfireEffects");

	ATrap_Floor_Player_Campfire_C_InitCampfireEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Floor_Player_Campfire.Trap_Floor_Player_Campfire_C.HealTicks
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ATrap_Floor_Player_Campfire_C::HealTicks()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Trap_Floor_Player_Campfire.Trap_Floor_Player_Campfire_C.HealTicks");

	ATrap_Floor_Player_Campfire_C_HealTicks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Floor_Player_Campfire.Trap_Floor_Player_Campfire_C.OnRep_IsActive
// (BlueprintCallable, BlueprintEvent)

void ATrap_Floor_Player_Campfire_C::OnRep_IsActive()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Trap_Floor_Player_Campfire.Trap_Floor_Player_Campfire_C.OnRep_IsActive");

	ATrap_Floor_Player_Campfire_C_OnRep_IsActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Floor_Player_Campfire.Trap_Floor_Player_Campfire_C.FadeDoused__FinishedFunc
// (BlueprintEvent)

void ATrap_Floor_Player_Campfire_C::FadeDoused__FinishedFunc()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Trap_Floor_Player_Campfire.Trap_Floor_Player_Campfire_C.FadeDoused__FinishedFunc");

	ATrap_Floor_Player_Campfire_C_FadeDoused__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Floor_Player_Campfire.Trap_Floor_Player_Campfire_C.FadeDoused__UpdateFunc
// (BlueprintEvent)

void ATrap_Floor_Player_Campfire_C::FadeDoused__UpdateFunc()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Trap_Floor_Player_Campfire.Trap_Floor_Player_Campfire_C.FadeDoused__UpdateFunc");

	ATrap_Floor_Player_Campfire_C_FadeDoused__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Floor_Player_Campfire.Trap_Floor_Player_Campfire_C.DarkenLogs__FinishedFunc
// (BlueprintEvent)

void ATrap_Floor_Player_Campfire_C::DarkenLogs__FinishedFunc()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Trap_Floor_Player_Campfire.Trap_Floor_Player_Campfire_C.DarkenLogs__FinishedFunc");

	ATrap_Floor_Player_Campfire_C_DarkenLogs__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Floor_Player_Campfire.Trap_Floor_Player_Campfire_C.DarkenLogs__UpdateFunc
// (BlueprintEvent)

void ATrap_Floor_Player_Campfire_C::DarkenLogs__UpdateFunc()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Trap_Floor_Player_Campfire.Trap_Floor_Player_Campfire_C.DarkenLogs__UpdateFunc");

	ATrap_Floor_Player_Campfire_C_DarkenLogs__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Floor_Player_Campfire.Trap_Floor_Player_Campfire_C.OnReloadEnd
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ATrap_Floor_Player_Campfire_C::OnReloadEnd()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Trap_Floor_Player_Campfire.Trap_Floor_Player_Campfire_C.OnReloadEnd");

	ATrap_Floor_Player_Campfire_C_OnReloadEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Floor_Player_Campfire.Trap_Floor_Player_Campfire_C.OnPlaced
// (Event, Public, BlueprintEvent)

void ATrap_Floor_Player_Campfire_C::OnPlaced()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Trap_Floor_Player_Campfire.Trap_Floor_Player_Campfire_C.OnPlaced");

	ATrap_Floor_Player_Campfire_C_OnPlaced_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Floor_Player_Campfire.Trap_Floor_Player_Campfire_C.OnFinishedBuilding
// (Event, Public, BlueprintEvent)

void ATrap_Floor_Player_Campfire_C::OnFinishedBuilding()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Trap_Floor_Player_Campfire.Trap_Floor_Player_Campfire_C.OnFinishedBuilding");

	ATrap_Floor_Player_Campfire_C_OnFinishedBuilding_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Floor_Player_Campfire.Trap_Floor_Player_Campfire_C.GameplayCue.Abilities.Activation.Traps.ReloadBegin
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EGameplayCueEvent> EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (BlueprintVisible, BlueprintReadOnly, Parm)

void ATrap_Floor_Player_Campfire_C::GameplayCue_Abilities_Activation_Traps_ReloadBegin(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Trap_Floor_Player_Campfire.Trap_Floor_Player_Campfire_C.GameplayCue.Abilities.Activation.Traps.ReloadBegin");

	ATrap_Floor_Player_Campfire_C_GameplayCue_Abilities_Activation_Traps_ReloadBegin_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Floor_Player_Campfire.Trap_Floor_Player_Campfire_C.GameplayCue.Abilities.Activation.Traps.ActivateTrap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EGameplayCueEvent> EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (BlueprintVisible, BlueprintReadOnly, Parm)

void ATrap_Floor_Player_Campfire_C::GameplayCue_Abilities_Activation_Traps_ActivateTrap(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Trap_Floor_Player_Campfire.Trap_Floor_Player_Campfire_C.GameplayCue.Abilities.Activation.Traps.ActivateTrap");

	ATrap_Floor_Player_Campfire_C_GameplayCue_Abilities_Activation_Traps_ActivateTrap_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Floor_Player_Campfire.Trap_Floor_Player_Campfire_C.OnOutOfDurability
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ATrap_Floor_Player_Campfire_C::OnOutOfDurability()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Trap_Floor_Player_Campfire.Trap_Floor_Player_Campfire_C.OnOutOfDurability");

	ATrap_Floor_Player_Campfire_C_OnOutOfDurability_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Floor_Player_Campfire.Trap_Floor_Player_Campfire_C.TriggerLaunchEffects
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerPawnAthena*   Pawn                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATrap_Floor_Player_Campfire_C::TriggerLaunchEffects(class AFortPlayerPawnAthena* Pawn)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Trap_Floor_Player_Campfire.Trap_Floor_Player_Campfire_C.TriggerLaunchEffects");

	ATrap_Floor_Player_Campfire_C_TriggerLaunchEffects_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Floor_Player_Campfire.Trap_Floor_Player_Campfire_C.DousedTime
// (BlueprintCallable, BlueprintEvent)

void ATrap_Floor_Player_Campfire_C::DousedTime()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Trap_Floor_Player_Campfire.Trap_Floor_Player_Campfire_C.DousedTime");

	ATrap_Floor_Player_Campfire_C_DousedTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Floor_Player_Campfire.Trap_Floor_Player_Campfire_C.CharLogs
// (BlueprintCallable, BlueprintEvent)

void ATrap_Floor_Player_Campfire_C::CharLogs()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Trap_Floor_Player_Campfire.Trap_Floor_Player_Campfire_C.CharLogs");

	ATrap_Floor_Player_Campfire_C_CharLogs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Floor_Player_Campfire.Trap_Floor_Player_Campfire_C.OnDeathPlayEffects
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer   DamageTags                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector                 Momentum                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              HitInfo                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AFortPawn*               InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayEffectContextHandle EffectContext                  (BlueprintVisible, BlueprintReadOnly, Parm)

void ATrap_Floor_Player_Campfire_C::OnDeathPlayEffects(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Trap_Floor_Player_Campfire.Trap_Floor_Player_Campfire_C.OnDeathPlayEffects");

	ATrap_Floor_Player_Campfire_C_OnDeathPlayEffects_Params params;
	params.Damage = Damage;
	params.DamageTags = DamageTags;
	params.Momentum = Momentum;
	params.HitInfo = HitInfo;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;
	params.EffectContext = EffectContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Floor_Player_Campfire.Trap_Floor_Player_Campfire_C.OnDeathServer
// (BlueprintAuthorityOnly, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer   DamageTags                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector                 Momentum                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              HitInfo                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AController*             InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayEffectContextHandle EffectContext                  (BlueprintVisible, BlueprintReadOnly, Parm)

void ATrap_Floor_Player_Campfire_C::OnDeathServer(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Trap_Floor_Player_Campfire.Trap_Floor_Player_Campfire_C.OnDeathServer");

	ATrap_Floor_Player_Campfire_C_OnDeathServer_Params params;
	params.Damage = Damage;
	params.DamageTags = DamageTags;
	params.Momentum = Momentum;
	params.HitInfo = HitInfo;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;
	params.EffectContext = EffectContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Floor_Player_Campfire.Trap_Floor_Player_Campfire_C.ExecuteUbergraph_Trap_Floor_Player_Campfire
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATrap_Floor_Player_Campfire_C::ExecuteUbergraph_Trap_Floor_Player_Campfire(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Trap_Floor_Player_Campfire.Trap_Floor_Player_Campfire_C.ExecuteUbergraph_Trap_Floor_Player_Campfire");

	ATrap_Floor_Player_Campfire_C_ExecuteUbergraph_Trap_Floor_Player_Campfire_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
