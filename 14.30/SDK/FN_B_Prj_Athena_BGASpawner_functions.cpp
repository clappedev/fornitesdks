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

// Function B_Prj_Athena_BGASpawner.B_Prj_Athena_BGASpawner_C.CheckForWater_
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 CurrPos                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  HitActor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 PosAboveWater                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AB_Prj_Athena_BGASpawner_C::CheckForWater_(const struct FVector& CurrPos, class AActor* HitActor, struct FVector* PosAboveWater)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_BGASpawner.B_Prj_Athena_BGASpawner_C.CheckForWater_");

	AB_Prj_Athena_BGASpawner_C_CheckForWater__Params params;
	params.CurrPos = CurrPos;
	params.HitActor = HitActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PosAboveWater != nullptr)
		*PosAboveWater = params.PosAboveWater;
}


// Function B_Prj_Athena_BGASpawner.B_Prj_Athena_BGASpawner_C.GetClosestPoint
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UPrimitiveComponent*     Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 StartingPoint                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Point                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AB_Prj_Athena_BGASpawner_C::GetClosestPoint(class UPrimitiveComponent* Component, const struct FVector& StartingPoint, struct FVector* Point)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_BGASpawner.B_Prj_Athena_BGASpawner_C.GetClosestPoint");

	AB_Prj_Athena_BGASpawner_C_GetClosestPoint_Params params;
	params.Component = Component;
	params.StartingPoint = StartingPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Point != nullptr)
		*Point = params.Point;
}


// Function B_Prj_Athena_BGASpawner.B_Prj_Athena_BGASpawner_C.SpawnBGA_
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Normal                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  HitActor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     HitComp                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 Pos                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           FromWater                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* AB_Prj_Athena_BGASpawner_C::SpawnBGA_(const struct FVector& Normal, class AActor* HitActor, class UPrimitiveComponent* HitComp, const struct FVector& Pos, bool FromWater)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_BGASpawner.B_Prj_Athena_BGASpawner_C.SpawnBGA_");

	AB_Prj_Athena_BGASpawner_C_SpawnBGA__Params params;
	params.Normal = Normal;
	params.HitActor = HitActor;
	params.HitComp = HitComp;
	params.Pos = Pos;
	params.FromWater = FromWater;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function B_Prj_Athena_BGASpawner.B_Prj_Athena_BGASpawner_C.WillBounceOffTarget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult              Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AB_Prj_Athena_BGASpawner_C::WillBounceOffTarget(const struct FHitResult& Hit)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_BGASpawner.B_Prj_Athena_BGASpawner_C.WillBounceOffTarget");

	AB_Prj_Athena_BGASpawner_C_WillBounceOffTarget_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function B_Prj_Athena_BGASpawner.B_Prj_Athena_BGASpawner_C.ReceiveHit
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

void AB_Prj_Athena_BGASpawner_C::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_BGASpawner.B_Prj_Athena_BGASpawner_C.ReceiveHit");

	AB_Prj_Athena_BGASpawner_C_ReceiveHit_Params params;
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


// Function B_Prj_Athena_BGASpawner.B_Prj_Athena_BGASpawner_C.BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_1_WaterInteractionOnEnterWater__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AFortWaterBodyActor*     WaterBody                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UFortWaterInteractionComponent* WaterInteractionComponent      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bIsFirstBody                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Prj_Athena_BGASpawner_C::BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_1_WaterInteractionOnEnterWater__DelegateSignature(class AFortWaterBodyActor* WaterBody, class UFortWaterInteractionComponent* WaterInteractionComponent, bool bIsFirstBody)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_BGASpawner.B_Prj_Athena_BGASpawner_C.BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_1_WaterInteractionOnEnterWater__DelegateSignature");

	AB_Prj_Athena_BGASpawner_C_BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_1_WaterInteractionOnEnterWater__DelegateSignature_Params params;
	params.WaterBody = WaterBody;
	params.WaterInteractionComponent = WaterInteractionComponent;
	params.bIsFirstBody = bIsFirstBody;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Athena_BGASpawner.B_Prj_Athena_BGASpawner_C.Held Water Impact
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void AB_Prj_Athena_BGASpawner_C::Held_Water_Impact()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_BGASpawner.B_Prj_Athena_BGASpawner_C.Held Water Impact");

	AB_Prj_Athena_BGASpawner_C_Held_Water_Impact_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Athena_BGASpawner.B_Prj_Athena_BGASpawner_C.ExecuteUbergraph_B_Prj_Athena_BGASpawner
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Prj_Athena_BGASpawner_C::ExecuteUbergraph_B_Prj_Athena_BGASpawner(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_BGASpawner.B_Prj_Athena_BGASpawner_C.ExecuteUbergraph_B_Prj_Athena_BGASpawner");

	AB_Prj_Athena_BGASpawner_C_ExecuteUbergraph_B_Prj_Athena_BGASpawner_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
