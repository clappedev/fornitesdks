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

// Function BP_FluidSim_FN.BP_FluidSim_FN_C.GetFortnitePawnForces
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_FluidSim_FN_C::GetFortnitePawnForces()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_FluidSim_FN.BP_FluidSim_FN_C.GetFortnitePawnForces");

	ABP_FluidSim_FN_C_GetFortnitePawnForces_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FluidSim_FN.BP_FluidSim_FN_C.GetLocalPawn
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APawn*                   Pawn                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_FluidSim_FN_C::GetLocalPawn(class APawn** Pawn)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_FluidSim_FN.BP_FluidSim_FN_C.GetLocalPawn");

	ABP_FluidSim_FN_C_GetLocalPawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Pawn != nullptr)
		*Pawn = params.Pawn;
}


// Function BP_FluidSim_FN.BP_FluidSim_FN_C.GetPlayerPawnForces
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_FluidSim_FN_C::GetPlayerPawnForces()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_FluidSim_FN.BP_FluidSim_FN_C.GetPlayerPawnForces");

	ABP_FluidSim_FN_C_GetPlayerPawnForces_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FluidSim_FN.BP_FluidSim_FN_C.ExecuteUbergraph_BP_FluidSim_FN
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_FluidSim_FN_C::ExecuteUbergraph_BP_FluidSim_FN(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function BP_FluidSim_FN.BP_FluidSim_FN_C.ExecuteUbergraph_BP_FluidSim_FN");

	ABP_FluidSim_FN_C_ExecuteUbergraph_BP_FluidSim_FN_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
