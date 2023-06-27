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

// Function AthenaCustomizationPickerTileButton.AthenaCustomizationPickerTileButton_C.OnTileSizeOverrideCheck
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// EFortItemType                  TypeIn                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EFortItemCardSize              SizeIn                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EFortItemCardSize              SizeOut                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAthenaCustomizationPickerTileButton_C::OnTileSizeOverrideCheck(EFortItemType TypeIn, EFortItemCardSize SizeIn, EFortItemCardSize* SizeOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCustomizationPickerTileButton.AthenaCustomizationPickerTileButton_C.OnTileSizeOverrideCheck");

	UAthenaCustomizationPickerTileButton_C_OnTileSizeOverrideCheck_Params params;
	params.TypeIn = TypeIn;
	params.SizeIn = SizeIn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SizeOut != nullptr)
		*SizeOut = params.SizeOut;
}


// Function AthenaCustomizationPickerTileButton.AthenaCustomizationPickerTileButton_C.MarkCosmeticAsSeen
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaCustomizationPickerTileButton_C::MarkCosmeticAsSeen()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCustomizationPickerTileButton.AthenaCustomizationPickerTileButton_C.MarkCosmeticAsSeen");

	UAthenaCustomizationPickerTileButton_C_MarkCosmeticAsSeen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaCustomizationPickerTileButton.AthenaCustomizationPickerTileButton_C.UpdateBangState
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaCustomizationPickerTileButton_C::UpdateBangState()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCustomizationPickerTileButton.AthenaCustomizationPickerTileButton_C.UpdateBangState");

	UAthenaCustomizationPickerTileButton_C_UpdateBangState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaCustomizationPickerTileButton.AthenaCustomizationPickerTileButton_C.OnListItemObjectSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UObject*                 ListItemObject                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCustomizationPickerTileButton_C::OnListItemObjectSet(class UObject* ListItemObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCustomizationPickerTileButton.AthenaCustomizationPickerTileButton_C.OnListItemObjectSet");

	UAthenaCustomizationPickerTileButton_C_OnListItemObjectSet_Params params;
	params.ListItemObject = ListItemObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaCustomizationPickerTileButton.AthenaCustomizationPickerTileButton_C.BP_OnSelected
// (Event, Protected, BlueprintEvent)

void UAthenaCustomizationPickerTileButton_C::BP_OnSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCustomizationPickerTileButton.AthenaCustomizationPickerTileButton_C.BP_OnSelected");

	UAthenaCustomizationPickerTileButton_C_BP_OnSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaCustomizationPickerTileButton.AthenaCustomizationPickerTileButton_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)

void UAthenaCustomizationPickerTileButton_C::BP_OnHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCustomizationPickerTileButton.AthenaCustomizationPickerTileButton_C.BP_OnHovered");

	UAthenaCustomizationPickerTileButton_C_BP_OnHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaCustomizationPickerTileButton.AthenaCustomizationPickerTileButton_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)

void UAthenaCustomizationPickerTileButton_C::BP_OnUnhovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCustomizationPickerTileButton.AthenaCustomizationPickerTileButton_C.BP_OnUnhovered");

	UAthenaCustomizationPickerTileButton_C_BP_OnUnhovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaCustomizationPickerTileButton.AthenaCustomizationPickerTileButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaCustomizationPickerTileButton_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCustomizationPickerTileButton.AthenaCustomizationPickerTileButton_C.Construct");

	UAthenaCustomizationPickerTileButton_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaCustomizationPickerTileButton.AthenaCustomizationPickerTileButton_C.CheckIfHovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidgetSwitcher*         WidgetSwitcher                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAthenaCustomizationPickerTileButton_C::CheckIfHovered(class UWidgetSwitcher* WidgetSwitcher)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCustomizationPickerTileButton.AthenaCustomizationPickerTileButton_C.CheckIfHovered");

	UAthenaCustomizationPickerTileButton_C_CheckIfHovered_Params params;
	params.WidgetSwitcher = WidgetSwitcher;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaCustomizationPickerTileButton.AthenaCustomizationPickerTileButton_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaCustomizationPickerTileButton_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCustomizationPickerTileButton.AthenaCustomizationPickerTileButton_C.Destruct");

	UAthenaCustomizationPickerTileButton_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaCustomizationPickerTileButton.AthenaCustomizationPickerTileButton_C.ExecuteUbergraph_AthenaCustomizationPickerTileButton
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCustomizationPickerTileButton_C::ExecuteUbergraph_AthenaCustomizationPickerTileButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCustomizationPickerTileButton.AthenaCustomizationPickerTileButton_C.ExecuteUbergraph_AthenaCustomizationPickerTileButton");

	UAthenaCustomizationPickerTileButton_C_ExecuteUbergraph_AthenaCustomizationPickerTileButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaCustomizationPickerTileButton.AthenaCustomizationPickerTileButton_C.PickedButtonHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidgetSwitcher*         WidgetSwitcher                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAthenaCustomizationPickerTileButton_C::PickedButtonHovered__DelegateSignature(class UWidgetSwitcher* WidgetSwitcher)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCustomizationPickerTileButton.AthenaCustomizationPickerTileButton_C.PickedButtonHovered__DelegateSignature");

	UAthenaCustomizationPickerTileButton_C_PickedButtonHovered__DelegateSignature_Params params;
	params.WidgetSwitcher = WidgetSwitcher;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
