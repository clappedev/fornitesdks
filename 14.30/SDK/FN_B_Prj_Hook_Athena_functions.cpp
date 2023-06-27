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

// Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.GetVehicleLaunchMult
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AB_Prj_Hook_Athena_C::GetVehicleLaunchMult()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.GetVehicleLaunchMult");

	AB_Prj_Hook_Athena_C_GetVehicleLaunchMult_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.GetVehicleArc
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AB_Prj_Hook_Athena_C::GetVehicleArc()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.GetVehicleArc");

	AB_Prj_Hook_Athena_C_GetVehicleArc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.MomentumCheck
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 A                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 A2                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector AB_Prj_Hook_Athena_C::MomentumCheck(const struct FVector& A, const struct FVector& A2)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.MomentumCheck");

	AB_Prj_Hook_Athena_C_MomentumCheck_Params params;
	params.A = A;
	params.A2 = A2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.GiveQuestCredit
// (Public, BlueprintCallable, BlueprintEvent)

void AB_Prj_Hook_Athena_C::GiveQuestCredit()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.GiveQuestCredit");

	AB_Prj_Hook_Athena_C_GiveQuestCredit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.SpawnRope
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerPawn*         PlayerPawn                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AB_HookGunRope_C*        RopeSpawned                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AB_Prj_Hook_Athena_C::SpawnRope(class AFortPlayerPawn* PlayerPawn, class AB_HookGunRope_C** RopeSpawned)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.SpawnRope");

	AB_Prj_Hook_Athena_C_SpawnRope_Params params;
	params.PlayerPawn = PlayerPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RopeSpawned != nullptr)
		*RopeSpawned = params.RopeSpawned;
}


// Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.JackalCheck
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AB_Prj_Hook_Athena_C::JackalCheck()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.JackalCheck");

	AB_Prj_Hook_Athena_C_JackalCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.HandleLaunch
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           JumpPadding_                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AB_Prj_Hook_Athena_C::HandleLaunch(bool* JumpPadding_)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.HandleLaunch");

	AB_Prj_Hook_Athena_C_HandleLaunch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (JumpPadding_ != nullptr)
		*JumpPadding_ = params.JumpPadding_;
}


// Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.OnRep_Momentum
// (BlueprintCallable, BlueprintEvent)

void AB_Prj_Hook_Athena_C::OnRep_Momentum()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.OnRep_Momentum");

	AB_Prj_Hook_Athena_C_OnRep_Momentum_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.HandleMomentum
// (Public, BlueprintCallable, BlueprintEvent)

void AB_Prj_Hook_Athena_C::HandleMomentum()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.HandleMomentum");

	AB_Prj_Hook_Athena_C_HandleMomentum_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.HandleStuckProjectiles
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Object                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AB_Prj_Hook_Athena_C::HandleStuckProjectiles(class UObject* Object, class UPrimitiveComponent* Component)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.HandleStuckProjectiles");

	AB_Prj_Hook_Athena_C_HandleStuckProjectiles_Params params;
	params.Object = Object;
	params.Component = Component;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.OnRep_StruckActor
// (BlueprintCallable, BlueprintEvent)

void AB_Prj_Hook_Athena_C::OnRep_StruckActor()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.OnRep_StruckActor");

	AB_Prj_Hook_Athena_C_OnRep_StruckActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.HandleStuckSupplyDrop
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Object                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AB_Prj_Hook_Athena_C::HandleStuckSupplyDrop(class UObject* Object, class UPrimitiveComponent* Component)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.HandleStuckSupplyDrop");

	AB_Prj_Hook_Athena_C_HandleStuckSupplyDrop_Params params;
	params.Object = Object;
	params.Component = Component;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.HandleStuckBuilding
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Object                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AB_Prj_Hook_Athena_C::HandleStuckBuilding(class UObject* Object, class UPrimitiveComponent* Component)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.HandleStuckBuilding");

	AB_Prj_Hook_Athena_C_HandleStuckBuilding_Params params;
	params.Object = Object;
	params.Component = Component;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.HandleStuckVehicle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Object                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AB_Prj_Hook_Athena_C::HandleStuckVehicle(class UObject* Object, class UPrimitiveComponent* Component)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.HandleStuckVehicle");

	AB_Prj_Hook_Athena_C_HandleStuckVehicle_Params params;
	params.Object = Object;
	params.Component = Component;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.HandleSticks
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Object                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AB_Prj_Hook_Athena_C::HandleSticks(class UObject* Object, class UPrimitiveComponent* Component)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.HandleSticks");

	AB_Prj_Hook_Athena_C_HandleSticks_Params params;
	params.Object = Object;
	params.Component = Component;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.PickGrappleMontage
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          PitchAngle                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           InHoverboard                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   SectionName                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AB_Prj_Hook_Athena_C::PickGrappleMontage(float PitchAngle, bool InHoverboard, struct FName* SectionName)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.PickGrappleMontage");

	AB_Prj_Hook_Athena_C_PickGrappleMontage_Params params;
	params.PitchAngle = PitchAngle;
	params.InHoverboard = InHoverboard;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SectionName != nullptr)
		*SectionName = params.SectionName;
}


// Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.PickGrappleMontageSection
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          PitchAngle                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   SectionName                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AB_Prj_Hook_Athena_C::PickGrappleMontageSection(float PitchAngle, struct FName* SectionName)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.PickGrappleMontageSection");

	AB_Prj_Hook_Athena_C_PickGrappleMontageSection_Params params;
	params.PitchAngle = PitchAngle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SectionName != nullptr)
		*SectionName = params.SectionName;
}


// Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.OnRep_HookStopped
// (BlueprintCallable, BlueprintEvent)

void AB_Prj_Hook_Athena_C::OnRep_HookStopped()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.OnRep_HookStopped");

	AB_Prj_Hook_Athena_C_OnRep_HookStopped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.OnRep_Target
// (BlueprintCallable, BlueprintEvent)

void AB_Prj_Hook_Athena_C::OnRep_Target()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.OnRep_Target");

	AB_Prj_Hook_Athena_C_OnRep_Target_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.CalculateYankForce
// (Public, BlueprintCallable, BlueprintEvent)

void AB_Prj_Hook_Athena_C::CalculateYankForce()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.CalculateYankForce");

	AB_Prj_Hook_Athena_C_CalculateYankForce_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.IncapacitateTarget
// (Public, BlueprintCallable, BlueprintEvent)

void AB_Prj_Hook_Athena_C::IncapacitateTarget()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.IncapacitateTarget");

	AB_Prj_Hook_Athena_C_IncapacitateTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.HandleHits
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult              Hit                            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class AActor*                  Target                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AB_Prj_Hook_Athena_C::HandleHits(const struct FHitResult& Hit, class AActor** Target)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.HandleHits");

	AB_Prj_Hook_Athena_C_HandleHits_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Target != nullptr)
		*Target = params.Target;
}


// Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.PlayStickSounds
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  HitActor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Prj_Hook_Athena_C::PlayStickSounds(const struct FVector& Location, class AActor* HitActor)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.PlayStickSounds");

	AB_Prj_Hook_Athena_C_PlayStickSounds_Params params;
	params.Location = Location;
	params.HitActor = HitActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AB_Prj_Hook_Athena_C::UserConstructionScript()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.UserConstructionScript");

	AB_Prj_Hook_Athena_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.OnNotifyEnd_0A1B172F45DE2A614770489FAD619748
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Prj_Hook_Athena_C::OnNotifyEnd_0A1B172F45DE2A614770489FAD619748(const struct FName& NotifyName)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.OnNotifyEnd_0A1B172F45DE2A614770489FAD619748");

	AB_Prj_Hook_Athena_C_OnNotifyEnd_0A1B172F45DE2A614770489FAD619748_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.OnNotifyBegin_0A1B172F45DE2A614770489FAD619748
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Prj_Hook_Athena_C::OnNotifyBegin_0A1B172F45DE2A614770489FAD619748(const struct FName& NotifyName)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.OnNotifyBegin_0A1B172F45DE2A614770489FAD619748");

	AB_Prj_Hook_Athena_C_OnNotifyBegin_0A1B172F45DE2A614770489FAD619748_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.OnInterrupted_0A1B172F45DE2A614770489FAD619748
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Prj_Hook_Athena_C::OnInterrupted_0A1B172F45DE2A614770489FAD619748(const struct FName& NotifyName)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.OnInterrupted_0A1B172F45DE2A614770489FAD619748");

	AB_Prj_Hook_Athena_C_OnInterrupted_0A1B172F45DE2A614770489FAD619748_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.OnBlendOut_0A1B172F45DE2A614770489FAD619748
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Prj_Hook_Athena_C::OnBlendOut_0A1B172F45DE2A614770489FAD619748(const struct FName& NotifyName)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.OnBlendOut_0A1B172F45DE2A614770489FAD619748");

	AB_Prj_Hook_Athena_C_OnBlendOut_0A1B172F45DE2A614770489FAD619748_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.OnCompleted_0A1B172F45DE2A614770489FAD619748
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Prj_Hook_Athena_C::OnCompleted_0A1B172F45DE2A614770489FAD619748(const struct FName& NotifyName)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.OnCompleted_0A1B172F45DE2A614770489FAD619748");

	AB_Prj_Hook_Athena_C_OnCompleted_0A1B172F45DE2A614770489FAD619748_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.OnNotifyEnd_46D1167E4A05BB9A8529A6981DFAD6A4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Prj_Hook_Athena_C::OnNotifyEnd_46D1167E4A05BB9A8529A6981DFAD6A4(const struct FName& NotifyName)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.OnNotifyEnd_46D1167E4A05BB9A8529A6981DFAD6A4");

	AB_Prj_Hook_Athena_C_OnNotifyEnd_46D1167E4A05BB9A8529A6981DFAD6A4_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.OnNotifyBegin_46D1167E4A05BB9A8529A6981DFAD6A4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Prj_Hook_Athena_C::OnNotifyBegin_46D1167E4A05BB9A8529A6981DFAD6A4(const struct FName& NotifyName)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.OnNotifyBegin_46D1167E4A05BB9A8529A6981DFAD6A4");

	AB_Prj_Hook_Athena_C_OnNotifyBegin_46D1167E4A05BB9A8529A6981DFAD6A4_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.OnInterrupted_46D1167E4A05BB9A8529A6981DFAD6A4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Prj_Hook_Athena_C::OnInterrupted_46D1167E4A05BB9A8529A6981DFAD6A4(const struct FName& NotifyName)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.OnInterrupted_46D1167E4A05BB9A8529A6981DFAD6A4");

	AB_Prj_Hook_Athena_C_OnInterrupted_46D1167E4A05BB9A8529A6981DFAD6A4_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.OnBlendOut_46D1167E4A05BB9A8529A6981DFAD6A4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Prj_Hook_Athena_C::OnBlendOut_46D1167E4A05BB9A8529A6981DFAD6A4(const struct FName& NotifyName)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.OnBlendOut_46D1167E4A05BB9A8529A6981DFAD6A4");

	AB_Prj_Hook_Athena_C_OnBlendOut_46D1167E4A05BB9A8529A6981DFAD6A4_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.OnCompleted_46D1167E4A05BB9A8529A6981DFAD6A4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Prj_Hook_Athena_C::OnCompleted_46D1167E4A05BB9A8529A6981DFAD6A4(const struct FName& NotifyName)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.OnCompleted_46D1167E4A05BB9A8529A6981DFAD6A4");

	AB_Prj_Hook_Athena_C_OnCompleted_46D1167E4A05BB9A8529A6981DFAD6A4_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.OnNotifyEnd_93AE81F64BBD13E0E55C399F05E160E3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Prj_Hook_Athena_C::OnNotifyEnd_93AE81F64BBD13E0E55C399F05E160E3(const struct FName& NotifyName)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.OnNotifyEnd_93AE81F64BBD13E0E55C399F05E160E3");

	AB_Prj_Hook_Athena_C_OnNotifyEnd_93AE81F64BBD13E0E55C399F05E160E3_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.OnNotifyBegin_93AE81F64BBD13E0E55C399F05E160E3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Prj_Hook_Athena_C::OnNotifyBegin_93AE81F64BBD13E0E55C399F05E160E3(const struct FName& NotifyName)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.OnNotifyBegin_93AE81F64BBD13E0E55C399F05E160E3");

	AB_Prj_Hook_Athena_C_OnNotifyBegin_93AE81F64BBD13E0E55C399F05E160E3_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.OnInterrupted_93AE81F64BBD13E0E55C399F05E160E3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Prj_Hook_Athena_C::OnInterrupted_93AE81F64BBD13E0E55C399F05E160E3(const struct FName& NotifyName)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.OnInterrupted_93AE81F64BBD13E0E55C399F05E160E3");

	AB_Prj_Hook_Athena_C_OnInterrupted_93AE81F64BBD13E0E55C399F05E160E3_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.OnBlendOut_93AE81F64BBD13E0E55C399F05E160E3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Prj_Hook_Athena_C::OnBlendOut_93AE81F64BBD13E0E55C399F05E160E3(const struct FName& NotifyName)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.OnBlendOut_93AE81F64BBD13E0E55C399F05E160E3");

	AB_Prj_Hook_Athena_C_OnBlendOut_93AE81F64BBD13E0E55C399F05E160E3_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.OnCompleted_93AE81F64BBD13E0E55C399F05E160E3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Prj_Hook_Athena_C::OnCompleted_93AE81F64BBD13E0E55C399F05E160E3(const struct FName& NotifyName)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.OnCompleted_93AE81F64BBD13E0E55C399F05E160E3");

	AB_Prj_Hook_Athena_C_OnCompleted_93AE81F64BBD13E0E55C399F05E160E3_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_Prj_Hook_Athena_C::ReceiveBeginPlay()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.ReceiveBeginPlay");

	AB_Prj_Hook_Athena_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void AB_Prj_Hook_Athena_C::ReceiveDestroyed()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.ReceiveDestroyed");

	AB_Prj_Hook_Athena_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.Travel
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 HitLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Prj_Hook_Athena_C::Travel(const struct FVector& HitLocation)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.Travel");

	AB_Prj_Hook_Athena_C_Travel_Params params;
	params.HitLocation = HitLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.WeaponCheck
