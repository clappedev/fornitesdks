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

// Function Trap_Athena_WallSpikes.Trap_Athena_WallSpikes_C.SetSpikePosition
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NewSpikePosition               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATrap_Athena_WallSpikes_C::SetSpikePosition(float NewSpikePosition)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Trap_Athena_WallSpikes.Trap_Athena_WallSpikes_C.SetSpikePosition");

	ATrap_Athena_WallSpikes_C_SetSpikePosition_Params params;
	params.NewSpikePosition = NewSpikePosition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trap_Athena_WallSpikes.Trap_Athena_WallSpikes_C.ExecuteUbergraph_Trap_Athena_WallSpikes
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATrap_Athena_WallSpikes_C::ExecuteUbergraph_Trap_Athena_WallSpikes(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Trap_Athena_WallSpikes.Trap_Athena_WallSpikes_C.ExecuteUbergraph_Trap_Athena_WallSpikes");

	ATrap_Athena_WallSpikes_C_ExecuteUbergraph_Trap_Athena_WallSpikes_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
