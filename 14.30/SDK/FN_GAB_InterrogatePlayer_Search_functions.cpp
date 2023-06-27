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

// Function GAB_InterrogatePlayer_Search.GAB_InterrogatePlayer_Search_C.ApplyGameplayEffectToNPC
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameplayEffect*         GameplayEffect                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGAB_InterrogatePlayer_Search_C::ApplyGameplayEffectToNPC(class UGameplayEffect* GameplayEffect)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GAB_InterrogatePlayer_Search.GAB_InterrogatePlayer_Search_C.ApplyGameplayEffectToNPC");

	UGAB_InterrogatePlayer_Search_C_ApplyGameplayEffectToNPC_Params params;
	params.GameplayEffect = GameplayEffect;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_InterrogatePlayer_Search.GAB_InterrogatePlayer_Search_C.DropKeycard
// (Public, BlueprintCallable, BlueprintEvent)

void UGAB_InterrogatePlayer_Search_C::DropKeycard()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GAB_InterrogatePlayer_Search.GAB_InterrogatePlayer_Search_C.DropKeycard");

	UGAB_InterrogatePlayer_Search_C_DropKeycard_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_InterrogatePlayer_Search.GAB_InterrogatePlayer_Search_C.GetKeycardToDrop
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           HasKeycard                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UFortWorldItemDefinition* Output                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGAB_InterrogatePlayer_Search_C::GetKeycardToDrop(bool* HasKeycard, class UFortWorldItemDefinition** Output)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GAB_InterrogatePlayer_Search.GAB_InterrogatePlayer_Search_C.GetKeycardToDrop");

	UGAB_InterrogatePlayer_Search_C_GetKeycardToDrop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HasKeycard != nullptr)
		*HasKeycard = params.HasKeycard;
	if (Output != nullptr)
		*Output = params.Output;
}


// Function GAB_InterrogatePlayer_Search.GAB_InterrogatePlayer_Search_C.DropLoot
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGAB_InterrogatePlayer_Search_C::DropLoot()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GAB_InterrogatePlayer_Search.GAB_InterrogatePlayer_Search_C.DropLoot");

	UGAB_InterrogatePlayer_Search_C_DropLoot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_InterrogatePlayer_Search.GAB_InterrogatePlayer_Search_C.ToggleReticleVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Hide                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGAB_InterrogatePlayer_Search_C::ToggleReticleVisibility(bool Hide)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GAB_InterrogatePlayer_Search.GAB_InterrogatePlayer_Search_C.ToggleReticleVisibility");

	UGAB_InterrogatePlayer_Search_C_ToggleReticleVisibility_Params params;
	params.Hide = Hide;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_InterrogatePlayer_Search.GAB_InterrogatePlayer_Search_C.EndAbilityCleanup
// (Public, BlueprintCallable, BlueprintEvent)

