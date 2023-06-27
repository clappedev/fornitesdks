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

// Function FullPartyBarAthena.FullPartyBarAthena_C.GetHoverText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PlayerIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Output                         (Parm, OutParm)

void UFullPartyBarAthena_C::GetHoverText(int PlayerIndex, struct FText* Output)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullPartyBarAthena.FullPartyBarAthena_C.GetHoverText");

	UFullPartyBarAthena_C_GetHoverText_Params params;
	params.PlayerIndex = PlayerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Output != nullptr)
		*Output = params.Output;
}


// Function FullPartyBarAthena.FullPartyBarAthena_C.GetTooltipStat
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag            Token                          (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FFortDisplayAttribute   OutDisplayAttribute            (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UFullPartyBarAthena_C::GetTooltipStat(const struct FGameplayTag& Token, struct FFortDisplayAttribute* OutDisplayAttribute)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullPartyBarAthena.FullPartyBarAthena_C.GetTooltipStat");

	UFullPartyBarAthena_C_GetTooltipStat_Params params;
	params.Token = Token;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutDisplayAttribute != nullptr)
		*OutDisplayAttribute = params.OutDisplayAttribute;

	return params.ReturnValue;
}


// Function FullPartyBarAthena.FullPartyBarAthena_C.Get_Tech_ToolTipWidget
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWidget* UFullPartyBarAthena_C::Get_Tech_ToolTipWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function FullPartyBarAthena.FullPartyBarAthena_C.Get_Tech_ToolTipWidget");

	UFullPartyBarAthena_C_Get_Tech_ToolTipWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function FullPartyBarAthena.FullPartyBarAthena_C.Get_Resistance_ToolTipWidget
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWidget* UFullPartyBarAthena_C::Get_Resistance_ToolTipWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function FullPartyBarAthena.FullPartyBarAthena_C.Get_Resistance_ToolTipWidget");

	UFullPartyBarAthena_C_Get_Resistance_ToolTipWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function FullPartyBarAthena.FullPartyBarAthena_C.Get_Offense_ToolTipWidget
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWidget* UFullPartyBarAthena_C::Get_Offense_ToolTipWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function FullPartyBarAthena.FullPartyBarAthena_C.Get_Offense_ToolTipWidget");

	UFullPartyBarAthena_C_Get_Offense_ToolTipWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function FullPartyBarAthena.FullPartyBarAthena_C.Get_Fortitude_ToolTipWidget
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWidget* UFullPartyBarAthena_C::Get_Fortitude_ToolTipWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function FullPartyBarAthena.FullPartyBarAthena_C.Get_Fortitude_ToolTipWidget");

	UFullPartyBarAthena_C_Get_Fortitude_ToolTipWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function FullPartyBarAthena.FullPartyBarAthena_C.GetTotalNumFriendCodes
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Num_Codes                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UFullPartyBarAthena_C::GetTotalNumFriendCodes(int* Num_Codes)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullPartyBarAthena.FullPartyBarAthena_C.GetTotalNumFriendCodes");

	UFullPartyBarAthena_C_GetTotalNumFriendCodes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Num_Codes != nullptr)
		*Num_Codes = params.Num_Codes;
}


// Function FullPartyBarAthena.FullPartyBarAthena_C.isTeammateSlotPopulated
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            inSlotNUmber                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UFullPartyBarAthena_C::isTeammateSlotPopulated(int inSlotNUmber)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullPartyBarAthena.FullPartyBarAthena_C.isTeammateSlotPopulated");

	UFullPartyBarAthena_C_isTeammateSlotPopulated_Params params;
	params.inSlotNUmber = inSlotNUmber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function FullPartyBarAthena.FullPartyBarAthena_C.OpenPartyPrivacy
// (Public, BlueprintCallable, BlueprintEvent)

