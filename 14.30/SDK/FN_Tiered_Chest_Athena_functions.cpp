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

// Function Tiered_Chest_Athena.Tiered_Chest_Athena_C.OnSetCustomDepthStencilValue
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UPrimitiveComponent*> PrimComponents                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           bUseCustomDepth                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            StencilValue                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bOutConsume                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATiered_Chest_Athena_C::OnSetCustomDepthStencilValue(TArray<class UPrimitiveComponent*> PrimComponents, bool bUseCustomDepth, int StencilValue, bool* bOutConsume)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Tiered_Chest_Athena.Tiered_Chest_Athena_C.OnSetCustomDepthStencilValue");

	ATiered_Chest_Athena_C_OnSetCustomDepthStencilValue_Params params;
	params.PrimComponents = PrimComponents;
	params.bUseCustomDepth = bUseCustomDepth;
	params.StencilValue = StencilValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bOutConsume != nullptr)
		*bOutConsume = params.bOutConsume;
}


// Function Tiered_Chest_Athena.Tiered_Chest_Athena_C.SetVisibleMobileInteractIcon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATiered_Chest_Athena_C::SetVisibleMobileInteractIcon(bool Visible)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Tiered_Chest_Athena.Tiered_Chest_Athena_C.SetVisibleMobileInteractIcon");

	ATiered_Chest_Athena_C_SetVisibleMobileInteractIcon_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tiered_Chest_Athena.Tiered_Chest_Athena_C.GetMaxAudibleDistance
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Max_Distance                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ATiered_Chest_Athena_C::GetMaxAudibleDistance(float* Max_Distance)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Tiered_Chest_Athena.Tiered_Chest_Athena_C.GetMaxAudibleDistance");

	ATiered_Chest_Athena_C_GetMaxAudibleDistance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Max_Distance != nullptr)
		*Max_Distance = params.Max_Distance;
}


// Function Tiered_Chest_Athena.Tiered_Chest_Athena_C.CleanupWiggleMIDs
// (Public, BlueprintCallable, BlueprintEvent)

void ATiered_Chest_Athena_C::CleanupWiggleMIDs()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Tiered_Chest_Athena.Tiered_Chest_Athena_C.CleanupWiggleMIDs");

	ATiered_Chest_Athena_C_CleanupWiggleMIDs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tiered_Chest_Athena.Tiered_Chest_Athena_C.CreateMobileMIDs
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ATiered_Chest_Athena_C::CreateMobileMIDs()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Tiered_Chest_Athena.Tiered_Chest_Athena_C.CreateMobileMIDs");

	ATiered_Chest_Athena_C_CreateMobileMIDs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tiered_Chest_Athena.Tiered_Chest_Athena_C.ShouldDie
// (BlueprintAuthorityOnly, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AController*             EventInstigator                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATiered_Chest_Athena_C::ShouldDie(float Damage, class AController* EventInstigator, class AActor* DamageCauser)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Tiered_Chest_Athena.Tiered_Chest_Athena_C.ShouldDie");

	ATiered_Chest_Athena_C_ShouldDie_Params params;
	params.Damage = Damage;
	params.EventInstigator = EventInstigator;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tiered_Chest_Athena.Tiered_Chest_Athena_C.BlueprintCanInteract
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AFortPawn*               InteractingPawn                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ETInteractionType> InteractionType                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATiered_Chest_Athena_C::BlueprintCanInteract(class AFortPawn* InteractingPawn, TEnumAsByte<EInteractionBeingAttempted> InteractionBeingAttempted, TEnumAsByte<ETInteractionType> InteractionType)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Tiered_Chest_Athena.Tiered_Chest_Athena_C.BlueprintCanInteract");

	ATiered_Chest_Athena_C_BlueprintCanInteract_Params params;
	params.InteractingPawn = InteractingPawn;
	params.InteractionBeingAttempted = InteractionBeingAttempted;
	params.InteractionType = InteractionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Tiered_Chest_Athena.Tiered_Chest_Athena_C.SetLightVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATiered_Chest_Athena_C::SetLightVisibility(bool Visible)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Tiered_Chest_Athena.Tiered_Chest_Athena_C.SetLightVisibility");

	ATiered_Chest_Athena_C_SetLightVisibility_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tiered_Chest_Athena.Tiered_Chest_Athena_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ATiered_Chest_Athena_C::UserConstructionScript()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Tiered_Chest_Athena.Tiered_Chest_Athena_C.UserConstructionScript");

	ATiered_Chest_Athena_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tiered_Chest_Athena.Tiered_Chest_Athena_C.MobileOnInteractTL__FinishedFunc
