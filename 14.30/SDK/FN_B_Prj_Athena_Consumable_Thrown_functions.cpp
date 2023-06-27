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

// Function B_Prj_Athena_Consumable_Thrown.B_Prj_Athena_Consumable_Thrown_C.OnRep_Pickup
// (BlueprintCallable, BlueprintEvent)

void AB_Prj_Athena_Consumable_Thrown_C::OnRep_Pickup()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_Consumable_Thrown.B_Prj_Athena_Consumable_Thrown_C.OnRep_Pickup");

	AB_Prj_Athena_Consumable_Thrown_C_OnRep_Pickup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Athena_Consumable_Thrown.B_Prj_Athena_Consumable_Thrown_C.OnRep_Impact Location
// (BlueprintCallable, BlueprintEvent)

void AB_Prj_Athena_Consumable_Thrown_C::OnRep_Impact_Location()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_Consumable_Thrown.B_Prj_Athena_Consumable_Thrown_C.OnRep_Impact Location");

	AB_Prj_Athena_Consumable_Thrown_C_OnRep_Impact_Location_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Athena_Consumable_Thrown.B_Prj_Athena_Consumable_Thrown_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_Prj_Athena_Consumable_Thrown_C::ReceiveBeginPlay()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_Consumable_Thrown.B_Prj_Athena_Consumable_Thrown_C.ReceiveBeginPlay");

	AB_Prj_Athena_Consumable_Thrown_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Athena_Consumable_Thrown.B_Prj_Athena_Consumable_Thrown_C.OnStop
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult              Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AB_Prj_Athena_Consumable_Thrown_C::OnStop(const struct FHitResult& Hit)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_Consumable_Thrown.B_Prj_Athena_Consumable_Thrown_C.OnStop");

	AB_Prj_Athena_Consumable_Thrown_C_OnStop_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Athena_Consumable_Thrown.B_Prj_Athena_Consumable_Thrown_C.Timeout
// (BlueprintCallable, BlueprintEvent)

void AB_Prj_Athena_Consumable_Thrown_C::Timeout()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_Consumable_Thrown.B_Prj_Athena_Consumable_Thrown_C.Timeout");

	AB_Prj_Athena_Consumable_Thrown_C_Timeout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Athena_Consumable_Thrown.B_Prj_Athena_Consumable_Thrown_C.OnHomingPassedTarget
// (Event, Public, BlueprintEvent)

void AB_Prj_Athena_Consumable_Thrown_C::OnHomingPassedTarget()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_Consumable_Thrown.B_Prj_Athena_Consumable_Thrown_C.OnHomingPassedTarget");

	AB_Prj_Athena_Consumable_Thrown_C_OnHomingPassedTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Athena_Consumable_Thrown.B_Prj_Athena_Consumable_Thrown_C.OnReachedLockTargetDistanceThreshold
// (Event, Public, BlueprintEvent)

void AB_Prj_Athena_Consumable_Thrown_C::OnReachedLockTargetDistanceThreshold()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_Consumable_Thrown.B_Prj_Athena_Consumable_Thrown_C.OnReachedLockTargetDistanceThreshold");

	AB_Prj_Athena_Consumable_Thrown_C_OnReachedLockTargetDistanceThreshold_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Athena_Consumable_Thrown.B_Prj_Athena_Consumable_Thrown_C.OnBounce
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult              Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AB_Prj_Athena_Consumable_Thrown_C::OnBounce(const struct FHitResult& Hit)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_Consumable_Thrown.B_Prj_Athena_Consumable_Thrown_C.OnBounce");

	AB_Prj_Athena_Consumable_Thrown_C_OnBounce_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Athena_Consumable_Thrown.B_Prj_Athena_Consumable_Thrown_C.OnExploded
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// TArray<class AActor*>          HitActors                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FHitResult>      HitResults                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AB_Prj_Athena_Consumable_Thrown_C::OnExploded(TArray<class AActor*> HitActors, TArray<struct FHitResult> HitResults)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_Consumable_Thrown.B_Prj_Athena_Consumable_Thrown_C.OnExploded");

	AB_Prj_Athena_Consumable_Thrown_C_OnExploded_Params params;
	params.HitActors = HitActors;
	params.HitResults = HitResults;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Athena_Consumable_Thrown.B_Prj_Athena_Consumable_Thrown_C.SpawnedItemFx
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void AB_Prj_Athena_Consumable_Thrown_C::SpawnedItemFx()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_Consumable_Thrown.B_Prj_Athena_Consumable_Thrown_C.SpawnedItemFx");

	AB_Prj_Athena_Consumable_Thrown_C_SpawnedItemFx_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Athena_Consumable_Thrown.B_Prj_Athena_Consumable_Thrown_C.Mark
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Prj_Athena_Consumable_Thrown_C::Mark(class AActor* NewParam)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_Consumable_Thrown.B_Prj_Athena_Consumable_Thrown_C.Mark");

	AB_Prj_Athena_Consumable_Thrown_C_Mark_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Athena_Consumable_Thrown.B_Prj_Athena_Consumable_Thrown_C.BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AFortWaterBodyActor*     WaterBody                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UFortWaterInteractionComponent* WaterInteractionComponent      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bIsFirstBody                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Prj_Athena_Consumable_Thrown_C::BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature(class AFortWaterBodyActor* WaterBody, class UFortWaterInteractionComponent* WaterInteractionComponent, bool bIsFirstBody)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_Consumable_Thrown.B_Prj_Athena_Consumable_Thrown_C.BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature");

	AB_Prj_Athena_Consumable_Thrown_C_BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature_Params params;
	params.WaterBody = WaterBody;
	params.WaterInteractionComponent = WaterInteractionComponent;
	params.bIsFirstBody = bIsFirstBody;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Athena_Consumable_Thrown.B_Prj_Athena_Consumable_Thrown_C.SpawnItem
// (BlueprintCallable, BlueprintEvent)

void AB_Prj_Athena_Consumable_Thrown_C::SpawnItem()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_Consumable_Thrown.B_Prj_Athena_Consumable_Thrown_C.SpawnItem");

	AB_Prj_Athena_Consumable_Thrown_C_SpawnItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Athena_Consumable_Thrown.B_Prj_Athena_Consumable_Thrown_C.WaterImpactItemFX
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void AB_Prj_Athena_Consumable_Thrown_C::WaterImpactItemFX()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_Consumable_Thrown.B_Prj_Athena_Consumable_Thrown_C.WaterImpactItemFX");

	AB_Prj_Athena_Consumable_Thrown_C_WaterImpactItemFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Athena_Consumable_Thrown.B_Prj_Athena_Consumable_Thrown_C.ExecuteUbergraph_B_Prj_Athena_Consumable_Thrown
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Prj_Athena_Consumable_Thrown_C::ExecuteUbergraph_B_Prj_Athena_Consumable_Thrown(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_Consumable_Thrown.B_Prj_Athena_Consumable_Thrown_C.ExecuteUbergraph_B_Prj_Athena_Consumable_Thrown");

	AB_Prj_Athena_Consumable_Thrown_C_ExecuteUbergraph_B_Prj_Athena_Consumable_Thrown_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
