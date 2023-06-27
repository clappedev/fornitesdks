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

// Function B_CameraLens_Geyser.B_CameraLens_Geyser_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void AB_CameraLens_Geyser_C::Timeline_0__FinishedFunc()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_CameraLens_Geyser.B_CameraLens_Geyser_C.Timeline_0__FinishedFunc");

	AB_CameraLens_Geyser_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_CameraLens_Geyser.B_CameraLens_Geyser_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void AB_CameraLens_Geyser_C::Timeline_0__UpdateFunc()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_CameraLens_Geyser.B_CameraLens_Geyser_C.Timeline_0__UpdateFunc");

	AB_CameraLens_Geyser_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_CameraLens_Geyser.B_CameraLens_Geyser_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_CameraLens_Geyser_C::ReceiveBeginPlay()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_CameraLens_Geyser.B_CameraLens_Geyser_C.ReceiveBeginPlay");

	AB_CameraLens_Geyser_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_CameraLens_Geyser.B_CameraLens_Geyser_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void AB_CameraLens_Geyser_C::ReceiveDestroyed()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_CameraLens_Geyser.B_CameraLens_Geyser_C.ReceiveDestroyed");

	AB_CameraLens_Geyser_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_CameraLens_Geyser.B_CameraLens_Geyser_C.ExecuteUbergraph_B_CameraLens_Geyser
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_CameraLens_Geyser_C::ExecuteUbergraph_B_CameraLens_Geyser(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_CameraLens_Geyser.B_CameraLens_Geyser_C.ExecuteUbergraph_B_CameraLens_Geyser");

	AB_CameraLens_Geyser_C_ExecuteUbergraph_B_CameraLens_Geyser_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