// (BlueprintEvent)

void ATiered_Chest_Athena_C::MobileOnInteractTL__FinishedFunc()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Tiered_Chest_Athena.Tiered_Chest_Athena_C.MobileOnInteractTL__FinishedFunc");

	ATiered_Chest_Athena_C_MobileOnInteractTL__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tiered_Chest_Athena.Tiered_Chest_Athena_C.MobileOnInteractTL__UpdateFunc
// (BlueprintEvent)

void ATiered_Chest_Athena_C::MobileOnInteractTL__UpdateFunc()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Tiered_Chest_Athena.Tiered_Chest_Athena_C.MobileOnInteractTL__UpdateFunc");

	ATiered_Chest_Athena_C_MobileOnInteractTL__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tiered_Chest_Athena.Tiered_Chest_Athena_C.MobileSelectedTL__FinishedFunc
// (BlueprintEvent)

void ATiered_Chest_Athena_C::MobileSelectedTL__FinishedFunc()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Tiered_Chest_Athena.Tiered_Chest_Athena_C.MobileSelectedTL__FinishedFunc");

	ATiered_Chest_Athena_C_MobileSelectedTL__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tiered_Chest_Athena.Tiered_Chest_Athena_C.MobileSelectedTL__UpdateFunc
// (BlueprintEvent)

void ATiered_Chest_Athena_C::MobileSelectedTL__UpdateFunc()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Tiered_Chest_Athena.Tiered_Chest_Athena_C.MobileSelectedTL__UpdateFunc");

	ATiered_Chest_Athena_C_MobileSelectedTL__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tiered_Chest_Athena.Tiered_Chest_Athena_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void ATiered_Chest_Athena_C::Timeline_0__FinishedFunc()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Tiered_Chest_Athena.Tiered_Chest_Athena_C.Timeline_0__FinishedFunc");

	ATiered_Chest_Athena_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tiered_Chest_Athena.Tiered_Chest_Athena_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void ATiered_Chest_Athena_C::Timeline_0__UpdateFunc()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Tiered_Chest_Athena.Tiered_Chest_Athena_C.Timeline_0__UpdateFunc");

	ATiered_Chest_Athena_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tiered_Chest_Athena.Tiered_Chest_Athena_C.OnLoot
// (Event, Public, BlueprintEvent)

void ATiered_Chest_Athena_C::OnLoot()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Tiered_Chest_Athena.Tiered_Chest_Athena_C.OnLoot");

	ATiered_Chest_Athena_C_OnLoot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tiered_Chest_Athena.Tiered_Chest_Athena_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ATiered_Chest_Athena_C::ReceiveBeginPlay()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Tiered_Chest_Athena.Tiered_Chest_Athena_C.ReceiveBeginPlay");

	ATiered_Chest_Athena_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tiered_Chest_Athena.Tiered_Chest_Athena_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void ATiered_Chest_Athena_C::ReceiveDestroyed()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Tiered_Chest_Athena.Tiered_Chest_Athena_C.ReceiveDestroyed");

	ATiered_Chest_Athena_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tiered_Chest_Athena.Tiered_Chest_Athena_C.OnSetSearched
// (Event, Public, BlueprintEvent)

void ATiered_Chest_Athena_C::OnSetSearched()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Tiered_Chest_Athena.Tiered_Chest_Athena_C.OnSetSearched");

	ATiered_Chest_Athena_C_OnSetSearched_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tiered_Chest_Athena.Tiered_Chest_Athena_C.Mobile_Outline_On
// (BlueprintCallable, BlueprintEvent)

void ATiered_Chest_Athena_C::Mobile_Outline_On()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Tiered_Chest_Athena.Tiered_Chest_Athena_C.Mobile_Outline_On");

	ATiered_Chest_Athena_C_Mobile_Outline_On_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tiered_Chest_Athena.Tiered_Chest_Athena_C.Mobile_Outline_Off
// (BlueprintCallable, BlueprintEvent)

void ATiered_Chest_Athena_C::Mobile_Outline_Off()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Tiered_Chest_Athena.Tiered_Chest_Athena_C.Mobile_Outline_Off");

	ATiered_Chest_Athena_C_Mobile_Outline_Off_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tiered_Chest_Athena.Tiered_Chest_Athena_C.Mobile_OnInteract
// (BlueprintCallable, BlueprintEvent)

