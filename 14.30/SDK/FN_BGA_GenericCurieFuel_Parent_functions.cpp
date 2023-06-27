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

// Function BGA_GenericCurieFuel_Parent.BGA_GenericCurieFuel_Parent_C.ShouldPlayNativeCurieFX
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// EFortCurieNativeFXType         FXType                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FFortNativeCurieFXResponse OutResponse                    (Parm, OutParm)

void ABGA_GenericCurieFuel_Parent_C::ShouldPlayNativeCurieFX(EFortCurieNativeFXType FXType, struct FFortNativeCurieFXResponse* OutResponse)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_GenericCurieFuel_Parent.BGA_GenericCurieFuel_Parent_C.ShouldPlayNativeCurieFX");

	ABGA_GenericCurieFuel_Parent_C_ShouldPlayNativeCurieFX_Params params;
	params.FXType = FXType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutResponse != nullptr)
		*OutResponse = params.OutResponse;
}


// Function BGA_GenericCurieFuel_Parent.BGA_GenericCurieFuel_Parent_C.IgniteNearbyMaterials
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 SpherePos                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABGA_GenericCurieFuel_Parent_C::IgniteNearbyMaterials(const struct FVector& SpherePos)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_GenericCurieFuel_Parent.BGA_GenericCurieFuel_Parent_C.IgniteNearbyMaterials");

	ABGA_GenericCurieFuel_Parent_C_IgniteNearbyMaterials_Params params;
	params.SpherePos = SpherePos;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_GenericCurieFuel_Parent.BGA_GenericCurieFuel_Parent_C.OnRep_ResumeSimulation
// (BlueprintCallable, BlueprintEvent)

void ABGA_GenericCurieFuel_Parent_C::OnRep_ResumeSimulation()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_GenericCurieFuel_Parent.BGA_GenericCurieFuel_Parent_C.OnRep_ResumeSimulation");

	ABGA_GenericCurieFuel_Parent_C_OnRep_ResumeSimulation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_GenericCurieFuel_Parent.BGA_GenericCurieFuel_Parent_C.HitBuildingActor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 ObjectRef                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     PrimitiveObjectRef             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABGA_GenericCurieFuel_Parent_C::HitBuildingActor(class UObject* ObjectRef, class UPrimitiveComponent* PrimitiveObjectRef, bool* Success)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_GenericCurieFuel_Parent.BGA_GenericCurieFuel_Parent_C.HitBuildingActor");

	ABGA_GenericCurieFuel_Parent_C_HitBuildingActor_Params params;
	params.ObjectRef = ObjectRef;
	params.PrimitiveObjectRef = PrimitiveObjectRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function BGA_GenericCurieFuel_Parent.BGA_GenericCurieFuel_Parent_C.HitBuildingWall
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 ObjectRef                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     PrimitiveObjectRef             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABGA_GenericCurieFuel_Parent_C::HitBuildingWall(class UObject* ObjectRef, class UPrimitiveComponent* PrimitiveObjectRef, bool* Success)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_GenericCurieFuel_Parent.BGA_GenericCurieFuel_Parent_C.HitBuildingWall");

	ABGA_GenericCurieFuel_Parent_C_HitBuildingWall_Params params;
	params.ObjectRef = ObjectRef;
	params.PrimitiveObjectRef = PrimitiveObjectRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function BGA_GenericCurieFuel_Parent.BGA_GenericCurieFuel_Parent_C.HitVehicle
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 ObjectRef                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     PrimitiveObjectRef             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABGA_GenericCurieFuel_Parent_C::HitVehicle(class UObject* ObjectRef, class UPrimitiveComponent* PrimitiveObjectRef, bool* Success)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_GenericCurieFuel_Parent.BGA_GenericCurieFuel_Parent_C.HitVehicle");

	ABGA_GenericCurieFuel_Parent_C_HitVehicle_Params params;
	params.ObjectRef = ObjectRef;
	params.PrimitiveObjectRef = PrimitiveObjectRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function BGA_GenericCurieFuel_Parent.BGA_GenericCurieFuel_Parent_C.HandleHits
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 ObjectRef                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     PrimitiveObjectRef             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABGA_GenericCurieFuel_Parent_C::HandleHits(class UObject* ObjectRef, class UPrimitiveComponent* PrimitiveObjectRef)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_GenericCurieFuel_Parent.BGA_GenericCurieFuel_Parent_C.HandleHits");

	ABGA_GenericCurieFuel_Parent_C_HandleHits_Params params;
	params.ObjectRef = ObjectRef;
	params.PrimitiveObjectRef = PrimitiveObjectRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_GenericCurieFuel_Parent.BGA_GenericCurieFuel_Parent_C.SelfIgnite
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABGA_GenericCurieFuel_Parent_C::SelfIgnite()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_GenericCurieFuel_Parent.BGA_GenericCurieFuel_Parent_C.SelfIgnite");

	ABGA_GenericCurieFuel_Parent_C_SelfIgnite_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_GenericCurieFuel_Parent.BGA_GenericCurieFuel_Parent_C.OnCurieActive_112B241847E303B58BF962A699068D1C
