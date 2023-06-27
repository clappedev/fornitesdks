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

// Function BP_TeleportationDrone.BP_TeleportationDrone_C.PlaySpawnAnim
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_TeleportationDrone_C::PlaySpawnAnim()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_TeleportationDrone.BP_TeleportationDrone_C.PlaySpawnAnim");

	ABP_TeleportationDrone_C_PlaySpawnAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TeleportationDrone.BP_TeleportationDrone_C.InitDrone
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_TeleportationDrone_C::InitDrone()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_TeleportationDrone.BP_TeleportationDrone_C.InitDrone");

	ABP_TeleportationDrone_C_InitDrone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TeleportationDrone.BP_TeleportationDrone_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_TeleportationDrone_C::ReceiveBeginPlay()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_TeleportationDrone.BP_TeleportationDrone_C.ReceiveBeginPlay");

	ABP_TeleportationDrone_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TeleportationDrone.BP_TeleportationDrone_C.OnSpawnOutAnimEnded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*            Montage                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bInterrupted                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TeleportationDrone_C::OnSpawnOutAnimEnded(class UAnimMontage* Montage, bool bInterrupted)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_TeleportationDrone.BP_TeleportationDrone_C.OnSpawnOutAnimEnded");

	ABP_TeleportationDrone_C_OnSpawnOutAnimEnded_Params params;
	params.Montage = Montage;
	params.bInterrupted = bInterrupted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TeleportationDrone.BP_TeleportationDrone_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TeleportationDrone_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_TeleportationDrone.BP_TeleportationDrone_C.ReceiveTick");

	ABP_TeleportationDrone_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TeleportationDrone.BP_TeleportationDrone_C.ExecuteUbergraph_BP_TeleportationDrone
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TeleportationDrone_C::ExecuteUbergraph_BP_TeleportationDrone(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_TeleportationDrone.BP_TeleportationDrone_C.ExecuteUbergraph_BP_TeleportationDrone");

	ABP_TeleportationDrone_C_ExecuteUbergraph_BP_TeleportationDrone_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