void ATiered_Chest_Athena_C::Mobile_OnInteract()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Tiered_Chest_Athena.Tiered_Chest_Athena_C.Mobile_OnInteract");

	ATiered_Chest_Athena_C_Mobile_OnInteract_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tiered_Chest_Athena.Tiered_Chest_Athena_C.Mobile_OnDisconnect
// (BlueprintCallable, BlueprintEvent)

void ATiered_Chest_Athena_C::Mobile_OnDisconnect()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Tiered_Chest_Athena.Tiered_Chest_Athena_C.Mobile_OnDisconnect");

	ATiered_Chest_Athena_C_Mobile_OnDisconnect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tiered_Chest_Athena.Tiered_Chest_Athena_C.EnableBacchusHighlight
// (Event, Public, BlueprintEvent)

void ATiered_Chest_Athena_C::EnableBacchusHighlight()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Tiered_Chest_Athena.Tiered_Chest_Athena_C.EnableBacchusHighlight");

	ATiered_Chest_Athena_C_EnableBacchusHighlight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tiered_Chest_Athena.Tiered_Chest_Athena_C.DisableBacchusHighlight
// (Event, Public, BlueprintEvent)

void ATiered_Chest_Athena_C::DisableBacchusHighlight()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Tiered_Chest_Athena.Tiered_Chest_Athena_C.DisableBacchusHighlight");

	ATiered_Chest_Athena_C_DisableBacchusHighlight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tiered_Chest_Athena.Tiered_Chest_Athena_C.OnBeginSearch
// (Event, Public, BlueprintEvent)

void ATiered_Chest_Athena_C::OnBeginSearch()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Tiered_Chest_Athena.Tiered_Chest_Athena_C.OnBeginSearch");

	ATiered_Chest_Athena_C_OnBeginSearch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tiered_Chest_Athena.Tiered_Chest_Athena_C.OnDeathPlayEffects
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer   DamageTags                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector                 Momentum                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              HitInfo                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AFortPawn*               InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayEffectContextHandle EffectContext                  (BlueprintVisible, BlueprintReadOnly, Parm)

void ATiered_Chest_Athena_C::OnDeathPlayEffects(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Tiered_Chest_Athena.Tiered_Chest_Athena_C.OnDeathPlayEffects");

	ATiered_Chest_Athena_C_OnDeathPlayEffects_Params params;
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


// Function Tiered_Chest_Athena.Tiered_Chest_Athena_C.HideChestOpenableCosmetics
// (BlueprintCallable, BlueprintEvent)

void ATiered_Chest_Athena_C::HideChestOpenableCosmetics()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Tiered_Chest_Athena.Tiered_Chest_Athena_C.HideChestOpenableCosmetics");

	ATiered_Chest_Athena_C_HideChestOpenableCosmetics_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tiered_Chest_Athena.Tiered_Chest_Athena_C.DetermineVFXRotation
// (BlueprintCallable, BlueprintEvent)

void ATiered_Chest_Athena_C::DetermineVFXRotation()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Tiered_Chest_Athena.Tiered_Chest_Athena_C.DetermineVFXRotation");

	ATiered_Chest_Athena_C_DetermineVFXRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tiered_Chest_Athena.Tiered_Chest_Athena_C.SpawnChestOpenVFX
// (BlueprintCallable, BlueprintEvent)

void ATiered_Chest_Athena_C::SpawnChestOpenVFX()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Tiered_Chest_Athena.Tiered_Chest_Athena_C.SpawnChestOpenVFX");

	ATiered_Chest_Athena_C_SpawnChestOpenVFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tiered_Chest_Athena.Tiered_Chest_Athena_C.PlayChestOpeningTimeline
// (BlueprintCallable, BlueprintEvent)

void ATiered_Chest_Athena_C::PlayChestOpeningTimeline()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Tiered_Chest_Athena.Tiered_Chest_Athena_C.PlayChestOpeningTimeline");

	ATiered_Chest_Athena_C_PlayChestOpeningTimeline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tiered_Chest_Athena.Tiered_Chest_Athena_C.ExecuteUbergraph_Tiered_Chest_Athena
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATiered_Chest_Athena_C::ExecuteUbergraph_Tiered_Chest_Athena(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Tiered_Chest_Athena.Tiered_Chest_Athena_C.ExecuteUbergraph_Tiered_Chest_Athena");

	ATiered_Chest_Athena_C_ExecuteUbergraph_Tiered_Chest_Athena_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
