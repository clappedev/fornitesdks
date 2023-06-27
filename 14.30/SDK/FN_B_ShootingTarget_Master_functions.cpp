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

// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.GetMeshComponents
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<class UMeshComponent*>  ReturnValue                    (Parm, OutParm, ReturnParm)

TArray<class UMeshComponent*> AB_ShootingTarget_Master_C::GetMeshComponents()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.GetMeshComponents");

	AB_ShootingTarget_Master_C_GetMeshComponents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.GetCollisionStaticMesh
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UStaticMesh*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UStaticMesh* AB_ShootingTarget_Master_C::GetCollisionStaticMesh()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.GetCollisionStaticMesh");

	AB_ShootingTarget_Master_C_GetCollisionStaticMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.OnRep_TargetMeshSetting
// (BlueprintCallable, BlueprintEvent)

void AB_ShootingTarget_Master_C::OnRep_TargetMeshSetting()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.OnRep_TargetMeshSetting");

	AB_ShootingTarget_Master_C_OnRep_TargetMeshSetting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.RestoreToMaxHealth
// (Public, BlueprintCallable, BlueprintEvent)

void AB_ShootingTarget_Master_C::RestoreToMaxHealth()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.RestoreToMaxHealth");

	AB_ShootingTarget_Master_C_RestoreToMaxHealth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.WeakPointArrayContainsItems
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ArrayContainsItems             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AB_ShootingTarget_Master_C::WeakPointArrayContainsItems(bool* ArrayContainsItems)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.WeakPointArrayContainsItems");

	AB_ShootingTarget_Master_C_WeakPointArrayContainsItems_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ArrayContainsItems != nullptr)
		*ArrayContainsItems = params.ArrayContainsItems;
}


// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.GetWeaponDataFromDamageCauser
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UFortWeaponItemDefinition* OutWeaponData                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AB_ShootingTarget_Master_C::GetWeaponDataFromDamageCauser(class UObject* DamageCauser, class UFortWeaponItemDefinition** OutWeaponData)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.GetWeaponDataFromDamageCauser");

	AB_ShootingTarget_Master_C_GetWeaponDataFromDamageCauser_Params params;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutWeaponData != nullptr)
		*OutWeaponData = params.OutWeaponData;
}


// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.CalculateDamageFromWeaponData
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortWeaponItemDefinition* WeaponData                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          InDamage                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          OutDamage                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AB_ShootingTarget_Master_C::CalculateDamageFromWeaponData(class UFortWeaponItemDefinition* WeaponData, float InDamage, float* OutDamage)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.CalculateDamageFromWeaponData");

	AB_ShootingTarget_Master_C_CalculateDamageFromWeaponData_Params params;
	params.WeaponData = WeaponData;
	params.InDamage = InDamage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutDamage != nullptr)
		*OutDamage = params.OutDamage;
}


// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.IsWithinWeakpointBounds
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Impact_Location                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USceneComponent*         Component                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AB_ShootingTarget_Master_C::IsWithinWeakpointBounds(const struct FVector& Impact_Location, class USceneComponent* Component)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.IsWithinWeakpointBounds");

	AB_ShootingTarget_Master_C_IsWithinWeakpointBounds_Params params;
	params.Impact_Location = Impact_Location;
	params.Component = Component;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.UpdateHealthBarVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ShouldShowBar                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_ShootingTarget_Master_C::UpdateHealthBarVisibility(bool ShouldShowBar)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.UpdateHealthBarVisibility");

	AB_ShootingTarget_Master_C_UpdateHealthBarVisibility_Params params;
	params.ShouldShowBar = ShouldShowBar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.BlueprintModifyIncomingDamage
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer   InTags                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayEffectContextHandle EffectContext                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class AController*             EventInstigator                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AB_ShootingTarget_Master_C::BlueprintModifyIncomingDamage(float Damage, const struct FGameplayTagContainer& InTags, const struct FGameplayEffectContextHandle& EffectContext, class AController* EventInstigator, class AActor* DamageCauser)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.BlueprintModifyIncomingDamage");

	AB_ShootingTarget_Master_C_BlueprintModifyIncomingDamage_Params params;
	params.Damage = Damage;
	params.InTags = InTags;
	params.EffectContext = EffectContext;
	params.EventInstigator = EventInstigator;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.SetAimAssistEnabled
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NewType                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_ShootingTarget_Master_C::SetAimAssistEnabled(bool NewType)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.SetAimAssistEnabled");

	AB_ShootingTarget_Master_C_SetAimAssistEnabled_Params params;
	params.NewType = NewType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.CreateWeakPointArray
