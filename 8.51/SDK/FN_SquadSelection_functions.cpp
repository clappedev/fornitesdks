// Fortnite (8.51) SDK
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

// Function SquadSelection.SquadSelection_C.OnLocalPlayerParticipationChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bIsParticipating               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USquadSelection_C::OnLocalPlayerParticipationChanged(bool bIsParticipating)
{
	static auto fn = UObject::FindObject<UFunction>("Function SquadSelection.SquadSelection_C.OnLocalPlayerParticipationChanged");

	USquadSelection_C_OnLocalPlayerParticipationChanged_Params params;
	params.bIsParticipating = bIsParticipating;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SquadSelection.SquadSelection_C.ExecuteUbergraph_SquadSelection
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USquadSelection_C::ExecuteUbergraph_SquadSelection(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SquadSelection.SquadSelection_C.ExecuteUbergraph_SquadSelection");

	USquadSelection_C_ExecuteUbergraph_SquadSelection_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
