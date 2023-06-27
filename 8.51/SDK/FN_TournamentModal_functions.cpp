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

// Function TournamentModal.TournamentModal_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UTournamentModal_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function TournamentModal.TournamentModal_C.OnActivated");

	UTournamentModal_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TournamentModal.TournamentModal_C.OnTournamentSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FLinearColor            LeftColor                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            RightColor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTournamentModal_C::OnTournamentSet(struct FLinearColor LeftColor, struct FLinearColor RightColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function TournamentModal.TournamentModal_C.OnTournamentSet");

	UTournamentModal_C_OnTournamentSet_Params params;
	params.LeftColor = LeftColor;
	params.RightColor = RightColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TournamentModal.TournamentModal_C.ExecuteUbergraph_TournamentModal
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTournamentModal_C::ExecuteUbergraph_TournamentModal(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TournamentModal.TournamentModal_C.ExecuteUbergraph_TournamentModal");

	UTournamentModal_C_ExecuteUbergraph_TournamentModal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
