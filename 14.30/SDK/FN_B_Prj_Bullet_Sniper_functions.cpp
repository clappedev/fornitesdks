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

// Function B_Prj_Bullet_Sniper.B_Prj_Bullet_Sniper_C.PlayImpactSFX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsPlayer                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsWater                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Prj_Bullet_Sniper_C::PlayImpactSFX(bool IsPlayer, bool IsWater)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Bullet_Sniper.B_Prj_Bullet_Sniper_C.PlayImpactSFX");

	AB_Prj_Bullet_Sniper_C_PlayImpactSFX_Params params;
	params.IsPlayer = IsPlayer;
	params.IsWater = IsWater;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Bullet_Sniper.B_Prj_Bullet_Sniper_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AB_Prj_Bullet_Sniper_C::UserConstructionScript()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Bullet_Sniper.B_Prj_Bullet_Sniper_C.UserConstructionScript");

	AB_Prj_Bullet_Sniper_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Bullet_Sniper.B_Prj_Bullet_Sniper_C.OnStop
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult              Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AB_Prj_Bullet_Sniper_C::OnStop(const struct FHitResult& Hit)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Bullet_Sniper.B_Prj_Bullet_Sniper_C.OnStop");

	AB_Prj_Bullet_Sniper_C_OnStop_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Bullet_Sniper.B_Prj_Bullet_Sniper_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_Prj_Bullet_Sniper_C::ReceiveBeginPlay()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Bullet_Sniper.B_Prj_Bullet_Sniper_C.ReceiveBeginPlay");

	AB_Prj_Bullet_Sniper_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Bullet_Sniper.B_Prj_Bullet_Sniper_C.OnTouched
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FHitResult              HitResult                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           bIsOverlap                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Prj_Bullet_Sniper_C::OnTouched(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FHitResult& HitResult, bool bIsOverlap)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Bullet_Sniper.B_Prj_Bullet_Sniper_C.OnTouched");

	AB_Prj_Bullet_Sniper_C_OnTouched_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.HitResult = HitResult;
	params.bIsOverlap = bIsOverlap;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Bullet_Sniper.B_Prj_Bullet_Sniper_C.OnSniperTraceWaterHit
// (BlueprintCosmetic, Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult              WaterHit                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AFortWaterBodyActor*     WaterBody                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Prj_Bullet_Sniper_C::OnSniperTraceWaterHit(const struct FHitResult& WaterHit, class AFortWaterBodyActor* WaterBody)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Bullet_Sniper.B_Prj_Bullet_Sniper_C.OnSniperTraceWaterHit");

	AB_Prj_Bullet_Sniper_C_OnSniperTraceWaterHit_Params params;
	params.WaterHit = WaterHit;
	params.WaterBody = WaterBody;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Bullet_Sniper.B_Prj_Bullet_Sniper_C.ExecuteUbergraph_B_Prj_Bullet_Sniper
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Prj_Bullet_Sniper_C::ExecuteUbergraph_B_Prj_Bullet_Sniper(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Bullet_Sniper.B_Prj_Bullet_Sniper_C.ExecuteUbergraph_B_Prj_Bullet_Sniper");

	AB_Prj_Bullet_Sniper_C_ExecuteUbergraph_B_Prj_Bullet_Sniper_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
