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

// Function B_Prj_Athena_Generic_CurieFireball_Parent.B_Prj_Athena_Generic_CurieFireball_Parent_C.Line Trace for Mesh Angle
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform AB_Prj_Athena_Generic_CurieFireball_Parent_C::Line_Trace_for_Mesh_Angle()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_Generic_CurieFireball_Parent.B_Prj_Athena_Generic_CurieFireball_Parent_C.Line Trace for Mesh Angle");

	AB_Prj_Athena_Generic_CurieFireball_Parent_C_Line_Trace_for_Mesh_Angle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function B_Prj_Athena_Generic_CurieFireball_Parent.B_Prj_Athena_Generic_CurieFireball_Parent_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_Prj_Athena_Generic_CurieFireball_Parent_C::ReceiveBeginPlay()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_Generic_CurieFireball_Parent.B_Prj_Athena_Generic_CurieFireball_Parent_C.ReceiveBeginPlay");

	AB_Prj_Athena_Generic_CurieFireball_Parent_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Athena_Generic_CurieFireball_Parent.B_Prj_Athena_Generic_CurieFireball_Parent_C.ReceiveHit
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

void AB_Prj_Athena_Generic_CurieFireball_Parent_C::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_Generic_CurieFireball_Parent.B_Prj_Athena_Generic_CurieFireball_Parent_C.ReceiveHit");

	AB_Prj_Athena_Generic_CurieFireball_Parent_C_ReceiveHit_Params params;
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


// Function B_Prj_Athena_Generic_CurieFireball_Parent.B_Prj_Athena_Generic_CurieFireball_Parent_C.Landed In Water
// (BlueprintCallable, BlueprintEvent)

void AB_Prj_Athena_Generic_CurieFireball_Parent_C::Landed_In_Water()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_Generic_CurieFireball_Parent.B_Prj_Athena_Generic_CurieFireball_Parent_C.Landed In Water");

	AB_Prj_Athena_Generic_CurieFireball_Parent_C_Landed_In_Water_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Athena_Generic_CurieFireball_Parent.B_Prj_Athena_Generic_CurieFireball_Parent_C.BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AFortWaterBodyActor*     WaterBody                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UFortWaterInteractionComponent* WaterInteractionComponent      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bIsFirstBody                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Prj_Athena_Generic_CurieFireball_Parent_C::BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature(class AFortWaterBodyActor* WaterBody, class UFortWaterInteractionComponent* WaterInteractionComponent, bool bIsFirstBody)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_Generic_CurieFireball_Parent.B_Prj_Athena_Generic_CurieFireball_Parent_C.BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature");

	AB_Prj_Athena_Generic_CurieFireball_Parent_C_BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature_Params params;
	params.WaterBody = WaterBody;
	params.WaterInteractionComponent = WaterInteractionComponent;
	params.bIsFirstBody = bIsFirstBody;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Athena_Generic_CurieFireball_Parent.B_Prj_Athena_Generic_CurieFireball_Parent_C.SpawnCurieBGA
// (BlueprintCallable, BlueprintEvent)

void AB_Prj_Athena_Generic_CurieFireball_Parent_C::SpawnCurieBGA()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_Generic_CurieFireball_Parent.B_Prj_Athena_Generic_CurieFireball_Parent_C.SpawnCurieBGA");

	AB_Prj_Athena_Generic_CurieFireball_Parent_C_SpawnCurieBGA_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Athena_Generic_CurieFireball_Parent.B_Prj_Athena_Generic_CurieFireball_Parent_C.ExecuteUbergraph_B_Prj_Athena_Generic_CurieFireball_Parent
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Prj_Athena_Generic_CurieFireball_Parent_C::ExecuteUbergraph_B_Prj_Athena_Generic_CurieFireball_Parent(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_Generic_CurieFireball_Parent.B_Prj_Athena_Generic_CurieFireball_Parent_C.ExecuteUbergraph_B_Prj_Athena_Generic_CurieFireball_Parent");

	AB_Prj_Athena_Generic_CurieFireball_Parent_C_ExecuteUbergraph_B_Prj_Athena_Generic_CurieFireball_Parent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
