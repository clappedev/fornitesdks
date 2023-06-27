// Fortnite SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SurvivorRescuedCounter.SurvivorRescuedCounter_C.UpdateSurvivorsRescued
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            SurvivorsRescued               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USurvivorRescuedCounter_C::UpdateSurvivorsRescued(int SurvivorsRescued)
{
	static auto fn = UObject::FindObject<UFunction>("Function SurvivorRescuedCounter.SurvivorRescuedCounter_C.UpdateSurvivorsRescued");

	USurvivorRescuedCounter_C_UpdateSurvivorsRescued_Params params;
	params.SurvivorsRescued = SurvivorsRescued;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SurvivorRescuedCounter.SurvivorRescuedCounter_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void USurvivorRescuedCounter_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function SurvivorRescuedCounter.SurvivorRescuedCounter_C.Construct");

	USurvivorRescuedCounter_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SurvivorRescuedCounter.SurvivorRescuedCounter_C.ExecuteUbergraph_SurvivorRescuedCounter
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USurvivorRescuedCounter_C::ExecuteUbergraph_SurvivorRescuedCounter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SurvivorRescuedCounter.SurvivorRescuedCounter_C.ExecuteUbergraph_SurvivorRescuedCounter");

	USurvivorRescuedCounter_C_ExecuteUbergraph_SurvivorRescuedCounter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
