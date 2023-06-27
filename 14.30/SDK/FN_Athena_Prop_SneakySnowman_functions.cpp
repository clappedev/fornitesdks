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

// Function Athena_Prop_SneakySnowman.Athena_Prop_SneakySnowman_C.TraceStartAndEnd
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 Start                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 End                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AAthena_Prop_SneakySnowman_C::TraceStartAndEnd(struct FVector* Start, struct FVector* End)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Athena_Prop_SneakySnowman.Athena_Prop_SneakySnowman_C.TraceStartAndEnd");

	AAthena_Prop_SneakySnowman_C_TraceStartAndEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Start != nullptr)
		*Start = params.Start;
	if (End != nullptr)
		*End = params.End;
}


// Function Athena_Prop_SneakySnowman.Athena_Prop_SneakySnowman_C.ForceSetLocationOnLanding
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AAthena_Prop_SneakySnowman_C::ForceSetLocationOnLanding()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Athena_Prop_SneakySnowman.Athena_Prop_SneakySnowman_C.ForceSetLocationOnLanding");

	AAthena_Prop_SneakySnowman_C_ForceSetLocationOnLanding_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Athena_Prop_SneakySnowman.Athena_Prop_SneakySnowman_C.OnRep_LandedLocation
// (BlueprintCallable, BlueprintEvent)

void AAthena_Prop_SneakySnowman_C::OnRep_LandedLocation()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Athena_Prop_SneakySnowman.Athena_Prop_SneakySnowman_C.OnRep_LandedLocation");

	AAthena_Prop_SneakySnowman_C_OnRep_LandedLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Athena_Prop_SneakySnowman.Athena_Prop_SneakySnowman_C.OnRep_bSimulationRunning
// (BlueprintCallable, BlueprintEvent)

void AAthena_Prop_SneakySnowman_C::OnRep_bSimulationRunning()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Athena_Prop_SneakySnowman.Athena_Prop_SneakySnowman_C.OnRep_bSimulationRunning");

	AAthena_Prop_SneakySnowman_C_OnRep_bSimulationRunning_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Athena_Prop_SneakySnowman.Athena_Prop_SneakySnowman_C.ResetSimulatedComponents
// (Public, BlueprintCallable, BlueprintEvent)

void AAthena_Prop_SneakySnowman_C::ResetSimulatedComponents()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Athena_Prop_SneakySnowman.Athena_Prop_SneakySnowman_C.ResetSimulatedComponents");

	AAthena_Prop_SneakySnowman_C_ResetSimulatedComponents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Athena_Prop_SneakySnowman.Athena_Prop_SneakySnowman_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AAthena_Prop_SneakySnowman_C::UserConstructionScript()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Athena_Prop_SneakySnowman.Athena_Prop_SneakySnowman_C.UserConstructionScript");

	AAthena_Prop_SneakySnowman_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Athena_Prop_SneakySnowman.Athena_Prop_SneakySnowman_C.BndEvt__ProjectileMovementComponent_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult              ImpactResult                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AAthena_Prop_SneakySnowman_C::BndEvt__ProjectileMovementComponent_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature(const struct FHitResult& ImpactResult)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Athena_Prop_SneakySnowman.Athena_Prop_SneakySnowman_C.BndEvt__ProjectileMovementComponent_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature");

	AAthena_Prop_SneakySnowman_C_BndEvt__ProjectileMovementComponent_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature_Params params;
	params.ImpactResult = ImpactResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Athena_Prop_SneakySnowman.Athena_Prop_SneakySnowman_C.BuildingActorDied
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

void AAthena_Prop_SneakySnowman_C::BuildingActorDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, const struct FName& BoneName, const struct FVector& Momentum)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Athena_Prop_SneakySnowman.Athena_Prop_SneakySnowman_C.BuildingActorDied");

	AAthena_Prop_SneakySnowman_C_BuildingActorDied_Params params;
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


// Function Athena_Prop_SneakySnowman.Athena_Prop_SneakySnowman_C.RestartSimulating
// (BlueprintCallable, BlueprintEvent)

