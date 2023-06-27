// Fortnite (14.30) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function B_EmotePreviewDisplay.B_EmotePreviewDisplay_C.CleanupDynamicSounds
// (Public, BlueprintCallable, BlueprintEvent)

void AB_EmotePreviewDisplay_C::CleanupDynamicSounds()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_EmotePreviewDisplay.B_EmotePreviewDisplay_C.CleanupDynamicSounds");

	AB_EmotePreviewDisplay_C_CleanupDynamicSounds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_EmotePreviewDisplay.B_EmotePreviewDisplay_C.ApplyEmoteToPet
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsRemoval                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_EmotePreviewDisplay_C::ApplyEmoteToPet(bool IsRemoval)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_EmotePreviewDisplay.B_EmotePreviewDisplay_C.ApplyEmoteToPet");

	AB_EmotePreviewDisplay_C_ApplyEmoteToPet_Params params;
	params.IsRemoval = IsRemoval;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_EmotePreviewDisplay.B_EmotePreviewDisplay_C.OnLoaded_638F148342254A777E929B88915A8958
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_EmotePreviewDisplay_C::OnLoaded_638F148342254A777E929B88915A8958(class UObject* Loaded)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_EmotePreviewDisplay.B_EmotePreviewDisplay_C.OnLoaded_638F148342254A777E929B88915A8958");

	AB_EmotePreviewDisplay_C_OnLoaded_638F148342254A777E929B88915A8958_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_EmotePreviewDisplay.B_EmotePreviewDisplay_C.PreviewEmote
// (Event, Public, BlueprintEvent)
// Parameters:
// class UFortMontageItemDefinitionBase* Emote                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_EmotePreviewDisplay_C::PreviewEmote(class UFortMontageItemDefinitionBase* Emote)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_EmotePreviewDisplay.B_EmotePreviewDisplay_C.PreviewEmote");

	AB_EmotePreviewDisplay_C_PreviewEmote_Params params;
	params.Emote = Emote;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_EmotePreviewDisplay.B_EmotePreviewDisplay_C.PerformSpecialAction
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   ActionName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_EmotePreviewDisplay_C::PerformSpecialAction(const struct FName& ActionName)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_EmotePreviewDisplay.B_EmotePreviewDisplay_C.PerformSpecialAction");

	AB_EmotePreviewDisplay_C_PerformSpecialAction_Params params;
	params.ActionName = ActionName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_EmotePreviewDisplay.B_EmotePreviewDisplay_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_EmotePreviewDisplay_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_EmotePreviewDisplay.B_EmotePreviewDisplay_C.ReceiveEndPlay");

	AB_EmotePreviewDisplay_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_EmotePreviewDisplay.B_EmotePreviewDisplay_C.SpecialCaseShoutHandler
// (BlueprintCallable, BlueprintEvent)

void AB_EmotePreviewDisplay_C::SpecialCaseShoutHandler()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_EmotePreviewDisplay.B_EmotePreviewDisplay_C.SpecialCaseShoutHandler");

	AB_EmotePreviewDisplay_C_SpecialCaseShoutHandler_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_EmotePreviewDisplay.B_EmotePreviewDisplay_C.ExecuteUbergraph_B_EmotePreviewDisplay
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_EmotePreviewDisplay_C::ExecuteUbergraph_B_EmotePreviewDisplay(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_EmotePreviewDisplay.B_EmotePreviewDisplay_C.ExecuteUbergraph_B_EmotePreviewDisplay");

	AB_EmotePreviewDisplay_C_ExecuteUbergraph_B_EmotePreviewDisplay_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_EmotePreviewDisplay.B_EmotePreviewDisplay_C.OnEmoteSetupFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void AB_EmotePreviewDisplay_C::OnEmoteSetupFinished__DelegateSignature()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function B_EmotePreviewDisplay.B_EmotePreviewDisplay_C.OnEmoteSetupFinished__DelegateSignature");

	AB_EmotePreviewDisplay_C_OnEmoteSetupFinished__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
