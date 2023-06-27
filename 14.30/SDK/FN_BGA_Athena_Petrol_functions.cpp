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

// Function BGA_Athena_Petrol.BGA_Athena_Petrol_C.IgniteNearbyMaterials
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABGA_Athena_Petrol_C::IgniteNearbyMaterials()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_Petrol.BGA_Athena_Petrol_C.IgniteNearbyMaterials");

	ABGA_Athena_Petrol_C_IgniteNearbyMaterials_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Athena_Petrol.BGA_Athena_Petrol_C.Ignite Self
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABGA_Athena_Petrol_C::Ignite_Self()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_Petrol.BGA_Athena_Petrol_C.Ignite Self");

	ABGA_Athena_Petrol_C_Ignite_Self_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Athena_Petrol.BGA_Athena_Petrol_C.OnRep_Lit
// (BlueprintCallable, BlueprintEvent)

void ABGA_Athena_Petrol_C::OnRep_Lit()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_Petrol.BGA_Athena_Petrol_C.OnRep_Lit");

	ABGA_Athena_Petrol_C_OnRep_Lit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Athena_Petrol.BGA_Athena_Petrol_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABGA_Athena_Petrol_C::UserConstructionScript()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_Petrol.BGA_Athena_Petrol_C.UserConstructionScript");

	ABGA_Athena_Petrol_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Athena_Petrol.BGA_Athena_Petrol_C.ClientOnIgnite
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)

void ABGA_Athena_Petrol_C::ClientOnIgnite()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_Petrol.BGA_Athena_Petrol_C.ClientOnIgnite");

	ABGA_Athena_Petrol_C_ClientOnIgnite_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Athena_Petrol.BGA_Athena_Petrol_C.BndEvt__SphereCollisionComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABGA_Athena_Petrol_C::BndEvt__SphereCollisionComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_Petrol.BGA_Athena_Petrol_C.BndEvt__SphereCollisionComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	ABGA_Athena_Petrol_C_BndEvt__SphereCollisionComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function BGA_Athena_Petrol.BGA_Athena_Petrol_C.BndEvt__SphereCollisionComponent_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABGA_Athena_Petrol_C::BndEvt__SphereCollisionComponent_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_Petrol.BGA_Athena_Petrol_C.BndEvt__SphereCollisionComponent_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature");

	ABGA_Athena_Petrol_C_BndEvt__SphereCollisionComponent_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Athena_Petrol.BGA_Athena_Petrol_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABGA_Athena_Petrol_C::ReceiveBeginPlay()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_Petrol.BGA_Athena_Petrol_C.ReceiveBeginPlay");

	ABGA_Athena_Petrol_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Athena_Petrol.BGA_Athena_Petrol_C.InteractingWithFire
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  OverlappingActor               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              HitResult                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABGA_Athena_Petrol_C::InteractingWithFire(class AActor* OverlappingActor, const struct FHitResult& HitResult)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_Petrol.BGA_Athena_Petrol_C.InteractingWithFire");

	ABGA_Athena_Petrol_C_InteractingWithFire_Params params;
	params.OverlappingActor = OverlappingActor;
	params.HitResult = HitResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Athena_Petrol.BGA_Athena_Petrol_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void ABGA_Athena_Petrol_C::ReceiveDestroyed()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_Petrol.BGA_Athena_Petrol_C.ReceiveDestroyed");

	ABGA_Athena_Petrol_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Athena_Petrol.BGA_Athena_Petrol_C.OnCurieElementInteract_BP
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FCurieContainerHandle   CurieContainerHandle           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ElementTag                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FCurieInteractParamsHandle InteractParamsHandle           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABGA_Athena_Petrol_C::OnCurieElementInteract_BP(const struct FCurieContainerHandle& CurieContainerHandle, const struct FGameplayTag& ElementTag, const struct FCurieInteractParamsHandle& InteractParamsHandle)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_Petrol.BGA_Athena_Petrol_C.OnCurieElementInteract_BP");

	ABGA_Athena_Petrol_C_OnCurieElementInteract_BP_Params params;
	params.CurieContainerHandle = CurieContainerHandle;
	params.ElementTag = ElementTag;
	params.InteractParamsHandle = InteractParamsHandle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Athena_Petrol.BGA_Athena_Petrol_C.OnCurieStateDetached_BP
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FCurieContainerHandle   CurieContainerHandle           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            StateTag                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABGA_Athena_Petrol_C::OnCurieStateDetached_BP(const struct FCurieContainerHandle& CurieContainerHandle, const struct FGameplayTag& StateTag)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_Petrol.BGA_Athena_Petrol_C.OnCurieStateDetached_BP");

	ABGA_Athena_Petrol_C_OnCurieStateDetached_BP_Params params;
	params.CurieContainerHandle = CurieContainerHandle;
	params.StateTag = StateTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_Athena_Petrol.BGA_Athena_Petrol_C.ExecuteUbergraph_BGA_Athena_Petrol
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABGA_Athena_Petrol_C::ExecuteUbergraph_BGA_Athena_Petrol(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_Athena_Petrol.BGA_Athena_Petrol_C.ExecuteUbergraph_BGA_Athena_Petrol");

	ABGA_Athena_Petrol_C_ExecuteUbergraph_BGA_Athena_Petrol_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
