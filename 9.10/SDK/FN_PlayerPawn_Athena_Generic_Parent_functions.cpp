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

// Function PlayerPawn_Athena_Generic_Parent.PlayerPawn_Athena_Generic_Parent_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void APlayerPawn_Athena_Generic_Parent_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena_Generic_Parent.PlayerPawn_Athena_Generic_Parent_C.ReceiveBeginPlay");

	APlayerPawn_Athena_Generic_Parent_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena_Generic_Parent.PlayerPawn_Athena_Generic_Parent_C.OnEnteredVehicle
// (Event, Public, BlueprintEvent)

void APlayerPawn_Athena_Generic_Parent_C::OnEnteredVehicle()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena_Generic_Parent.PlayerPawn_Athena_Generic_Parent_C.OnEnteredVehicle");

	APlayerPawn_Athena_Generic_Parent_C_OnEnteredVehicle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena_Generic_Parent.PlayerPawn_Athena_Generic_Parent_C.OnExitedVehicle
// (Event, Public, BlueprintEvent)

void APlayerPawn_Athena_Generic_Parent_C::OnExitedVehicle()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena_Generic_Parent.PlayerPawn_Athena_Generic_Parent_C.OnExitedVehicle");

	APlayerPawn_Athena_Generic_Parent_C_OnExitedVehicle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena_Generic_Parent.PlayerPawn_Athena_Generic_Parent_C.OnJumped
// (Event, Public, BlueprintEvent)

void APlayerPawn_Athena_Generic_Parent_C::OnJumped()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena_Generic_Parent.PlayerPawn_Athena_Generic_Parent_C.OnJumped");

	APlayerPawn_Athena_Generic_Parent_C_OnJumped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena_Generic_Parent.PlayerPawn_Athena_Generic_Parent_C.K2_OnStartCrouch
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          HalfHeightAdjust               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ScaledHalfHeightAdjust         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawn_Athena_Generic_Parent_C::K2_OnStartCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena_Generic_Parent.PlayerPawn_Athena_Generic_Parent_C.K2_OnStartCrouch");

	APlayerPawn_Athena_Generic_Parent_C_K2_OnStartCrouch_Params params;
	params.HalfHeightAdjust = HalfHeightAdjust;
	params.ScaledHalfHeightAdjust = ScaledHalfHeightAdjust;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena_Generic_Parent.PlayerPawn_Athena_Generic_Parent_C.K2_OnEndCrouch
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          HalfHeightAdjust               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ScaledHalfHeightAdjust         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawn_Athena_Generic_Parent_C::K2_OnEndCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena_Generic_Parent.PlayerPawn_Athena_Generic_Parent_C.K2_OnEndCrouch");

	APlayerPawn_Athena_Generic_Parent_C_K2_OnEndCrouch_Params params;
	params.HalfHeightAdjust = HalfHeightAdjust;
	params.ScaledHalfHeightAdjust = ScaledHalfHeightAdjust;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena_Generic_Parent.PlayerPawn_Athena_Generic_Parent_C.ExecuteUbergraph_PlayerPawn_Athena_Generic_Parent
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawn_Athena_Generic_Parent_C::ExecuteUbergraph_PlayerPawn_Athena_Generic_Parent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena_Generic_Parent.PlayerPawn_Athena_Generic_Parent_C.ExecuteUbergraph_PlayerPawn_Athena_Generic_Parent");

	APlayerPawn_Athena_Generic_Parent_C_ExecuteUbergraph_PlayerPawn_Athena_Generic_Parent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Athena_Generic_Parent.PlayerPawn_Athena_Generic_Parent_C.ShootingTargetReactToJump__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerPawnAthena*   JumpingPlayer                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawn_Athena_Generic_Parent_C::ShootingTargetReactToJump__DelegateSignature(class AFortPlayerPawnAthena* JumpingPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Athena_Generic_Parent.PlayerPawn_Athena_Generic_Parent_C.ShootingTargetReactToJump__DelegateSignature");

	APlayerPawn_Athena_Generic_Parent_C_ShootingTargetReactToJump__DelegateSignature_Params params;
	params.JumpingPlayer = JumpingPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
