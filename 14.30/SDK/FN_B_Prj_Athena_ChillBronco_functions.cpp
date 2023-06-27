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

// Function B_Prj_Athena_ChillBronco.B_Prj_Athena_ChillBronco_C.UpdateHealthShieldHealAmounts
// (Public, BlueprintCallable, BlueprintEvent)

void AB_Prj_Athena_ChillBronco_C::UpdateHealthShieldHealAmounts()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_ChillBronco.B_Prj_Athena_ChillBronco_C.UpdateHealthShieldHealAmounts");

	AB_Prj_Athena_ChillBronco_C_UpdateHealthShieldHealAmounts_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Athena_ChillBronco.B_Prj_Athena_ChillBronco_C.ApplyWaterInRadiusIfCurieEnabled
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult              HitResult                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void AB_Prj_Athena_ChillBronco_C::ApplyWaterInRadiusIfCurieEnabled(const struct FHitResult& HitResult)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_ChillBronco.B_Prj_Athena_ChillBronco_C.ApplyWaterInRadiusIfCurieEnabled");

	AB_Prj_Athena_ChillBronco_C_ApplyWaterInRadiusIfCurieEnabled_Params params;
	params.HitResult = HitResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Athena_ChillBronco.B_Prj_Athena_ChillBronco_C.QuestCheckSquadMember
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPawn*               PlayerPawnHit                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Prj_Athena_ChillBronco_C::QuestCheckSquadMember(class AFortPawn* PlayerPawnHit)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_ChillBronco.B_Prj_Athena_ChillBronco_C.QuestCheckSquadMember");

	AB_Prj_Athena_ChillBronco_C_QuestCheckSquadMember_Params params;
	params.PlayerPawnHit = PlayerPawnHit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Athena_ChillBronco.B_Prj_Athena_ChillBronco_C.OnRep_PlayerPawn
// (BlueprintCallable, BlueprintEvent)

void AB_Prj_Athena_ChillBronco_C::OnRep_PlayerPawn()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_ChillBronco.B_Prj_Athena_ChillBronco_C.OnRep_PlayerPawn");

	AB_Prj_Athena_ChillBronco_C_OnRep_PlayerPawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Athena_ChillBronco.B_Prj_Athena_ChillBronco_C.ResetVariables
// (Public, BlueprintCallable, BlueprintEvent)

void AB_Prj_Athena_ChillBronco_C::ResetVariables()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_ChillBronco.B_Prj_Athena_ChillBronco_C.ResetVariables");

	AB_Prj_Athena_ChillBronco_C_ResetVariables_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Athena_ChillBronco.B_Prj_Athena_ChillBronco_C.GetMissingShield
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          MissingShield                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AB_Prj_Athena_ChillBronco_C::GetMissingShield(float* MissingShield)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_ChillBronco.B_Prj_Athena_ChillBronco_C.GetMissingShield");

	AB_Prj_Athena_ChillBronco_C_GetMissingShield_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MissingShield != nullptr)
		*MissingShield = params.MissingShield;
}


// Function B_Prj_Athena_ChillBronco.B_Prj_Athena_ChillBronco_C.GetMissingHealth
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          MissingHealth                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AB_Prj_Athena_ChillBronco_C::GetMissingHealth(float* MissingHealth)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_ChillBronco.B_Prj_Athena_ChillBronco_C.GetMissingHealth");

	AB_Prj_Athena_ChillBronco_C_GetMissingHealth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MissingHealth != nullptr)
		*MissingHealth = params.MissingHealth;
}


