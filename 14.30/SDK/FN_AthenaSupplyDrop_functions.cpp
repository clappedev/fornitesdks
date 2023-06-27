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

// Function AthenaSupplyDrop.AthenaSupplyDrop_C.SpawnVehicle
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AAthenaSupplyDrop_C::SpawnVehicle()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function AthenaSupplyDrop.AthenaSupplyDrop_C.SpawnVehicle");

	AAthenaSupplyDrop_C_SpawnVehicle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSupplyDrop.AthenaSupplyDrop_C.Analytics
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FFortItemEntry>  ItemsToSpawn                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AAthenaSupplyDrop_C::Analytics(TArray<struct FFortItemEntry> ItemsToSpawn)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function AthenaSupplyDrop.AthenaSupplyDrop_C.Analytics");

	AAthenaSupplyDrop_C_Analytics_Params params;
	params.ItemsToSpawn = ItemsToSpawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSupplyDrop.AthenaSupplyDrop_C.OnSetCustomDepthStencilValue
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UPrimitiveComponent*> PrimComponents                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           bUseCustomDepth                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            StencilValue                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bOutConsume                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AAthenaSupplyDrop_C::OnSetCustomDepthStencilValue(TArray<class UPrimitiveComponent*> PrimComponents, bool bUseCustomDepth, int StencilValue, bool* bOutConsume)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function AthenaSupplyDrop.AthenaSupplyDrop_C.OnSetCustomDepthStencilValue");

	AAthenaSupplyDrop_C_OnSetCustomDepthStencilValue_Params params;
	params.PrimComponents = PrimComponents;
	params.bUseCustomDepth = bUseCustomDepth;
	params.StencilValue = StencilValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bOutConsume != nullptr)
		*bOutConsume = params.bOutConsume;
}


// Function AthenaSupplyDrop.AthenaSupplyDrop_C.HandleProjectileMovementStop
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult              ImpactResult                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void AAthenaSupplyDrop_C::HandleProjectileMovementStop(const struct FHitResult& ImpactResult)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function AthenaSupplyDrop.AthenaSupplyDrop_C.HandleProjectileMovementStop");

	AAthenaSupplyDrop_C_HandleProjectileMovementStop_Params params;
	params.ImpactResult = ImpactResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSupplyDrop.AthenaSupplyDrop_C.ForceSetLocationOnLanding
// (Public, BlueprintCallable, BlueprintEvent)

void AAthenaSupplyDrop_C::ForceSetLocationOnLanding()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function AthenaSupplyDrop.AthenaSupplyDrop_C.ForceSetLocationOnLanding");

	AAthenaSupplyDrop_C_ForceSetLocationOnLanding_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSupplyDrop.AthenaSupplyDrop_C.OnRep_LandingLocation
// (HasDefaults, BlueprintCallable, BlueprintEvent)

void AAthenaSupplyDrop_C::OnRep_LandingLocation()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function AthenaSupplyDrop.AthenaSupplyDrop_C.OnRep_LandingLocation");

	AAthenaSupplyDrop_C_OnRep_LandingLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSupplyDrop.AthenaSupplyDrop_C.AlmostLanded
// (Public, BlueprintCallable, BlueprintEvent)

void AAthenaSupplyDrop_C::AlmostLanded()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function AthenaSupplyDrop.AthenaSupplyDrop_C.AlmostLanded");

	AAthenaSupplyDrop_C_AlmostLanded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSupplyDrop.AthenaSupplyDrop_C.DisableFlare
// (Public, BlueprintCallable, BlueprintEvent)

void AAthenaSupplyDrop_C::DisableFlare()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function AthenaSupplyDrop.AthenaSupplyDrop_C.DisableFlare");

	AAthenaSupplyDrop_C_DisableFlare_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSupplyDrop.AthenaSupplyDrop_C.InitFallHeightAndSpeed
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AAthenaSupplyDrop_C::InitFallHeightAndSpeed()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function AthenaSupplyDrop.AthenaSupplyDrop_C.InitFallHeightAndSpeed");

	AAthenaSupplyDrop_C_InitFallHeightAndSpeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSupplyDrop.AthenaSupplyDrop_C.PlayLandingFX
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bSpawnVFX                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAthenaSupplyDrop_C::PlayLandingFX(bool bSpawnVFX)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function AthenaSupplyDrop.AthenaSupplyDrop_C.PlayLandingFX");

	AAthenaSupplyDrop_C_PlayLandingFX_Params params;
	params.bSpawnVFX = bSpawnVFX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSupplyDrop.AthenaSupplyDrop_C.InitFall
