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

// Function B_TargetTrack.B_TargetTrack_C.GetMeshComponents
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<class UMeshComponent*>  ReturnValue                    (Parm, OutParm, ReturnParm)

TArray<class UMeshComponent*> AB_TargetTrack_C::GetMeshComponents()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_TargetTrack.B_TargetTrack_C.GetMeshComponents");

	AB_TargetTrack_C_GetMeshComponents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function B_TargetTrack.B_TargetTrack_C.GetCollisionStaticMesh
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UStaticMesh*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UStaticMesh* AB_TargetTrack_C::GetCollisionStaticMesh()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_TargetTrack.B_TargetTrack_C.GetCollisionStaticMesh");

	AB_TargetTrack_C_GetCollisionStaticMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function B_TargetTrack.B_TargetTrack_C.Set Audio Speed Sound
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Target_Speed                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_TargetTrack_C::Set_Audio_Speed_Sound(float Target_Speed)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_TargetTrack.B_TargetTrack_C.Set Audio Speed Sound");

	AB_TargetTrack_C_Set_Audio_Speed_Sound_Params params;
	params.Target_Speed = Target_Speed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_TargetTrack.B_TargetTrack_C.OnRep_CurrentMovementState
// (BlueprintCallable, BlueprintEvent)

void AB_TargetTrack_C::OnRep_CurrentMovementState()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_TargetTrack.B_TargetTrack_C.OnRep_CurrentMovementState");

	AB_TargetTrack_C_OnRep_CurrentMovementState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_TargetTrack.B_TargetTrack_C.SetMovementState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// unsigned char                  State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_TargetTrack_C::SetMovementState(unsigned char State)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_TargetTrack.B_TargetTrack_C.SetMovementState");

	AB_TargetTrack_C_SetMovementState_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_TargetTrack.B_TargetTrack_C.UpdateLerpedPosition
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Alpha                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_TargetTrack_C::UpdateLerpedPosition(float Alpha)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_TargetTrack.B_TargetTrack_C.UpdateLerpedPosition");

	AB_TargetTrack_C_UpdateLerpedPosition_Params params;
	params.Alpha = Alpha;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_TargetTrack.B_TargetTrack_C.OnRep_CurrentLerpValue
// (BlueprintCallable, BlueprintEvent)

void AB_TargetTrack_C::OnRep_CurrentLerpValue()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_TargetTrack.B_TargetTrack_C.OnRep_CurrentLerpValue");

	AB_TargetTrack_C_OnRep_CurrentLerpValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_TargetTrack.B_TargetTrack_C.UpdateForRepNotify
// (Public, BlueprintCallable, BlueprintEvent)

void AB_TargetTrack_C::UpdateForRepNotify()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_TargetTrack.B_TargetTrack_C.UpdateForRepNotify");

	AB_TargetTrack_C_UpdateForRepNotify_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_TargetTrack.B_TargetTrack_C.OnRep_IsCurrentlyMoving
// (BlueprintCallable, BlueprintEvent)

void AB_TargetTrack_C::OnRep_IsCurrentlyMoving()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_TargetTrack.B_TargetTrack_C.OnRep_IsCurrentlyMoving");

	AB_TargetTrack_C_OnRep_IsCurrentlyMoving_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_TargetTrack.B_TargetTrack_C.OnRep_CurrentDirection
// (BlueprintCallable, BlueprintEvent)

void AB_TargetTrack_C::OnRep_CurrentDirection()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_TargetTrack.B_TargetTrack_C.OnRep_CurrentDirection");

	AB_TargetTrack_C_OnRep_CurrentDirection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_TargetTrack.B_TargetTrack_C.OnRep_IsTargetUp
// (BlueprintCallable, BlueprintEvent)

void AB_TargetTrack_C::OnRep_IsTargetUp()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_TargetTrack.B_TargetTrack_C.OnRep_IsTargetUp");

	AB_TargetTrack_C_OnRep_IsTargetUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_TargetTrack.B_TargetTrack_C.OnRep_ServerMoveStartTime
// (BlueprintCallable, BlueprintEvent)

