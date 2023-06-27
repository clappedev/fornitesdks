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

// Function FullPartyMemberAthena.FullPartyMemberAthena_C.HandleAthenaTeamMemberKillsChanged
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int>                    Kills                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UFullPartyMemberAthena_C::HandleAthenaTeamMemberKillsChanged(TArray<int>* Kills)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullPartyMemberAthena.FullPartyMemberAthena_C.HandleAthenaTeamMemberKillsChanged");

	UFullPartyMemberAthena_C_HandleAthenaTeamMemberKillsChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Kills != nullptr)
		*Kills = params.Kills;
}


// Function FullPartyMemberAthena.FullPartyMemberAthena_C.UpdateMicIndicator
// (Public, BlueprintCallable, BlueprintEvent)

void UFullPartyMemberAthena_C::UpdateMicIndicator()
{
	static auto fn = UObject::FindObject<UFunction>("Function FullPartyMemberAthena.FullPartyMemberAthena_C.UpdateMicIndicator");

	UFullPartyMemberAthena_C_UpdateMicIndicator_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullPartyMemberAthena.FullPartyMemberAthena_C.HighlightEmptyBanner
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           BannerIsHighlighted            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFullPartyMemberAthena_C::HighlightEmptyBanner(bool BannerIsHighlighted)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullPartyMemberAthena.FullPartyMemberAthena_C.HighlightEmptyBanner");

	UFullPartyMemberAthena_C_HighlightEmptyBanner_Params params;
	params.BannerIsHighlighted = BannerIsHighlighted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullPartyMemberAthena.FullPartyMemberAthena_C.SetTeamMemberIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFullPartyMemberAthena_C::SetTeamMemberIndex(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullPartyMemberAthena.FullPartyMemberAthena_C.SetTeamMemberIndex");

	UFullPartyMemberAthena_C_SetTeamMemberIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullPartyMemberAthena.FullPartyMemberAthena_C.HandleAthenaTeamMemberTalkingChanged
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<bool>                   Talking                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UFullPartyMemberAthena_C::HandleAthenaTeamMemberTalkingChanged(TArray<bool>* Talking)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullPartyMemberAthena.FullPartyMemberAthena_C.HandleAthenaTeamMemberTalkingChanged");

	UFullPartyMemberAthena_C_HandleAthenaTeamMemberTalkingChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Talking != nullptr)
		*Talking = params.Talking;
}


// Function FullPartyMemberAthena.FullPartyMemberAthena_C.HandleAthenaTeamMemberMuteChanged
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<bool>                   Mutes                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UFullPartyMemberAthena_C::HandleAthenaTeamMemberMuteChanged(TArray<bool>* Mutes)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullPartyMemberAthena.FullPartyMemberAthena_C.HandleAthenaTeamMemberMuteChanged");

	UFullPartyMemberAthena_C_HandleAthenaTeamMemberMuteChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Mutes != nullptr)
		*Mutes = params.Mutes;
}


// Function FullPartyMemberAthena.FullPartyMemberAthena_C.HandleAthenaTeamMemberChanged
// (Public, BlueprintCallable, BlueprintEvent)

void UFullPartyMemberAthena_C::HandleAthenaTeamMemberChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function FullPartyMemberAthena.FullPartyMemberAthena_C.HandleAthenaTeamMemberChanged");

	UFullPartyMemberAthena_C_HandleAthenaTeamMemberChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullPartyMemberAthena.FullPartyMemberAthena_C.InitializeConnectedWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFullPartyMemberConnected_C* ConnectedWidget                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFullPartyMemberAthena_C::InitializeConnectedWidget(class UFullPartyMemberConnected_C* ConnectedWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullPartyMemberAthena.FullPartyMemberAthena_C.InitializeConnectedWidget");

	UFullPartyMemberAthena_C_InitializeConnectedWidget_Params params;
	params.ConnectedWidget = ConnectedWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullPartyMemberAthena.FullPartyMemberAthena_C.MakeLocalPlayerConfirmActions
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           LocalPlayerAlone               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FConfirmationDialogAction> OutConfirmActions              (Parm, OutParm, ZeroConstructor)

void UFullPartyMemberAthena_C::MakeLocalPlayerConfirmActions(bool LocalPlayerAlone, TArray<struct FConfirmationDialogAction>* OutConfirmActions)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullPartyMemberAthena.FullPartyMemberAthena_C.MakeLocalPlayerConfirmActions");

	UFullPartyMemberAthena_C_MakeLocalPlayerConfirmActions_Params params;
	params.LocalPlayerAlone = LocalPlayerAlone;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutConfirmActions != nullptr)
		*OutConfirmActions = params.OutConfirmActions;
}


