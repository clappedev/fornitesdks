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

// Function BP_ProjectileTrajectory_HeldObjectSocket.BP_ProjectileTrajectory_HeldObjectSocket_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_ProjectileTrajectory_HeldObjectSocket_C::ReceiveBeginPlay()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_ProjectileTrajectory_HeldObjectSocket.BP_ProjectileTrajectory_HeldObjectSocket_C.ReceiveBeginPlay");

	ABP_ProjectileTrajectory_HeldObjectSocket_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ProjectileTrajectory_HeldObjectSocket.BP_ProjectileTrajectory_HeldObjectSocket_C.ExecuteUbergraph_BP_ProjectileTrajectory_HeldObjectSocket
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ProjectileTrajectory_HeldObjectSocket_C::ExecuteUbergraph_BP_ProjectileTrajectory_HeldObjectSocket(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_ProjectileTrajectory_HeldObjectSocket.BP_ProjectileTrajectory_HeldObjectSocket_C.ExecuteUbergraph_BP_ProjectileTrajectory_HeldObjectSocket");

	ABP_ProjectileTrajectory_HeldObjectSocket_C_ExecuteUbergraph_BP_ProjectileTrajectory_HeldObjectSocket_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
