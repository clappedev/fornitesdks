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

// Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.DetermineFishLootTierNameAndSetLootForSpawner
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsExplosion                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName APrj_Athena_FloppingRabbit_C::DetermineFishLootTierNameAndSetLootForSpawner(bool bIsExplosion)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.DetermineFishLootTierNameAndSetLootForSpawner");

	APrj_Athena_FloppingRabbit_C_DetermineFishLootTierNameAndSetLootForSpawner_Params params;
	params.bIsExplosion = bIsExplosion;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.IgnoreTetherablePawn
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  HitActor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           isIgnored                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APrj_Athena_FloppingRabbit_C::IgnoreTetherablePawn(class AActor* HitActor, bool* isIgnored)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.IgnoreTetherablePawn");

	APrj_Athena_FloppingRabbit_C_IgnoreTetherablePawn_Params params;
	params.HitActor = HitActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (isIgnored != nullptr)
		*isIgnored = params.isIgnored;
}


// Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.UnRegisterWithGoalManager
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void APrj_Athena_FloppingRabbit_C::UnRegisterWithGoalManager()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.UnRegisterWithGoalManager");

	APrj_Athena_FloppingRabbit_C_UnRegisterWithGoalManager_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.RegisterWithGoalManager
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void APrj_Athena_FloppingRabbit_C::RegisterWithGoalManager()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.RegisterWithGoalManager");

	APrj_Athena_FloppingRabbit_C_RegisterWithGoalManager_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.AttemptTether
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  HitActor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bTethered                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APrj_Athena_FloppingRabbit_C::AttemptTether(class AActor* HitActor, bool* bTethered)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.AttemptTether");

	APrj_Athena_FloppingRabbit_C_AttemptTether_Params params;
	params.HitActor = HitActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bTethered != nullptr)
		*bTethered = params.bTethered;
}


// Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.GetSheetVals
// (Public, BlueprintCallable, BlueprintEvent)

void APrj_Athena_FloppingRabbit_C::GetSheetVals()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.GetSheetVals");

	APrj_Athena_FloppingRabbit_C_GetSheetVals_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.BigBob__FinishedFunc
// (BlueprintEvent)

void APrj_Athena_FloppingRabbit_C::BigBob__FinishedFunc()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.BigBob__FinishedFunc");

	APrj_Athena_FloppingRabbit_C_BigBob__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.BigBob__UpdateFunc
// (BlueprintEvent)

void APrj_Athena_FloppingRabbit_C::BigBob__UpdateFunc()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.BigBob__UpdateFunc");

	APrj_Athena_FloppingRabbit_C_BigBob__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void APrj_Athena_FloppingRabbit_C::Timeline_0__FinishedFunc()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.Timeline_0__FinishedFunc");

	APrj_Athena_FloppingRabbit_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void APrj_Athena_FloppingRabbit_C::Timeline_0__UpdateFunc()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.Timeline_0__UpdateFunc");

	APrj_Athena_FloppingRabbit_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.ReceiveHit
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

void APrj_Athena_FloppingRabbit_C::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.ReceiveHit");

	APrj_Athena_FloppingRabbit_C_ReceiveHit_Params params;
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


// Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void APrj_Athena_FloppingRabbit_C::BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature");

	APrj_Athena_FloppingRabbit_C_BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.FullDip
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InWorldSpawner                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APrj_Athena_FloppingRabbit_C::FullDip(bool InWorldSpawner)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.FullDip");

	APrj_Athena_FloppingRabbit_C_FullDip_Params params;
	params.InWorldSpawner = InWorldSpawner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.CatchWindow
// (BlueprintCallable, BlueprintEvent)

void APrj_Athena_FloppingRabbit_C::CatchWindow()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.CatchWindow");

	APrj_Athena_FloppingRabbit_C_CatchWindow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.TryCatch
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void APrj_Athena_FloppingRabbit_C::TryCatch()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.TryCatch");

	APrj_Athena_FloppingRabbit_C_TryCatch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.HideAndKill
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void APrj_Athena_FloppingRabbit_C::HideAndKill()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.HideAndKill");

	APrj_Athena_FloppingRabbit_C_HideAndKill_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void APrj_Athena_FloppingRabbit_C::ReceiveBeginPlay()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.ReceiveBeginPlay");

	APrj_Athena_FloppingRabbit_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.DistanceCheck
// (BlueprintCallable, BlueprintEvent)

void APrj_Athena_FloppingRabbit_C::DistanceCheck()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.DistanceCheck");

	APrj_Athena_FloppingRabbit_C_DistanceCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.ForceKill
// (BlueprintCallable, BlueprintEvent)

