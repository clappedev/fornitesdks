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

// Function ChallengeInGameTreeEntry_Challenge.ChallengeInGameTreeEntry_Challenge_C.BndEvt__Button_PartyAssist_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UChallengeInGameTreeEntry_Challenge_C::BndEvt__Button_PartyAssist_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeInGameTreeEntry_Challenge.ChallengeInGameTreeEntry_Challenge_C.BndEvt__Button_PartyAssist_K2Node_ComponentBoundEvent");

	UChallengeInGameTreeEntry_Challenge_C_BndEvt__Button_PartyAssist_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChallengeInGameTreeEntry_Challenge.ChallengeInGameTreeEntry_Challenge_C.OnPartyAssistEnabledChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bIsPartyAssistEnabled          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChallengeInGameTreeEntry_Challenge_C::OnPartyAssistEnabledChanged(bool bIsPartyAssistEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeInGameTreeEntry_Challenge.ChallengeInGameTreeEntry_Challenge_C.OnPartyAssistEnabledChanged");

	UChallengeInGameTreeEntry_Challenge_C_OnPartyAssistEnabledChanged_Params params;
	params.bIsPartyAssistEnabled = bIsPartyAssistEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChallengeInGameTreeEntry_Challenge.ChallengeInGameTreeEntry_Challenge_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UChallengeInGameTreeEntry_Challenge_C::OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeInGameTreeEntry_Challenge.ChallengeInGameTreeEntry_Challenge_C.OnMouseEnter");

	UChallengeInGameTreeEntry_Challenge_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChallengeInGameTreeEntry_Challenge.ChallengeInGameTreeEntry_Challenge_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UChallengeInGameTreeEntry_Challenge_C::OnMouseLeave(struct FPointerEvent MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeInGameTreeEntry_Challenge.ChallengeInGameTreeEntry_Challenge_C.OnMouseLeave");

	UChallengeInGameTreeEntry_Challenge_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChallengeInGameTreeEntry_Challenge.ChallengeInGameTreeEntry_Challenge_C.OnChallengeInfoSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bIsComplete                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsLocked                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChallengeInGameTreeEntry_Challenge_C::OnChallengeInfoSet(bool bIsComplete, bool bIsLocked)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeInGameTreeEntry_Challenge.ChallengeInGameTreeEntry_Challenge_C.OnChallengeInfoSet");

	UChallengeInGameTreeEntry_Challenge_C_OnChallengeInfoSet_Params params;
	params.bIsComplete = bIsComplete;
	params.bIsLocked = bIsLocked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChallengeInGameTreeEntry_Challenge.ChallengeInGameTreeEntry_Challenge_C.ExecuteUbergraph_ChallengeInGameTreeEntry_Challenge
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChallengeInGameTreeEntry_Challenge_C::ExecuteUbergraph_ChallengeInGameTreeEntry_Challenge(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeInGameTreeEntry_Challenge.ChallengeInGameTreeEntry_Challenge_C.ExecuteUbergraph_ChallengeInGameTreeEntry_Challenge");

	UChallengeInGameTreeEntry_Challenge_C_ExecuteUbergraph_ChallengeInGameTreeEntry_Challenge_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
