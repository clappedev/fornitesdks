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

// Function InGameChallengeScreen.InGameChallengeScreen_C.HandleBack
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           PassThrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UInGameChallengeScreen_C::HandleBack(bool* PassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function InGameChallengeScreen.InGameChallengeScreen_C.HandleBack");

	UInGameChallengeScreen_C_HandleBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PassThrough != nullptr)
		*PassThrough = params.PassThrough;
}


// Function InGameChallengeScreen.InGameChallengeScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UInGameChallengeScreen_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function InGameChallengeScreen.InGameChallengeScreen_C.Construct");

	UInGameChallengeScreen_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InGameChallengeScreen.InGameChallengeScreen_C.BndEvt__ButtonMobileCloseBackgroundButton_K2Node_ComponentBoundEvent
// (BlueprintEvent)

void UInGameChallengeScreen_C::BndEvt__ButtonMobileCloseBackgroundButton_K2Node_ComponentBoundEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function InGameChallengeScreen.InGameChallengeScreen_C.BndEvt__ButtonMobileCloseBackgroundButton_K2Node_ComponentBoundEvent");

	UInGameChallengeScreen_C_BndEvt__ButtonMobileCloseBackgroundButton_K2Node_ComponentBoundEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InGameChallengeScreen.InGameChallengeScreen_C.BndEvt__MobileCloseButton_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UInGameChallengeScreen_C::BndEvt__MobileCloseButton_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function InGameChallengeScreen.InGameChallengeScreen_C.BndEvt__MobileCloseButton_K2Node_ComponentBoundEvent");

	UInGameChallengeScreen_C_BndEvt__MobileCloseButton_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InGameChallengeScreen.InGameChallengeScreen_C.ExecuteUbergraph_InGameChallengeScreen
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInGameChallengeScreen_C::ExecuteUbergraph_InGameChallengeScreen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function InGameChallengeScreen.InGameChallengeScreen_C.ExecuteUbergraph_InGameChallengeScreen");

	UInGameChallengeScreen_C_ExecuteUbergraph_InGameChallengeScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