// (Public, BlueprintCallable, BlueprintEvent)

void AAthenaSupplyDrop_C::InitFall()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function AthenaSupplyDrop.AthenaSupplyDrop_C.InitFall");

	AAthenaSupplyDrop_C_InitFall_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSupplyDrop.AthenaSupplyDrop_C.OnRep_BalloonPopped
// (BlueprintCallable, BlueprintEvent)

void AAthenaSupplyDrop_C::OnRep_BalloonPopped()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function AthenaSupplyDrop.AthenaSupplyDrop_C.OnRep_BalloonPopped");

	AAthenaSupplyDrop_C_OnRep_BalloonPopped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSupplyDrop.AthenaSupplyDrop_C.BalloonDestroyed
// (Public, BlueprintCallable, BlueprintEvent)

void AAthenaSupplyDrop_C::BalloonDestroyed()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function AthenaSupplyDrop.AthenaSupplyDrop_C.BalloonDestroyed");

	AAthenaSupplyDrop_C_BalloonDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSupplyDrop.AthenaSupplyDrop_C.UpdateReticleLocation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AAthenaSupplyDrop_C::UpdateReticleLocation()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function AthenaSupplyDrop.AthenaSupplyDrop_C.UpdateReticleLocation");

	AAthenaSupplyDrop_C_UpdateReticleLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSupplyDrop.AthenaSupplyDrop_C.OpenSupplyDrop
// (Public, BlueprintCallable, BlueprintEvent)

void AAthenaSupplyDrop_C::OpenSupplyDrop()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function AthenaSupplyDrop.AthenaSupplyDrop_C.OpenSupplyDrop");

	AAthenaSupplyDrop_C_OpenSupplyDrop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSupplyDrop.AthenaSupplyDrop_C.OnRep_Opened
// (HasDefaults, BlueprintCallable, BlueprintEvent)

void AAthenaSupplyDrop_C::OnRep_Opened()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function AthenaSupplyDrop.AthenaSupplyDrop_C.OnRep_Opened");

	AAthenaSupplyDrop_C_OnRep_Opened_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSupplyDrop.AthenaSupplyDrop_C.Setup Bind To Building Actor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Object                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAthenaSupplyDrop_C::Setup_Bind_To_Building_Actor(class UObject* Object)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function AthenaSupplyDrop.AthenaSupplyDrop_C.Setup Bind To Building Actor");

	AAthenaSupplyDrop_C_Setup_Bind_To_Building_Actor_Params params;
	params.Object = Object;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSupplyDrop.AthenaSupplyDrop_C.BlueprintGetInteractionString
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AFortPawn*               InteractingPawn                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText AAthenaSupplyDrop_C::BlueprintGetInteractionString(class AFortPawn* InteractingPawn, TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function AthenaSupplyDrop.AthenaSupplyDrop_C.BlueprintGetInteractionString");

	AAthenaSupplyDrop_C_BlueprintGetInteractionString_Params params;
	params.InteractingPawn = InteractingPawn;
	params.InteractionBeingAttempted = InteractionBeingAttempted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AthenaSupplyDrop.AthenaSupplyDrop_C.GetLootSpawnLocation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                 LootSpawnLocation              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AAthenaSupplyDrop_C::GetLootSpawnLocation(struct FVector* LootSpawnLocation)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function AthenaSupplyDrop.AthenaSupplyDrop_C.GetLootSpawnLocation");

	AAthenaSupplyDrop_C_GetLootSpawnLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LootSpawnLocation != nullptr)
		*LootSpawnLocation = params.LootSpawnLocation;
}


