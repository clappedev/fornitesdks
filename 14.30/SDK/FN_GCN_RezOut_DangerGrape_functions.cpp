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

// Function GCN_RezOut_DangerGrape.GCN_RezOut_DangerGrape_C.Pre-Sequence Change
// (BlueprintCallable, BlueprintEvent)

void AGCN_RezOut_DangerGrape_C::Pre_Sequence_Change()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GCN_RezOut_DangerGrape.GCN_RezOut_DangerGrape_C.Pre-Sequence Change");

	AGCN_RezOut_DangerGrape_C_Pre_Sequence_Change_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_RezOut_DangerGrape.GCN_RezOut_DangerGrape_C.ExecuteUbergraph_GCN_RezOut_DangerGrape
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGCN_RezOut_DangerGrape_C::ExecuteUbergraph_GCN_RezOut_DangerGrape(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GCN_RezOut_DangerGrape.GCN_RezOut_DangerGrape_C.ExecuteUbergraph_GCN_RezOut_DangerGrape");

	AGCN_RezOut_DangerGrape_C_ExecuteUbergraph_GCN_RezOut_DangerGrape_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
