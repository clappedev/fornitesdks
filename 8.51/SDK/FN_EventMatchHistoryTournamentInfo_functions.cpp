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

// Function EventMatchHistoryTournamentInfo.EventMatchHistoryTournamentInfo_C.RefreshDataBP
// (Event, Protected, BlueprintEvent)

void UEventMatchHistoryTournamentInfo_C::RefreshDataBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function EventMatchHistoryTournamentInfo.EventMatchHistoryTournamentInfo_C.RefreshDataBP");

	UEventMatchHistoryTournamentInfo_C_RefreshDataBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EventMatchHistoryTournamentInfo.EventMatchHistoryTournamentInfo_C.ExecuteUbergraph_EventMatchHistoryTournamentInfo
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UEventMatchHistoryTournamentInfo_C::ExecuteUbergraph_EventMatchHistoryTournamentInfo(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EventMatchHistoryTournamentInfo.EventMatchHistoryTournamentInfo_C.ExecuteUbergraph_EventMatchHistoryTournamentInfo");

	UEventMatchHistoryTournamentInfo_C_ExecuteUbergraph_EventMatchHistoryTournamentInfo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
