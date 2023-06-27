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

// Function Lotus_Mustache_HealthBar.Lotus_Mustache_HealthBar_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ULotus_Mustache_HealthBar_C::Construct()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Lotus_Mustache_HealthBar.Lotus_Mustache_HealthBar_C.Construct");

	ULotus_Mustache_HealthBar_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lotus_Mustache_HealthBar.Lotus_Mustache_HealthBar_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ULotus_Mustache_HealthBar_C::Destruct()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Lotus_Mustache_HealthBar.Lotus_Mustache_HealthBar_C.Destruct");

	ULotus_Mustache_HealthBar_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lotus_Mustache_HealthBar.Lotus_Mustache_HealthBar_C.SetHealth
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          HealthPercent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULotus_Mustache_HealthBar_C::SetHealth(float HealthPercent)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Lotus_Mustache_HealthBar.Lotus_Mustache_HealthBar_C.SetHealth");

	ULotus_Mustache_HealthBar_C_SetHealth_Params params;
	params.HealthPercent = HealthPercent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Lotus_Mustache_HealthBar.Lotus_Mustache_HealthBar_C.ExecuteUbergraph_Lotus_Mustache_HealthBar
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULotus_Mustache_HealthBar_C::ExecuteUbergraph_Lotus_Mustache_HealthBar(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Lotus_Mustache_HealthBar.Lotus_Mustache_HealthBar_C.ExecuteUbergraph_Lotus_Mustache_HealthBar");

	ULotus_Mustache_HealthBar_C_ExecuteUbergraph_Lotus_Mustache_HealthBar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
