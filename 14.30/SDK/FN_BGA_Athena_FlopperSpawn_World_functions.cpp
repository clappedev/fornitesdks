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

// Function BGA_Athena_FlopperSpawn_World.BGA_Athena_FlopperSpawn_World_C.GetLootTier
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsExplosion                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsProFishingRod                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Output_Get                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABGA_Athena_FlopperSpawn_World_C::GetLootTier(bool IsExplosion, bool IsProFishingRod, struct FName* Output_Get)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_FlopperSpawn_World.BGA_Athena_FlopperSpawn_World_C.GetLootTier");

	ABGA_Athena_FlopperSpawn_World_C_GetLootTier_Params params;
	params.IsExplosion = IsExplosion;
	params.IsProFishingRod = IsProFishingRod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Output_Get != nullptr)
		*Output_Get = params.Output_Get;
}


// Function BGA_Athena_FlopperSpawn_World.BGA_Athena_FlopperSpawn_World_C.ExplosionQuestProgress
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Instigator                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABGA_Athena_FlopperSpawn_World_C::ExplosionQuestProgress(class AActor* Instigator, class AActor* DamageCauser)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_FlopperSpawn_World.BGA_Athena_FlopperSpawn_World_C.ExplosionQuestProgress");

	ABGA_Athena_FlopperSpawn_World_C_ExplosionQuestProgress_Params params;
	params.Instigator = Instigator;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Athena_FlopperSpawn_World.BGA_Athena_FlopperSpawn_World_C.OnRep_FortWaterBody
// (HasDefaults, BlueprintCallable, BlueprintEvent)

void ABGA_Athena_FlopperSpawn_World_C::OnRep_FortWaterBody()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_FlopperSpawn_World.BGA_Athena_FlopperSpawn_World_C.OnRep_FortWaterBody");

	ABGA_Athena_FlopperSpawn_World_C_OnRep_FortWaterBody_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Athena_FlopperSpawn_World.BGA_Athena_FlopperSpawn_World_C.RandomTimeInterval
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABGA_Athena_FlopperSpawn_World_C::RandomTimeInterval()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_FlopperSpawn_World.BGA_Athena_FlopperSpawn_World_C.RandomTimeInterval");

	ABGA_Athena_FlopperSpawn_World_C_RandomTimeInterval_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BGA_Athena_FlopperSpawn_World.BGA_Athena_FlopperSpawn_World_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABGA_Athena_FlopperSpawn_World_C::ReceiveBeginPlay()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_FlopperSpawn_World.BGA_Athena_FlopperSpawn_World_C.ReceiveBeginPlay");

	ABGA_Athena_FlopperSpawn_World_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Athena_FlopperSpawn_World.BGA_Athena_FlopperSpawn_World_C.OnDeathPlayEffects
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer   DamageTags                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector                 Momentum                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              HitInfo                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AFortPawn*               InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayEffectContextHandle EffectContext                  (BlueprintVisible, BlueprintReadOnly, Parm)

void ABGA_Athena_FlopperSpawn_World_C::OnDeathPlayEffects(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_FlopperSpawn_World.BGA_Athena_FlopperSpawn_World_C.OnDeathPlayEffects");

	ABGA_Athena_FlopperSpawn_World_C_OnDeathPlayEffects_Params params;
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


// Function BGA_Athena_FlopperSpawn_World.BGA_Athena_FlopperSpawn_World_C.SpawnJumpingFish
// (BlueprintCallable, BlueprintEvent)

void ABGA_Athena_FlopperSpawn_World_C::SpawnJumpingFish()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_FlopperSpawn_World.BGA_Athena_FlopperSpawn_World_C.SpawnJumpingFish");

	ABGA_Athena_FlopperSpawn_World_C_SpawnJumpingFish_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Athena_FlopperSpawn_World.BGA_Athena_FlopperSpawn_World_C.OnDamageServer
// (BlueprintAuthorityOnly, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer   DamageTags                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector                 Momentum                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              HitInfo                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AController*             InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayEffectContextHandle EffectContext                  (BlueprintVisible, BlueprintReadOnly, Parm)

void ABGA_Athena_FlopperSpawn_World_C::OnDamageServer(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_FlopperSpawn_World.BGA_Athena_FlopperSpawn_World_C.OnDamageServer");

	ABGA_Athena_FlopperSpawn_World_C_OnDamageServer_Params params;
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


// Function BGA_Athena_FlopperSpawn_World.BGA_Athena_FlopperSpawn_World_C.SpawnFromExplosion
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Instigator                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABGA_Athena_FlopperSpawn_World_C::SpawnFromExplosion(class AActor* Instigator, class AActor* DamageCauser)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_FlopperSpawn_World.BGA_Athena_FlopperSpawn_World_C.SpawnFromExplosion");

	ABGA_Athena_FlopperSpawn_World_C_SpawnFromExplosion_Params params;
	params.Instigator = Instigator;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Athena_FlopperSpawn_World.BGA_Athena_FlopperSpawn_World_C.ExecuteUbergraph_BGA_Athena_FlopperSpawn_World
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABGA_Athena_FlopperSpawn_World_C::ExecuteUbergraph_BGA_Athena_FlopperSpawn_World(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_FlopperSpawn_World.BGA_Athena_FlopperSpawn_World_C.ExecuteUbergraph_BGA_Athena_FlopperSpawn_World");

	ABGA_Athena_FlopperSpawn_World_C_ExecuteUbergraph_BGA_Athena_FlopperSpawn_World_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