// (BlueprintCallable, BlueprintEvent)

void ABGA_GenericCurieFuel_Parent_C::OnCurieActive_112B241847E303B58BF962A699068D1C()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_GenericCurieFuel_Parent.BGA_GenericCurieFuel_Parent_C.OnCurieActive_112B241847E303B58BF962A699068D1C");

	ABGA_GenericCurieFuel_Parent_C_OnCurieActive_112B241847E303B58BF962A699068D1C_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_GenericCurieFuel_Parent.BGA_GenericCurieFuel_Parent_C.AttachedComponentDied
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DamagedActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AController*             InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     FHitComponent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   BoneName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Momentum                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABGA_GenericCurieFuel_Parent_C::AttachedComponentDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, const struct FName& BoneName, const struct FVector& Momentum)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_GenericCurieFuel_Parent.BGA_GenericCurieFuel_Parent_C.AttachedComponentDied");

	ABGA_GenericCurieFuel_Parent_C_AttachedComponentDied_Params params;
	params.DamagedActor = DamagedActor;
	params.Damage = Damage;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;
	params.HitLocation = HitLocation;
	params.FHitComponent = FHitComponent;
	params.BoneName = BoneName;
	params.Momentum = Momentum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_GenericCurieFuel_Parent.BGA_GenericCurieFuel_Parent_C.BaseDied
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DestroyedActor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABGA_GenericCurieFuel_Parent_C::BaseDied(class AActor* DestroyedActor)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_GenericCurieFuel_Parent.BGA_GenericCurieFuel_Parent_C.BaseDied");

	ABGA_GenericCurieFuel_Parent_C_BaseDied_Params params;
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_GenericCurieFuel_Parent.BGA_GenericCurieFuel_Parent_C.BndEvt__FortProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult              ImpactResult                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 ImpactVelocity                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void ABGA_GenericCurieFuel_Parent_C::BndEvt__FortProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature(const struct FHitResult& ImpactResult, const struct FVector& ImpactVelocity)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_GenericCurieFuel_Parent.BGA_GenericCurieFuel_Parent_C.BndEvt__FortProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature");

	ABGA_GenericCurieFuel_Parent_C_BndEvt__FortProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature_Params params;
	params.ImpactResult = ImpactResult;
	params.ImpactVelocity = ImpactVelocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_GenericCurieFuel_Parent.BGA_GenericCurieFuel_Parent_C.OnCurieElementDetached_BP
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FCurieContainerHandle   CurieContainerHandle           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ElementTag                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABGA_GenericCurieFuel_Parent_C::OnCurieElementDetached_BP(const struct FCurieContainerHandle& CurieContainerHandle, const struct FGameplayTag& ElementTag)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_GenericCurieFuel_Parent.BGA_GenericCurieFuel_Parent_C.OnCurieElementDetached_BP");

	ABGA_GenericCurieFuel_Parent_C_OnCurieElementDetached_BP_Params params;
	params.CurieContainerHandle = CurieContainerHandle;
	params.ElementTag = ElementTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_GenericCurieFuel_Parent.BGA_GenericCurieFuel_Parent_C.ReceiveHit
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

void ABGA_GenericCurieFuel_Parent_C::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_GenericCurieFuel_Parent.BGA_GenericCurieFuel_Parent_C.ReceiveHit");

	ABGA_GenericCurieFuel_Parent_C_ReceiveHit_Params params;
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


// Function BGA_GenericCurieFuel_Parent.BGA_GenericCurieFuel_Parent_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABGA_GenericCurieFuel_Parent_C::ReceiveBeginPlay()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_GenericCurieFuel_Parent.BGA_GenericCurieFuel_Parent_C.ReceiveBeginPlay");

	ABGA_GenericCurieFuel_Parent_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_GenericCurieFuel_Parent.BGA_GenericCurieFuel_Parent_C.ExecuteUbergraph_BGA_GenericCurieFuel_Parent
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABGA_GenericCurieFuel_Parent_C::ExecuteUbergraph_BGA_GenericCurieFuel_Parent(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_GenericCurieFuel_Parent.BGA_GenericCurieFuel_Parent_C.ExecuteUbergraph_BGA_GenericCurieFuel_Parent");

	ABGA_GenericCurieFuel_Parent_C_ExecuteUbergraph_BGA_GenericCurieFuel_Parent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