// Function B_Prj_Athena_ChillBronco.B_Prj_Athena_ChillBronco_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AB_Prj_Athena_ChillBronco_C::UserConstructionScript()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_ChillBronco.B_Prj_Athena_ChillBronco_C.UserConstructionScript");

	AB_Prj_Athena_ChillBronco_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Athena_ChillBronco.B_Prj_Athena_ChillBronco_C.OnExploded
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// TArray<class AActor*>          HitActors                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FHitResult>      HitResults                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AB_Prj_Athena_ChillBronco_C::OnExploded(TArray<class AActor*> HitActors, TArray<struct FHitResult> HitResults)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_ChillBronco.B_Prj_Athena_ChillBronco_C.OnExploded");

	AB_Prj_Athena_ChillBronco_C_OnExploded_Params params;
	params.HitActors = HitActors;
	params.HitResults = HitResults;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Athena_ChillBronco.B_Prj_Athena_ChillBronco_C.OnTouched
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FHitResult              HitResult                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           bIsOverlap                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Prj_Athena_ChillBronco_C::OnTouched(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FHitResult& HitResult, bool bIsOverlap)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_ChillBronco.B_Prj_Athena_ChillBronco_C.OnTouched");

	AB_Prj_Athena_ChillBronco_C_OnTouched_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.HitResult = HitResult;
	params.bIsOverlap = bIsOverlap;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Athena_ChillBronco.B_Prj_Athena_ChillBronco_C.ReceiveHit
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

void AB_Prj_Athena_ChillBronco_C::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_ChillBronco.B_Prj_Athena_ChillBronco_C.ReceiveHit");

	AB_Prj_Athena_ChillBronco_C_ReceiveHit_Params params;
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


// Function B_Prj_Athena_ChillBronco.B_Prj_Athena_ChillBronco_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_Prj_Athena_ChillBronco_C::ReceiveBeginPlay()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_ChillBronco.B_Prj_Athena_ChillBronco_C.ReceiveBeginPlay");

	AB_Prj_Athena_ChillBronco_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Athena_ChillBronco.B_Prj_Athena_ChillBronco_C.HealPlayer
// (BlueprintCallable, BlueprintEvent)

void AB_Prj_Athena_ChillBronco_C::HealPlayer()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_ChillBronco.B_Prj_Athena_ChillBronco_C.HealPlayer");

	AB_Prj_Athena_ChillBronco_C_HealPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Athena_ChillBronco.B_Prj_Athena_ChillBronco_C.KillDelay
// (BlueprintCallable, BlueprintEvent)

void AB_Prj_Athena_ChillBronco_C::KillDelay()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_ChillBronco.B_Prj_Athena_ChillBronco_C.KillDelay");

	AB_Prj_Athena_ChillBronco_C_KillDelay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Athena_ChillBronco.B_Prj_Athena_ChillBronco_C.EnableCollision
// (BlueprintCallable, BlueprintEvent)

void AB_Prj_Athena_ChillBronco_C::EnableCollision()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_ChillBronco.B_Prj_Athena_ChillBronco_C.EnableCollision");

	AB_Prj_Athena_ChillBronco_C_EnableCollision_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Athena_ChillBronco.B_Prj_Athena_ChillBronco_C.BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AFortWaterBodyActor*     WaterBody                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UFortWaterInteractionComponent* WaterInteractionComponent      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bIsFirstBody                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Prj_Athena_ChillBronco_C::BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature(class AFortWaterBodyActor* WaterBody, class UFortWaterInteractionComponent* WaterInteractionComponent, bool bIsFirstBody)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_ChillBronco.B_Prj_Athena_ChillBronco_C.BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature");

	AB_Prj_Athena_ChillBronco_C_BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature_Params params;
	params.WaterBody = WaterBody;
	params.WaterInteractionComponent = WaterInteractionComponent;
	params.bIsFirstBody = bIsFirstBody;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Athena_ChillBronco.B_Prj_Athena_ChillBronco_C.DoHealCheck
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AActor*>          HitActors                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AB_Prj_Athena_ChillBronco_C::DoHealCheck(TArray<class AActor*> HitActors)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_ChillBronco.B_Prj_Athena_ChillBronco_C.DoHealCheck");

	AB_Prj_Athena_ChillBronco_C_DoHealCheck_Params params;
	params.HitActors = HitActors;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Athena_ChillBronco.B_Prj_Athena_ChillBronco_C.ExecuteUbergraph_B_Prj_Athena_ChillBronco
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Prj_Athena_ChillBronco_C::ExecuteUbergraph_B_Prj_Athena_ChillBronco(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_ChillBronco.B_Prj_Athena_ChillBronco_C.ExecuteUbergraph_B_Prj_Athena_ChillBronco");

	AB_Prj_Athena_ChillBronco_C_ExecuteUbergraph_B_Prj_Athena_ChillBronco_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