// (Public, BlueprintCallable, BlueprintEvent)

void AB_ShootingTarget_Master_C::CreateWeakPointArray()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.CreateWeakPointArray");

	AB_ShootingTarget_Master_C_CreateWeakPointArray_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.CheckIfShouldHop
// (Public, BlueprintCallable, BlueprintEvent)

void AB_ShootingTarget_Master_C::CheckIfShouldHop()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.CheckIfShouldHop");

	AB_ShootingTarget_Master_C_CheckIfShouldHop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.SetBunnyHopTimer
// (Public, BlueprintCallable, BlueprintEvent)

void AB_ShootingTarget_Master_C::SetBunnyHopTimer()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.SetBunnyHopTimer");

	AB_ShootingTarget_Master_C_SetBunnyHopTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.ClearBunnyHopTimer
// (Public, BlueprintCallable, BlueprintEvent)

void AB_ShootingTarget_Master_C::ClearBunnyHopTimer()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.ClearBunnyHopTimer");

	AB_ShootingTarget_Master_C_ClearBunnyHopTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.InitializeHideTargetTimer
// (Public, BlueprintCallable, BlueprintEvent)

void AB_ShootingTarget_Master_C::InitializeHideTargetTimer()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.InitializeHideTargetTimer");

	AB_ShootingTarget_Master_C_InitializeHideTargetTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.HideTarget
// (Public, BlueprintCallable, BlueprintEvent)

void AB_ShootingTarget_Master_C::HideTarget()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.HideTarget");

	AB_ShootingTarget_Master_C_HideTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.SetMaxHealth
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NewMaxHealth                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_ShootingTarget_Master_C::SetMaxHealth(float NewMaxHealth)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.SetMaxHealth");

	AB_ShootingTarget_Master_C_SetMaxHealth_Params params;
	params.NewMaxHealth = NewMaxHealth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.TargetShouldFall
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AB_ShootingTarget_Master_C::TargetShouldFall()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.TargetShouldFall");

	AB_ShootingTarget_Master_C_TargetShouldFall_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.SetStartingPosition
// (Public, BlueprintCallable, BlueprintEvent)

void AB_ShootingTarget_Master_C::SetStartingPosition()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.SetStartingPosition");

	AB_ShootingTarget_Master_C_SetStartingPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.MinigameIsRunning
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           MinigameIsRunning              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AB_ShootingTarget_Master_C::MinigameIsRunning(bool* MinigameIsRunning)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.MinigameIsRunning");

	AB_ShootingTarget_Master_C_MinigameIsRunning_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MinigameIsRunning != nullptr)
		*MinigameIsRunning = params.MinigameIsRunning;
}


// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.ShouldTriggerTarget
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Overlapping_Actor              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     Overlapping_Component          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AB_ShootingTarget_Master_C::ShouldTriggerTarget(class UObject* Overlapping_Actor, class UPrimitiveComponent* Overlapping_Component, bool* Result)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.ShouldTriggerTarget");

	AB_ShootingTarget_Master_C_ShouldTriggerTarget_Params params;
	params.Overlapping_Actor = Overlapping_Actor;
	params.Overlapping_Component = Overlapping_Component;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.AwardScore
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerController*   FortPlayerController           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ScoreAwarded                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            TeamAwardedPoints              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AB_ShootingTarget_Master_C::AwardScore(class AFortPlayerController* FortPlayerController, int* ScoreAwarded, int* TeamAwardedPoints)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.AwardScore");

	AB_ShootingTarget_Master_C_AwardScore_Params params;
	params.FortPlayerController = FortPlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ScoreAwarded != nullptr)
		*ScoreAwarded = params.ScoreAwarded;
	if (TeamAwardedPoints != nullptr)
		*TeamAwardedPoints = params.TeamAwardedPoints;
}


// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.CalculateScore
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ScoreToAward                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AB_ShootingTarget_Master_C::CalculateScore(int* ScoreToAward)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.CalculateScore");

	AB_ShootingTarget_Master_C_CalculateScore_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ScoreToAward != nullptr)
		*ScoreToAward = params.ScoreToAward;
}


// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.PrepareChosenTarget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStaticMeshComponent*    StaticMeshComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UPrimitiveComponent*     WeakPointComponent_1           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UPrimitiveComponent*     WeakPointComponent2            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AB_ShootingTarget_Master_C::PrepareChosenTarget(class UStaticMeshComponent* StaticMeshComponent, class UPrimitiveComponent* WeakPointComponent_1, class UPrimitiveComponent* WeakPointComponent2)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.PrepareChosenTarget");

	AB_ShootingTarget_Master_C_PrepareChosenTarget_Params params;
	params.StaticMeshComponent = StaticMeshComponent;
	params.WeakPointComponent_1 = WeakPointComponent_1;
	params.WeakPointComponent2 = WeakPointComponent2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.WeakPointWasHit
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult              Hit_Result                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class UPrimitiveComponent*     HitComponent                   (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AB_ShootingTarget_Master_C::WeakPointWasHit(const struct FHitResult& Hit_Result, class UPrimitiveComponent** HitComponent)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.WeakPointWasHit");

	AB_ShootingTarget_Master_C_WeakPointWasHit_Params params;
	params.Hit_Result = Hit_Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HitComponent != nullptr)
		*HitComponent = params.HitComponent;

	return params.ReturnValue;
}


// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.ResetWeakPoints
// (Public, BlueprintCallable, BlueprintEvent)

void AB_ShootingTarget_Master_C::ResetWeakPoints()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.ResetWeakPoints");

	AB_ShootingTarget_Master_C_ResetWeakPoints_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.CanPopUp
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           MinigameJustStartedOrStopped   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CanPopUp                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AB_ShootingTarget_Master_C::CanPopUp(bool MinigameJustStartedOrStopped, bool* CanPopUp)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.CanPopUp");

	AB_ShootingTarget_Master_C_CanPopUp_Params params;
	params.MinigameJustStartedOrStopped = MinigameJustStartedOrStopped;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanPopUp != nullptr)
		*CanPopUp = params.CanPopUp;
}


// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.PopUpTimeline__FinishedFunc
// (BlueprintEvent)

void AB_ShootingTarget_Master_C::PopUpTimeline__FinishedFunc()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.PopUpTimeline__FinishedFunc");

	AB_ShootingTarget_Master_C_PopUpTimeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.PopUpTimeline__UpdateFunc
// (BlueprintEvent)

void AB_ShootingTarget_Master_C::PopUpTimeline__UpdateFunc()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.PopUpTimeline__UpdateFunc");

	AB_ShootingTarget_Master_C_PopUpTimeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.KnockDownTimeline__FinishedFunc
// (BlueprintEvent)

void AB_ShootingTarget_Master_C::KnockDownTimeline__FinishedFunc()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.KnockDownTimeline__FinishedFunc");

	AB_ShootingTarget_Master_C_KnockDownTimeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.KnockDownTimeline__UpdateFunc
// (BlueprintEvent)

void AB_ShootingTarget_Master_C::KnockDownTimeline__UpdateFunc()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.KnockDownTimeline__UpdateFunc");

	AB_ShootingTarget_Master_C_KnockDownTimeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.Timeline_2__FinishedFunc
// (BlueprintEvent)

void AB_ShootingTarget_Master_C::Timeline_2__FinishedFunc()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.Timeline_2__FinishedFunc");

	AB_ShootingTarget_Master_C_Timeline_2__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.Timeline_2__UpdateFunc
// (BlueprintEvent)

void AB_ShootingTarget_Master_C::Timeline_2__UpdateFunc()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.Timeline_2__UpdateFunc");

	AB_ShootingTarget_Master_C_Timeline_2__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.OnReady_A57ED5A14BEB6A98DB20D88D1582D58A
// (BlueprintCallable, BlueprintEvent)