void AB_TargetTrack_C::OnRep_ServerMoveStartTime()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_TargetTrack.B_TargetTrack_C.OnRep_ServerMoveStartTime");

	AB_TargetTrack_C_OnRep_ServerMoveStartTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_TargetTrack.B_TargetTrack_C.SetTrackLength
// (Public, BlueprintCallable, BlueprintEvent)

void AB_TargetTrack_C::SetTrackLength()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_TargetTrack.B_TargetTrack_C.SetTrackLength");

	AB_TargetTrack_C_SetTrackLength_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_TargetTrack.B_TargetTrack_C.SetTargetRotationAndBaseMesh
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AB_TargetTrack_C::SetTargetRotationAndBaseMesh()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_TargetTrack.B_TargetTrack_C.SetTargetRotationAndBaseMesh");

	AB_TargetTrack_C_SetTargetRotationAndBaseMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_TargetTrack.B_TargetTrack_C.CalculatePlayRate
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AB_TargetTrack_C::CalculatePlayRate()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_TargetTrack.B_TargetTrack_C.CalculatePlayRate");

	AB_TargetTrack_C_CalculatePlayRate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function B_TargetTrack.B_TargetTrack_C.GetFinalDestinationOfTarget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Destination                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AB_TargetTrack_C::GetFinalDestinationOfTarget(struct FVector* Destination)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_TargetTrack.B_TargetTrack_C.GetFinalDestinationOfTarget");

	AB_TargetTrack_C_GetFinalDestinationOfTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Destination != nullptr)
		*Destination = params.Destination;
}


// Function B_TargetTrack.B_TargetTrack_C.TargetMovement__FinishedFunc
// (BlueprintEvent)

void AB_TargetTrack_C::TargetMovement__FinishedFunc()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_TargetTrack.B_TargetTrack_C.TargetMovement__FinishedFunc");

	AB_TargetTrack_C_TargetMovement__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_TargetTrack.B_TargetTrack_C.TargetMovement__UpdateFunc
// (BlueprintEvent)

void AB_TargetTrack_C::TargetMovement__UpdateFunc()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_TargetTrack.B_TargetTrack_C.TargetMovement__UpdateFunc");

	AB_TargetTrack_C_TargetMovement__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_TargetTrack.B_TargetTrack_C.OnLoaded_27B7684A423E01CDEC2BFC9631F88BF8
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_TargetTrack_C::OnLoaded_27B7684A423E01CDEC2BFC9631F88BF8(class UObject* Loaded)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_TargetTrack.B_TargetTrack_C.OnLoaded_27B7684A423E01CDEC2BFC9631F88BF8");

	AB_TargetTrack_C_OnLoaded_27B7684A423E01CDEC2BFC9631F88BF8_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_TargetTrack.B_TargetTrack_C.OnLoaded_3C01053C48BCC07B689033B6DB9706E0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_TargetTrack_C::OnLoaded_3C01053C48BCC07B689033B6DB9706E0(class UObject* Loaded)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_TargetTrack.B_TargetTrack_C.OnLoaded_3C01053C48BCC07B689033B6DB9706E0");

	AB_TargetTrack_C_OnLoaded_3C01053C48BCC07B689033B6DB9706E0_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_TargetTrack.B_TargetTrack_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_TargetTrack_C::ReceiveBeginPlay()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_TargetTrack.B_TargetTrack_C.ReceiveBeginPlay");

	AB_TargetTrack_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_TargetTrack.B_TargetTrack_C.MoveTarget
// (BlueprintCallable, BlueprintEvent)

void AB_TargetTrack_C::MoveTarget()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_TargetTrack.B_TargetTrack_C.MoveTarget");

	AB_TargetTrack_C_MoveTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_TargetTrack.B_TargetTrack_C.BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_1_AnyPropertyChangedDelegate__DelegateSignature
// (BlueprintEvent)

void AB_TargetTrack_C::BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_1_AnyPropertyChangedDelegate__DelegateSignature()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_TargetTrack.B_TargetTrack_C.BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_1_AnyPropertyChangedDelegate__DelegateSignature");

	AB_TargetTrack_C_BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_1_AnyPropertyChangedDelegate__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_TargetTrack.B_TargetTrack_C.BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_2_AnyPropertyChangedDelegate__DelegateSignature
