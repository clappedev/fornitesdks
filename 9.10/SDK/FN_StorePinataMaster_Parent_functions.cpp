// Fortnite (9.1) SDK
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

// Function StorePinataMaster_Parent.StorePinataMaster_Parent_C.InitiatePinata
// (BlueprintCallable, BlueprintEvent)

void AStorePinataMaster_Parent_C::InitiatePinata()
{
	static auto fn = UObject::FindObject<UFunction>("Function StorePinataMaster_Parent.StorePinataMaster_Parent_C.InitiatePinata");

	AStorePinataMaster_Parent_C_InitiatePinata_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorePinataMaster_Parent.StorePinataMaster_Parent_C.CameraResetComplete
// (BlueprintCallable, BlueprintEvent)

void AStorePinataMaster_Parent_C::CameraResetComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function StorePinataMaster_Parent.StorePinataMaster_Parent_C.CameraResetComplete");

	AStorePinataMaster_Parent_C_CameraResetComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorePinataMaster_Parent.StorePinataMaster_Parent_C.CameraTransitionComplete
// (BlueprintCallable, BlueprintEvent)

void AStorePinataMaster_Parent_C::CameraTransitionComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function StorePinataMaster_Parent.StorePinataMaster_Parent_C.CameraTransitionComplete");

	AStorePinataMaster_Parent_C_CameraTransitionComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StorePinataMaster_Parent.StorePinataMaster_Parent_C.ExecuteUbergraph_StorePinataMaster_Parent
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AStorePinataMaster_Parent_C::ExecuteUbergraph_StorePinataMaster_Parent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StorePinataMaster_Parent.StorePinataMaster_Parent_C.ExecuteUbergraph_StorePinataMaster_Parent");

	AStorePinataMaster_Parent_C_ExecuteUbergraph_StorePinataMaster_Parent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