void UFullPartyBarAthena_C::OpenPartyPrivacy()
{
	static auto fn = UObject::FindObject<UFunction>("Function FullPartyBarAthena.FullPartyBarAthena_C.OpenPartyPrivacy");

	UFullPartyBarAthena_C_OpenPartyPrivacy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullPartyBarAthena.FullPartyBarAthena_C.HandlePartybarUIFeatureChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortUIFeature                 Feature                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EFortUIFeatureState            FeatureState                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EFortUIFeatureStateReason      Reason                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFullPartyBarAthena_C::HandlePartybarUIFeatureChanged(EFortUIFeature Feature, EFortUIFeatureState FeatureState, EFortUIFeatureStateReason Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullPartyBarAthena.FullPartyBarAthena_C.HandlePartybarUIFeatureChanged");

	UFullPartyBarAthena_C_HandlePartybarUIFeatureChanged_Params params;
	params.Feature = Feature;
	params.FeatureState = FeatureState;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullPartyBarAthena.FullPartyBarAthena_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)

void UFullPartyBarAthena_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function FullPartyBarAthena.FullPartyBarAthena_C.Initialize");

	UFullPartyBarAthena_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullPartyBarAthena.FullPartyBarAthena_C.BindDelegates
// (Public, BlueprintCallable, BlueprintEvent)

void UFullPartyBarAthena_C::BindDelegates()
{
	static auto fn = UObject::FindObject<UFunction>("Function FullPartyBarAthena.FullPartyBarAthena_C.BindDelegates");

	UFullPartyBarAthena_C_BindDelegates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullPartyBarAthena.FullPartyBarAthena_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UFullPartyBarAthena_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function FullPartyBarAthena.FullPartyBarAthena_C.Construct");

	UFullPartyBarAthena_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullPartyBarAthena.FullPartyBarAthena_C.BndEvt__LocalPlayer_K2Node_ComponentBoundEvent_15_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFullPartyBarAthena_C::BndEvt__LocalPlayer_K2Node_ComponentBoundEvent_15_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullPartyBarAthena.FullPartyBarAthena_C.BndEvt__LocalPlayer_K2Node_ComponentBoundEvent_15_CommonButtonClicked__DelegateSignature");

	UFullPartyBarAthena_C_BndEvt__LocalPlayer_K2Node_ComponentBoundEvent_15_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullPartyBarAthena.FullPartyBarAthena_C.BndEvt__RemotePlayer1_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFullPartyBarAthena_C::BndEvt__RemotePlayer1_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullPartyBarAthena.FullPartyBarAthena_C.BndEvt__RemotePlayer1_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");

	UFullPartyBarAthena_C_BndEvt__RemotePlayer1_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullPartyBarAthena.FullPartyBarAthena_C.BndEvt__RemotePlayer2_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFullPartyBarAthena_C::BndEvt__RemotePlayer2_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullPartyBarAthena.FullPartyBarAthena_C.BndEvt__RemotePlayer2_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");

	UFullPartyBarAthena_C_BndEvt__RemotePlayer2_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullPartyBarAthena.FullPartyBarAthena_C.BndEvt__RemotePlayer3_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFullPartyBarAthena_C::BndEvt__RemotePlayer3_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullPartyBarAthena.FullPartyBarAthena_C.BndEvt__RemotePlayer3_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature");

	UFullPartyBarAthena_C_BndEvt__RemotePlayer3_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullPartyBarAthena.FullPartyBarAthena_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UFullPartyBarAthena_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function FullPartyBarAthena.FullPartyBarAthena_C.Destruct");

	UFullPartyBarAthena_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullPartyBarAthena.FullPartyBarAthena_C.BndEvt__RemotePlayer1_K2Node_ComponentBoundEvent_8_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFullPartyBarAthena_C::BndEvt__RemotePlayer1_K2Node_ComponentBoundEvent_8_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullPartyBarAthena.FullPartyBarAthena_C.BndEvt__RemotePlayer1_K2Node_ComponentBoundEvent_8_CommonButtonClicked__DelegateSignature");

	UFullPartyBarAthena_C_BndEvt__RemotePlayer1_K2Node_ComponentBoundEvent_8_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullPartyBarAthena.FullPartyBarAthena_C.BndEvt__RemotePlayer1_K2Node_ComponentBoundEvent_9_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFullPartyBarAthena_C::BndEvt__RemotePlayer1_K2Node_ComponentBoundEvent_9_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullPartyBarAthena.FullPartyBarAthena_C.BndEvt__RemotePlayer1_K2Node_ComponentBoundEvent_9_CommonButtonClicked__DelegateSignature");

	UFullPartyBarAthena_C_BndEvt__RemotePlayer1_K2Node_ComponentBoundEvent_9_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullPartyBarAthena.FullPartyBarAthena_C.BndEvt__RemotePlayer2_K2Node_ComponentBoundEvent_10_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFullPartyBarAthena_C::BndEvt__RemotePlayer2_K2Node_ComponentBoundEvent_10_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullPartyBarAthena.FullPartyBarAthena_C.BndEvt__RemotePlayer2_K2Node_ComponentBoundEvent_10_CommonButtonClicked__DelegateSignature");

	UFullPartyBarAthena_C_BndEvt__RemotePlayer2_K2Node_ComponentBoundEvent_10_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullPartyBarAthena.FullPartyBarAthena_C.BndEvt__RemotePlayer3_K2Node_ComponentBoundEvent_11_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFullPartyBarAthena_C::BndEvt__RemotePlayer3_K2Node_ComponentBoundEvent_11_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullPartyBarAthena.FullPartyBarAthena_C.BndEvt__RemotePlayer3_K2Node_ComponentBoundEvent_11_CommonButtonClicked__DelegateSignature");

	UFullPartyBarAthena_C_BndEvt__RemotePlayer3_K2Node_ComponentBoundEvent_11_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullPartyBarAthena.FullPartyBarAthena_C.BndEvt__RemotePlayer3_K2Node_ComponentBoundEvent_12_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFullPartyBarAthena_C::BndEvt__RemotePlayer3_K2Node_ComponentBoundEvent_12_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullPartyBarAthena.FullPartyBarAthena_C.BndEvt__RemotePlayer3_K2Node_ComponentBoundEvent_12_CommonButtonClicked__DelegateSignature");

	UFullPartyBarAthena_C_BndEvt__RemotePlayer3_K2Node_ComponentBoundEvent_12_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullPartyBarAthena.FullPartyBarAthena_C.BndEvt__RemotePlayer2_K2Node_ComponentBoundEvent_13_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFullPartyBarAthena_C::BndEvt__RemotePlayer2_K2Node_ComponentBoundEvent_13_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullPartyBarAthena.FullPartyBarAthena_C.BndEvt__RemotePlayer2_K2Node_ComponentBoundEvent_13_CommonButtonClicked__DelegateSignature");

	UFullPartyBarAthena_C_BndEvt__RemotePlayer2_K2Node_ComponentBoundEvent_13_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullPartyBarAthena.FullPartyBarAthena_C.BndEvt__LocalPlayer_K2Node_ComponentBoundEvent_14_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFullPartyBarAthena_C::BndEvt__LocalPlayer_K2Node_ComponentBoundEvent_14_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullPartyBarAthena.FullPartyBarAthena_C.BndEvt__LocalPlayer_K2Node_ComponentBoundEvent_14_CommonButtonClicked__DelegateSignature");

	UFullPartyBarAthena_C_BndEvt__LocalPlayer_K2Node_ComponentBoundEvent_14_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullPartyBarAthena.FullPartyBarAthena_C.BndEvt__LocalPlayer_K2Node_ComponentBoundEvent_178_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFullPartyBarAthena_C::BndEvt__LocalPlayer_K2Node_ComponentBoundEvent_178_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullPartyBarAthena.FullPartyBarAthena_C.BndEvt__LocalPlayer_K2Node_ComponentBoundEvent_178_CommonButtonClicked__DelegateSignature");

	UFullPartyBarAthena_C_BndEvt__LocalPlayer_K2Node_ComponentBoundEvent_178_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullPartyBarAthena.FullPartyBarAthena_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFullPartyBarAthena_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullPartyBarAthena.FullPartyBarAthena_C.Tick");

	UFullPartyBarAthena_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullPartyBarAthena.FullPartyBarAthena_C.ExecuteUbergraph_FullPartyBarAthena
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFullPartyBarAthena_C::ExecuteUbergraph_FullPartyBarAthena(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullPartyBarAthena.FullPartyBarAthena_C.ExecuteUbergraph_FullPartyBarAthena");

	UFullPartyBarAthena_C_ExecuteUbergraph_FullPartyBarAthena_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullPartyBarAthena.FullPartyBarAthena_C.OnButtonHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   HelpText                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UFullPartyBarAthena_C::OnButtonHovered__DelegateSignature(const struct FText& HelpText)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullPartyBarAthena.FullPartyBarAthena_C.OnButtonHovered__DelegateSignature");

	UFullPartyBarAthena_C_OnButtonHovered__DelegateSignature_Params params;
	params.HelpText = HelpText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
