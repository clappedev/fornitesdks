// Fortnite (1.11) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function B_Fragment_Container.B_Fragment_Container_C.IsOutlander
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AFortPawn*               Pawn                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsOutlander                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AB_Fragment_Container_C::IsOutlander(class AFortPawn* Pawn, bool* IsOutlander)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Fragment_Container.B_Fragment_Container_C.IsOutlander");

	AB_Fragment_Container_C_IsOutlander_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsOutlander != nullptr)
		*IsOutlander = params.IsOutlander;
}


// Function B_Fragment_Container.B_Fragment_Container_C.ForceFeedbackInteract
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Soft                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Fragment_Container_C::ForceFeedbackInteract(bool Soft)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Fragment_Container.B_Fragment_Container_C.ForceFeedbackInteract");

	AB_Fragment_Container_C_ForceFeedbackInteract_Params params;
	params.Soft = Soft;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Fragment_Container.B_Fragment_Container_C.OnRep_IsOrbTaken
// (BlueprintCallable, BlueprintEvent)

void AB_Fragment_Container_C::OnRep_IsOrbTaken()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Fragment_Container.B_Fragment_Container_C.OnRep_IsOrbTaken");

	AB_Fragment_Container_C_OnRep_IsOrbTaken_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Fragment_Container.B_Fragment_Container_C.OnRep_IsOn
// (HasDefaults, BlueprintCallable, BlueprintEvent)

void AB_Fragment_Container_C::OnRep_IsOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Fragment_Container.B_Fragment_Container_C.OnRep_IsOn");

	AB_Fragment_Container_C_OnRep_IsOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Fragment_Container.B_Fragment_Container_C.SetOutlander
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  NewOutlander                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Fragment_Container_C::SetOutlander(class AActor* NewOutlander)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Fragment_Container.B_Fragment_Container_C.SetOutlander");

	AB_Fragment_Container_C_SetOutlander_Params params;
	params.NewOutlander = NewOutlander;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Fragment_Container.B_Fragment_Container_C.SetAwake
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NewAwake                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Fragment_Container_C::SetAwake(bool NewAwake)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Fragment_Container.B_Fragment_Container_C.SetAwake");

	AB_Fragment_Container_C_SetAwake_Params params;
	params.NewAwake = NewAwake;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Fragment_Container.B_Fragment_Container_C.UpdateShouldTick
// (Public, BlueprintCallable, BlueprintEvent)