// Function FullPartyMemberAthena.FullPartyMemberAthena_C.HandleLocalPlayerActionsResult
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortDialogResult              Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ResultName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFullPartyMemberAthena_C::HandleLocalPlayerActionsResult(EFortDialogResult Result, const struct FName& ResultName)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullPartyMemberAthena.FullPartyMemberAthena_C.HandleLocalPlayerActionsResult");

	UFullPartyMemberAthena_C_HandleLocalPlayerActionsResult_Params params;
	params.Result = Result;
	params.ResultName = ResultName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullPartyMemberAthena.FullPartyMemberAthena_C.UpdateLocalPlayerAction
// (Public, BlueprintCallable, BlueprintEvent)

void UFullPartyMemberAthena_C::UpdateLocalPlayerAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function FullPartyMemberAthena.FullPartyMemberAthena_C.UpdateLocalPlayerAction");

	UFullPartyMemberAthena_C_UpdateLocalPlayerAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullPartyMemberAthena.FullPartyMemberAthena_C.DuplicateConnectedWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFullPartyMemberConnected_C* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UFullPartyMemberConnected_C* UFullPartyMemberAthena_C::DuplicateConnectedWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function FullPartyMemberAthena.FullPartyMemberAthena_C.DuplicateConnectedWidget");

	UFullPartyMemberAthena_C_DuplicateConnectedWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function FullPartyMemberAthena.FullPartyMemberAthena_C.UpdateDimensions
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               NewDimensions                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UFullPartyMemberAthena_C::UpdateDimensions(const struct FVector2D& NewDimensions)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullPartyMemberAthena.FullPartyMemberAthena_C.UpdateDimensions");

	UFullPartyMemberAthena_C_UpdateDimensions_Params params;
	params.NewDimensions = NewDimensions;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullPartyMemberAthena.FullPartyMemberAthena_C.ShowConnected
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UFullPartyMemberAthena_C::ShowConnected()
{
	static auto fn = UObject::FindObject<UFunction>("Function FullPartyMemberAthena.FullPartyMemberAthena_C.ShowConnected");

	UFullPartyMemberAthena_C_ShowConnected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullPartyMemberAthena.FullPartyMemberAthena_C.ShowConnecting
// (Public, BlueprintCallable, BlueprintEvent)

void UFullPartyMemberAthena_C::ShowConnecting()
{
	static auto fn = UObject::FindObject<UFunction>("Function FullPartyMemberAthena.FullPartyMemberAthena_C.ShowConnecting");

	UFullPartyMemberAthena_C_ShowConnecting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullPartyMemberAthena.FullPartyMemberAthena_C.ShowOpen
// (Public, BlueprintCallable, BlueprintEvent)

void UFullPartyMemberAthena_C::ShowOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function FullPartyMemberAthena.FullPartyMemberAthena_C.ShowOpen");

	UFullPartyMemberAthena_C_ShowOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullPartyMemberAthena.FullPartyMemberAthena_C.UpdateMemberInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo     NewMemberInfo                  (BlueprintVisible, BlueprintReadOnly, Parm)

void UFullPartyMemberAthena_C::UpdateMemberInfo(const struct FFortTeamMemberInfo& NewMemberInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullPartyMemberAthena.FullPartyMemberAthena_C.UpdateMemberInfo");

	UFullPartyMemberAthena_C_UpdateMemberInfo_Params params;
	params.NewMemberInfo = NewMemberInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullPartyMemberAthena.FullPartyMemberAthena_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UFullPartyMemberAthena_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function FullPartyMemberAthena.FullPartyMemberAthena_C.Construct");

	UFullPartyMemberAthena_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullPartyMemberAthena.FullPartyMemberAthena_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFullPartyMemberAthena_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullPartyMemberAthena.FullPartyMemberAthena_C.PreConstruct");

	UFullPartyMemberAthena_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullPartyMemberAthena.FullPartyMemberAthena_C.OnClicked
// (BlueprintCallable, BlueprintEvent)

void UFullPartyMemberAthena_C::OnClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function FullPartyMemberAthena.FullPartyMemberAthena_C.OnClicked");

	UFullPartyMemberAthena_C_OnClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullPartyMemberAthena.FullPartyMemberAthena_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UFullPartyMemberAthena_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function FullPartyMemberAthena.FullPartyMemberAthena_C.Destruct");

	UFullPartyMemberAthena_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullPartyMemberAthena.FullPartyMemberAthena_C.OnPlayerInfoChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo     NewInfo                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UFullPartyMemberAthena_C::OnPlayerInfoChanged(const struct FFortTeamMemberInfo& NewInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullPartyMemberAthena.FullPartyMemberAthena_C.OnPlayerInfoChanged");

	UFullPartyMemberAthena_C_OnPlayerInfoChanged_Params params;
	params.NewInfo = NewInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullPartyMemberAthena.FullPartyMemberAthena_C.ExecuteUbergraph_FullPartyMemberAthena
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFullPartyMemberAthena_C::ExecuteUbergraph_FullPartyMemberAthena(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullPartyMemberAthena.FullPartyMemberAthena_C.ExecuteUbergraph_FullPartyMemberAthena");

	UFullPartyMemberAthena_C_ExecuteUbergraph_FullPartyMemberAthena_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
