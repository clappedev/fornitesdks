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

// Function B_Pickups_Default.B_Pickups_Default_C.Set Initial BKGD Param
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic* Mid                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Pickups_Default_C::Set_Initial_BKGD_Param(class UMaterialInstanceDynamic* Mid)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Pickups_Default.B_Pickups_Default_C.Set Initial BKGD Param");

	AB_Pickups_Default_C_Set_Initial_BKGD_Param_Params params;
	params.Mid = Mid;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Pickups_Default.B_Pickups_Default_C.Setup Light
// (Public, BlueprintCallable, BlueprintEvent)

void AB_Pickups_Default_C::Setup_Light()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Pickups_Default.B_Pickups_Default_C.Setup Light");

	AB_Pickups_Default_C_Setup_Light_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Pickups_Default.B_Pickups_Default_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AB_Pickups_Default_C::UserConstructionScript()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Pickups_Default.B_Pickups_Default_C.UserConstructionScript");

	AB_Pickups_Default_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Pickups_Default.B_Pickups_Default_C.OnTossed
// (Event, Public, BlueprintEvent)

void AB_Pickups_Default_C::OnTossed()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Pickups_Default.B_Pickups_Default_C.OnTossed");

	AB_Pickups_Default_C_OnTossed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Pickups_Default.B_Pickups_Default_C.OnPickedUp
// (Event, Public, BlueprintEvent)

void AB_Pickups_Default_C::OnPickedUp()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Pickups_Default.B_Pickups_Default_C.OnPickedUp");

	AB_Pickups_Default_C_OnPickedUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Pickups_Default.B_Pickups_Default_C.HideBackgroundAndSpotlight
// (BlueprintCallable, BlueprintEvent)

void AB_Pickups_Default_C::HideBackgroundAndSpotlight()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Pickups_Default.B_Pickups_Default_C.HideBackgroundAndSpotlight");

	AB_Pickups_Default_C_HideBackgroundAndSpotlight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Pickups_Default.B_Pickups_Default_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_Pickups_Default_C::ReceiveBeginPlay()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Pickups_Default.B_Pickups_Default_C.ReceiveBeginPlay");

	AB_Pickups_Default_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Pickups_Default.B_Pickups_Default_C.ExecuteUbergraph_B_Pickups_Default
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Pickups_Default_C::ExecuteUbergraph_B_Pickups_Default(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_Pickups_Default.B_Pickups_Default_C.ExecuteUbergraph_B_Pickups_Default");

	AB_Pickups_Default_C_ExecuteUbergraph_B_Pickups_Default_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
