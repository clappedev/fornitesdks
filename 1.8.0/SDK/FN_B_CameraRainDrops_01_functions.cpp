// Fortnite (1.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function B_CameraRainDrops_01.B_CameraRainDrops_01_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AB_CameraRainDrops_01_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_CameraRainDrops_01.B_CameraRainDrops_01_C.UserConstructionScript");

	AB_CameraRainDrops_01_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_CameraRainDrops_01.B_CameraRainDrops_01_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_CameraRainDrops_01_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_CameraRainDrops_01.B_CameraRainDrops_01_C.ReceiveBeginPlay");

	AB_CameraRainDrops_01_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_CameraRainDrops_01.B_CameraRainDrops_01_C.ExecuteUbergraph_B_CameraRainDrops_01
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AB_CameraRainDrops_01_C::ExecuteUbergraph_B_CameraRainDrops_01(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_CameraRainDrops_01.B_CameraRainDrops_01_C.ExecuteUbergraph_B_CameraRainDrops_01");

	AB_CameraRainDrops_01_C_ExecuteUbergraph_B_CameraRainDrops_01_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
