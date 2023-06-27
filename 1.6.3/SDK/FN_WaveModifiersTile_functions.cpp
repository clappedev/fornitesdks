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

// Function WaveModifiersTile.WaveModifiersTile_C.PlayIntro
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWaveModifiersTile_C::PlayIntro()
{
	static auto fn = UObject::FindObject<UFunction>("Function WaveModifiersTile.WaveModifiersTile_C.PlayIntro");

	UWaveModifiersTile_C_PlayIntro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WaveModifiersTile.WaveModifiersTile_C.SetModifierItem
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortItem*               ModifierItem                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWaveModifiersTile_C::SetModifierItem(class UFortItem* ModifierItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function WaveModifiersTile.WaveModifiersTile_C.SetModifierItem");

	UWaveModifiersTile_C_SetModifierItem_Params params;
	params.ModifierItem = ModifierItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WaveModifiersTile.WaveModifiersTile_C.OnAnimReadyForNextModifier
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWaveModifiersTile_C::OnAnimReadyForNextModifier()
{
	static auto fn = UObject::FindObject<UFunction>("Function WaveModifiersTile.WaveModifiersTile_C.OnAnimReadyForNextModifier");

	UWaveModifiersTile_C_OnAnimReadyForNextModifier_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WaveModifiersTile.WaveModifiersTile_C.SetData
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 InData                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWaveModifiersTile_C::SetData(class UObject* InData)
{
	static auto fn = UObject::FindObject<UFunction>("Function WaveModifiersTile.WaveModifiersTile_C.SetData");

	UWaveModifiersTile_C_SetData_Params params;
	params.InData = InData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WaveModifiersTile.WaveModifiersTile_C.ExecuteUbergraph_WaveModifiersTile
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWaveModifiersTile_C::ExecuteUbergraph_WaveModifiersTile(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WaveModifiersTile.WaveModifiersTile_C.ExecuteUbergraph_WaveModifiersTile");

	UWaveModifiersTile_C_ExecuteUbergraph_WaveModifiersTile_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WaveModifiersTile.WaveModifiersTile_C.OnReadyForNextModifierPresentation__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWaveModifiersTile_C::OnReadyForNextModifierPresentation__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WaveModifiersTile.WaveModifiersTile_C.OnReadyForNextModifierPresentation__DelegateSignature");

	UWaveModifiersTile_C_OnReadyForNextModifierPresentation__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
