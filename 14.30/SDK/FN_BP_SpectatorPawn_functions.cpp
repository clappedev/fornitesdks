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

// Function BP_SpectatorPawn.BP_SpectatorPawn_C.SetSkydivingAudioEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SpectatorPawn_C::SetSkydivingAudioEnabled(bool Enabled)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_SpectatorPawn.BP_SpectatorPawn_C.SetSkydivingAudioEnabled");

	ABP_SpectatorPawn_C_SetSkydivingAudioEnabled_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpectatorPawn.BP_SpectatorPawn_C.GetSkydivingSound
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class USoundBase*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class USoundBase* ABP_SpectatorPawn_C::GetSkydivingSound()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_SpectatorPawn.BP_SpectatorPawn_C.GetSkydivingSound");

	ABP_SpectatorPawn_C_GetSkydivingSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_SpectatorPawn.BP_SpectatorPawn_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_SpectatorPawn_C::ReceiveBeginPlay()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_SpectatorPawn.BP_SpectatorPawn_C.ReceiveBeginPlay");

	ABP_SpectatorPawn_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpectatorPawn.BP_SpectatorPawn_C.Handle Parachute Audio State
// (BlueprintCallable, BlueprintEvent)

void ABP_SpectatorPawn_C::Handle_Parachute_Audio_State()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_SpectatorPawn.BP_SpectatorPawn_C.Handle Parachute Audio State");

	ABP_SpectatorPawn_C_Handle_Parachute_Audio_State_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpectatorPawn.BP_SpectatorPawn_C.ExecuteUbergraph_BP_SpectatorPawn
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SpectatorPawn_C::ExecuteUbergraph_BP_SpectatorPawn(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_SpectatorPawn.BP_SpectatorPawn_C.ExecuteUbergraph_BP_SpectatorPawn");

	ABP_SpectatorPawn_C_ExecuteUbergraph_BP_SpectatorPawn_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
