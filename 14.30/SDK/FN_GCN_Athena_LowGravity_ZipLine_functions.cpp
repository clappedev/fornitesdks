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

// Function GCN_Athena_LowGravity_ZipLine.GCN_Athena_LowGravity_ZipLine_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGCN_Athena_LowGravity_ZipLine_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GCN_Athena_LowGravity_ZipLine.GCN_Athena_LowGravity_ZipLine_C.ReceiveTick");

	AGCN_Athena_LowGravity_ZipLine_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_Athena_LowGravity_ZipLine.GCN_Athena_LowGravity_ZipLine_C.ExecuteUbergraph_GCN_Athena_LowGravity_ZipLine
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGCN_Athena_LowGravity_ZipLine_C::ExecuteUbergraph_GCN_Athena_LowGravity_ZipLine(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GCN_Athena_LowGravity_ZipLine.GCN_Athena_LowGravity_ZipLine_C.ExecuteUbergraph_GCN_Athena_LowGravity_ZipLine");

	AGCN_Athena_LowGravity_ZipLine_C_ExecuteUbergraph_GCN_Athena_LowGravity_ZipLine_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
