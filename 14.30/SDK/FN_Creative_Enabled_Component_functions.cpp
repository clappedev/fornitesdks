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

// Function Creative_Enabled_Component.Creative_Enabled_Component_C.Can be Enabled
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           TRUE                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UCreative_Enabled_Component_C::Can_be_Enabled(bool* bTRUE)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Creative_Enabled_Component.Creative_Enabled_Component_C.Can be Enabled");

	UCreative_Enabled_Component_C_Can_be_Enabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TRUE != nullptr)
		*bTRUE = params.bTRUE;
}


// Function Creative_Enabled_Component.Creative_Enabled_Component_C.OnRep_EIsEnabled
// (HasDefaults, BlueprintCallable, BlueprintEvent)

void UCreative_Enabled_Component_C::OnRep_EIsEnabled()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Creative_Enabled_Component.Creative_Enabled_Component_C.OnRep_EIsEnabled");

	UCreative_Enabled_Component_C_OnRep_EIsEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Creative_Enabled_Component.Creative_Enabled_Component_C.IsResetting
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           TRUE                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Remaining_Time                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UCreative_Enabled_Component_C::IsResetting(bool* bTRUE, float* Remaining_Time)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Creative_Enabled_Component.Creative_Enabled_Component_C.IsResetting");

	UCreative_Enabled_Component_C_IsResetting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TRUE != nullptr)
		*bTRUE = params.bTRUE;
	if (Remaining_Time != nullptr)
		*Remaining_Time = params.Remaining_Time;
}


// Function Creative_Enabled_Component.Creative_Enabled_Component_C.Reset Delay Start
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Delay                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCreative_Enabled_Component_C::Reset_Delay_Start(float Delay)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Creative_Enabled_Component.Creative_Enabled_Component_C.Reset Delay Start");

	UCreative_Enabled_Component_C_Reset_Delay_Start_Params params;
	params.Delay = Delay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Creative_Enabled_Component.Creative_Enabled_Component_C.Reset Delay Complete
// (Public, BlueprintCallable, BlueprintEvent)

void UCreative_Enabled_Component_C::Reset_Delay_Complete()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Creative_Enabled_Component.Creative_Enabled_Component_C.Reset Delay Complete");

	UCreative_Enabled_Component_C_Reset_Delay_Complete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Creative_Enabled_Component.Creative_Enabled_Component_C.Set Enabled on Play Mode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Play_Mode                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCreative_Enabled_Component_C::Set_Enabled_on_Play_Mode(bool Play_Mode)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Creative_Enabled_Component.Creative_Enabled_Component_C.Set Enabled on Play Mode");

	UCreative_Enabled_Component_C_Set_Enabled_on_Play_Mode_Params params;
	params.Play_Mode = Play_Mode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Creative_Enabled_Component.Creative_Enabled_Component_C.Set Enabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bEnabled                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCreative_Enabled_Component_C::Set_Enabled(bool bEnabled)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Creative_Enabled_Component.Creative_Enabled_Component_C.Set Enabled");

	UCreative_Enabled_Component_C_Set_Enabled_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Creative_Enabled_Component.Creative_Enabled_Component_C.IsEnabled
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Enabled                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UCreative_Enabled_Component_C::IsEnabled(bool* Enabled)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Creative_Enabled_Component.Creative_Enabled_Component_C.IsEnabled");

	UCreative_Enabled_Component_C_IsEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Enabled != nullptr)
		*Enabled = params.Enabled;
}


// Function Creative_Enabled_Component.Creative_Enabled_Component_C.Set Enabled on Phase
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortMinigameState             State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            EnabledIndex                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCreative_Enabled_Component_C::Set_Enabled_on_Phase(EFortMinigameState State, int EnabledIndex)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Creative_Enabled_Component.Creative_Enabled_Component_C.Set Enabled on Phase");

	UCreative_Enabled_Component_C_Set_Enabled_on_Phase_Params params;
	params.State = State;
	params.EnabledIndex = EnabledIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Creative_Enabled_Component.Creative_Enabled_Component_C.Initialize Component
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortMinigameLogicComponent* Logic_Component                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            Enabled_Index                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCreative_Enabled_Component_C::Initialize_Component(class UFortMinigameLogicComponent* Logic_Component, int Enabled_Index)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Creative_Enabled_Component.Creative_Enabled_Component_C.Initialize Component");

	UCreative_Enabled_Component_C_Initialize_Component_Params params;
	params.Logic_Component = Logic_Component;
	params.Enabled_Index = Enabled_Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Creative_Enabled_Component.Creative_Enabled_Component_C.Bind to Minigame
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortMinigame*           Minigame                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCreative_Enabled_Component_C::Bind_to_Minigame(class AFortMinigame* Minigame)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Creative_Enabled_Component.Creative_Enabled_Component_C.Bind to Minigame");

	UCreative_Enabled_Component_C_Bind_to_Minigame_Params params;
	params.Minigame = Minigame;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Creative_Enabled_Component.Creative_Enabled_Component_C.Minigame State Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortMinigame*           Minigame                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EFortMinigameState             MinigameState                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCreative_Enabled_Component_C::Minigame_State_Changed(class AFortMinigame* Minigame, EFortMinigameState MinigameState)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Creative_Enabled_Component.Creative_Enabled_Component_C.Minigame State Changed");

	UCreative_Enabled_Component_C_Minigame_State_Changed_Params params;
	params.Minigame = Minigame;
	params.MinigameState = MinigameState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Creative_Enabled_Component.Creative_Enabled_Component_C.Minigame Play Mode Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortMinigame*           Minigame                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsInPlayMode                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCreative_Enabled_Component_C::Minigame_Play_Mode_Changed(class AFortMinigame* Minigame, bool bIsInPlayMode)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Creative_Enabled_Component.Creative_Enabled_Component_C.Minigame Play Mode Changed");

	UCreative_Enabled_Component_C_Minigame_Play_Mode_Changed_Params params;
	params.Minigame = Minigame;
	params.bIsInPlayMode = bIsInPlayMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Creative_Enabled_Component.Creative_Enabled_Component_C.ExecuteUbergraph_Creative_Enabled_Component
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCreative_Enabled_Component_C::ExecuteUbergraph_Creative_Enabled_Component(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Creative_Enabled_Component.Creative_Enabled_Component_C.ExecuteUbergraph_Creative_Enabled_Component");

	UCreative_Enabled_Component_C_ExecuteUbergraph_Creative_Enabled_Component_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Creative_Enabled_Component.Creative_Enabled_Component_C.On Reset Complete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UCreative_Enabled_Component_C::On_Reset_Complete__DelegateSignature()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Creative_Enabled_Component.Creative_Enabled_Component_C.On Reset Complete__DelegateSignature");

	UCreative_Enabled_Component_C_On_Reset_Complete__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Creative_Enabled_Component.Creative_Enabled_Component_C.On Enabled State Changed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCreative_Enabled_Component_C::On_Enabled_State_Changed__DelegateSignature(bool Enabled)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Creative_Enabled_Component.Creative_Enabled_Component_C.On Enabled State Changed__DelegateSignature");

	UCreative_Enabled_Component_C_On_Enabled_State_Changed__DelegateSignature_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
