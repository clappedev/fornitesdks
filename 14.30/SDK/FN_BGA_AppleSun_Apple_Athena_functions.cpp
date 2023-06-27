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

// Function BGA_AppleSun_Apple_Athena.BGA_AppleSun_Apple_Athena_C.Get Launch Reference Vector
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter*              Fort_Pawn                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ABGA_AppleSun_Apple_Athena_C::Get_Launch_Reference_Vector(class ACharacter* Fort_Pawn)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_AppleSun_Apple_Athena.BGA_AppleSun_Apple_Athena_C.Get Launch Reference Vector");

	ABGA_AppleSun_Apple_Athena_C_Get_Launch_Reference_Vector_Params params;
	params.Fort_Pawn = Fort_Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BGA_AppleSun_Apple_Athena.BGA_AppleSun_Apple_Athena_C.CheckForSpyPerk
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           HasPerk                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABGA_AppleSun_Apple_Athena_C::CheckForSpyPerk(bool* HasPerk)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_AppleSun_Apple_Athena.BGA_AppleSun_Apple_Athena_C.CheckForSpyPerk");

	ABGA_AppleSun_Apple_Athena_C_CheckForSpyPerk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HasPerk != nullptr)
		*HasPerk = params.HasPerk;
}


// Function BGA_AppleSun_Apple_Athena.BGA_AppleSun_Apple_Athena_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABGA_AppleSun_Apple_Athena_C::UserConstructionScript()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_AppleSun_Apple_Athena.BGA_AppleSun_Apple_Athena_C.UserConstructionScript");

	ABGA_AppleSun_Apple_Athena_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_AppleSun_Apple_Athena.BGA_AppleSun_Apple_Athena_C.BeginDeflate__FinishedFunc
// (BlueprintEvent)

void ABGA_AppleSun_Apple_Athena_C::BeginDeflate__FinishedFunc()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_AppleSun_Apple_Athena.BGA_AppleSun_Apple_Athena_C.BeginDeflate__FinishedFunc");

	ABGA_AppleSun_Apple_Athena_C_BeginDeflate__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_AppleSun_Apple_Athena.BGA_AppleSun_Apple_Athena_C.BeginDeflate__UpdateFunc
// (BlueprintEvent)

void ABGA_AppleSun_Apple_Athena_C::BeginDeflate__UpdateFunc()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_AppleSun_Apple_Athena.BGA_AppleSun_Apple_Athena_C.BeginDeflate__UpdateFunc");

	ABGA_AppleSun_Apple_Athena_C_BeginDeflate__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_AppleSun_Apple_Athena.BGA_AppleSun_Apple_Athena_C.Destroy__FinishedFunc
// (BlueprintEvent)

void ABGA_AppleSun_Apple_Athena_C::Destroy__FinishedFunc()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_AppleSun_Apple_Athena.BGA_AppleSun_Apple_Athena_C.Destroy__FinishedFunc");

	ABGA_AppleSun_Apple_Athena_C_Destroy__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_AppleSun_Apple_Athena.BGA_AppleSun_Apple_Athena_C.Destroy__UpdateFunc
// (BlueprintEvent)

void ABGA_AppleSun_Apple_Athena_C::Destroy__UpdateFunc()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_AppleSun_Apple_Athena.BGA_AppleSun_Apple_Athena_C.Destroy__UpdateFunc");

	ABGA_AppleSun_Apple_Athena_C_Destroy__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_AppleSun_Apple_Athena.BGA_AppleSun_Apple_Athena_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABGA_AppleSun_Apple_Athena_C::ReceiveBeginPlay()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_AppleSun_Apple_Athena.BGA_AppleSun_Apple_Athena_C.ReceiveBeginPlay");

	ABGA_AppleSun_Apple_Athena_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_AppleSun_Apple_Athena.BGA_AppleSun_Apple_Athena_C.BounceMulticast
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 position                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          BounceIntensity                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABGA_AppleSun_Apple_Athena_C::BounceMulticast(const struct FVector& position, float BounceIntensity)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_AppleSun_Apple_Athena.BGA_AppleSun_Apple_Athena_C.BounceMulticast");

	ABGA_AppleSun_Apple_Athena_C_BounceMulticast_Params params;
	params.position = position;
	params.BounceIntensity = BounceIntensity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_AppleSun_Apple_Athena.BGA_AppleSun_Apple_Athena_C.DespawnTell
// (BlueprintCallable, BlueprintEvent)

