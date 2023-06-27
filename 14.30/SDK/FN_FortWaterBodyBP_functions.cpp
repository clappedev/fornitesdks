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

// Function FortWaterBodyBP.FortWaterBodyBP_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AFortWaterBodyBP_C::UserConstructionScript()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function FortWaterBodyBP.FortWaterBodyBP_C.UserConstructionScript");

	AFortWaterBodyBP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortWaterBodyBP.FortWaterBodyBP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AFortWaterBodyBP_C::ReceiveBeginPlay()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function FortWaterBodyBP.FortWaterBodyBP_C.ReceiveBeginPlay");

	AFortWaterBodyBP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortWaterBodyBP.FortWaterBodyBP_C.OnReceivedBulletImpact
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult              Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AFortWaterBodyBP_C::OnReceivedBulletImpact(const struct FHitResult& Hit)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function FortWaterBodyBP.FortWaterBodyBP_C.OnReceivedBulletImpact");

	AFortWaterBodyBP_C_OnReceivedBulletImpact_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortWaterBodyBP.FortWaterBodyBP_C.ExecuteUbergraph_FortWaterBodyBP
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFortWaterBodyBP_C::ExecuteUbergraph_FortWaterBodyBP(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function FortWaterBodyBP.FortWaterBodyBP_C.ExecuteUbergraph_FortWaterBodyBP");

	AFortWaterBodyBP_C_ExecuteUbergraph_FortWaterBodyBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
