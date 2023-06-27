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

// Function B_CameraLens_Boat_Droplets.B_CameraLens_Boat_Droplets_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void AB_CameraLens_Boat_Droplets_C::Timeline_0__FinishedFunc()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_CameraLens_Boat_Droplets.B_CameraLens_Boat_Droplets_C.Timeline_0__FinishedFunc");

	AB_CameraLens_Boat_Droplets_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_CameraLens_Boat_Droplets.B_CameraLens_Boat_Droplets_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void AB_CameraLens_Boat_Droplets_C::Timeline_0__UpdateFunc()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_CameraLens_Boat_Droplets.B_CameraLens_Boat_Droplets_C.Timeline_0__UpdateFunc");

	AB_CameraLens_Boat_Droplets_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_CameraLens_Boat_Droplets.B_CameraLens_Boat_Droplets_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_CameraLens_Boat_Droplets_C::ReceiveBeginPlay()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_CameraLens_Boat_Droplets.B_CameraLens_Boat_Droplets_C.ReceiveBeginPlay");

	AB_CameraLens_Boat_Droplets_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_CameraLens_Boat_Droplets.B_CameraLens_Boat_Droplets_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void AB_CameraLens_Boat_Droplets_C::ReceiveDestroyed()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_CameraLens_Boat_Droplets.B_CameraLens_Boat_Droplets_C.ReceiveDestroyed");

	AB_CameraLens_Boat_Droplets_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_CameraLens_Boat_Droplets.B_CameraLens_Boat_Droplets_C.ExecuteUbergraph_B_CameraLens_Boat_Droplets
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_CameraLens_Boat_Droplets_C::ExecuteUbergraph_B_CameraLens_Boat_Droplets(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_CameraLens_Boat_Droplets.B_CameraLens_Boat_Droplets_C.ExecuteUbergraph_B_CameraLens_Boat_Droplets");

	AB_CameraLens_Boat_Droplets_C_ExecuteUbergraph_B_CameraLens_Boat_Droplets_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
