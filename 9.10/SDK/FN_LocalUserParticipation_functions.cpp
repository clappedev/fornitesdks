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

// Function LocalUserParticipation.LocalUserParticipation_C.OnLocalPlayerParticipationChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bIsParticipating               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULocalUserParticipation_C::OnLocalPlayerParticipationChanged(bool bIsParticipating)
{
	static auto fn = UObject::FindObject<UFunction>("Function LocalUserParticipation.LocalUserParticipation_C.OnLocalPlayerParticipationChanged");

	ULocalUserParticipation_C_OnLocalPlayerParticipationChanged_Params params;
	params.bIsParticipating = bIsParticipating;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LocalUserParticipation.LocalUserParticipation_C.ExecuteUbergraph_LocalUserParticipation
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULocalUserParticipation_C::ExecuteUbergraph_LocalUserParticipation(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LocalUserParticipation.LocalUserParticipation_C.ExecuteUbergraph_LocalUserParticipation");

	ULocalUserParticipation_C_ExecuteUbergraph_LocalUserParticipation_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
