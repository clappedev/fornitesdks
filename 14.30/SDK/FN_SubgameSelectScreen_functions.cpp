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

// Function SubgameSelectScreen.SubgameSelectScreen_C.IsMinorShutdownWarningEnabled
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Enabled                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void USubgameSelectScreen_C::IsMinorShutdownWarningEnabled(bool* Enabled)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SubgameSelectScreen.SubgameSelectScreen_C.IsMinorShutdownWarningEnabled");

	USubgameSelectScreen_C_IsMinorShutdownWarningEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Enabled != nullptr)
		*Enabled = params.Enabled;
}


// Function SubgameSelectScreen.SubgameSelectScreen_C.IsBusyMatchmaking
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USubgameSelectScreen_C::IsBusyMatchmaking()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SubgameSelectScreen.SubgameSelectScreen_C.IsBusyMatchmaking");

	USubgameSelectScreen_C_IsBusyMatchmaking_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SubgameSelectScreen.SubgameSelectScreen_C.AdvanceTextureCycle
// (Public, BlueprintCallable, BlueprintEvent)

void USubgameSelectScreen_C::AdvanceTextureCycle()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SubgameSelectScreen.SubgameSelectScreen_C.AdvanceTextureCycle");

	USubgameSelectScreen_C_AdvanceTextureCycle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubgameSelectScreen.SubgameSelectScreen_C.InitializeTextureCycle
// (Public, BlueprintCallable, BlueprintEvent)

void USubgameSelectScreen_C::InitializeTextureCycle()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SubgameSelectScreen.SubgameSelectScreen_C.InitializeTextureCycle");

	USubgameSelectScreen_C_InitializeTextureCycle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubgameSelectScreen.SubgameSelectScreen_C.DialogResult_FE9F49084346A08B6F02BA99FB50F5CD
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortDialogResult              Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ResultName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USubgameSelectScreen_C::DialogResult_FE9F49084346A08B6F02BA99FB50F5CD(EFortDialogResult Result, const struct FName& ResultName)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SubgameSelectScreen.SubgameSelectScreen_C.DialogResult_FE9F49084346A08B6F02BA99FB50F5CD");

	USubgameSelectScreen_C_DialogResult_FE9F49084346A08B6F02BA99FB50F5CD_Params params;
	params.Result = Result;
	params.ResultName = ResultName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubgameSelectScreen.SubgameSelectScreen_C.BndEvt__ButtonExit_K2Node_ComponentBoundEvent_193_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void USubgameSelectScreen_C::BndEvt__ButtonExit_K2Node_ComponentBoundEvent_193_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SubgameSelectScreen.SubgameSelectScreen_C.BndEvt__ButtonExit_K2Node_ComponentBoundEvent_193_CommonButtonClicked__DelegateSignature");

	USubgameSelectScreen_C_BndEvt__ButtonExit_K2Node_ComponentBoundEvent_193_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubgameSelectScreen.SubgameSelectScreen_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)

void USubgameSelectScreen_C::BP_OnActivated()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SubgameSelectScreen.SubgameSelectScreen_C.BP_OnActivated");

	USubgameSelectScreen_C_BP_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubgameSelectScreen.SubgameSelectScreen_C.ExecuteUbergraph_SubgameSelectScreen
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USubgameSelectScreen_C::ExecuteUbergraph_SubgameSelectScreen(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SubgameSelectScreen.SubgameSelectScreen_C.ExecuteUbergraph_SubgameSelectScreen");

	USubgameSelectScreen_C_ExecuteUbergraph_SubgameSelectScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