void AB_ShootingTarget_Master_C::OnReady_A57ED5A14BEB6A98DB20D88D1582D58A()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.OnReady_A57ED5A14BEB6A98DB20D88D1582D58A");

	AB_ShootingTarget_Master_C_OnReady_A57ED5A14BEB6A98DB20D88D1582D58A_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.OnLoaded_068F5161459B8B1AEAD4A0B19781287D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_ShootingTarget_Master_C::OnLoaded_068F5161459B8B1AEAD4A0B19781287D(class UObject* Loaded)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.OnLoaded_068F5161459B8B1AEAD4A0B19781287D");

	AB_ShootingTarget_Master_C_OnLoaded_068F5161459B8B1AEAD4A0B19781287D_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.BndEvt__FortMinigameProgress_K2Node_ComponentBoundEvent_0_SimpleDynamicMulticastDelegate__DelegateSignature
// (BlueprintEvent)

void AB_ShootingTarget_Master_C::BndEvt__FortMinigameProgress_K2Node_ComponentBoundEvent_0_SimpleDynamicMulticastDelegate__DelegateSignature()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.BndEvt__FortMinigameProgress_K2Node_ComponentBoundEvent_0_SimpleDynamicMulticastDelegate__DelegateSignature");

	AB_ShootingTarget_Master_C_BndEvt__FortMinigameProgress_K2Node_ComponentBoundEvent_0_SimpleDynamicMulticastDelegate__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_1_AnyPropertyChangedDelegate__DelegateSignature
// (BlueprintEvent)

void AB_ShootingTarget_Master_C::BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_1_AnyPropertyChangedDelegate__DelegateSignature()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_1_AnyPropertyChangedDelegate__DelegateSignature");

	AB_ShootingTarget_Master_C_BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_1_AnyPropertyChangedDelegate__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.PopUpTarget
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           MinigameJustStartedOrStopped   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_ShootingTarget_Master_C::PopUpTarget(bool MinigameJustStartedOrStopped)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.PopUpTarget");

	AB_ShootingTarget_Master_C_PopUpTarget_Params params;
	params.MinigameJustStartedOrStopped = MinigameJustStartedOrStopped;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_2_AnyPropertyChangedDelegate__DelegateSignature
// (BlueprintEvent)

void AB_ShootingTarget_Master_C::BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_2_AnyPropertyChangedDelegate__DelegateSignature()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_2_AnyPropertyChangedDelegate__DelegateSignature");

	AB_ShootingTarget_Master_C_BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_2_AnyPropertyChangedDelegate__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.BndEvt__ProximityTrigger_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AB_ShootingTarget_Master_C::BndEvt__ProximityTrigger_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.BndEvt__ProximityTrigger_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature");

	AB_ShootingTarget_Master_C_BndEvt__ProximityTrigger_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.KnockdownTarget
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void AB_ShootingTarget_Master_C::KnockdownTarget()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.KnockdownTarget");

	AB_ShootingTarget_Master_C_KnockdownTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.OnDamageServer
// (BlueprintAuthorityOnly, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer   DamageTags                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector                 Momentum                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              HitInfo                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AController*             InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayEffectContextHandle EffectContext                  (BlueprintVisible, BlueprintReadOnly, Parm)

