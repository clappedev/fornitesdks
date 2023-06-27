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

// Function Prj_Athena_Bucket_Nice.Prj_Athena_Bucket_Nice_C.OnRep_TurnOffTrail
// (BlueprintCallable, BlueprintEvent)

void APrj_Athena_Bucket_Nice_C::OnRep_TurnOffTrail()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Prj_Athena_Bucket_Nice.Prj_Athena_Bucket_Nice_C.OnRep_TurnOffTrail");

	APrj_Athena_Bucket_Nice_C_OnRep_TurnOffTrail_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Prj_Athena_Bucket_Nice.Prj_Athena_Bucket_Nice_C.OnExploded
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// TArray<class AActor*>          HitActors                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FHitResult>      HitResults                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void APrj_Athena_Bucket_Nice_C::OnExploded(TArray<class AActor*> HitActors, TArray<struct FHitResult> HitResults)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Prj_Athena_Bucket_Nice.Prj_Athena_Bucket_Nice_C.OnExploded");

	APrj_Athena_Bucket_Nice_C_OnExploded_Params params;
	params.HitActors = HitActors;
	params.HitResults = HitResults;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Prj_Athena_Bucket_Nice.Prj_Athena_Bucket_Nice_C.ExecuteUbergraph_Prj_Athena_Bucket_Nice
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APrj_Athena_Bucket_Nice_C::ExecuteUbergraph_Prj_Athena_Bucket_Nice(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Prj_Athena_Bucket_Nice.Prj_Athena_Bucket_Nice_C.ExecuteUbergraph_Prj_Athena_Bucket_Nice");

	APrj_Athena_Bucket_Nice_C_ExecuteUbergraph_Prj_Athena_Bucket_Nice_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
