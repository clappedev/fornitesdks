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

// Function ChallengeListEntry_Header.ChallengeListEntry_Header_C.OnSectionTypeSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// EChallengeListSection          SectionType                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChallengeListEntry_Header_C::OnSectionTypeSet(EChallengeListSection SectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeListEntry_Header.ChallengeListEntry_Header_C.OnSectionTypeSet");

	UChallengeListEntry_Header_C_OnSectionTypeSet_Params params;
	params.SectionType = SectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChallengeListEntry_Header.ChallengeListEntry_Header_C.ExecuteUbergraph_ChallengeListEntry_Header
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChallengeListEntry_Header_C::ExecuteUbergraph_ChallengeListEntry_Header(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeListEntry_Header.ChallengeListEntry_Header_C.ExecuteUbergraph_ChallengeListEntry_Header");

	UChallengeListEntry_Header_C_ExecuteUbergraph_ChallengeListEntry_Header_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
