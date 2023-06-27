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

// Function BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C.GetFocusedSocketLocation
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ABGA_Athena_PurpleMouse_Jumper_C::GetFocusedSocketLocation()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C.GetFocusedSocketLocation");

	ABGA_Athena_PurpleMouse_Jumper_C_GetFocusedSocketLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C.CanBeSavedToCreativeVolume
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABGA_Athena_PurpleMouse_Jumper_C::CanBeSavedToCreativeVolume()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C.CanBeSavedToCreativeVolume");

	ABGA_Athena_PurpleMouse_Jumper_C_CanBeSavedToCreativeVolume_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C.GetAllPawns
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AActor*>          _Array                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class AActor*>          _Result                        (Parm, OutParm)

void ABGA_Athena_PurpleMouse_Jumper_C::GetAllPawns(TArray<class AActor*>* _Array, TArray<class AActor*>* _Result)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C.GetAllPawns");

	ABGA_Athena_PurpleMouse_Jumper_C_GetAllPawns_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (_Array != nullptr)
		*_Array = params._Array;
	if (_Result != nullptr)
		*_Result = params._Result;
}


// Function BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C.Is in Infiltration Mode
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABGA_Athena_PurpleMouse_Jumper_C::Is_in_Infiltration_Mode()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C.Is in Infiltration Mode");

	ABGA_Athena_PurpleMouse_Jumper_C_Is_in_Infiltration_Mode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C.BlueprintGetInteractionTime
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AFortPawn*               InteractingPawn                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          OutInteractionTime             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABGA_Athena_PurpleMouse_Jumper_C::BlueprintGetInteractionTime(class AFortPawn* InteractingPawn, TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted, float* OutInteractionTime)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C.BlueprintGetInteractionTime");

	ABGA_Athena_PurpleMouse_Jumper_C_BlueprintGetInteractionTime_Params params;
	params.InteractingPawn = InteractingPawn;
	params.InteractionBeingAttempted = InteractionBeingAttempted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutInteractionTime != nullptr)
		*OutInteractionTime = params.OutInteractionTime;

	return params.ReturnValue;
}


// Function BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C.Init
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 GravHitNormal                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABGA_Athena_PurpleMouse_Jumper_C::Init(const struct FVector& GravHitNormal)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C.Init");

	ABGA_Athena_PurpleMouse_Jumper_C_Init_Params params;
	params.GravHitNormal = GravHitNormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C.FilterByLOS
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AActor*>          _Array                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class AActor*>          _Result                        (Parm, OutParm)

void ABGA_Athena_PurpleMouse_Jumper_C::FilterByLOS(TArray<class AActor*>* _Array, TArray<class AActor*>* _Result)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C.FilterByLOS");

	ABGA_Athena_PurpleMouse_Jumper_C_FilterByLOS_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (_Array != nullptr)
		*_Array = params._Array;
	if (_Result != nullptr)
		*_Result = params._Result;
}


