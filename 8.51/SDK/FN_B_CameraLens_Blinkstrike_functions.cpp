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

// Function B_CameraLens_Blinkstrike.B_CameraLens_Blinkstrike_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_CameraLens_Blinkstrike_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_CameraLens_Blinkstrike.B_CameraLens_Blinkstrike_C.ReceiveBeginPlay");

	AB_CameraLens_Blinkstrike_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_CameraLens_Blinkstrike.B_CameraLens_Blinkstrike_C.ExecuteUbergraph_B_CameraLens_Blinkstrike
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_CameraLens_Blinkstrike_C::ExecuteUbergraph_B_CameraLens_Blinkstrike(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_CameraLens_Blinkstrike.B_CameraLens_Blinkstrike_C.ExecuteUbergraph_B_CameraLens_Blinkstrike");

	AB_CameraLens_Blinkstrike_C_ExecuteUbergraph_B_CameraLens_Blinkstrike_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
