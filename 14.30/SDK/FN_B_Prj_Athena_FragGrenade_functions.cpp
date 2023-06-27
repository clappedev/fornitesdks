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

// Function B_Prj_Athena_FragGrenade.B_Prj_Athena_FragGrenade_C.PreExploWarning__FinishedFunc
// (BlueprintEvent)

void AB_Prj_Athena_FragGrenade_C::PreExploWarning__FinishedFunc()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_FragGrenade.B_Prj_Athena_FragGrenade_C.PreExploWarning__FinishedFunc");

	AB_Prj_Athena_FragGrenade_C_PreExploWarning__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Athena_FragGrenade.B_Prj_Athena_FragGrenade_C.PreExploWarning__UpdateFunc
// (BlueprintEvent)

void AB_Prj_Athena_FragGrenade_C::PreExploWarning__UpdateFunc()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_FragGrenade.B_Prj_Athena_FragGrenade_C.PreExploWarning__UpdateFunc");

	AB_Prj_Athena_FragGrenade_C_PreExploWarning__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Athena_FragGrenade.B_Prj_Athena_FragGrenade_C.FuseEnded
// (Public, BlueprintCallable, BlueprintEvent)

void AB_Prj_Athena_FragGrenade_C::FuseEnded()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_FragGrenade.B_Prj_Athena_FragGrenade_C.FuseEnded");

	AB_Prj_Athena_FragGrenade_C_FuseEnded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Athena_FragGrenade.B_Prj_Athena_FragGrenade_C.OnExploded
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// TArray<class AActor*>          HitActors                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FHitResult>      HitResults                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AB_Prj_Athena_FragGrenade_C::OnExploded(TArray<class AActor*> HitActors, TArray<struct FHitResult> HitResults)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_FragGrenade.B_Prj_Athena_FragGrenade_C.OnExploded");

	AB_Prj_Athena_FragGrenade_C_OnExploded_Params params;
	params.HitActors = HitActors;
	params.HitResults = HitResults;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Athena_FragGrenade.B_Prj_Athena_FragGrenade_C.OnBounce
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult              Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AB_Prj_Athena_FragGrenade_C::OnBounce(const struct FHitResult& Hit)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_FragGrenade.B_Prj_Athena_FragGrenade_C.OnBounce");

	AB_Prj_Athena_FragGrenade_C_OnBounce_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Athena_FragGrenade.B_Prj_Athena_FragGrenade_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_Prj_Athena_FragGrenade_C::ReceiveBeginPlay()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_FragGrenade.B_Prj_Athena_FragGrenade_C.ReceiveBeginPlay");

	AB_Prj_Athena_FragGrenade_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Athena_FragGrenade.B_Prj_Athena_FragGrenade_C.Pre Explo Audio Tell
// (BlueprintCallable, BlueprintEvent)

void AB_Prj_Athena_FragGrenade_C::Pre_Explo_Audio_Tell()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_FragGrenade.B_Prj_Athena_FragGrenade_C.Pre Explo Audio Tell");

	AB_Prj_Athena_FragGrenade_C_Pre_Explo_Audio_Tell_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Athena_FragGrenade.B_Prj_Athena_FragGrenade_C.ExecuteUbergraph_B_Prj_Athena_FragGrenade
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Prj_Athena_FragGrenade_C::ExecuteUbergraph_B_Prj_Athena_FragGrenade(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_FragGrenade.B_Prj_Athena_FragGrenade_C.ExecuteUbergraph_B_Prj_Athena_FragGrenade");

	AB_Prj_Athena_FragGrenade_C_ExecuteUbergraph_B_Prj_Athena_FragGrenade_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