void AAthena_Prop_SneakySnowman_C::RestartSimulating()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Athena_Prop_SneakySnowman.Athena_Prop_SneakySnowman_C.RestartSimulating");

	AAthena_Prop_SneakySnowman_C_RestartSimulating_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Athena_Prop_SneakySnowman.Athena_Prop_SneakySnowman_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AAthena_Prop_SneakySnowman_C::ReceiveBeginPlay()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Athena_Prop_SneakySnowman.Athena_Prop_SneakySnowman_C.ReceiveBeginPlay");

	AAthena_Prop_SneakySnowman_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Athena_Prop_SneakySnowman.Athena_Prop_SneakySnowman_C.OnDamagePlayEffects
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer   DamageTags                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector                 Momentum                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              HitInfo                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AFortPawn*               InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayEffectContextHandle EffectContext                  (BlueprintVisible, BlueprintReadOnly, Parm)

void AAthena_Prop_SneakySnowman_C::OnDamagePlayEffects(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Athena_Prop_SneakySnowman.Athena_Prop_SneakySnowman_C.OnDamagePlayEffects");

	AAthena_Prop_SneakySnowman_C_OnDamagePlayEffects_Params params;
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


// Function Athena_Prop_SneakySnowman.Athena_Prop_SneakySnowman_C.BndEvt__OverlapCheck_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AAthena_Prop_SneakySnowman_C::BndEvt__OverlapCheck_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Athena_Prop_SneakySnowman.Athena_Prop_SneakySnowman_C.BndEvt__OverlapCheck_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature");

	AAthena_Prop_SneakySnowman_C_BndEvt__OverlapCheck_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function Athena_Prop_SneakySnowman.Athena_Prop_SneakySnowman_C.PreFinishSpawning
// (Event, Public, BlueprintEvent)
// Parameters:
// class AFortVolume*             VolumeSpawnedWithin            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAthena_Prop_SneakySnowman_C::PreFinishSpawning(class AFortVolume* VolumeSpawnedWithin)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Athena_Prop_SneakySnowman.Athena_Prop_SneakySnowman_C.PreFinishSpawning");

	AAthena_Prop_SneakySnowman_C_PreFinishSpawning_Params params;
	params.VolumeSpawnedWithin = VolumeSpawnedWithin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Athena_Prop_SneakySnowman.Athena_Prop_SneakySnowman_C.PlaylistLoaded
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   PlaylistName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer   PlaylistContextTags            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AAthena_Prop_SneakySnowman_C::PlaylistLoaded(const struct FName& PlaylistName, const struct FGameplayTagContainer& PlaylistContextTags)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Athena_Prop_SneakySnowman.Athena_Prop_SneakySnowman_C.PlaylistLoaded");

	AAthena_Prop_SneakySnowman_C_PlaylistLoaded_Params params;
	params.PlaylistName = PlaylistName;
	params.PlaylistContextTags = PlaylistContextTags;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Athena_Prop_SneakySnowman.Athena_Prop_SneakySnowman_C.WobbleAnims
// (BlueprintCallable, BlueprintEvent)

void AAthena_Prop_SneakySnowman_C::WobbleAnims()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Athena_Prop_SneakySnowman.Athena_Prop_SneakySnowman_C.WobbleAnims");

	AAthena_Prop_SneakySnowman_C_WobbleAnims_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Athena_Prop_SneakySnowman.Athena_Prop_SneakySnowman_C.WorldPropSupportDied
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

void AAthena_Prop_SneakySnowman_C::WorldPropSupportDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, const struct FName& BoneName, const struct FVector& Momentum)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Athena_Prop_SneakySnowman.Athena_Prop_SneakySnowman_C.WorldPropSupportDied");

	AAthena_Prop_SneakySnowman_C_WorldPropSupportDied_Params params;
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


// Function Athena_Prop_SneakySnowman.Athena_Prop_SneakySnowman_C.ResetDistanceCheck
// (BlueprintCallable, BlueprintEvent)

void AAthena_Prop_SneakySnowman_C::ResetDistanceCheck()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Athena_Prop_SneakySnowman.Athena_Prop_SneakySnowman_C.ResetDistanceCheck");

	AAthena_Prop_SneakySnowman_C_ResetDistanceCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Athena_Prop_SneakySnowman.Athena_Prop_SneakySnowman_C.ExecuteUbergraph_Athena_Prop_SneakySnowman
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAthena_Prop_SneakySnowman_C::ExecuteUbergraph_Athena_Prop_SneakySnowman(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Athena_Prop_SneakySnowman.Athena_Prop_SneakySnowman_C.ExecuteUbergraph_Athena_Prop_SneakySnowman");

	AAthena_Prop_SneakySnowman_C_ExecuteUbergraph_Athena_Prop_SneakySnowman_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
