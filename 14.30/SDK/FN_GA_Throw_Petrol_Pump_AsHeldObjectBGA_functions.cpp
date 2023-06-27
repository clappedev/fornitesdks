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

// Function GA_Throw_Petrol_Pump_AsHeldObjectBGA.GA_Throw_Petrol_Pump_AsHeldObjectBGA_C.UpdateDummyProjectileBGA
// (BlueprintCallable, BlueprintEvent)

void UGA_Throw_Petrol_Pump_AsHeldObjectBGA_C::UpdateDummyProjectileBGA()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Throw_Petrol_Pump_AsHeldObjectBGA.GA_Throw_Petrol_Pump_AsHeldObjectBGA_C.UpdateDummyProjectileBGA");

	UGA_Throw_Petrol_Pump_AsHeldObjectBGA_C_UpdateDummyProjectileBGA_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Throw_Petrol_Pump_AsHeldObjectBGA.GA_Throw_Petrol_Pump_AsHeldObjectBGA_C.UpdateSpawnedBGA(ServerOnly)
// (BlueprintCallable, BlueprintEvent)

void UGA_Throw_Petrol_Pump_AsHeldObjectBGA_C::UpdateSpawnedBGA_ServerOnly_()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Throw_Petrol_Pump_AsHeldObjectBGA.GA_Throw_Petrol_Pump_AsHeldObjectBGA_C.UpdateSpawnedBGA(ServerOnly)");

	UGA_Throw_Petrol_Pump_AsHeldObjectBGA_C_UpdateSpawnedBGA_ServerOnly__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Throw_Petrol_Pump_AsHeldObjectBGA.GA_Throw_Petrol_Pump_AsHeldObjectBGA_C.ExecuteUbergraph_GA_Throw_Petrol_Pump_AsHeldObjectBGA
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Throw_Petrol_Pump_AsHeldObjectBGA_C::ExecuteUbergraph_GA_Throw_Petrol_Pump_AsHeldObjectBGA(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Throw_Petrol_Pump_AsHeldObjectBGA.GA_Throw_Petrol_Pump_AsHeldObjectBGA_C.ExecuteUbergraph_GA_Throw_Petrol_Pump_AsHeldObjectBGA");

	UGA_Throw_Petrol_Pump_AsHeldObjectBGA_C_ExecuteUbergraph_GA_Throw_Petrol_Pump_AsHeldObjectBGA_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
