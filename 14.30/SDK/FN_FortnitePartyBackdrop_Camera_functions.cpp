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

// Function FortnitePartyBackdrop_Camera.FortnitePartyBackdrop_Camera_C.OnActivated
// (Event, Public, BlueprintEvent)
// Parameters:
// class AFortPlayerController*   PlayerController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFortnitePartyBackdrop_Camera_C::OnActivated(class AFortPlayerController* PlayerController)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function FortnitePartyBackdrop_Camera.FortnitePartyBackdrop_Camera_C.OnActivated");

	AFortnitePartyBackdrop_Camera_C_OnActivated_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortnitePartyBackdrop_Camera.FortnitePartyBackdrop_Camera_C.OnDeactivated
// (Event, Public, BlueprintEvent)
// Parameters:
// class AFortPlayerController*   PlayerController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFortnitePartyBackdrop_Camera_C::OnDeactivated(class AFortPlayerController* PlayerController)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function FortnitePartyBackdrop_Camera.FortnitePartyBackdrop_Camera_C.OnDeactivated");

	AFortnitePartyBackdrop_Camera_C_OnDeactivated_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortnitePartyBackdrop_Camera.FortnitePartyBackdrop_Camera_C.Reset Location
// (BlueprintCallable, BlueprintEvent)

void AFortnitePartyBackdrop_Camera_C::Reset_Location()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function FortnitePartyBackdrop_Camera.FortnitePartyBackdrop_Camera_C.Reset Location");

	AFortnitePartyBackdrop_Camera_C_Reset_Location_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortnitePartyBackdrop_Camera.FortnitePartyBackdrop_Camera_C.ManualActivate
// (BlueprintCallable, BlueprintEvent)

void AFortnitePartyBackdrop_Camera_C::ManualActivate()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function FortnitePartyBackdrop_Camera.FortnitePartyBackdrop_Camera_C.ManualActivate");

	AFortnitePartyBackdrop_Camera_C_ManualActivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortnitePartyBackdrop_Camera.FortnitePartyBackdrop_Camera_C.ExecuteUbergraph_FortnitePartyBackdrop_Camera
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFortnitePartyBackdrop_Camera_C::ExecuteUbergraph_FortnitePartyBackdrop_Camera(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function FortnitePartyBackdrop_Camera.FortnitePartyBackdrop_Camera_C.ExecuteUbergraph_FortnitePartyBackdrop_Camera");

	AFortnitePartyBackdrop_Camera_C_ExecuteUbergraph_FortnitePartyBackdrop_Camera_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