void UGAB_InterrogatePlayer_Search_C::EndAbilityCleanup()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GAB_InterrogatePlayer_Search.GAB_InterrogatePlayer_Search_C.EndAbilityCleanup");

	UGAB_InterrogatePlayer_Search_C_EndAbilityCleanup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_InterrogatePlayer_Search.GAB_InterrogatePlayer_Search_C.InitAbility
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGAB_InterrogatePlayer_Search_C::InitAbility()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GAB_InterrogatePlayer_Search.GAB_InterrogatePlayer_Search_C.InitAbility");

	UGAB_InterrogatePlayer_Search_C_InitAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_InterrogatePlayer_Search.GAB_InterrogatePlayer_Search_C.Completed_6BBDC9B445D4280492A25E8E5EA7A53D
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGAB_InterrogatePlayer_Search_C::Completed_6BBDC9B445D4280492A25E8E5EA7A53D(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GAB_InterrogatePlayer_Search.GAB_InterrogatePlayer_Search_C.Completed_6BBDC9B445D4280492A25E8E5EA7A53D");

	UGAB_InterrogatePlayer_Search_C_Completed_6BBDC9B445D4280492A25E8E5EA7A53D_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_InterrogatePlayer_Search.GAB_InterrogatePlayer_Search_C.Cancelled_6BBDC9B445D4280492A25E8E5EA7A53D
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGAB_InterrogatePlayer_Search_C::Cancelled_6BBDC9B445D4280492A25E8E5EA7A53D(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GAB_InterrogatePlayer_Search.GAB_InterrogatePlayer_Search_C.Cancelled_6BBDC9B445D4280492A25E8E5EA7A53D");

	UGAB_InterrogatePlayer_Search_C_Cancelled_6BBDC9B445D4280492A25E8E5EA7A53D_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_InterrogatePlayer_Search.GAB_InterrogatePlayer_Search_C.Triggered_6BBDC9B445D4280492A25E8E5EA7A53D
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGAB_InterrogatePlayer_Search_C::Triggered_6BBDC9B445D4280492A25E8E5EA7A53D(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GAB_InterrogatePlayer_Search.GAB_InterrogatePlayer_Search_C.Triggered_6BBDC9B445D4280492A25E8E5EA7A53D");

	UGAB_InterrogatePlayer_Search_C_Triggered_6BBDC9B445D4280492A25E8E5EA7A53D_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_InterrogatePlayer_Search.GAB_InterrogatePlayer_Search_C.Added_9291D75D4A0949E1C5B7E49C1FD11F8B
// (BlueprintCallable, BlueprintEvent)

void UGAB_InterrogatePlayer_Search_C::Added_9291D75D4A0949E1C5B7E49C1FD11F8B()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GAB_InterrogatePlayer_Search.GAB_InterrogatePlayer_Search_C.Added_9291D75D4A0949E1C5B7E49C1FD11F8B");

	UGAB_InterrogatePlayer_Search_C_Added_9291D75D4A0949E1C5B7E49C1FD11F8B_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_InterrogatePlayer_Search.GAB_InterrogatePlayer_Search_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGAB_InterrogatePlayer_Search_C::K2_ActivateAbility()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GAB_InterrogatePlayer_Search.GAB_InterrogatePlayer_Search_C.K2_ActivateAbility");

	UGAB_InterrogatePlayer_Search_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_InterrogatePlayer_Search.GAB_InterrogatePlayer_Search_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bWasCancelled                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGAB_InterrogatePlayer_Search_C::K2_OnEndAbility(bool bWasCancelled)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GAB_InterrogatePlayer_Search.GAB_InterrogatePlayer_Search_C.K2_OnEndAbility");

	UGAB_InterrogatePlayer_Search_C_K2_OnEndAbility_Params params;
	params.bWasCancelled = bWasCancelled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_InterrogatePlayer_Search.GAB_InterrogatePlayer_Search_C.OnDied_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DamagedActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AController*             InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     FHitComponent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   BoneName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Momentum                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGAB_InterrogatePlayer_Search_C::OnDied_Event_1(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, const struct FName& BoneName, const struct FVector& Momentum)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GAB_InterrogatePlayer_Search.GAB_InterrogatePlayer_Search_C.OnDied_Event_1");

	UGAB_InterrogatePlayer_Search_C_OnDied_Event_1_Params params;
	params.DamagedActor = DamagedActor;
	params.Damage = Damage;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;
	params.HitLocation = HitLocation;
	params.FHitComponent = FHitComponent;
	params.BoneName = BoneName;
	params.Momentum = Momentum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_InterrogatePlayer_Search.GAB_InterrogatePlayer_Search_C.OnDied_Event_2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DamagedActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AController*             InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     FHitComponent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   BoneName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Momentum                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGAB_InterrogatePlayer_Search_C::OnDied_Event_2(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, const struct FName& BoneName, const struct FVector& Momentum)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GAB_InterrogatePlayer_Search.GAB_InterrogatePlayer_Search_C.OnDied_Event_2");

	UGAB_InterrogatePlayer_Search_C_OnDied_Event_2_Params params;
	params.DamagedActor = DamagedActor;
	params.Damage = Damage;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;
	params.HitLocation = HitLocation;
	params.FHitComponent = FHitComponent;
	params.BoneName = BoneName;
	params.Momentum = Momentum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_InterrogatePlayer_Search.GAB_InterrogatePlayer_Search_C.ExecuteUbergraph_GAB_InterrogatePlayer_Search
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGAB_InterrogatePlayer_Search_C::ExecuteUbergraph_GAB_InterrogatePlayer_Search(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GAB_InterrogatePlayer_Search.GAB_InterrogatePlayer_Search_C.ExecuteUbergraph_GAB_InterrogatePlayer_Search");

	UGAB_InterrogatePlayer_Search_C_ExecuteUbergraph_GAB_InterrogatePlayer_Search_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
