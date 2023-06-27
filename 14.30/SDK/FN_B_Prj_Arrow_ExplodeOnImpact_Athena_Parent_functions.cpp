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

// Function B_Prj_Arrow_ExplodeOnImpact_Athena_Parent.B_Prj_Arrow_ExplodeOnImpact_Athena_Parent_C.OnRep_HitLocation
// (HasDefaults, BlueprintCallable, BlueprintEvent)

void AB_Prj_Arrow_ExplodeOnImpact_Athena_Parent_C::OnRep_HitLocation()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Arrow_ExplodeOnImpact_Athena_Parent.B_Prj_Arrow_ExplodeOnImpact_Athena_Parent_C.OnRep_HitLocation");

	AB_Prj_Arrow_ExplodeOnImpact_Athena_Parent_C_OnRep_HitLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Arrow_ExplodeOnImpact_Athena_Parent.B_Prj_Arrow_ExplodeOnImpact_Athena_Parent_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AB_Prj_Arrow_ExplodeOnImpact_Athena_Parent_C::UserConstructionScript()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Arrow_ExplodeOnImpact_Athena_Parent.B_Prj_Arrow_ExplodeOnImpact_Athena_Parent_C.UserConstructionScript");

	AB_Prj_Arrow_ExplodeOnImpact_Athena_Parent_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Arrow_ExplodeOnImpact_Athena_Parent.B_Prj_Arrow_ExplodeOnImpact_Athena_Parent_C.Event_Building_Actor_Destroyed
// (Public, BlueprintCallable, BlueprintEvent)

void AB_Prj_Arrow_ExplodeOnImpact_Athena_Parent_C::Event_Building_Actor_Destroyed()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Arrow_ExplodeOnImpact_Athena_Parent.B_Prj_Arrow_ExplodeOnImpact_Athena_Parent_C.Event_Building_Actor_Destroyed");

	AB_Prj_Arrow_ExplodeOnImpact_Athena_Parent_C_Event_Building_Actor_Destroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Arrow_ExplodeOnImpact_Athena_Parent.B_Prj_Arrow_ExplodeOnImpact_Athena_Parent_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_Prj_Arrow_ExplodeOnImpact_Athena_Parent_C::ReceiveBeginPlay()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Arrow_ExplodeOnImpact_Athena_Parent.B_Prj_Arrow_ExplodeOnImpact_Athena_Parent_C.ReceiveBeginPlay");

	AB_Prj_Arrow_ExplodeOnImpact_Athena_Parent_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Arrow_ExplodeOnImpact_Athena_Parent.B_Prj_Arrow_ExplodeOnImpact_Athena_Parent_C.OnTouched
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FHitResult              HitResult                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           bIsOverlap                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Prj_Arrow_ExplodeOnImpact_Athena_Parent_C::OnTouched(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FHitResult& HitResult, bool bIsOverlap)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Arrow_ExplodeOnImpact_Athena_Parent.B_Prj_Arrow_ExplodeOnImpact_Athena_Parent_C.OnTouched");

	AB_Prj_Arrow_ExplodeOnImpact_Athena_Parent_C_OnTouched_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.HitResult = HitResult;
	params.bIsOverlap = bIsOverlap;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Arrow_ExplodeOnImpact_Athena_Parent.B_Prj_Arrow_ExplodeOnImpact_Athena_Parent_C.BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AFortWaterBodyActor*     WaterBody                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UFortWaterInteractionComponent* WaterInteractionComponent      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bIsFirstBody                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Prj_Arrow_ExplodeOnImpact_Athena_Parent_C::BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature(class AFortWaterBodyActor* WaterBody, class UFortWaterInteractionComponent* WaterInteractionComponent, bool bIsFirstBody)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Arrow_ExplodeOnImpact_Athena_Parent.B_Prj_Arrow_ExplodeOnImpact_Athena_Parent_C.BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature");

	AB_Prj_Arrow_ExplodeOnImpact_Athena_Parent_C_BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature_Params params;
	params.WaterBody = WaterBody;
	params.WaterInteractionComponent = WaterInteractionComponent;
	params.bIsFirstBody = bIsFirstBody;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Arrow_ExplodeOnImpact_Athena_Parent.B_Prj_Arrow_ExplodeOnImpact_Athena_Parent_C.ExecuteUbergraph_B_Prj_Arrow_ExplodeOnImpact_Athena_Parent
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Prj_Arrow_ExplodeOnImpact_Athena_Parent_C::ExecuteUbergraph_B_Prj_Arrow_ExplodeOnImpact_Athena_Parent(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Arrow_ExplodeOnImpact_Athena_Parent.B_Prj_Arrow_ExplodeOnImpact_Athena_Parent_C.ExecuteUbergraph_B_Prj_Arrow_ExplodeOnImpact_Athena_Parent");

	AB_Prj_Arrow_ExplodeOnImpact_Athena_Parent_C_ExecuteUbergraph_B_Prj_Arrow_ExplodeOnImpact_Athena_Parent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
