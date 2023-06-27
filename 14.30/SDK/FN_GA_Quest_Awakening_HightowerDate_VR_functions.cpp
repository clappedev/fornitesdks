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

// Function GA_Quest_Awakening_HightowerDate_VR.GA_Quest_Awakening_HightowerDate_VR_C.Wait End Game Phase
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EAthenaGamePhase               GamePhase                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Quest_Awakening_HightowerDate_VR_C::Wait_End_Game_Phase(EAthenaGamePhase GamePhase)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Quest_Awakening_HightowerDate_VR.GA_Quest_Awakening_HightowerDate_VR_C.Wait End Game Phase");

	UGA_Quest_Awakening_HightowerDate_VR_C_Wait_End_Game_Phase_Params params;
	params.GamePhase = GamePhase;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Quest_Awakening_HightowerDate_VR.GA_Quest_Awakening_HightowerDate_VR_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_Quest_Awakening_HightowerDate_VR_C::K2_ActivateAbility()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Quest_Awakening_HightowerDate_VR.GA_Quest_Awakening_HightowerDate_VR_C.K2_ActivateAbility");

	UGA_Quest_Awakening_HightowerDate_VR_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Quest_Awakening_HightowerDate_VR.GA_Quest_Awakening_HightowerDate_VR_C.ExecuteUbergraph_GA_Quest_Awakening_HightowerDate_VR
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Quest_Awakening_HightowerDate_VR_C::ExecuteUbergraph_GA_Quest_Awakening_HightowerDate_VR(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Quest_Awakening_HightowerDate_VR.GA_Quest_Awakening_HightowerDate_VR_C.ExecuteUbergraph_GA_Quest_Awakening_HightowerDate_VR");

	UGA_Quest_Awakening_HightowerDate_VR_C_ExecuteUbergraph_GA_Quest_Awakening_HightowerDate_VR_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