void APrj_Athena_FloppingRabbit_C::ForceKill()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.ForceKill");

	APrj_Athena_FloppingRabbit_C_ForceKill_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.OnExploded
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// TArray<class AActor*>          HitActors                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FHitResult>      HitResults                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void APrj_Athena_FloppingRabbit_C::OnExploded(TArray<class AActor*> HitActors, TArray<struct FHitResult> HitResults)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.OnExploded");

	APrj_Athena_FloppingRabbit_C_OnExploded_Params params;
	params.HitActors = HitActors;
	params.HitResults = HitResults;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.HitWater
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           FishSpawner                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APrj_Athena_FloppingRabbit_C::HitWater(bool FishSpawner)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.HitWater");

	APrj_Athena_FloppingRabbit_C_HitWater_Params params;
	params.FishSpawner = FishSpawner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void APrj_Athena_FloppingRabbit_C::ReceiveDestroyed()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.ReceiveDestroyed");

	APrj_Athena_FloppingRabbit_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.CheckForDip
// (BlueprintCallable, BlueprintEvent)

void APrj_Athena_FloppingRabbit_C::CheckForDip()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.CheckForDip");

	APrj_Athena_FloppingRabbit_C_CheckForDip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.CheckForHighTierSpawner
// (BlueprintCallable, BlueprintEvent)

void APrj_Athena_FloppingRabbit_C::CheckForHighTierSpawner()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.CheckForHighTierSpawner");

	APrj_Athena_FloppingRabbit_C_CheckForHighTierSpawner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.SpawnItemsFX
// (BlueprintCallable, BlueprintEvent)

void APrj_Athena_FloppingRabbit_C::SpawnItemsFX()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.SpawnItemsFX");

	APrj_Athena_FloppingRabbit_C_SpawnItemsFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.CustomPickupAttach
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPickup*             FortPickup                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APrj_Athena_FloppingRabbit_C::CustomPickupAttach(class AFortPickup* FortPickup)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.CustomPickupAttach");

	APrj_Athena_FloppingRabbit_C_CustomPickupAttach_Params params;
	params.FortPickup = FortPickup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.WriteNothingCaughtFishingAnalytic
// (BlueprintCallable, BlueprintEvent)

void APrj_Athena_FloppingRabbit_C::WriteNothingCaughtFishingAnalytic()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.WriteNothingCaughtFishingAnalytic");

	APrj_Athena_FloppingRabbit_C_WriteNothingCaughtFishingAnalytic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnExitWater__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AFortWaterBodyActor*     WaterBody                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UFortWaterInteractionComponent* WaterInteractionComponent      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bIsLastBody                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APrj_Athena_FloppingRabbit_C::BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnExitWater__DelegateSignature(class AFortWaterBodyActor* WaterBody, class UFortWaterInteractionComponent* WaterInteractionComponent, bool bIsLastBody)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnExitWater__DelegateSignature");

	APrj_Athena_FloppingRabbit_C_BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnExitWater__DelegateSignature_Params params;
	params.WaterBody = WaterBody;
	params.WaterInteractionComponent = WaterInteractionComponent;
	params.bIsLastBody = bIsLastBody;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.ReelIn
// (BlueprintCallable, BlueprintEvent)

void APrj_Athena_FloppingRabbit_C::ReelIn()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.ReelIn");

	APrj_Athena_FloppingRabbit_C_ReelIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.ServerAttemptTether
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   TetherActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APrj_Athena_FloppingRabbit_C::ServerAttemptTether(class APawn* TetherActor)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.ServerAttemptTether");

	APrj_Athena_FloppingRabbit_C_ServerAttemptTether_Params params;
	params.TetherActor = TetherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.Minigame_MoveBobber
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void APrj_Athena_FloppingRabbit_C::Minigame_MoveBobber()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.Minigame_MoveBobber");

	APrj_Athena_FloppingRabbit_C_Minigame_MoveBobber_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.DipFx
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void APrj_Athena_FloppingRabbit_C::DipFx()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.DipFx");

	APrj_Athena_FloppingRabbit_C_DipFx_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APrj_Athena_FloppingRabbit_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.ReceiveTick");

	APrj_Athena_FloppingRabbit_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.ClientReelIn
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)

void APrj_Athena_FloppingRabbit_C::ClientReelIn()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.ClientReelIn");

	APrj_Athena_FloppingRabbit_C_ClientReelIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.ToggleMiniGameSplashLoop
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           On                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APrj_Athena_FloppingRabbit_C::ToggleMiniGameSplashLoop(bool On)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.ToggleMiniGameSplashLoop");

	APrj_Athena_FloppingRabbit_C_ToggleMiniGameSplashLoop_Params params;
	params.On = On;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.ExecuteUbergraph_Prj_Athena_FloppingRabbit
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APrj_Athena_FloppingRabbit_C::ExecuteUbergraph_Prj_Athena_FloppingRabbit(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.ExecuteUbergraph_Prj_Athena_FloppingRabbit");

	APrj_Athena_FloppingRabbit_C_ExecuteUbergraph_Prj_Athena_FloppingRabbit_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
