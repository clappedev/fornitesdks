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

// Function BP_SafeZoneStorm.BP_SafeZoneStorm_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_SafeZoneStorm_C::UserConstructionScript()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_SafeZoneStorm.BP_SafeZoneStorm_C.UserConstructionScript");

	ABP_SafeZoneStorm_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SafeZoneStorm.BP_SafeZoneStorm_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_SafeZoneStorm_C::ReceiveBeginPlay()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_SafeZoneStorm.BP_SafeZoneStorm_C.ReceiveBeginPlay");

	ABP_SafeZoneStorm_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SafeZoneStorm.BP_SafeZoneStorm_C.MobileClouds
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Mobile                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SafeZoneStorm_C::MobileClouds(bool Mobile)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_SafeZoneStorm.BP_SafeZoneStorm_C.MobileClouds");

	ABP_SafeZoneStorm_C_MobileClouds_Params params;
	params.Mobile = Mobile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SafeZoneStorm.BP_SafeZoneStorm_C.ShowClouds
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SafeZoneStorm_C::ShowClouds(float Amount)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_SafeZoneStorm.BP_SafeZoneStorm_C.ShowClouds");

	ABP_SafeZoneStorm_C_ShowClouds_Params params;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SafeZoneStorm.BP_SafeZoneStorm_C.ShowStormScreenEffect
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Show                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SafeZoneStorm_C::ShowStormScreenEffect(bool Show)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_SafeZoneStorm.BP_SafeZoneStorm_C.ShowStormScreenEffect");

	ABP_SafeZoneStorm_C_ShowStormScreenEffect_Params params;
	params.Show = Show;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SafeZoneStorm.BP_SafeZoneStorm_C.ExecuteUbergraph_BP_SafeZoneStorm
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SafeZoneStorm_C::ExecuteUbergraph_BP_SafeZoneStorm(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_SafeZoneStorm.BP_SafeZoneStorm_C.ExecuteUbergraph_BP_SafeZoneStorm");

	ABP_SafeZoneStorm_C_ExecuteUbergraph_BP_SafeZoneStorm_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
