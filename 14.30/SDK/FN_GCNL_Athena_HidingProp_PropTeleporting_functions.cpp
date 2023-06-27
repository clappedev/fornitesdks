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

// Function GCNL_Athena_HidingProp_PropTeleporting.GCNL_Athena_HidingProp_PropTeleporting_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AGCNL_Athena_HidingProp_PropTeleporting_C::ReceiveBeginPlay()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GCNL_Athena_HidingProp_PropTeleporting.GCNL_Athena_HidingProp_PropTeleporting_C.ReceiveBeginPlay");

	AGCNL_Athena_HidingProp_PropTeleporting_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCNL_Athena_HidingProp_PropTeleporting.GCNL_Athena_HidingProp_PropTeleporting_C.ExecuteUbergraph_GCNL_Athena_HidingProp_PropTeleporting
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGCNL_Athena_HidingProp_PropTeleporting_C::ExecuteUbergraph_GCNL_Athena_HidingProp_PropTeleporting(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GCNL_Athena_HidingProp_PropTeleporting.GCNL_Athena_HidingProp_PropTeleporting_C.ExecuteUbergraph_GCNL_Athena_HidingProp_PropTeleporting");

	AGCNL_Athena_HidingProp_PropTeleporting_C_ExecuteUbergraph_GCNL_Athena_HidingProp_PropTeleporting_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