// Function AthenaSupplyDrop.AthenaSupplyDrop_C.SpawnLoot
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AAthenaSupplyDrop_C::SpawnLoot()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function AthenaSupplyDrop.AthenaSupplyDrop_C.SpawnLoot");

	AAthenaSupplyDrop_C_SpawnLoot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSupplyDrop.AthenaSupplyDrop_C.BlueprintCanInteract
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AFortPawn*               InteractingPawn                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ETInteractionType> InteractionType                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AAthenaSupplyDrop_C::BlueprintCanInteract(class AFortPawn* InteractingPawn, TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted, TEnumAsByte<ETInteractionType> InteractionType)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function AthenaSupplyDrop.AthenaSupplyDrop_C.BlueprintCanInteract");

	AAthenaSupplyDrop_C_BlueprintCanInteract_Params params;
	params.InteractingPawn = InteractingPawn;
	params.InteractionBeingAttempted = InteractionBeingAttempted;
	params.InteractionType = InteractionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AthenaSupplyDrop.AthenaSupplyDrop_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AAthenaSupplyDrop_C::UserConstructionScript()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function AthenaSupplyDrop.AthenaSupplyDrop_C.UserConstructionScript");

	AAthenaSupplyDrop_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSupplyDrop.AthenaSupplyDrop_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AAthenaSupplyDrop_C::ReceiveBeginPlay()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function AthenaSupplyDrop.AthenaSupplyDrop_C.ReceiveBeginPlay");

	AAthenaSupplyDrop_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSupplyDrop.AthenaSupplyDrop_C.OnLandingLocationChanged
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

void AAthenaSupplyDrop_C::OnLandingLocationChanged(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, const struct FName& BoneName, const struct FVector& Momentum)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function AthenaSupplyDrop.AthenaSupplyDrop_C.OnLandingLocationChanged");

	AAthenaSupplyDrop_C_OnLandingLocationChanged_Params params;
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


// Function AthenaSupplyDrop.AthenaSupplyDrop_C.Multicast_ApplyGravityForFall
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void AAthenaSupplyDrop_C::Multicast_ApplyGravityForFall()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function AthenaSupplyDrop.AthenaSupplyDrop_C.Multicast_ApplyGravityForFall");

	AAthenaSupplyDrop_C_Multicast_ApplyGravityForFall_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSupplyDrop.AthenaSupplyDrop_C.OnDeathServer
// (BlueprintAuthorityOnly, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer   DamageTags                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector                 Momentum                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              HitInfo                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AController*             InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayEffectContextHandle EffectContext                  (BlueprintVisible, BlueprintReadOnly, Parm)

