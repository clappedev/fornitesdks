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

// Function GAB_InterrogatePlayer_Reveal.GAB_InterrogatePlayer_Reveal_C.ToggleReticleVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Hide                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGAB_InterrogatePlayer_Reveal_C::ToggleReticleVisibility(bool Hide)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GAB_InterrogatePlayer_Reveal.GAB_InterrogatePlayer_Reveal_C.ToggleReticleVisibility");

	UGAB_InterrogatePlayer_Reveal_C_ToggleReticleVisibility_Params params;
	params.Hide = Hide;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_InterrogatePlayer_Reveal.GAB_InterrogatePlayer_Reveal_C.Reveal
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGAB_InterrogatePlayer_Reveal_C::Reveal()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GAB_InterrogatePlayer_Reveal.GAB_InterrogatePlayer_Reveal_C.Reveal");

	UGAB_InterrogatePlayer_Reveal_C_Reveal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_InterrogatePlayer_Reveal.GAB_InterrogatePlayer_Reveal_C.EndAbilityCleanup
// (Public, BlueprintCallable, BlueprintEvent)

void UGAB_InterrogatePlayer_Reveal_C::EndAbilityCleanup()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GAB_InterrogatePlayer_Reveal.GAB_InterrogatePlayer_Reveal_C.EndAbilityCleanup");

	UGAB_InterrogatePlayer_Reveal_C_EndAbilityCleanup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_InterrogatePlayer_Reveal.GAB_InterrogatePlayer_Reveal_C.InitAbility
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGAB_InterrogatePlayer_Reveal_C::InitAbility()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GAB_InterrogatePlayer_Reveal.GAB_InterrogatePlayer_Reveal_C.InitAbility");

	UGAB_InterrogatePlayer_Reveal_C_InitAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_InterrogatePlayer_Reveal.GAB_InterrogatePlayer_Reveal_C.Completed_23F3C2DB411862D627ACFCA8233F7B33
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGAB_InterrogatePlayer_Reveal_C::Completed_23F3C2DB411862D627ACFCA8233F7B33(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GAB_InterrogatePlayer_Reveal.GAB_InterrogatePlayer_Reveal_C.Completed_23F3C2DB411862D627ACFCA8233F7B33");

	UGAB_InterrogatePlayer_Reveal_C_Completed_23F3C2DB411862D627ACFCA8233F7B33_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_InterrogatePlayer_Reveal.GAB_InterrogatePlayer_Reveal_C.Cancelled_23F3C2DB411862D627ACFCA8233F7B33
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGAB_InterrogatePlayer_Reveal_C::Cancelled_23F3C2DB411862D627ACFCA8233F7B33(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GAB_InterrogatePlayer_Reveal.GAB_InterrogatePlayer_Reveal_C.Cancelled_23F3C2DB411862D627ACFCA8233F7B33");

	UGAB_InterrogatePlayer_Reveal_C_Cancelled_23F3C2DB411862D627ACFCA8233F7B33_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_InterrogatePlayer_Reveal.GAB_InterrogatePlayer_Reveal_C.Triggered_23F3C2DB411862D627ACFCA8233F7B33
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGAB_InterrogatePlayer_Reveal_C::Triggered_23F3C2DB411862D627ACFCA8233F7B33(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GAB_InterrogatePlayer_Reveal.GAB_InterrogatePlayer_Reveal_C.Triggered_23F3C2DB411862D627ACFCA8233F7B33");

	UGAB_InterrogatePlayer_Reveal_C_Triggered_23F3C2DB411862D627ACFCA8233F7B33_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_InterrogatePlayer_Reveal.GAB_InterrogatePlayer_Reveal_C.Completed_3C2C8C224B62B00BDEEAF5AF38A401C1
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGAB_InterrogatePlayer_Reveal_C::Completed_3C2C8C224B62B00BDEEAF5AF38A401C1(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GAB_InterrogatePlayer_Reveal.GAB_InterrogatePlayer_Reveal_C.Completed_3C2C8C224B62B00BDEEAF5AF38A401C1");

	UGAB_InterrogatePlayer_Reveal_C_Completed_3C2C8C224B62B00BDEEAF5AF38A401C1_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_InterrogatePlayer_Reveal.GAB_InterrogatePlayer_Reveal_C.Cancelled_3C2C8C224B62B00BDEEAF5AF38A401C1
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGAB_InterrogatePlayer_Reveal_C::Cancelled_3C2C8C224B62B00BDEEAF5AF38A401C1(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GAB_InterrogatePlayer_Reveal.GAB_InterrogatePlayer_Reveal_C.Cancelled_3C2C8C224B62B00BDEEAF5AF38A401C1");

	UGAB_InterrogatePlayer_Reveal_C_Cancelled_3C2C8C224B62B00BDEEAF5AF38A401C1_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_InterrogatePlayer_Reveal.GAB_InterrogatePlayer_Reveal_C.Triggered_3C2C8C224B62B00BDEEAF5AF38A401C1
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGAB_InterrogatePlayer_Reveal_C::Triggered_3C2C8C224B62B00BDEEAF5AF38A401C1(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GAB_InterrogatePlayer_Reveal.GAB_InterrogatePlayer_Reveal_C.Triggered_3C2C8C224B62B00BDEEAF5AF38A401C1");

	UGAB_InterrogatePlayer_Reveal_C_Triggered_3C2C8C224B62B00BDEEAF5AF38A401C1_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_InterrogatePlayer_Reveal.GAB_InterrogatePlayer_Reveal_C.OnFinish_68B3C6D14B44CCD3170ABDA038C1203E
// (BlueprintCallable, BlueprintEvent)

void UGAB_InterrogatePlayer_Reveal_C::OnFinish_68B3C6D14B44CCD3170ABDA038C1203E()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GAB_InterrogatePlayer_Reveal.GAB_InterrogatePlayer_Reveal_C.OnFinish_68B3C6D14B44CCD3170ABDA038C1203E");

	UGAB_InterrogatePlayer_Reveal_C_OnFinish_68B3C6D14B44CCD3170ABDA038C1203E_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_InterrogatePlayer_Reveal.GAB_InterrogatePlayer_Reveal_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bWasCancelled                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGAB_InterrogatePlayer_Reveal_C::K2_OnEndAbility(bool bWasCancelled)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GAB_InterrogatePlayer_Reveal.GAB_InterrogatePlayer_Reveal_C.K2_OnEndAbility");

	UGAB_InterrogatePlayer_Reveal_C_K2_OnEndAbility_Params params;
	params.bWasCancelled = bWasCancelled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_InterrogatePlayer_Reveal.GAB_InterrogatePlayer_Reveal_C.OnDied_Event_2
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

void UGAB_InterrogatePlayer_Reveal_C::OnDied_Event_2(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, const struct FName& BoneName, const struct FVector& Momentum)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GAB_InterrogatePlayer_Reveal.GAB_InterrogatePlayer_Reveal_C.OnDied_Event_2");

	UGAB_InterrogatePlayer_Reveal_C_OnDied_Event_2_Params params;
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


// Function GAB_InterrogatePlayer_Reveal.GAB_InterrogatePlayer_Reveal_C.EndInterrogation
// (BlueprintCallable, BlueprintEvent)

void UGAB_InterrogatePlayer_Reveal_C::EndInterrogation()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GAB_InterrogatePlayer_Reveal.GAB_InterrogatePlayer_Reveal_C.EndInterrogation");

	UGAB_InterrogatePlayer_Reveal_C_EndInterrogation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_InterrogatePlayer_Reveal.GAB_InterrogatePlayer_Reveal_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGameplayEventData      EventData                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGAB_InterrogatePlayer_Reveal_C::K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GAB_InterrogatePlayer_Reveal.GAB_InterrogatePlayer_Reveal_C.K2_ActivateAbilityFromEvent");

	UGAB_InterrogatePlayer_Reveal_C_K2_ActivateAbilityFromEvent_Params params;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_InterrogatePlayer_Reveal.GAB_InterrogatePlayer_Reveal_C.ExecuteUbergraph_GAB_InterrogatePlayer_Reveal
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGAB_InterrogatePlayer_Reveal_C::ExecuteUbergraph_GAB_InterrogatePlayer_Reveal(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GAB_InterrogatePlayer_Reveal.GAB_InterrogatePlayer_Reveal_C.ExecuteUbergraph_GAB_InterrogatePlayer_Reveal");

	UGAB_InterrogatePlayer_Reveal_C_ExecuteUbergraph_GAB_InterrogatePlayer_Reveal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