void ABGA_AppleSun_Apple_Athena_C::DespawnTell()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_AppleSun_Apple_Athena.BGA_AppleSun_Apple_Athena_C.DespawnTell");

	ABGA_AppleSun_Apple_Athena_C_DespawnTell_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_AppleSun_Apple_Athena.BGA_AppleSun_Apple_Athena_C.BndEvt__Box_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABGA_AppleSun_Apple_Athena_C::BndEvt__Box_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_AppleSun_Apple_Athena.BGA_AppleSun_Apple_Athena_C.BndEvt__Box_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature");

	ABGA_AppleSun_Apple_Athena_C_BndEvt__Box_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function BGA_AppleSun_Apple_Athena.BGA_AppleSun_Apple_Athena_C.DestroyPad
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABGA_AppleSun_Apple_Athena_C::DestroyPad()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_AppleSun_Apple_Athena.BGA_AppleSun_Apple_Athena_C.DestroyPad");

	ABGA_AppleSun_Apple_Athena_C_DestroyPad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_AppleSun_Apple_Athena.BGA_AppleSun_Apple_Athena_C.OnDeathPlayEffects
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer   DamageTags                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector                 Momentum                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              HitInfo                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AFortPawn*               InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayEffectContextHandle EffectContext                  (BlueprintVisible, BlueprintReadOnly, Parm)

void ABGA_AppleSun_Apple_Athena_C::OnDeathPlayEffects(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_AppleSun_Apple_Athena.BGA_AppleSun_Apple_Athena_C.OnDeathPlayEffects");

	ABGA_AppleSun_Apple_Athena_C_OnDeathPlayEffects_Params params;
	params.Damage = Damage;
	params.DamageTags = DamageTags;
	params.Momentum = Momentum;
	params.HitInfo = HitInfo;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;
	params.EffectContext = EffectContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_AppleSun_Apple_Athena.BGA_AppleSun_Apple_Athena_C.BndEvt__FortLinkToActor_K2Node_ComponentBoundEvent_0_OnLinkedActorDestroyed__DelegateSignature
// (BlueprintEvent)

void ABGA_AppleSun_Apple_Athena_C::BndEvt__FortLinkToActor_K2Node_ComponentBoundEvent_0_OnLinkedActorDestroyed__DelegateSignature()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_AppleSun_Apple_Athena.BGA_AppleSun_Apple_Athena_C.BndEvt__FortLinkToActor_K2Node_ComponentBoundEvent_0_OnLinkedActorDestroyed__DelegateSignature");

	ABGA_AppleSun_Apple_Athena_C_BndEvt__FortLinkToActor_K2Node_ComponentBoundEvent_0_OnLinkedActorDestroyed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_AppleSun_Apple_Athena.BGA_AppleSun_Apple_Athena_C.BndEvt__PlayerDetector_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABGA_AppleSun_Apple_Athena_C::BndEvt__PlayerDetector_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_AppleSun_Apple_Athena.BGA_AppleSun_Apple_Athena_C.BndEvt__PlayerDetector_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature");

	ABGA_AppleSun_Apple_Athena_C_BndEvt__PlayerDetector_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function BGA_AppleSun_Apple_Athena.BGA_AppleSun_Apple_Athena_C.BndEvt__PlayerDetector_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABGA_AppleSun_Apple_Athena_C::BndEvt__PlayerDetector_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_AppleSun_Apple_Athena.BGA_AppleSun_Apple_Athena_C.BndEvt__PlayerDetector_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature");

	ABGA_AppleSun_Apple_Athena_C_BndEvt__PlayerDetector_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_AppleSun_Apple_Athena.BGA_AppleSun_Apple_Athena_C.CatchObjectsInside
// (BlueprintCallable, BlueprintEvent)

void ABGA_AppleSun_Apple_Athena_C::CatchObjectsInside()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_AppleSun_Apple_Athena.BGA_AppleSun_Apple_Athena_C.CatchObjectsInside");

	ABGA_AppleSun_Apple_Athena_C_CatchObjectsInside_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_AppleSun_Apple_Athena.BGA_AppleSun_Apple_Athena_C.LaunchBuldingActors
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABGA_AppleSun_Apple_Athena_C::LaunchBuldingActors(class AActor* Actor)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_AppleSun_Apple_Athena.BGA_AppleSun_Apple_Athena_C.LaunchBuldingActors");

	ABGA_AppleSun_Apple_Athena_C_LaunchBuldingActors_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BGA_AppleSun_Apple_Athena.BGA_AppleSun_Apple_Athena_C.ExecuteUbergraph_BGA_AppleSun_Apple_Athena
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABGA_AppleSun_Apple_Athena_C::ExecuteUbergraph_BGA_AppleSun_Apple_Athena(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BGA_AppleSun_Apple_Athena.BGA_AppleSun_Apple_Athena_C.ExecuteUbergraph_BGA_AppleSun_Apple_Athena");

	ABGA_AppleSun_Apple_Athena_C_ExecuteUbergraph_BGA_AppleSun_Apple_Athena_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
