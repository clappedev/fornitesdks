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

// Function B_HidingProp_WilliePete.B_HidingProp_WilliePete_C.OnRep_bSetSpawnedWaterBody
// (BlueprintCallable, BlueprintEvent)

void AB_HidingProp_WilliePete_C::OnRep_bSetSpawnedWaterBody()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_HidingProp_WilliePete.B_HidingProp_WilliePete_C.OnRep_bSetSpawnedWaterBody");

	AB_HidingProp_WilliePete_C_OnRep_bSetSpawnedWaterBody_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_HidingProp_WilliePete.B_HidingProp_WilliePete_C.OnRep_bSetSilentDie
// (BlueprintCallable, BlueprintEvent)

void AB_HidingProp_WilliePete_C::OnRep_bSetSilentDie()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_HidingProp_WilliePete.B_HidingProp_WilliePete_C.OnRep_bSetSilentDie");

	AB_HidingProp_WilliePete_C_OnRep_bSetSilentDie_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_HidingProp_WilliePete.B_HidingProp_WilliePete_C.HelperLocationLogger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 inString                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void AB_HidingProp_WilliePete_C::HelperLocationLogger(const struct FString& inString)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_HidingProp_WilliePete.B_HidingProp_WilliePete_C.HelperLocationLogger");

	AB_HidingProp_WilliePete_C_HelperLocationLogger_Params params;
	params.inString = inString;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_HidingProp_WilliePete.B_HidingProp_WilliePete_C.OnRep_AdjustedLocation
// (HasDefaults, BlueprintCallable, BlueprintEvent)

void AB_HidingProp_WilliePete_C::OnRep_AdjustedLocation()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_HidingProp_WilliePete.B_HidingProp_WilliePete_C.OnRep_AdjustedLocation");

	AB_HidingProp_WilliePete_C_OnRep_AdjustedLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_HidingProp_WilliePete.B_HidingProp_WilliePete_C.TeleportExitSpeed
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 ExitFVector                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          EnterSpeed                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          OverrideSpeed                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          MinimumSpeed                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ForceSpeedOverride             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 TeleportExitVelocity           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AB_HidingProp_WilliePete_C::TeleportExitSpeed(const struct FVector& ExitFVector, float EnterSpeed, float OverrideSpeed, float MinimumSpeed, bool ForceSpeedOverride, struct FVector* TeleportExitVelocity)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_HidingProp_WilliePete.B_HidingProp_WilliePete_C.TeleportExitSpeed");

	AB_HidingProp_WilliePete_C_TeleportExitSpeed_Params params;
	params.ExitFVector = ExitFVector;
	params.EnterSpeed = EnterSpeed;
	params.OverrideSpeed = OverrideSpeed;
	params.MinimumSpeed = MinimumSpeed;
	params.ForceSpeedOverride = ForceSpeedOverride;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TeleportExitVelocity != nullptr)
		*TeleportExitVelocity = params.TeleportExitVelocity;
}


// Function B_HidingProp_WilliePete.B_HidingProp_WilliePete_C.OnReady_74044DD44988556292500EB8F289359F
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortGameStateAthena*    GameState                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UFortPlaylist*           Playlist                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer   PlaylistContextTags            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AB_HidingProp_WilliePete_C::OnReady_74044DD44988556292500EB8F289359F(class AFortGameStateAthena* GameState, class UFortPlaylist* Playlist, const struct FGameplayTagContainer& PlaylistContextTags)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_HidingProp_WilliePete.B_HidingProp_WilliePete_C.OnReady_74044DD44988556292500EB8F289359F");

	AB_HidingProp_WilliePete_C_OnReady_74044DD44988556292500EB8F289359F_Params params;
	params.GameState = GameState;
	params.Playlist = Playlist;
	params.PlaylistContextTags = PlaylistContextTags;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_HidingProp_WilliePete.B_HidingProp_WilliePete_C.Non Pawn Actor Destroyed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DestroyedActor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_HidingProp_WilliePete_C::Non_Pawn_Actor_Destroyed(class AActor* DestroyedActor)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_HidingProp_WilliePete.B_HidingProp_WilliePete_C.Non Pawn Actor Destroyed");

	AB_HidingProp_WilliePete_C_Non_Pawn_Actor_Destroyed_Params params;
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_HidingProp_WilliePete.B_HidingProp_WilliePete_C.Non Pawn Teleport
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  TeleportingActor               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_HidingProp_WilliePete_C::Non_Pawn_Teleport(class AActor* TeleportingActor)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_HidingProp_WilliePete.B_HidingProp_WilliePete_C.Non Pawn Teleport");

	AB_HidingProp_WilliePete_C_Non_Pawn_Teleport_Params params;
	params.TeleportingActor = TeleportingActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_HidingProp_WilliePete.B_HidingProp_WilliePete_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_HidingProp_WilliePete_C::ReceiveBeginPlay()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_HidingProp_WilliePete.B_HidingProp_WilliePete_C.ReceiveBeginPlay");

	AB_HidingProp_WilliePete_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_HidingProp_WilliePete.B_HidingProp_WilliePete_C.Remove GE
// (BlueprintCallable, BlueprintEvent)

void AB_HidingProp_WilliePete_C::Remove_GE()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_HidingProp_WilliePete.B_HidingProp_WilliePete_C.Remove GE");

	AB_HidingProp_WilliePete_C_Remove_GE_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_HidingProp_WilliePete.B_HidingProp_WilliePete_C.BndEvt__overlapCylinder_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AB_HidingProp_WilliePete_C::BndEvt__overlapCylinder_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_HidingProp_WilliePete.B_HidingProp_WilliePete_C.BndEvt__overlapCylinder_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	AB_HidingProp_WilliePete_C_BndEvt__overlapCylinder_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function B_HidingProp_WilliePete.B_HidingProp_WilliePete_C.Complete Setup
// (BlueprintCallable, BlueprintEvent)

void AB_HidingProp_WilliePete_C::Complete_Setup()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_HidingProp_WilliePete.B_HidingProp_WilliePete_C.Complete Setup");

	AB_HidingProp_WilliePete_C_Complete_Setup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_HidingProp_WilliePete.B_HidingProp_WilliePete_C.StopHiding
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPawn*               Pawn                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_HidingProp_WilliePete_C::StopHiding(class AFortPawn* Pawn)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_HidingProp_WilliePete.B_HidingProp_WilliePete_C.StopHiding");

	AB_HidingProp_WilliePete_C_StopHiding_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_HidingProp_WilliePete.B_HidingProp_WilliePete_C.ResetGravity
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult              Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AB_HidingProp_WilliePete_C::ResetGravity(const struct FHitResult& Hit)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_HidingProp_WilliePete.B_HidingProp_WilliePete_C.ResetGravity");

	AB_HidingProp_WilliePete_C_ResetGravity_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_HidingProp_WilliePete.B_HidingProp_WilliePete_C.ExecuteUbergraph_B_HidingProp_WilliePete
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_HidingProp_WilliePete_C::ExecuteUbergraph_B_HidingProp_WilliePete(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_HidingProp_WilliePete.B_HidingProp_WilliePete_C.ExecuteUbergraph_B_HidingProp_WilliePete");

	AB_HidingProp_WilliePete_C_ExecuteUbergraph_B_HidingProp_WilliePete_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