void AB_ShootingTarget_Master_C::OnDamageServer(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.OnDamageServer");

	AB_ShootingTarget_Master_C_OnDamageServer_Params params;
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


// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_ShootingTarget_Master_C::ReceiveBeginPlay()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.ReceiveBeginPlay");

	AB_ShootingTarget_Master_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.BndEvt__FortMinigameProgress_K2Node_ComponentBoundEvent_4_SimpleDynamicMulticastDelegate__DelegateSignature
// (BlueprintEvent)

void AB_ShootingTarget_Master_C::BndEvt__FortMinigameProgress_K2Node_ComponentBoundEvent_4_SimpleDynamicMulticastDelegate__DelegateSignature()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.BndEvt__FortMinigameProgress_K2Node_ComponentBoundEvent_4_SimpleDynamicMulticastDelegate__DelegateSignature");

	AB_ShootingTarget_Master_C_BndEvt__FortMinigameProgress_K2Node_ComponentBoundEvent_4_SimpleDynamicMulticastDelegate__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.PickMeshFromSettings
// (BlueprintCallable, BlueprintEvent)

void AB_ShootingTarget_Master_C::PickMeshFromSettings()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.PickMeshFromSettings");

	AB_ShootingTarget_Master_C_PickMeshFromSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.InitializeSettings
// (BlueprintCallable, BlueprintEvent)

void AB_ShootingTarget_Master_C::InitializeSettings()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.InitializeSettings");

	AB_ShootingTarget_Master_C_InitializeSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.ResetFromSettings
// (BlueprintCallable, BlueprintEvent)

void AB_ShootingTarget_Master_C::ResetFromSettings()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.ResetFromSettings");

	AB_ShootingTarget_Master_C_ResetFromSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.HideTargetTimerEvent
// (BlueprintCallable, BlueprintEvent)

void AB_ShootingTarget_Master_C::HideTargetTimerEvent()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.HideTargetTimerEvent");

	AB_ShootingTarget_Master_C_HideTargetTimerEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.SetHideTargetTimer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          TimerDuration                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_ShootingTarget_Master_C::SetHideTargetTimer(float TimerDuration)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.SetHideTargetTimer");

	AB_ShootingTarget_Master_C_SetHideTargetTimer_Params params;
	params.TimerDuration = TimerDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.Hop
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InJumpUpPosition               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_ShootingTarget_Master_C::Hop(bool InJumpUpPosition)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.Hop");

	AB_ShootingTarget_Master_C_Hop_Params params;
	params.InJumpUpPosition = InJumpUpPosition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.HopTimerEvent
// (BlueprintCallable, BlueprintEvent)

void AB_ShootingTarget_Master_C::HopTimerEvent()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.HopTimerEvent");

	AB_ShootingTarget_Master_C_HopTimerEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.SetHopTimer
// (BlueprintCallable, BlueprintEvent)

void AB_ShootingTarget_Master_C::SetHopTimer()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.SetHopTimer");

	AB_ShootingTarget_Master_C_SetHopTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.Knock Down Audio
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Knocked_Down_                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_ShootingTarget_Master_C::Knock_Down_Audio(bool Knocked_Down_)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.Knock Down Audio");

	AB_ShootingTarget_Master_C_Knock_Down_Audio_Params params;
	params.Knocked_Down_ = Knocked_Down_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.Impact Audio
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Check_for_Positive_Score       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AController*             Instigator                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_ShootingTarget_Master_C::Impact_Audio(int Check_for_Positive_Score, class AController* Instigator)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.Impact Audio");

	AB_ShootingTarget_Master_C_Impact_Audio_Params params;
	params.Check_for_Positive_Score = Check_for_Positive_Score;
	params.Instigator = Instigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.SpawnWeakpointFX
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform              ImpactTransform                (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void AB_ShootingTarget_Master_C::SpawnWeakpointFX(const struct FTransform& ImpactTransform)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.SpawnWeakpointFX");

	AB_ShootingTarget_Master_C_SpawnWeakpointFX_Params params;
	params.ImpactTransform = ImpactTransform;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.Target Movement Audio
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Jump_Up_                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_ShootingTarget_Master_C::Target_Movement_Audio(bool Jump_Up_)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.Target Movement Audio");

	AB_ShootingTarget_Master_C_Target_Movement_Audio_Params params;
	params.Jump_Up_ = Jump_Up_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.PopUpTargetTimerEvent
// (BlueprintCallable, BlueprintEvent)

void AB_ShootingTarget_Master_C::PopUpTargetTimerEvent()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.PopUpTargetTimerEvent");

	AB_ShootingTarget_Master_C_PopUpTargetTimerEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.PostFinishSpawning
// (Event, Public, BlueprintEvent)

void AB_ShootingTarget_Master_C::PostFinishSpawning()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.PostFinishSpawning");

	AB_ShootingTarget_Master_C_PostFinishSpawning_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.ExecuteUbergraph_B_ShootingTarget_Master
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_ShootingTarget_Master_C::ExecuteUbergraph_B_ShootingTarget_Master(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.ExecuteUbergraph_B_ShootingTarget_Master");

	AB_ShootingTarget_Master_C_ExecuteUbergraph_B_ShootingTarget_Master_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.TargetPopUpDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void AB_ShootingTarget_Master_C::TargetPopUpDispatcher__DelegateSignature()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.TargetPopUpDispatcher__DelegateSignature");

	AB_ShootingTarget_Master_C_TargetPopUpDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.TargetKnockedDownDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void AB_ShootingTarget_Master_C::TargetKnockedDownDispatcher__DelegateSignature()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_ShootingTarget_Master.B_ShootingTarget_Master_C.TargetKnockedDownDispatcher__DelegateSignature");

	AB_ShootingTarget_Master_C_TargetKnockedDownDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
