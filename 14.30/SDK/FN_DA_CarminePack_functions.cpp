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

// Function DA_CarminePack.DA_CarminePack_C.OnRep_StoneTags
// (BlueprintCallable, BlueprintEvent)

void ADA_CarminePack_C::OnRep_StoneTags()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function DA_CarminePack.DA_CarminePack_C.OnRep_StoneTags");

	ADA_CarminePack_C_OnRep_StoneTags_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DA_CarminePack.DA_CarminePack_C.BPPressTrigger
// (Event, Public, BlueprintEvent)
// Parameters:
// class AFortDecoHelper*         FortDecoHelper                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADA_CarminePack_C::BPPressTrigger(class AFortDecoHelper* FortDecoHelper)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function DA_CarminePack.DA_CarminePack_C.BPPressTrigger");

	ADA_CarminePack_C_BPPressTrigger_Params params;
	params.FortDecoHelper = FortDecoHelper;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DA_CarminePack.DA_CarminePack_C.BPPressSecondaryFire
// (Event, Public, BlueprintEvent)
// Parameters:
// class AFortDecoHelper*         FortDecoHelper                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADA_CarminePack_C::BPPressSecondaryFire(class AFortDecoHelper* FortDecoHelper)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function DA_CarminePack.DA_CarminePack_C.BPPressSecondaryFire");

	ADA_CarminePack_C_BPPressSecondaryFire_Params params;
	params.FortDecoHelper = FortDecoHelper;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DA_CarminePack.DA_CarminePack_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ADA_CarminePack_C::ReceiveBeginPlay()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function DA_CarminePack.DA_CarminePack_C.ReceiveBeginPlay");

	ADA_CarminePack_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DA_CarminePack.DA_CarminePack_C.Landed
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult              Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ADA_CarminePack_C::Landed(const struct FHitResult& Hit)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function DA_CarminePack.DA_CarminePack_C.Landed");

	ADA_CarminePack_C_Landed_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DA_CarminePack.DA_CarminePack_C.BindPartchanged
// (BlueprintCallable, BlueprintEvent)

void ADA_CarminePack_C::BindPartchanged()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function DA_CarminePack.DA_CarminePack_C.BindPartchanged");

	ADA_CarminePack_C_BindPartchanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DA_CarminePack.DA_CarminePack_C.ExecuteUbergraph_DA_CarminePack
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADA_CarminePack_C::ExecuteUbergraph_DA_CarminePack(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function DA_CarminePack.DA_CarminePack_C.ExecuteUbergraph_DA_CarminePack");

	ADA_CarminePack_C_ExecuteUbergraph_DA_CarminePack_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