void AB_Fragment_Container_C::UpdateShouldTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Fragment_Container.B_Fragment_Container_C.UpdateShouldTick");

	AB_Fragment_Container_C_UpdateShouldTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Fragment_Container.B_Fragment_Container_C.BlueprintGetFailedInteractionString
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AFortPawn**              InteractingPawn                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText AB_Fragment_Container_C::BlueprintGetFailedInteractionString(class AFortPawn** InteractingPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Fragment_Container.B_Fragment_Container_C.BlueprintGetFailedInteractionString");

	AB_Fragment_Container_C_BlueprintGetFailedInteractionString_Params params;
	params.InteractingPawn = InteractingPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function B_Fragment_Container.B_Fragment_Container_C.OnRep_IsOpen
// (BlueprintCallable, BlueprintEvent)

void AB_Fragment_Container_C::OnRep_IsOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Fragment_Container.B_Fragment_Container_C.OnRep_IsOpen");

	AB_Fragment_Container_C_OnRep_IsOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Fragment_Container.B_Fragment_Container_C.DelayedDestroy
// (Public, BlueprintCallable, BlueprintEvent)

void AB_Fragment_Container_C::DelayedDestroy()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Fragment_Container.B_Fragment_Container_C.DelayedDestroy");

	AB_Fragment_Container_C_DelayedDestroy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Fragment_Container.B_Fragment_Container_C.OnRep_BuffType
// (HasDefaults, BlueprintCallable, BlueprintEvent)

void AB_Fragment_Container_C::OnRep_BuffType()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Fragment_Container.B_Fragment_Container_C.OnRep_BuffType");

	AB_Fragment_Container_C_OnRep_BuffType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Fragment_Container.B_Fragment_Container_C.BlueprintGetInteractionString
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPawn**              InteractingPawn                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText AB_Fragment_Container_C::BlueprintGetInteractionString(class AFortPawn** InteractingPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Fragment_Container.B_Fragment_Container_C.BlueprintGetInteractionString");

	AB_Fragment_Container_C_BlueprintGetInteractionString_Params params;
	params.InteractingPawn = InteractingPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function B_Fragment_Container.B_Fragment_Container_C.BlueprintCanInteract
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AFortPawn**              InteractingPawn                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AB_Fragment_Container_C::BlueprintCanInteract(class AFortPawn** InteractingPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Fragment_Container.B_Fragment_Container_C.BlueprintCanInteract");

	AB_Fragment_Container_C_BlueprintCanInteract_Params params;
	params.InteractingPawn = InteractingPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function B_Fragment_Container.B_Fragment_Container_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AB_Fragment_Container_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Fragment_Container.B_Fragment_Container_C.UserConstructionScript");

	AB_Fragment_Container_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Fragment_Container.B_Fragment_Container_C.VerticalMovementTimeline__FinishedFunc
// (BlueprintEvent)

void AB_Fragment_Container_C::VerticalMovementTimeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Fragment_Container.B_Fragment_Container_C.VerticalMovementTimeline__FinishedFunc");

	AB_Fragment_Container_C_VerticalMovementTimeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Fragment_Container.B_Fragment_Container_C.VerticalMovementTimeline__UpdateFunc
// (BlueprintEvent)

void AB_Fragment_Container_C::VerticalMovementTimeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Fragment_Container.B_Fragment_Container_C.VerticalMovementTimeline__UpdateFunc");

	AB_Fragment_Container_C_VerticalMovementTimeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Fragment_Container.B_Fragment_Container_C.VerticalMovementTimeline__Up__EventFunc
// (BlueprintEvent)

void AB_Fragment_Container_C::VerticalMovementTimeline__Up__EventFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Fragment_Container.B_Fragment_Container_C.VerticalMovementTimeline__Up__EventFunc");

	AB_Fragment_Container_C_VerticalMovementTimeline__Up__EventFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Fragment_Container.B_Fragment_Container_C.VerticalMovementTimeline__down__EventFunc
// (BlueprintEvent)

void AB_Fragment_Container_C::VerticalMovementTimeline__down__EventFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Fragment_Container.B_Fragment_Container_C.VerticalMovementTimeline__down__EventFunc");

	AB_Fragment_Container_C_VerticalMovementTimeline__down__EventFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Fragment_Container.B_Fragment_Container_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_Fragment_Container_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Fragment_Container.B_Fragment_Container_C.ReceiveBeginPlay");

	AB_Fragment_Container_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Fragment_Container.B_Fragment_Container_C.OnDeathServer
// (BlueprintAuthorityOnly, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float*                         Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer*  DamageTags                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector*                Momentum                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FHitResult*             HitInfo                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AController**            InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayEffectContextHandle* EffectContext                  (BlueprintVisible, BlueprintReadOnly, Parm)

void AB_Fragment_Container_C::OnDeathServer(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AController** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Fragment_Container.B_Fragment_Container_C.OnDeathServer");

	AB_Fragment_Container_C_OnDeathServer_Params params;
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


// Function B_Fragment_Container.B_Fragment_Container_C.BlueprintOnInteract
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// class AFortPawn**              InteractingPawn                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Fragment_Container_C::BlueprintOnInteract(class AFortPawn** InteractingPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Fragment_Container.B_Fragment_Container_C.BlueprintOnInteract");

	AB_Fragment_Container_C_BlueprintOnInteract_Params params;
	params.InteractingPawn = InteractingPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Fragment_Container.B_Fragment_Container_C.ActivateFX
// (BlueprintCallable, BlueprintEvent)

void AB_Fragment_Container_C::ActivateFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Fragment_Container.B_Fragment_Container_C.ActivateFX");

	AB_Fragment_Container_C_ActivateFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Fragment_Container.B_Fragment_Container_C.BndEvt__Awaken_Collision_K2Node_ComponentBoundEvent_108_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AB_Fragment_Container_C::BndEvt__Awaken_Collision_K2Node_ComponentBoundEvent_108_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Fragment_Container.B_Fragment_Container_C.BndEvt__Awaken_Collision_K2Node_ComponentBoundEvent_108_ComponentBeginOverlapSignature__DelegateSignature");

	AB_Fragment_Container_C_BndEvt__Awaken_Collision_K2Node_ComponentBoundEvent_108_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function B_Fragment_Container.B_Fragment_Container_C.BndEvt__Awaken_Collision_K2Node_ComponentBoundEvent_111_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Fragment_Container_C::BndEvt__Awaken_Collision_K2Node_ComponentBoundEvent_111_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Fragment_Container.B_Fragment_Container_C.BndEvt__Awaken_Collision_K2Node_ComponentBoundEvent_111_ComponentEndOverlapSignature__DelegateSignature");

	AB_Fragment_Container_C_BndEvt__Awaken_Collision_K2Node_ComponentBoundEvent_111_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Fragment_Container.B_Fragment_Container_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Fragment_Container_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Fragment_Container.B_Fragment_Container_C.ReceiveTick");

	AB_Fragment_Container_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Fragment_Container.B_Fragment_Container_C.MoveUp
// (BlueprintCallable, BlueprintEvent)

void AB_Fragment_Container_C::MoveUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Fragment_Container.B_Fragment_Container_C.MoveUp");

	AB_Fragment_Container_C_MoveUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Fragment_Container.B_Fragment_Container_C.PowerDown
// (BlueprintCallable, BlueprintEvent)

void AB_Fragment_Container_C::PowerDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Fragment_Container.B_Fragment_Container_C.PowerDown");

	AB_Fragment_Container_C_PowerDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Fragment_Container.B_Fragment_Container_C.MoveDown
// (BlueprintCallable, BlueprintEvent)

void AB_Fragment_Container_C::MoveDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Fragment_Container.B_Fragment_Container_C.MoveDown");

	AB_Fragment_Container_C_MoveDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Fragment_Container.B_Fragment_Container_C.ShowOnMiniMap
// (BlueprintCallable, BlueprintEvent)

void AB_Fragment_Container_C::ShowOnMiniMap()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Fragment_Container.B_Fragment_Container_C.ShowOnMiniMap");

	AB_Fragment_Container_C_ShowOnMiniMap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Fragment_Container.B_Fragment_Container_C.StartHide
// (BlueprintCallable, BlueprintEvent)

void AB_Fragment_Container_C::StartHide()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Fragment_Container.B_Fragment_Container_C.StartHide");

	AB_Fragment_Container_C_StartHide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Fragment_Container.B_Fragment_Container_C.Reset_Activation
// (BlueprintCallable, BlueprintEvent)

void AB_Fragment_Container_C::Reset_Activation()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Fragment_Container.B_Fragment_Container_C.Reset_Activation");

	AB_Fragment_Container_C_Reset_Activation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Fragment_Container.B_Fragment_Container_C.BlueprintOnBeginInteract
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void AB_Fragment_Container_C::BlueprintOnBeginInteract()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Fragment_Container.B_Fragment_Container_C.BlueprintOnBeginInteract");

	AB_Fragment_Container_C_BlueprintOnBeginInteract_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Fragment_Container.B_Fragment_Container_C.MultiFeedback
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void AB_Fragment_Container_C::MultiFeedback()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Fragment_Container.B_Fragment_Container_C.MultiFeedback");

	AB_Fragment_Container_C_MultiFeedback_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Fragment_Container.B_Fragment_Container_C.SoftFeedback
// (BlueprintCallable, BlueprintEvent)

void AB_Fragment_Container_C::SoftFeedback()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Fragment_Container.B_Fragment_Container_C.SoftFeedback");

	AB_Fragment_Container_C_SoftFeedback_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Fragment_Container.B_Fragment_Container_C.PlayAnimation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimSequence*           AnimToPlay                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Fragment_Container_C::PlayAnimation(class UAnimSequence* AnimToPlay)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Fragment_Container.B_Fragment_Container_C.PlayAnimation");

	AB_Fragment_Container_C_PlayAnimation_Params params;
	params.AnimToPlay = AnimToPlay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Fragment_Container.B_Fragment_Container_C.AnimationComplete
// (BlueprintCallable, BlueprintEvent)

void AB_Fragment_Container_C::AnimationComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Fragment_Container.B_Fragment_Container_C.AnimationComplete");

	AB_Fragment_Container_C_AnimationComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Fragment_Container.B_Fragment_Container_C.ExecuteUbergraph_B_Fragment_Container
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Fragment_Container_C::ExecuteUbergraph_B_Fragment_Container(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Fragment_Container.B_Fragment_Container_C.ExecuteUbergraph_B_Fragment_Container");

	AB_Fragment_Container_C_ExecuteUbergraph_B_Fragment_Container_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
