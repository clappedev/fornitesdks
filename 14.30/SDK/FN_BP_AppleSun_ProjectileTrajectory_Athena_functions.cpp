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

// Function BP_AppleSun_ProjectileTrajectory_Athena.BP_AppleSun_ProjectileTrajectory_Athena_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_AppleSun_ProjectileTrajectory_Athena_C::ReceiveBeginPlay()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_AppleSun_ProjectileTrajectory_Athena.BP_AppleSun_ProjectileTrajectory_Athena_C.ReceiveBeginPlay");

	ABP_AppleSun_ProjectileTrajectory_Athena_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AppleSun_ProjectileTrajectory_Athena.BP_AppleSun_ProjectileTrajectory_Athena_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AppleSun_ProjectileTrajectory_Athena_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_AppleSun_ProjectileTrajectory_Athena.BP_AppleSun_ProjectileTrajectory_Athena_C.ReceiveTick");

	ABP_AppleSun_ProjectileTrajectory_Athena_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AppleSun_ProjectileTrajectory_Athena.BP_AppleSun_ProjectileTrajectory_Athena_C.ExecuteUbergraph_BP_AppleSun_ProjectileTrajectory_Athena
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AppleSun_ProjectileTrajectory_Athena_C::ExecuteUbergraph_BP_AppleSun_ProjectileTrajectory_Athena(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_AppleSun_ProjectileTrajectory_Athena.BP_AppleSun_ProjectileTrajectory_Athena_C.ExecuteUbergraph_BP_AppleSun_ProjectileTrajectory_Athena");

	ABP_AppleSun_ProjectileTrajectory_Athena_C_ExecuteUbergraph_BP_AppleSun_ProjectileTrajectory_Athena_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
