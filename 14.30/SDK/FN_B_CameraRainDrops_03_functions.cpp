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

// Function B_CameraRainDrops_03.B_CameraRainDrops_03_C.Alpha__FinishedFunc
// (BlueprintEvent)

void AB_CameraRainDrops_03_C::Alpha__FinishedFunc()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_CameraRainDrops_03.B_CameraRainDrops_03_C.Alpha__FinishedFunc");

	AB_CameraRainDrops_03_C_Alpha__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_CameraRainDrops_03.B_CameraRainDrops_03_C.Alpha__UpdateFunc
// (BlueprintEvent)

void AB_CameraRainDrops_03_C::Alpha__UpdateFunc()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_CameraRainDrops_03.B_CameraRainDrops_03_C.Alpha__UpdateFunc");

	AB_CameraRainDrops_03_C_Alpha__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_CameraRainDrops_03.B_CameraRainDrops_03_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void AB_CameraRainDrops_03_C::ReceiveDestroyed()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_CameraRainDrops_03.B_CameraRainDrops_03_C.ReceiveDestroyed");

	AB_CameraRainDrops_03_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_CameraRainDrops_03.B_CameraRainDrops_03_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_CameraRainDrops_03_C::ReceiveBeginPlay()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_CameraRainDrops_03.B_CameraRainDrops_03_C.ReceiveBeginPlay");

	AB_CameraRainDrops_03_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_CameraRainDrops_03.B_CameraRainDrops_03_C.ExecuteUbergraph_B_CameraRainDrops_03
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_CameraRainDrops_03_C::ExecuteUbergraph_B_CameraRainDrops_03(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_CameraRainDrops_03.B_CameraRainDrops_03_C.ExecuteUbergraph_B_CameraRainDrops_03");

	AB_CameraRainDrops_03_C_ExecuteUbergraph_B_CameraRainDrops_03_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
