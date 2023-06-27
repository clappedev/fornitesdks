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

// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.On_ClickBlocker_MouseButtonDown_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UAthenaMatchmakingOptionsDisplay_v2_C::On_ClickBlocker_MouseButtonDown_1(const struct FGeometry& MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.On_ClickBlocker_MouseButtonDown_1");

	UAthenaMatchmakingOptionsDisplay_v2_C_On_ClickBlocker_MouseButtonDown_1_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MouseEvent != nullptr)
		*MouseEvent = params.MouseEvent;

	return params.ReturnValue;
}


// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.InitializeGameModeButtons
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaMatchmakingOptionsDisplay_v2_C::InitializeGameModeButtons()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.InitializeGameModeButtons");

	UAthenaMatchmakingOptionsDisplay_v2_C_InitializeGameModeButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.NoLTMAvailable
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaMatchmakingOptionsDisplay_v2_C::NoLTMAvailable()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.NoLTMAvailable");

	UAthenaMatchmakingOptionsDisplay_v2_C_NoLTMAvailable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.UpdateLTM
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaMatchmakingOptionsDisplay_v2_C::UpdateLTM()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.UpdateLTM");

	UAthenaMatchmakingOptionsDisplay_v2_C_UpdateLTM_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.HandleStandardModeButtonIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Increment                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            NewIndex                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAthenaMatchmakingOptionsDisplay_v2_C::HandleStandardModeButtonIndex(bool Increment, int* NewIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.HandleStandardModeButtonIndex");

	UAthenaMatchmakingOptionsDisplay_v2_C_HandleStandardModeButtonIndex_Params params;
	params.Increment = Increment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewIndex != nullptr)
		*NewIndex = params.NewIndex;
}


// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.Handle_Navigate_StandardModes_Down
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EUINavigation                  Navigation                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWidget* UAthenaMatchmakingOptionsDisplay_v2_C::Handle_Navigate_StandardModes_Down(EUINavigation Navigation)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.Handle_Navigate_StandardModes_Down");

	UAthenaMatchmakingOptionsDisplay_v2_C_Handle_Navigate_StandardModes_Down_Params params;
	params.Navigation = Navigation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.Handle_Navigate_StandardModes_Up
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EUINavigation                  Navigation                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWidget* UAthenaMatchmakingOptionsDisplay_v2_C::Handle_Navigate_StandardModes_Up(EUINavigation Navigation)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.Handle_Navigate_StandardModes_Up");

	UAthenaMatchmakingOptionsDisplay_v2_C_Handle_Navigate_StandardModes_Up_Params params;
	params.Navigation = Navigation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.UpdateStandardGameModeButtonAvailibilty
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaMatchmakingOptionsDisplay_v2_C::UpdateStandardGameModeButtonAvailibilty()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.UpdateStandardGameModeButtonAvailibilty");

	UAthenaMatchmakingOptionsDisplay_v2_C_UpdateStandardGameModeButtonAvailibilty_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.SetupButtonBindings
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaMatchmakingOptionsDisplay_v2_C::SetupButtonBindings()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.SetupButtonBindings");

	UAthenaMatchmakingOptionsDisplay_v2_C_SetupButtonBindings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.Handle_Navigate_Left
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EUINavigation                  Navigation                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWidget* UAthenaMatchmakingOptionsDisplay_v2_C::Handle_Navigate_Left(EUINavigation Navigation)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.Handle_Navigate_Left");

	UAthenaMatchmakingOptionsDisplay_v2_C_Handle_Navigate_Left_Params params;
	params.Navigation = Navigation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.Handle_Navigate_Right
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EUINavigation                  Navigation                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWidget* UAthenaMatchmakingOptionsDisplay_v2_C::Handle_Navigate_Right(EUINavigation Navigation)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.Handle_Navigate_Right");

	UAthenaMatchmakingOptionsDisplay_v2_C_Handle_Navigate_Right_Params params;
	params.Navigation = Navigation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.ClearLTM
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaMatchmakingOptionsDisplay_v2_C::ClearLTM()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.ClearLTM");

	UAthenaMatchmakingOptionsDisplay_v2_C_ClearLTM_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.AddLTM
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortAthenaPlaylist            LTMPlaylist                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           AddSpecialStyle                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaMatchmakingOptionsDisplay_v2_C::AddLTM(EFortAthenaPlaylist LTMPlaylist, bool AddSpecialStyle)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.AddLTM");

	UAthenaMatchmakingOptionsDisplay_v2_C_AddLTM_Params params;
	params.LTMPlaylist = LTMPlaylist;
	params.AddSpecialStyle = AddSpecialStyle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.ClearStandardGameModes
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaMatchmakingOptionsDisplay_v2_C::ClearStandardGameModes()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.ClearStandardGameModes");

	UAthenaMatchmakingOptionsDisplay_v2_C_ClearStandardGameModes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.AddStandardGameModes
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAthenaMatchmakingOptionsDisplay_v2_C::AddStandardGameModes()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.AddStandardGameModes");

	UAthenaMatchmakingOptionsDisplay_v2_C_AddStandardGameModes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.CloseMatchmakingOptions
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaMatchmakingOptionsDisplay_v2_C::CloseMatchmakingOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.CloseMatchmakingOptions");

	UAthenaMatchmakingOptionsDisplay_v2_C_CloseMatchmakingOptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.Handle_InputAction_Cancel
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Passthrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAthenaMatchmakingOptionsDisplay_v2_C::Handle_InputAction_Cancel(bool* Passthrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.Handle_InputAction_Cancel");

	UAthenaMatchmakingOptionsDisplay_v2_C_Handle_InputAction_Cancel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Passthrough != nullptr)
		*Passthrough = params.Passthrough;
}


// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.SetupInput
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaMatchmakingOptionsDisplay_v2_C::SetupInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.SetupInput");

	UAthenaMatchmakingOptionsDisplay_v2_C_SetupInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAthenaMatchmakingOptionsDisplay_v2_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.OnActivated");

	UAthenaMatchmakingOptionsDisplay_v2_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_6_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaMatchmakingOptionsDisplay_v2_C::BndEvt__IconTextButton_K2Node_ComponentBoundEvent_6_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_6_CommonButtonClicked__DelegateSignature");

	UAthenaMatchmakingOptionsDisplay_v2_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_6_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaMatchmakingOptionsDisplay_v2_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.Construct");

	UAthenaMatchmakingOptionsDisplay_v2_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.OnGameModeButtonSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAthena_Matchmaking_GameModeButton_C* SelectedGameModeButton         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaMatchmakingOptionsDisplay_v2_C::OnGameModeButtonSelected(class UAthena_Matchmaking_GameModeButton_C* SelectedGameModeButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.OnGameModeButtonSelected");

	UAthenaMatchmakingOptionsDisplay_v2_C_OnGameModeButtonSelected_Params params;
	params.SelectedGameModeButton = SelectedGameModeButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.OnModeButtonHovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAthena_Matchmaking_GameModeButton_C* HoveredButton                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaMatchmakingOptionsDisplay_v2_C::OnModeButtonHovered(class UAthena_Matchmaking_GameModeButton_C* HoveredButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.OnModeButtonHovered");

	UAthenaMatchmakingOptionsDisplay_v2_C_OnModeButtonHovered_Params params;
	params.HoveredButton = HoveredButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.PlaylistsUpdated
// (BlueprintCallable, BlueprintEvent)

void UAthenaMatchmakingOptionsDisplay_v2_C::PlaylistsUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.PlaylistsUpdated");

	UAthenaMatchmakingOptionsDisplay_v2_C_PlaylistsUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.ExecuteUbergraph_AthenaMatchmakingOptionsDisplay_v2
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaMatchmakingOptionsDisplay_v2_C::ExecuteUbergraph_AthenaMatchmakingOptionsDisplay_v2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.ExecuteUbergraph_AthenaMatchmakingOptionsDisplay_v2");

	UAthenaMatchmakingOptionsDisplay_v2_C_ExecuteUbergraph_AthenaMatchmakingOptionsDisplay_v2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
