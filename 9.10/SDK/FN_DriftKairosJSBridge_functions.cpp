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

// Function DriftKairosJSBridge.DanceChallengesJSBridge.GetDanceChallenges
// (Final, Native, Public)
// Parameters:
// struct FWebJSResponse          Response                       (Parm)

void UDanceChallengesJSBridge::GetDanceChallenges(struct FWebJSResponse Response)
{
	static auto fn = UObject::FindObject<UFunction>("Function DriftKairosJSBridge.DanceChallengesJSBridge.GetDanceChallenges");

	UDanceChallengesJSBridge_GetDanceChallenges_Params params;
	params.Response = Response;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