// (BlueprintEvent)

void AB_TargetTrack_C::BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_2_AnyPropertyChangedDelegate__DelegateSignature()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_TargetTrack.B_TargetTrack_C.BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_2_AnyPropertyChangedDelegate__DelegateSignature");

	AB_TargetTrack_C_BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_2_AnyPropertyChangedDelegate__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_TargetTrack.B_TargetTrack_C.AttachedTargetKnockedDown
// (BlueprintCallable, BlueprintEvent)

void AB_TargetTrack_C::AttachedTargetKnockedDown()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_TargetTrack.B_TargetTrack_C.AttachedTargetKnockedDown");

	AB_TargetTrack_C_AttachedTargetKnockedDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_TargetTrack.B_TargetTrack_C.StopTargetMovement
// (BlueprintCallable, BlueprintEvent)

void AB_TargetTrack_C::StopTargetMovement()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_TargetTrack.B_TargetTrack_C.StopTargetMovement");

	AB_TargetTrack_C_StopTargetMovement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_TargetTrack.B_TargetTrack_C.AttachedTargetPoppedUp
// (BlueprintCallable, BlueprintEvent)

void AB_TargetTrack_C::AttachedTargetPoppedUp()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_TargetTrack.B_TargetTrack_C.AttachedTargetPoppedUp");

	AB_TargetTrack_C_AttachedTargetPoppedUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_TargetTrack.B_TargetTrack_C.ReverseTargetMovement
// (BlueprintCallable, BlueprintEvent)

void AB_TargetTrack_C::ReverseTargetMovement()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_TargetTrack.B_TargetTrack_C.ReverseTargetMovement");

	AB_TargetTrack_C_ReverseTargetMovement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_TargetTrack.B_TargetTrack_C.AsyncLoadTargetBase
// (BlueprintCallable, BlueprintEvent)

void AB_TargetTrack_C::AsyncLoadTargetBase()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_TargetTrack.B_TargetTrack_C.AsyncLoadTargetBase");

	AB_TargetTrack_C_AsyncLoadTargetBase_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_TargetTrack.B_TargetTrack_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AB_TargetTrack_C::BndEvt__Sphere_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_TargetTrack.B_TargetTrack_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature");

	AB_TargetTrack_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function B_TargetTrack.B_TargetTrack_C.InitializeSettings
// (BlueprintCallable, BlueprintEvent)

void AB_TargetTrack_C::InitializeSettings()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_TargetTrack.B_TargetTrack_C.InitializeSettings");

	AB_TargetTrack_C_InitializeSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_TargetTrack.B_TargetTrack_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_TargetTrack_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_TargetTrack.B_TargetTrack_C.ReceiveEndPlay");

	AB_TargetTrack_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_TargetTrack.B_TargetTrack_C.Move Target Audio
// (BlueprintCallable, BlueprintEvent)

void AB_TargetTrack_C::Move_Target_Audio()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_TargetTrack.B_TargetTrack_C.Move Target Audio");

	AB_TargetTrack_C_Move_Target_Audio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_TargetTrack.B_TargetTrack_C.Stop Move Target Audio
// (BlueprintCallable, BlueprintEvent)

void AB_TargetTrack_C::Stop_Move_Target_Audio()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_TargetTrack.B_TargetTrack_C.Stop Move Target Audio");

	AB_TargetTrack_C_Stop_Move_Target_Audio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_TargetTrack.B_TargetTrack_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void AB_TargetTrack_C::ReceiveDestroyed()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_TargetTrack.B_TargetTrack_C.ReceiveDestroyed");

	AB_TargetTrack_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_TargetTrack.B_TargetTrack_C.ExecuteUbergraph_B_TargetTrack
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_TargetTrack_C::ExecuteUbergraph_B_TargetTrack(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_TargetTrack.B_TargetTrack_C.ExecuteUbergraph_B_TargetTrack");

	AB_TargetTrack_C_ExecuteUbergraph_B_TargetTrack_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
