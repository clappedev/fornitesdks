// Fortnite (8.51) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GCN_TakerMarkedForDeath.GCN_TakerMarkedForDeath_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AGCN_TakerMarkedForDeath_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_TakerMarkedForDeath.GCN_TakerMarkedForDeath_C.ReceiveBeginPlay");

	AGCN_TakerMarkedForDeath_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_TakerMarkedForDeath.GCN_TakerMarkedForDeath_C.SoulSuckCheck
// (BlueprintCallable, BlueprintEvent)

void AGCN_TakerMarkedForDeath_C::SoulSuckCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_TakerMarkedForDeath.GCN_TakerMarkedForDeath_C.SoulSuckCheck");

	AGCN_TakerMarkedForDeath_C_SoulSuckCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_TakerMarkedForDeath.GCN_TakerMarkedForDeath_C.ExecuteUbergraph_GCN_TakerMarkedForDeath
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGCN_TakerMarkedForDeath_C::ExecuteUbergraph_GCN_TakerMarkedForDeath(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_TakerMarkedForDeath.GCN_TakerMarkedForDeath_C.ExecuteUbergraph_GCN_TakerMarkedForDeath");

	AGCN_TakerMarkedForDeath_C_ExecuteUbergraph_GCN_TakerMarkedForDeath_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