// Function BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C.CheckLOSAgain
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  ActorToCheckLOSAgainst         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABGA_Athena_PurpleMouse_Jumper_C::CheckLOSAgain(class AActor* ActorToCheckLOSAgainst)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C.CheckLOSAgain");

	ABGA_Athena_PurpleMouse_Jumper_C_CheckLOSAgain_Params params;
	params.ActorToCheckLOSAgainst = ActorToCheckLOSAgainst;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C.BlueprintGetInteractionString
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AFortPawn*               InteractingPawn                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText ABGA_Athena_PurpleMouse_Jumper_C::BlueprintGetInteractionString(class AFortPawn* InteractingPawn, TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C.BlueprintGetInteractionString");

	ABGA_Athena_PurpleMouse_Jumper_C_BlueprintGetInteractionString_Params params;
	params.InteractingPawn = InteractingPawn;
	params.InteractionBeingAttempted = InteractionBeingAttempted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C.BlueprintCanInteract
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AFortPawn*               InteractingPawn                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ETInteractionType> InteractionType                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABGA_Athena_PurpleMouse_Jumper_C::BlueprintCanInteract(class AFortPawn* InteractingPawn, TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted, TEnumAsByte<ETInteractionType> InteractionType)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C.BlueprintCanInteract");

	ABGA_Athena_PurpleMouse_Jumper_C_BlueprintCanInteract_Params params;
	params.InteractingPawn = InteractingPawn;
	params.InteractionBeingAttempted = InteractionBeingAttempted;
	params.InteractionType = InteractionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C.Launch
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 LaunchSource                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABGA_Athena_PurpleMouse_Jumper_C::Launch(const struct FVector& LaunchSource, float Amount)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C.Launch");

	ABGA_Athena_PurpleMouse_Jumper_C_Launch_Params params;
	params.LaunchSource = LaunchSource;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABGA_Athena_PurpleMouse_Jumper_C::UserConstructionScript()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C.UserConstructionScript");

	ABGA_Athena_PurpleMouse_Jumper_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C.JumpOut__FinishedFunc
// (BlueprintEvent)

void ABGA_Athena_PurpleMouse_Jumper_C::JumpOut__FinishedFunc()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C.JumpOut__FinishedFunc");

	ABGA_Athena_PurpleMouse_Jumper_C_JumpOut__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C.JumpOut__UpdateFunc
// (BlueprintEvent)

void ABGA_Athena_PurpleMouse_Jumper_C::JumpOut__UpdateFunc()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C.JumpOut__UpdateFunc");

	ABGA_Athena_PurpleMouse_Jumper_C_JumpOut__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABGA_Athena_PurpleMouse_Jumper_C::ReceiveBeginPlay()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C.ReceiveBeginPlay");

	ABGA_Athena_PurpleMouse_Jumper_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C.BndEvt__ExplosionTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABGA_Athena_PurpleMouse_Jumper_C::BndEvt__ExplosionTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C.BndEvt__ExplosionTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	ABGA_Athena_PurpleMouse_Jumper_C_BndEvt__ExplosionTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C.JumpIntoExplosion
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABGA_Athena_PurpleMouse_Jumper_C::JumpIntoExplosion()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C.JumpIntoExplosion");

	ABGA_Athena_PurpleMouse_Jumper_C_JumpIntoExplosion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C.OnDamageServer
// (BlueprintAuthorityOnly, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer   DamageTags                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector                 Momentum                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              HitInfo                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AController*             InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayEffectContextHandle EffectContext                  (BlueprintVisible, BlueprintReadOnly, Parm)

void ABGA_Athena_PurpleMouse_Jumper_C::OnDamageServer(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C.OnDamageServer");

	ABGA_Athena_PurpleMouse_Jumper_C_OnDamageServer_Params params;
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


// Function BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C.BlueprintOnInteract
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// class AFortPawn*               InteractingPawn                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABGA_Athena_PurpleMouse_Jumper_C::BlueprintOnInteract(class AFortPawn* InteractingPawn, TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C.BlueprintOnInteract");

	ABGA_Athena_PurpleMouse_Jumper_C_BlueprintOnInteract_Params params;
	params.InteractingPawn = InteractingPawn;
	params.InteractionBeingAttempted = InteractionBeingAttempted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C.SpawnFXSounds
// (BlueprintCallable, BlueprintEvent)

void ABGA_Athena_PurpleMouse_Jumper_C::SpawnFXSounds()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C.SpawnFXSounds");

	ABGA_Athena_PurpleMouse_Jumper_C_SpawnFXSounds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C.BndEvt__ExplosionTrigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABGA_Athena_PurpleMouse_Jumper_C::BndEvt__ExplosionTrigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C.BndEvt__ExplosionTrigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");

	ABGA_Athena_PurpleMouse_Jumper_C_BndEvt__ExplosionTrigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C.Beep
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   EventName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          EmitterTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Velocity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABGA_Athena_PurpleMouse_Jumper_C::Beep(const struct FName& EventName, float EmitterTime, const struct FVector& Location, const struct FVector& Velocity)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C.Beep");

	ABGA_Athena_PurpleMouse_Jumper_C_Beep_Params params;
	params.EventName = EventName;
	params.EmitterTime = EmitterTime;
	params.Location = Location;
	params.Velocity = Velocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C.TriggerBeep
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABGA_Athena_PurpleMouse_Jumper_C::TriggerBeep()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C.TriggerBeep");

	ABGA_Athena_PurpleMouse_Jumper_C_TriggerBeep_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C.DetachAndLaunch
// (BlueprintCallable, BlueprintEvent)

void ABGA_Athena_PurpleMouse_Jumper_C::DetachAndLaunch()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C.DetachAndLaunch");

	ABGA_Athena_PurpleMouse_Jumper_C_DetachAndLaunch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C.Explode
// (BlueprintCallable, BlueprintEvent)

void ABGA_Athena_PurpleMouse_Jumper_C::Explode()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C.Explode");

	ABGA_Athena_PurpleMouse_Jumper_C_Explode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C.TriggerJumpTimeline
// (BlueprintCallable, BlueprintEvent)

void ABGA_Athena_PurpleMouse_Jumper_C::TriggerJumpTimeline()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C.TriggerJumpTimeline");

	ABGA_Athena_PurpleMouse_Jumper_C_TriggerJumpTimeline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C.Destroyed
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DamagedActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AController*             InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     FHitComponent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   BoneName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Momentum                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABGA_Athena_PurpleMouse_Jumper_C::Destroyed(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, const struct FName& BoneName, const struct FVector& Momentum)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C.Destroyed");

	ABGA_Athena_PurpleMouse_Jumper_C_Destroyed_Params params;
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


// Function BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C.BndEvt__BeepBlinkTrigger_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABGA_Athena_PurpleMouse_Jumper_C::BndEvt__BeepBlinkTrigger_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C.BndEvt__BeepBlinkTrigger_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature");

	ABGA_Athena_PurpleMouse_Jumper_C_BndEvt__BeepBlinkTrigger_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C.BndEvt__BeepBlinkTrigger_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABGA_Athena_PurpleMouse_Jumper_C::BndEvt__BeepBlinkTrigger_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C.BndEvt__BeepBlinkTrigger_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature");

	ABGA_Athena_PurpleMouse_Jumper_C_BndEvt__BeepBlinkTrigger_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C.StopBeep
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABGA_Athena_PurpleMouse_Jumper_C::StopBeep()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C.StopBeep");

	ABGA_Athena_PurpleMouse_Jumper_C_StopBeep_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C.Damaged
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

void ABGA_Athena_PurpleMouse_Jumper_C::Damaged(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, const struct FName& BoneName, const struct FVector& Momentum)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C.Damaged");

	ABGA_Athena_PurpleMouse_Jumper_C_Damaged_Params params;
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


// Function BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C.ResetExplosionTimer
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABGA_Athena_PurpleMouse_Jumper_C::ResetExplosionTimer()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C.ResetExplosionTimer");

	ABGA_Athena_PurpleMouse_Jumper_C_ResetExplosionTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C.BndEvt__FortWaterInteraction_K2Node_ComponentBoundEvent_4_WaterInteractionOnEnterWater__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AFortWaterBodyActor*     WaterBody                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UFortWaterInteractionComponent* WaterInteractionComponent      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bIsFirstBody                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABGA_Athena_PurpleMouse_Jumper_C::BndEvt__FortWaterInteraction_K2Node_ComponentBoundEvent_4_WaterInteractionOnEnterWater__DelegateSignature(class AFortWaterBodyActor* WaterBody, class UFortWaterInteractionComponent* WaterInteractionComponent, bool bIsFirstBody)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C.BndEvt__FortWaterInteraction_K2Node_ComponentBoundEvent_4_WaterInteractionOnEnterWater__DelegateSignature");

	ABGA_Athena_PurpleMouse_Jumper_C_BndEvt__FortWaterInteraction_K2Node_ComponentBoundEvent_4_WaterInteractionOnEnterWater__DelegateSignature_Params params;
	params.WaterBody = WaterBody;
	params.WaterInteractionComponent = WaterInteractionComponent;
	params.bIsFirstBody = bIsFirstBody;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C.StopSim
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult              Hit                            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABGA_Athena_PurpleMouse_Jumper_C::StopSim(const struct FHitResult& Hit)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C.StopSim");

	ABGA_Athena_PurpleMouse_Jumper_C_StopSim_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C.Pushback
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 V                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABGA_Athena_PurpleMouse_Jumper_C::Pushback(const struct FVector& V)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C.Pushback");

	ABGA_Athena_PurpleMouse_Jumper_C_Pushback_Params params;
	params.V = V;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C.OnInstigatorDied
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

void ABGA_Athena_PurpleMouse_Jumper_C::OnInstigatorDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, const struct FName& BoneName, const struct FVector& Momentum)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C.OnInstigatorDied");

	ABGA_Athena_PurpleMouse_Jumper_C_OnInstigatorDied_Params params;
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


// Function BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C.SetMyTeam
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// unsigned char                  Team                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABGA_Athena_PurpleMouse_Jumper_C::SetMyTeam(unsigned char Team)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C.SetMyTeam");

	ABGA_Athena_PurpleMouse_Jumper_C_SetMyTeam_Params params;
	params.Team = Team;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C.ExecuteUbergraph_BGA_Athena_PurpleMouse_Jumper
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABGA_Athena_PurpleMouse_Jumper_C::ExecuteUbergraph_BGA_Athena_PurpleMouse_Jumper(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_PurpleMouse_Jumper.BGA_Athena_PurpleMouse_Jumper_C.ExecuteUbergraph_BGA_Athena_PurpleMouse_Jumper");

	ABGA_Athena_PurpleMouse_Jumper_C_ExecuteUbergraph_BGA_Athena_PurpleMouse_Jumper_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
