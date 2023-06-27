// Fortnite SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HordeWaveAlertWidget.HordeWaveAlertWidget_C.OnWaveStarted
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   LevelText                      (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// int                            Level                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FText                   WaveText                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// int                            WaveNum                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHordeWaveAlertWidget_C::OnWaveStarted(const struct FText& LevelText, int Level, const struct FText& WaveText, int WaveNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function HordeWaveAlertWidget.HordeWaveAlertWidget_C.OnWaveStarted");

	UHordeWaveAlertWidget_C_OnWaveStarted_Params params;
	params.LevelText = LevelText;
	params.Level = Level;
	params.WaveText = WaveText;
	params.WaveNum = WaveNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HordeWaveAlertWidget.HordeWaveAlertWidget_C.OnWaveCompleted
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Wave                           (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<struct FFortItemInstanceQuantityPair> Rewards                        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void UHordeWaveAlertWidget_C::OnWaveCompleted(int Wave, TArray<struct FFortItemInstanceQuantityPair> Rewards)
{
	static auto fn = UObject::FindObject<UFunction>("Function HordeWaveAlertWidget.HordeWaveAlertWidget_C.OnWaveCompleted");

	UHordeWaveAlertWidget_C_OnWaveCompleted_Params params;
	params.Wave = Wave;
	params.Rewards = Rewards;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HordeWaveAlertWidget.HordeWaveAlertWidget_C.OnHordeTierInitialized_Event_1
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FFortItemInstanceQuantityPair> Items                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void UHordeWaveAlertWidget_C::OnHordeTierInitialized_Event_1(TArray<struct FFortItemInstanceQuantityPair> Items)
{
	static auto fn = UObject::FindObject<UFunction>("Function HordeWaveAlertWidget.HordeWaveAlertWidget_C.OnHordeTierInitialized_Event_1");

	UHordeWaveAlertWidget_C_OnHordeTierInitialized_Event_1_Params params;
	params.Items = Items;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HordeWaveAlertWidget.HordeWaveAlertWidget_C.OnWaveModifiersAdded
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<class UFortGameplayModifierItemDefinition*> Modifiers                      (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void UHordeWaveAlertWidget_C::OnWaveModifiersAdded(TArray<class UFortGameplayModifierItemDefinition*> Modifiers)
{
	static auto fn = UObject::FindObject<UFunction>("Function HordeWaveAlertWidget.HordeWaveAlertWidget_C.OnWaveModifiersAdded");

	UHordeWaveAlertWidget_C_OnWaveModifiersAdded_Params params;
	params.Modifiers = Modifiers;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HordeWaveAlertWidget.HordeWaveAlertWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UHordeWaveAlertWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HordeWaveAlertWidget.HordeWaveAlertWidget_C.Construct");

	UHordeWaveAlertWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HordeWaveAlertWidget.HordeWaveAlertWidget_C.OnModifierAppearanceAnimComplete
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHordeWaveAlertWidget_C::OnModifierAppearanceAnimComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function HordeWaveAlertWidget.HordeWaveAlertWidget_C.OnModifierAppearanceAnimComplete");

	UHordeWaveAlertWidget_C_OnModifierAppearanceAnimComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HordeWaveAlertWidget.HordeWaveAlertWidget_C.OnAllModifiersPresented
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHordeWaveAlertWidget_C::OnAllModifiersPresented()
{
	static auto fn = UObject::FindObject<UFunction>("Function HordeWaveAlertWidget.HordeWaveAlertWidget_C.OnAllModifiersPresented");

	UHordeWaveAlertWidget_C_OnAllModifiersPresented_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HordeWaveAlertWidget.HordeWaveAlertWidget_C.OnAppearanceDisappearanceAnimComplete
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHordeWaveAlertWidget_C::OnAppearanceDisappearanceAnimComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function HordeWaveAlertWidget.HordeWaveAlertWidget_C.OnAppearanceDisappearanceAnimComplete");

	UHordeWaveAlertWidget_C_OnAppearanceDisappearanceAnimComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HordeWaveAlertWidget.HordeWaveAlertWidget_C.OnModifierDisappearanceAnimComplete
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHordeWaveAlertWidget_C::OnModifierDisappearanceAnimComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function HordeWaveAlertWidget.HordeWaveAlertWidget_C.OnModifierDisappearanceAnimComplete");

	UHordeWaveAlertWidget_C_OnModifierDisappearanceAnimComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HordeWaveAlertWidget.HordeWaveAlertWidget_C.OnAppearanceDisappearanceAnimComplete_Quick
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UHordeWaveAlertWidget_C::OnAppearanceDisappearanceAnimComplete_Quick()
{
	static auto fn = UObject::FindObject<UFunction>("Function HordeWaveAlertWidget.HordeWaveAlertWidget_C.OnAppearanceDisappearanceAnimComplete_Quick");

	UHordeWaveAlertWidget_C_OnAppearanceDisappearanceAnimComplete_Quick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HordeWaveAlertWidget.HordeWaveAlertWidget_C.ExecuteUbergraph_HordeWaveAlertWidget
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHordeWaveAlertWidget_C::ExecuteUbergraph_HordeWaveAlertWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HordeWaveAlertWidget.HordeWaveAlertWidget_C.ExecuteUbergraph_HordeWaveAlertWidget");

	UHordeWaveAlertWidget_C_ExecuteUbergraph_HordeWaveAlertWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
