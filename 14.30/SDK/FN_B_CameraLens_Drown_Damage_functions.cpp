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

// Function B_CameraLens_Drown_Damage.B_CameraLens_Drown_Damage_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_CameraLens_Drown_Damage_C::ReceiveBeginPlay()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_CameraLens_Drown_Damage.B_CameraLens_Drown_Damage_C.ReceiveBeginPlay");

	AB_CameraLens_Drown_Damage_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_CameraLens_Drown_Damage.B_CameraLens_Drown_Damage_C.ExecuteUbergraph_B_CameraLens_Drown_Damage
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_CameraLens_Drown_Damage_C::ExecuteUbergraph_B_CameraLens_Drown_Damage(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_CameraLens_Drown_Damage.B_CameraLens_Drown_Damage_C.ExecuteUbergraph_B_CameraLens_Drown_Damage");

	AB_CameraLens_Drown_Damage_C_ExecuteUbergraph_B_CameraLens_Drown_Damage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif