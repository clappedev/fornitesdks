// Fortnite (1.11) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.CheckForLTMBangs
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           BangAvail                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAthenaMatchmakingPlay_C::CheckForLTMBangs(bool* BangAvail)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.CheckForLTMBangs");

	UAthenaMatchmakingPlay_C_CheckForLTMBangs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BangAvail != nullptr)
		*BangAvail = params.BangAvail;
}


// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.OpenPlayOptions
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaMatchmakingPlay_C::OpenPlayOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.OpenPlayOptions");

	UAthenaMatchmakingPlay_C_OpenPlayOptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.FillChange
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bDirection                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaMatchmakingPlay_C::FillChange(bool bDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.FillChange");

	UAthenaMatchmakingPlay_C_FillChange_Params params;
	params.bDirection = bDirection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.PlaylistChange
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bDirection                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaMatchmakingPlay_C::PlaylistChange(bool bDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.PlaylistChange");

	UAthenaMatchmakingPlay_C_PlaylistChange_Params params;
	params.bDirection = bDirection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.SetAutoFillOptions
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaMatchmakingPlay_C::SetAutoFillOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.SetAutoFillOptions");

	UAthenaMatchmakingPlay_C_SetAutoFillOptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.BndEvt__BP_CancelButton_K2Node_ComponentBoundEvent_19_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaMatchmakingPlay_C::BndEvt__BP_CancelButton_K2Node_ComponentBoundEvent_19_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.BndEvt__BP_CancelButton_K2Node_ComponentBoundEvent_19_CommonButtonClicked__DelegateSignature");

	UAthenaMatchmakingPlay_C_BndEvt__BP_CancelButton_K2Node_ComponentBoundEvent_19_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.SetPlayButtonState
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          bCanMatchmake                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaMatchmakingPlay_C::SetPlayButtonState(bool* bCanMatchmake)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.SetPlayButtonState");

	UAthenaMatchmakingPlay_C_SetPlayButtonState_Params params;
	params.bCanMatchmake = bCanMatchmake;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaMatchmakingPlay_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.Construct");

	UAthenaMatchmakingPlay_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.SetCancelButtonState
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          bIsMatchmaking                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaMatchmakingPlay_C::SetCancelButtonState(bool* bIsMatchmaking)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.SetCancelButtonState");

	UAthenaMatchmakingPlay_C_SetCancelButtonState_Params params;
	params.bIsMatchmaking = bIsMatchmaking;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.BndEvt__PlaylistRotator_K2Node_ComponentBoundEvent_83_OnRotated__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaMatchmakingPlay_C::BndEvt__PlaylistRotator_K2Node_ComponentBoundEvent_83_OnRotated__DelegateSignature(int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.BndEvt__PlaylistRotator_K2Node_ComponentBoundEvent_83_OnRotated__DelegateSignature");

	UAthenaMatchmakingPlay_C_BndEvt__PlaylistRotator_K2Node_ComponentBoundEvent_83_OnRotated__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.BndEvt__TeamFillRotator_K2Node_ComponentBoundEvent_128_OnRotated__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaMatchmakingPlay_C::BndEvt__TeamFillRotator_K2Node_ComponentBoundEvent_128_OnRotated__DelegateSignature(int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.BndEvt__TeamFillRotator_K2Node_ComponentBoundEvent_128_OnRotated__DelegateSignature");

	UAthenaMatchmakingPlay_C_BndEvt__TeamFillRotator_K2Node_ComponentBoundEvent_128_OnRotated__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.BndEvt__FillSquadButton_K2Node_ComponentBoundEvent_33_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaMatchmakingPlay_C::BndEvt__FillSquadButton_K2Node_ComponentBoundEvent_33_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.BndEvt__FillSquadButton_K2Node_ComponentBoundEvent_33_CommonButtonClicked__DelegateSignature");

	UAthenaMatchmakingPlay_C_BndEvt__FillSquadButton_K2Node_ComponentBoundEvent_33_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.NewModeSelected_Display
// (BlueprintCallable, BlueprintEvent)

void UAthenaMatchmakingPlay_C::NewModeSelected_Display()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.NewModeSelected_Display");

	UAthenaMatchmakingPlay_C_NewModeSelected_Display_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.RefreshBang
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UAthenaMatchmakingPlay_C::RefreshBang()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.RefreshBang");

	UAthenaMatchmakingPlay_C_RefreshBang_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.BndEvt__BP_PlayButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaMatchmakingPlay_C::BndEvt__BP_PlayButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.BndEvt__BP_PlayButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");

	UAthenaMatchmakingPlay_C_BndEvt__BP_PlayButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.OnAvailablePlaylistsUpdated
// (Event, Public, BlueprintEvent)

void UAthenaMatchmakingPlay_C::OnAvailablePlaylistsUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.OnAvailablePlaylistsUpdated");

	UAthenaMatchmakingPlay_C_OnAvailablePlaylistsUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.OnPlayButtonUpdated
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bShowPlayButton                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaMatchmakingPlay_C::OnPlayButtonUpdated(bool* bShowPlayButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.OnPlayButtonUpdated");

	UAthenaMatchmakingPlay_C_OnPlayButtonUpdated_Params params;
	params.bShowPlayButton = bShowPlayButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.ExecuteUbergraph_AthenaMatchmakingPlay
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaMatchmakingPlay_C::ExecuteUbergraph_AthenaMatchmakingPlay(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.ExecuteUbergraph_AthenaMatchmakingPlay");

	UAthenaMatchmakingPlay_C_ExecuteUbergraph_AthenaMatchmakingPlay_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.PlaylistsUpdated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UAthenaMatchmakingPlay_C::PlaylistsUpdated__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.PlaylistsUpdated__DelegateSignature");

	UAthenaMatchmakingPlay_C_PlaylistsUpdated__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