void AAthenaSupplyDrop_C::OnDeathServer(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function AthenaSupplyDrop.AthenaSupplyDrop_C.OnDeathServer");

	AAthenaSupplyDrop_C_OnDeathServer_Params params;
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


// Function AthenaSupplyDrop.AthenaSupplyDrop_C.BlueprintOnInteract
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// class AFortPawn*               InteractingPawn                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAthenaSupplyDrop_C::BlueprintOnInteract(class AFortPawn* InteractingPawn, TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function AthenaSupplyDrop.AthenaSupplyDrop_C.BlueprintOnInteract");

	AAthenaSupplyDrop_C_BlueprintOnInteract_Params params;
	params.InteractingPawn = InteractingPawn;
	params.InteractionBeingAttempted = InteractionBeingAttempted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSupplyDrop.AthenaSupplyDrop_C.OnDeathPlayEffects
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer   DamageTags                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector                 Momentum                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              HitInfo                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AFortPawn*               InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayEffectContextHandle EffectContext                  (BlueprintVisible, BlueprintReadOnly, Parm)

void AAthenaSupplyDrop_C::OnDeathPlayEffects(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function AthenaSupplyDrop.AthenaSupplyDrop_C.OnDeathPlayEffects");

	AAthenaSupplyDrop_C_OnDeathPlayEffects_Params params;
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


// Function AthenaSupplyDrop.AthenaSupplyDrop_C.BeginFallAudioTimeline
// (BlueprintCallable, BlueprintEvent)

void AAthenaSupplyDrop_C::BeginFallAudioTimeline()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function AthenaSupplyDrop.AthenaSupplyDrop_C.BeginFallAudioTimeline");

	AAthenaSupplyDrop_C_BeginFallAudioTimeline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSupplyDrop.AthenaSupplyDrop_C.StopFallAudioTimeline
// (BlueprintCallable, BlueprintEvent)

void AAthenaSupplyDrop_C::StopFallAudioTimeline()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function AthenaSupplyDrop.AthenaSupplyDrop_C.StopFallAudioTimeline");

	AAthenaSupplyDrop_C_StopFallAudioTimeline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSupplyDrop.AthenaSupplyDrop_C.OnLanding
// (BlueprintCallable, BlueprintEvent)

void AAthenaSupplyDrop_C::OnLanding()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function AthenaSupplyDrop.AthenaSupplyDrop_C.OnLanding");

	AAthenaSupplyDrop_C_OnLanding_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSupplyDrop.AthenaSupplyDrop_C.TimerCheckPlayerDistance
// (BlueprintCallable, BlueprintEvent)

void AAthenaSupplyDrop_C::TimerCheckPlayerDistance()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function AthenaSupplyDrop.AthenaSupplyDrop_C.TimerCheckPlayerDistance");

	AAthenaSupplyDrop_C_TimerCheckPlayerDistance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSupplyDrop.AthenaSupplyDrop_C.DestroyGroundComponents
// (BlueprintCallable, BlueprintEvent)

void AAthenaSupplyDrop_C::DestroyGroundComponents()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function AthenaSupplyDrop.AthenaSupplyDrop_C.DestroyGroundComponents");

	AAthenaSupplyDrop_C_DestroyGroundComponents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSupplyDrop.AthenaSupplyDrop_C.Play Looted Dialogue
// (BlueprintCallable, BlueprintEvent)

void AAthenaSupplyDrop_C::Play_Looted_Dialogue()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function AthenaSupplyDrop.AthenaSupplyDrop_C.Play Looted Dialogue");

	AAthenaSupplyDrop_C_Play_Looted_Dialogue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSupplyDrop.AthenaSupplyDrop_C.BndEvt__FortProjectileMovement_K2Node_ComponentBoundEvent_2_OnProjectileStopDelegate__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult              ImpactResult                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AAthenaSupplyDrop_C::BndEvt__FortProjectileMovement_K2Node_ComponentBoundEvent_2_OnProjectileStopDelegate__DelegateSignature(const struct FHitResult& ImpactResult)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function AthenaSupplyDrop.AthenaSupplyDrop_C.BndEvt__FortProjectileMovement_K2Node_ComponentBoundEvent_2_OnProjectileStopDelegate__DelegateSignature");

	AAthenaSupplyDrop_C_BndEvt__FortProjectileMovement_K2Node_ComponentBoundEvent_2_OnProjectileStopDelegate__DelegateSignature_Params params;
	params.ImpactResult = ImpactResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSupplyDrop.AthenaSupplyDrop_C.SetupQuestData
// (BlueprintCallable, BlueprintEvent)

void AAthenaSupplyDrop_C::SetupQuestData()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function AthenaSupplyDrop.AthenaSupplyDrop_C.SetupQuestData");

	AAthenaSupplyDrop_C_SetupQuestData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSupplyDrop.AthenaSupplyDrop_C.BndEvt__FortWaterInteraction_K2Node_ComponentBoundEvent_3_WaterInteractionOnEnterWater__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AFortWaterBodyActor*     WaterBody                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UFortWaterInteractionComponent* WaterInteractionComponent      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bIsFirstBody                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAthenaSupplyDrop_C::BndEvt__FortWaterInteraction_K2Node_ComponentBoundEvent_3_WaterInteractionOnEnterWater__DelegateSignature(class AFortWaterBodyActor* WaterBody, class UFortWaterInteractionComponent* WaterInteractionComponent, bool bIsFirstBody)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function AthenaSupplyDrop.AthenaSupplyDrop_C.BndEvt__FortWaterInteraction_K2Node_ComponentBoundEvent_3_WaterInteractionOnEnterWater__DelegateSignature");

	AAthenaSupplyDrop_C_BndEvt__FortWaterInteraction_K2Node_ComponentBoundEvent_3_WaterInteractionOnEnterWater__DelegateSignature_Params params;
	params.WaterBody = WaterBody;
	params.WaterInteractionComponent = WaterInteractionComponent;
	params.bIsFirstBody = bIsFirstBody;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSupplyDrop.AthenaSupplyDrop_C.OnDelayedSpawnLoot
// (BlueprintCallable, BlueprintEvent)

void AAthenaSupplyDrop_C::OnDelayedSpawnLoot()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function AthenaSupplyDrop.AthenaSupplyDrop_C.OnDelayedSpawnLoot");

	AAthenaSupplyDrop_C_OnDelayedSpawnLoot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSupplyDrop.AthenaSupplyDrop_C.ExecuteUbergraph_AthenaSupplyDrop
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAthenaSupplyDrop_C::ExecuteUbergraph_AthenaSupplyDrop(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function AthenaSupplyDrop.AthenaSupplyDrop_C.ExecuteUbergraph_AthenaSupplyDrop");

	AAthenaSupplyDrop_C_ExecuteUbergraph_AthenaSupplyDrop_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
