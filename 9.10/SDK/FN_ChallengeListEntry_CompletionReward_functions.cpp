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

// Function ChallengeListEntry_CompletionReward.ChallengeListEntry_CompletionReward_C.OnRewardInfoSet
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// bool                           bIsCompleted                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FFortChallengeSetStyle  DisplayStyle                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UChallengeListEntry_CompletionReward_C::OnRewardInfoSet(bool bIsCompleted, struct FFortChallengeSetStyle DisplayStyle)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeListEntry_CompletionReward.ChallengeListEntry_CompletionReward_C.OnRewardInfoSet");

	UChallengeListEntry_CompletionReward_C_OnRewardInfoSet_Params params;
	params.bIsCompleted = bIsCompleted;
	params.DisplayStyle = DisplayStyle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChallengeListEntry_CompletionReward.ChallengeListEntry_CompletionReward_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UChallengeListEntry_CompletionReward_C::OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeListEntry_CompletionReward.ChallengeListEntry_CompletionReward_C.OnMouseEnter");

	UChallengeListEntry_CompletionReward_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChallengeListEntry_CompletionReward.ChallengeListEntry_CompletionReward_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UChallengeListEntry_CompletionReward_C::OnMouseLeave(struct FPointerEvent MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeListEntry_CompletionReward.ChallengeListEntry_CompletionReward_C.OnMouseLeave");

	UChallengeListEntry_CompletionReward_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChallengeListEntry_CompletionReward.ChallengeListEntry_CompletionReward_C.ExecuteUbergraph_ChallengeListEntry_CompletionReward
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChallengeListEntry_CompletionReward_C::ExecuteUbergraph_ChallengeListEntry_CompletionReward(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeListEntry_CompletionReward.ChallengeListEntry_CompletionReward_C.ExecuteUbergraph_ChallengeListEntry_CompletionReward");

	UChallengeListEntry_CompletionReward_C_ExecuteUbergraph_ChallengeListEntry_CompletionReward_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
