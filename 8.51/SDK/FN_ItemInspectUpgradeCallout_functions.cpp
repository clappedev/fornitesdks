// Fortnite (8.51) SDK
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

// Function ItemInspectUpgradeCallout.ItemInspectUpgradeCallout_C.SetButtonsEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsEnabled                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemInspectUpgradeCallout_C::SetButtonsEnabled(bool bIsEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectUpgradeCallout.ItemInspectUpgradeCallout_C.SetButtonsEnabled");

	UItemInspectUpgradeCallout_C_SetButtonsEnabled_Params params;
	params.bIsEnabled = bIsEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectUpgradeCallout.ItemInspectUpgradeCallout_C.IsEvolutionReady
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           EvolutionReady                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UItemInspectUpgradeCallout_C::IsEvolutionReady(bool* EvolutionReady)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectUpgradeCallout.ItemInspectUpgradeCallout_C.IsEvolutionReady");

	UItemInspectUpgradeCallout_C_IsEvolutionReady_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EvolutionReady != nullptr)
		*EvolutionReady = params.EvolutionReady;
}


// Function ItemInspectUpgradeCallout.ItemInspectUpgradeCallout_C.ShowEvolutionInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UItemInspectUpgradeCallout_C::ShowEvolutionInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectUpgradeCallout.ItemInspectUpgradeCallout_C.ShowEvolutionInfo");

	UItemInspectUpgradeCallout_C_ShowEvolutionInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectUpgradeCallout.ItemInspectUpgradeCallout_C.ShowUpgradeInfo
// (Public, BlueprintCallable, BlueprintEvent)

void UItemInspectUpgradeCallout_C::ShowUpgradeInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectUpgradeCallout.ItemInspectUpgradeCallout_C.ShowUpgradeInfo");

	UItemInspectUpgradeCallout_C_ShowUpgradeInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectUpgradeCallout.ItemInspectUpgradeCallout_C.IsUpgradeReady
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           UpgradeReady                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UItemInspectUpgradeCallout_C::IsUpgradeReady(bool* UpgradeReady)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectUpgradeCallout.ItemInspectUpgradeCallout_C.IsUpgradeReady");

	UItemInspectUpgradeCallout_C_IsUpgradeReady_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (UpgradeReady != nullptr)
		*UpgradeReady = params.UpgradeReady;
}


// Function ItemInspectUpgradeCallout.ItemInspectUpgradeCallout_C.RefreshOnUpgrade
// (Public, BlueprintCallable, BlueprintEvent)

void UItemInspectUpgradeCallout_C::RefreshOnUpgrade()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectUpgradeCallout.ItemInspectUpgradeCallout_C.RefreshOnUpgrade");

	UItemInspectUpgradeCallout_C_RefreshOnUpgrade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectUpgradeCallout.ItemInspectUpgradeCallout_C.EnableUpgrade
// (Public, BlueprintCallable, BlueprintEvent)

void UItemInspectUpgradeCallout_C::EnableUpgrade()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectUpgradeCallout.ItemInspectUpgradeCallout_C.EnableUpgrade");

	UItemInspectUpgradeCallout_C_EnableUpgrade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectUpgradeCallout.ItemInspectUpgradeCallout_C.DisableUpgrade
// (Public, BlueprintCallable, BlueprintEvent)

void UItemInspectUpgradeCallout_C::DisableUpgrade()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectUpgradeCallout.ItemInspectUpgradeCallout_C.DisableUpgrade");

	UItemInspectUpgradeCallout_C_DisableUpgrade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectUpgradeCallout.ItemInspectUpgradeCallout_C.OnShow
// (Public, BlueprintCallable, BlueprintEvent)

void UItemInspectUpgradeCallout_C::OnShow()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectUpgradeCallout.ItemInspectUpgradeCallout_C.OnShow");

	UItemInspectUpgradeCallout_C_OnShow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectUpgradeCallout.ItemInspectUpgradeCallout_C.SetItemToRepresent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*               Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemInspectUpgradeCallout_C::SetItemToRepresent(class UFortItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectUpgradeCallout.ItemInspectUpgradeCallout_C.SetItemToRepresent");

	UItemInspectUpgradeCallout_C_SetItemToRepresent_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectUpgradeCallout.ItemInspectUpgradeCallout_C.Refresh
// (Public, BlueprintCallable, BlueprintEvent)

void UItemInspectUpgradeCallout_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectUpgradeCallout.ItemInspectUpgradeCallout_C.Refresh");

	UItemInspectUpgradeCallout_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectUpgradeCallout.ItemInspectUpgradeCallout_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UItemInspectUpgradeCallout_C::BndEvt__IconTextButton_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectUpgradeCallout.ItemInspectUpgradeCallout_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent");

	UItemInspectUpgradeCallout_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectUpgradeCallout.ItemInspectUpgradeCallout_C.BndEvt__EvolveButton_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UItemInspectUpgradeCallout_C::BndEvt__EvolveButton_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectUpgradeCallout.ItemInspectUpgradeCallout_C.BndEvt__EvolveButton_K2Node_ComponentBoundEvent");

	UItemInspectUpgradeCallout_C_BndEvt__EvolveButton_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectUpgradeCallout.ItemInspectUpgradeCallout_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UItemInspectUpgradeCallout_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectUpgradeCallout.ItemInspectUpgradeCallout_C.Construct");

	UItemInspectUpgradeCallout_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectUpgradeCallout.ItemInspectUpgradeCallout_C.ExecuteUbergraph_ItemInspectUpgradeCallout
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemInspectUpgradeCallout_C::ExecuteUbergraph_ItemInspectUpgradeCallout(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectUpgradeCallout.ItemInspectUpgradeCallout_C.ExecuteUbergraph_ItemInspectUpgradeCallout");

	UItemInspectUpgradeCallout_C_ExecuteUbergraph_ItemInspectUpgradeCallout_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectUpgradeCallout.ItemInspectUpgradeCallout_C.OnRequestUpgrade__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UItemInspectUpgradeCallout_C::OnRequestUpgrade__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectUpgradeCallout.ItemInspectUpgradeCallout_C.OnRequestUpgrade__DelegateSignature");

	UItemInspectUpgradeCallout_C_OnRequestUpgrade__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
