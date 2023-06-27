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

// Function GCL_BoostJumpPack_FuelRegen.GCL_BoostJumpPack_FuelRegen_C.FullBlinkTimeline__FinishedFunc
// (BlueprintEvent)

void AGCL_BoostJumpPack_FuelRegen_C::FullBlinkTimeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCL_BoostJumpPack_FuelRegen.GCL_BoostJumpPack_FuelRegen_C.FullBlinkTimeline__FinishedFunc");

	AGCL_BoostJumpPack_FuelRegen_C_FullBlinkTimeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCL_BoostJumpPack_FuelRegen.GCL_BoostJumpPack_FuelRegen_C.FullBlinkTimeline__UpdateFunc
// (BlueprintEvent)

void AGCL_BoostJumpPack_FuelRegen_C::FullBlinkTimeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCL_BoostJumpPack_FuelRegen.GCL_BoostJumpPack_FuelRegen_C.FullBlinkTimeline__UpdateFunc");

	AGCL_BoostJumpPack_FuelRegen_C_FullBlinkTimeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCL_BoostJumpPack_FuelRegen.GCL_BoostJumpPack_FuelRegen_C.ResetBlink
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AFortPlayerPawn*         PlayerPawn                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGCL_BoostJumpPack_FuelRegen_C::ResetBlink(class AFortPlayerPawn* PlayerPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCL_BoostJumpPack_FuelRegen.GCL_BoostJumpPack_FuelRegen_C.ResetBlink");

	AGCL_BoostJumpPack_FuelRegen_C_ResetBlink_Params params;
	params.PlayerPawn = PlayerPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCL_BoostJumpPack_FuelRegen.GCL_BoostJumpPack_FuelRegen_C.ExecuteUbergraph_GCL_BoostJumpPack_FuelRegen
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGCL_BoostJumpPack_FuelRegen_C::ExecuteUbergraph_GCL_BoostJumpPack_FuelRegen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCL_BoostJumpPack_FuelRegen.GCL_BoostJumpPack_FuelRegen_C.ExecuteUbergraph_GCL_BoostJumpPack_FuelRegen");

	AGCL_BoostJumpPack_FuelRegen_C_ExecuteUbergraph_GCL_BoostJumpPack_FuelRegen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
