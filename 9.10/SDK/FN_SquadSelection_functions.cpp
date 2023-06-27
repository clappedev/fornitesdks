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


// Function SquadSelection.SquadSelection_C.BndEvt__Mobile_CloseButton_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void USquadSelection_C::BndEvt__Mobile_CloseButton_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function SquadSelection.SquadSelection_C.BndEvt__Mobile_CloseButton_K2Node_ComponentBoundEvent");

	USquadSelection_C_BndEvt__Mobile_CloseButton_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

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
