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

// Function B_Prj_Athena_Grenade_MolotovCocktail.B_Prj_Athena_Grenade_MolotovCocktail_C.FireflyProjectileLogic
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AB_Prj_Athena_Grenade_MolotovCocktail_C::FireflyProjectileLogic()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_Grenade_MolotovCocktail.B_Prj_Athena_Grenade_MolotovCocktail_C.FireflyProjectileLogic");

	AB_Prj_Athena_Grenade_MolotovCocktail_C_FireflyProjectileLogic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Athena_Grenade_MolotovCocktail.B_Prj_Athena_Grenade_MolotovCocktail_C.Drunk Projectiles
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AB_Prj_Athena_Grenade_MolotovCocktail_C::Drunk_Projectiles()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_Grenade_MolotovCocktail.B_Prj_Athena_Grenade_MolotovCocktail_C.Drunk Projectiles");

	AB_Prj_Athena_Grenade_MolotovCocktail_C_Drunk_Projectiles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Athena_Grenade_MolotovCocktail.B_Prj_Athena_Grenade_MolotovCocktail_C.OnCurieActive_7575DCC3440AA42836D7988BCA6485E5
// (BlueprintCallable, BlueprintEvent)

void AB_Prj_Athena_Grenade_MolotovCocktail_C::OnCurieActive_7575DCC3440AA42836D7988BCA6485E5()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_Grenade_MolotovCocktail.B_Prj_Athena_Grenade_MolotovCocktail_C.OnCurieActive_7575DCC3440AA42836D7988BCA6485E5");

	AB_Prj_Athena_Grenade_MolotovCocktail_C_OnCurieActive_7575DCC3440AA42836D7988BCA6485E5_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Athena_Grenade_MolotovCocktail.B_Prj_Athena_Grenade_MolotovCocktail_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_Prj_Athena_Grenade_MolotovCocktail_C::ReceiveBeginPlay()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_Grenade_MolotovCocktail.B_Prj_Athena_Grenade_MolotovCocktail_C.ReceiveBeginPlay");

	AB_Prj_Athena_Grenade_MolotovCocktail_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Athena_Grenade_MolotovCocktail.B_Prj_Athena_Grenade_MolotovCocktail_C.ReceiveHit
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

void AB_Prj_Athena_Grenade_MolotovCocktail_C::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_Grenade_MolotovCocktail.B_Prj_Athena_Grenade_MolotovCocktail_C.ReceiveHit");

	AB_Prj_Athena_Grenade_MolotovCocktail_C_ReceiveHit_Params params;
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


// Function B_Prj_Athena_Grenade_MolotovCocktail.B_Prj_Athena_Grenade_MolotovCocktail_C.BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AFortWaterBodyActor*     WaterBody                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UFortWaterInteractionComponent* WaterInteractionComponent      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bIsFirstBody                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Prj_Athena_Grenade_MolotovCocktail_C::BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature(class AFortWaterBodyActor* WaterBody, class UFortWaterInteractionComponent* WaterInteractionComponent, bool bIsFirstBody)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_Grenade_MolotovCocktail.B_Prj_Athena_Grenade_MolotovCocktail_C.BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature");

	AB_Prj_Athena_Grenade_MolotovCocktail_C_BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature_Params params;
	params.WaterBody = WaterBody;
	params.WaterInteractionComponent = WaterInteractionComponent;
	params.bIsFirstBody = bIsFirstBody;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Athena_Grenade_MolotovCocktail.B_Prj_Athena_Grenade_MolotovCocktail_C.HasEnteredWater
// (BlueprintCallable, BlueprintEvent)

void AB_Prj_Athena_Grenade_MolotovCocktail_C::HasEnteredWater()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_Grenade_MolotovCocktail.B_Prj_Athena_Grenade_MolotovCocktail_C.HasEnteredWater");

	AB_Prj_Athena_Grenade_MolotovCocktail_C_HasEnteredWater_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Athena_Grenade_MolotovCocktail.B_Prj_Athena_Grenade_MolotovCocktail_C.Defer BGA Spawn
// (BlueprintCallable, BlueprintEvent)

void AB_Prj_Athena_Grenade_MolotovCocktail_C::Defer_BGA_Spawn()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_Grenade_MolotovCocktail.B_Prj_Athena_Grenade_MolotovCocktail_C.Defer BGA Spawn");

	AB_Prj_Athena_Grenade_MolotovCocktail_C_Defer_BGA_Spawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Athena_Grenade_MolotovCocktail.B_Prj_Athena_Grenade_MolotovCocktail_C.ExecuteUbergraph_B_Prj_Athena_Grenade_MolotovCocktail
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Prj_Athena_Grenade_MolotovCocktail_C::ExecuteUbergraph_B_Prj_Athena_Grenade_MolotovCocktail(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_Grenade_MolotovCocktail.B_Prj_Athena_Grenade_MolotovCocktail_C.ExecuteUbergraph_B_Prj_Athena_Grenade_MolotovCocktail");

	AB_Prj_Athena_Grenade_MolotovCocktail_C_ExecuteUbergraph_B_Prj_Athena_Grenade_MolotovCocktail_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
