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

// Function DA_SpookyMist.DA_SpookyMist_C.BPPressSecondaryFire
// (Event, Public, BlueprintEvent)
// Parameters:
// class AFortDecoHelper*         FortDecoHelper                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADA_SpookyMist_C::BPPressSecondaryFire(class AFortDecoHelper* FortDecoHelper)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function DA_SpookyMist.DA_SpookyMist_C.BPPressSecondaryFire");

	ADA_SpookyMist_C_BPPressSecondaryFire_Params params;
	params.FortDecoHelper = FortDecoHelper;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DA_SpookyMist.DA_SpookyMist_C.BPPressTrigger
// (Event, Public, BlueprintEvent)
// Parameters:
// class AFortDecoHelper*         FortDecoHelper                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADA_SpookyMist_C::BPPressTrigger(class AFortDecoHelper* FortDecoHelper)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function DA_SpookyMist.DA_SpookyMist_C.BPPressTrigger");

	ADA_SpookyMist_C_BPPressTrigger_Params params;
	params.FortDecoHelper = FortDecoHelper;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DA_SpookyMist.DA_SpookyMist_C.BPOnUnEquip
// (Event, Public, BlueprintEvent)

void ADA_SpookyMist_C::BPOnUnEquip()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function DA_SpookyMist.DA_SpookyMist_C.BPOnUnEquip");

	ADA_SpookyMist_C_BPOnUnEquip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DA_SpookyMist.DA_SpookyMist_C.BPReleaseSecondaryFire
// (Event, Public, BlueprintEvent)
// Parameters:
// class AFortDecoHelper*         FortDecoHelper                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADA_SpookyMist_C::BPReleaseSecondaryFire(class AFortDecoHelper* FortDecoHelper)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function DA_SpookyMist.DA_SpookyMist_C.BPReleaseSecondaryFire");

	ADA_SpookyMist_C_BPReleaseSecondaryFire_Params params;
	params.FortDecoHelper = FortDecoHelper;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DA_SpookyMist.DA_SpookyMist_C.CanCancel
// (BlueprintCallable, BlueprintEvent)

void ADA_SpookyMist_C::CanCancel()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function DA_SpookyMist.DA_SpookyMist_C.CanCancel");

	ADA_SpookyMist_C_CanCancel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DA_SpookyMist.DA_SpookyMist_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ADA_SpookyMist_C::ReceiveBeginPlay()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function DA_SpookyMist.DA_SpookyMist_C.ReceiveBeginPlay");

	ADA_SpookyMist_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DA_SpookyMist.DA_SpookyMist_C.On DBNO
// (BlueprintCallable, BlueprintEvent)

void ADA_SpookyMist_C::On_DBNO()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function DA_SpookyMist.DA_SpookyMist_C.On DBNO");

	ADA_SpookyMist_C_On_DBNO_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DA_SpookyMist.DA_SpookyMist_C.ExecuteUbergraph_DA_SpookyMist
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADA_SpookyMist_C::ExecuteUbergraph_DA_SpookyMist(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function DA_SpookyMist.DA_SpookyMist_C.ExecuteUbergraph_DA_SpookyMist");

	ADA_SpookyMist_C_ExecuteUbergraph_DA_SpookyMist_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
