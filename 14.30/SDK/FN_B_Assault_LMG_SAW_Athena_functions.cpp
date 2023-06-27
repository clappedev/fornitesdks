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

// Function B_Assault_LMG_SAW_Athena.B_Assault_LMG_SAW_Athena_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_Assault_LMG_SAW_Athena_C::ReceiveBeginPlay()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Assault_LMG_SAW_Athena.B_Assault_LMG_SAW_Athena_C.ReceiveBeginPlay");

	AB_Assault_LMG_SAW_Athena_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Assault_LMG_SAW_Athena.B_Assault_LMG_SAW_Athena_C.OnSetTargeting
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           bNewIsTargeting                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Assault_LMG_SAW_Athena_C::OnSetTargeting(bool bNewIsTargeting)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Assault_LMG_SAW_Athena.B_Assault_LMG_SAW_Athena_C.OnSetTargeting");

	AB_Assault_LMG_SAW_Athena_C_OnSetTargeting_Params params;
	params.bNewIsTargeting = bNewIsTargeting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Assault_LMG_SAW_Athena.B_Assault_LMG_SAW_Athena_C.ExecuteUbergraph_B_Assault_LMG_SAW_Athena
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Assault_LMG_SAW_Athena_C::ExecuteUbergraph_B_Assault_LMG_SAW_Athena(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Assault_LMG_SAW_Athena.B_Assault_LMG_SAW_Athena_C.ExecuteUbergraph_B_Assault_LMG_SAW_Athena");

	AB_Assault_LMG_SAW_Athena_C_ExecuteUbergraph_B_Assault_LMG_SAW_Athena_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
