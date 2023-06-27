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

// Function DA_Butterfly.DA_Butterfly_C.BPPressSecondaryFire
// (Event, Public, BlueprintEvent)
// Parameters:
// class AFortDecoHelper*         FortDecoHelper                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADA_Butterfly_C::BPPressSecondaryFire(class AFortDecoHelper* FortDecoHelper)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function DA_Butterfly.DA_Butterfly_C.BPPressSecondaryFire");

	ADA_Butterfly_C_BPPressSecondaryFire_Params params;
	params.FortDecoHelper = FortDecoHelper;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DA_Butterfly.DA_Butterfly_C.BPPressTrigger
// (Event, Public, BlueprintEvent)
// Parameters:
// class AFortDecoHelper*         FortDecoHelper                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADA_Butterfly_C::BPPressTrigger(class AFortDecoHelper* FortDecoHelper)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function DA_Butterfly.DA_Butterfly_C.BPPressTrigger");

	ADA_Butterfly_C_BPPressTrigger_Params params;
	params.FortDecoHelper = FortDecoHelper;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DA_Butterfly.DA_Butterfly_C.BPOnUnEquip
// (Event, Public, BlueprintEvent)

void ADA_Butterfly_C::BPOnUnEquip()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function DA_Butterfly.DA_Butterfly_C.BPOnUnEquip");

	ADA_Butterfly_C_BPOnUnEquip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DA_Butterfly.DA_Butterfly_C.BPReleaseSecondaryFire
// (Event, Public, BlueprintEvent)
// Parameters:
// class AFortDecoHelper*         FortDecoHelper                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADA_Butterfly_C::BPReleaseSecondaryFire(class AFortDecoHelper* FortDecoHelper)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function DA_Butterfly.DA_Butterfly_C.BPReleaseSecondaryFire");

	ADA_Butterfly_C_BPReleaseSecondaryFire_Params params;
	params.FortDecoHelper = FortDecoHelper;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DA_Butterfly.DA_Butterfly_C.ExecuteUbergraph_DA_Butterfly
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ADA_Butterfly_C::ExecuteUbergraph_DA_Butterfly(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function DA_Butterfly.DA_Butterfly_C.ExecuteUbergraph_DA_Butterfly");

	ADA_Butterfly_C_ExecuteUbergraph_DA_Butterfly_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
