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

// Function ChallengeInGameTreeEntry_Header.ChallengeInGameTreeEntry_Header_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UChallengeInGameTreeEntry_Header_C::OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeInGameTreeEntry_Header.ChallengeInGameTreeEntry_Header_C.OnMouseEnter");

	UChallengeInGameTreeEntry_Header_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChallengeInGameTreeEntry_Header.ChallengeInGameTreeEntry_Header_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UChallengeInGameTreeEntry_Header_C::OnMouseLeave(struct FPointerEvent MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeInGameTreeEntry_Header.ChallengeInGameTreeEntry_Header_C.OnMouseLeave");

	UChallengeInGameTreeEntry_Header_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChallengeInGameTreeEntry_Header.ChallengeInGameTreeEntry_Header_C.BP_OnItemExpansionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bIsExpanded                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChallengeInGameTreeEntry_Header_C::BP_OnItemExpansionChanged(bool bIsExpanded)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeInGameTreeEntry_Header.ChallengeInGameTreeEntry_Header_C.BP_OnItemExpansionChanged");

	UChallengeInGameTreeEntry_Header_C_BP_OnItemExpansionChanged_Params params;
	params.bIsExpanded = bIsExpanded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChallengeInGameTreeEntry_Header.ChallengeInGameTreeEntry_Header_C.OnChallengeSetEstablished
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FFortChallengeSetStyle  DisplayStyle                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UChallengeInGameTreeEntry_Header_C::OnChallengeSetEstablished(struct FFortChallengeSetStyle DisplayStyle)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeInGameTreeEntry_Header.ChallengeInGameTreeEntry_Header_C.OnChallengeSetEstablished");

	UChallengeInGameTreeEntry_Header_C_OnChallengeSetEstablished_Params params;
	params.DisplayStyle = DisplayStyle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChallengeInGameTreeEntry_Header.ChallengeInGameTreeEntry_Header_C.ExecuteUbergraph_ChallengeInGameTreeEntry_Header
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChallengeInGameTreeEntry_Header_C::ExecuteUbergraph_ChallengeInGameTreeEntry_Header(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeInGameTreeEntry_Header.ChallengeInGameTreeEntry_Header_C.ExecuteUbergraph_ChallengeInGameTreeEntry_Header");

	UChallengeInGameTreeEntry_Header_C_ExecuteUbergraph_ChallengeInGameTreeEntry_Header_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