// (BlueprintCallable, BlueprintEvent)

void AB_Prj_Hook_Athena_C::WeaponCheck()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.WeaponCheck");

	AB_Prj_Hook_Athena_C_WeaponCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.ReceiveHit
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     MyComp                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  Other                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bSelfMoved                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitNormal                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 NormalImpulse                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AB_Prj_Hook_Athena_C::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.ReceiveHit");

	AB_Prj_Hook_Athena_C_ReceiveHit_Params params;
	params.MyComp = MyComp;
	params.Other = Other;
	params.OtherComp = OtherComp;
	params.bSelfMoved = bSelfMoved;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.GrappleVehicle
// (BlueprintCallable, BlueprintEvent)

void AB_Prj_Hook_Athena_C::GrappleVehicle()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.GrappleVehicle");

	AB_Prj_Hook_Athena_C_GrappleVehicle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.LaunchCheck
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void AB_Prj_Hook_Athena_C::LaunchCheck()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.LaunchCheck");

	AB_Prj_Hook_Athena_C_LaunchCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AFortWaterBodyActor*     WaterBody                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UFortWaterInteractionComponent* WaterInteractionComponent      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bIsFirstBody                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Prj_Hook_Athena_C::BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature(class AFortWaterBodyActor* WaterBody, class UFortWaterInteractionComponent* WaterInteractionComponent, bool bIsFirstBody)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature");

	AB_Prj_Hook_Athena_C_BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature_Params params;
	params.WaterBody = WaterBody;
	params.WaterInteractionComponent = WaterInteractionComponent;
	params.bIsFirstBody = bIsFirstBody;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.Grapple
// (BlueprintCallable, BlueprintEvent)

void AB_Prj_Hook_Athena_C::Grapple()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.Grapple");

	AB_Prj_Hook_Athena_C_Grapple_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.ExecuteUbergraph_B_Prj_Hook_Athena
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Prj_Hook_Athena_C::ExecuteUbergraph_B_Prj_Hook_Athena(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Hook_Athena.B_Prj_Hook_Athena_C.ExecuteUbergraph_B_Prj_Hook_Athena");

	AB_Prj_Hook_Athena_C_ExecuteUbergraph_B_Prj_Hook_Athena_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
