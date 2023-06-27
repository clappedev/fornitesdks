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

// Function B_CameraLens_Splash_Water_Droplets.B_CameraLens_Splash_Water_Droplets_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_CameraLens_Splash_Water_Droplets_C::ReceiveBeginPlay()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_CameraLens_Splash_Water_Droplets.B_CameraLens_Splash_Water_Droplets_C.ReceiveBeginPlay");

	AB_CameraLens_Splash_Water_Droplets_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_CameraLens_Splash_Water_Droplets.B_CameraLens_Splash_Water_Droplets_C.ExecuteUbergraph_B_CameraLens_Splash_Water_Droplets
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_CameraLens_Splash_Water_Droplets_C::ExecuteUbergraph_B_CameraLens_Splash_Water_Droplets(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_CameraLens_Splash_Water_Droplets.B_CameraLens_Splash_Water_Droplets_C.ExecuteUbergraph_B_CameraLens_Splash_Water_Droplets");

	AB_CameraLens_Splash_Water_Droplets_C_ExecuteUbergraph_B_CameraLens_Splash_Water_Droplets_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
