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

// Function ItemAlterationsListDetailWidget.ItemAlterationsListDetailWidget_C.SetState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortAlterationWidgetState     State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemAlterationsListDetailWidget_C::SetState(EFortAlterationWidgetState State)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ItemAlterationsListDetailWidget.ItemAlterationsListDetailWidget_C.SetState");

	UItemAlterationsListDetailWidget_C_SetState_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemAlterationsListDetailWidget.ItemAlterationsListDetailWidget_C.HandlePostDifferentItemToDetailSet
// (Event, Protected, BlueprintEvent)

void UItemAlterationsListDetailWidget_C::HandlePostDifferentItemToDetailSet()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ItemAlterationsListDetailWidget.ItemAlterationsListDetailWidget_C.HandlePostDifferentItemToDetailSet");

	UItemAlterationsListDetailWidget_C_HandlePostDifferentItemToDetailSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemAlterationsListDetailWidget.ItemAlterationsListDetailWidget_C.HandlePostDifferentItemToCompareWithSet
// (Event, Protected, BlueprintEvent)

void UItemAlterationsListDetailWidget_C::HandlePostDifferentItemToCompareWithSet()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ItemAlterationsListDetailWidget.ItemAlterationsListDetailWidget_C.HandlePostDifferentItemToCompareWithSet");

	UItemAlterationsListDetailWidget_C_HandlePostDifferentItemToCompareWithSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemAlterationsListDetailWidget.ItemAlterationsListDetailWidget_C.HandleUpgradeLevelDeltaChanged
// (Event, Protected, BlueprintEvent)

void UItemAlterationsListDetailWidget_C::HandleUpgradeLevelDeltaChanged()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ItemAlterationsListDetailWidget.ItemAlterationsListDetailWidget_C.HandleUpgradeLevelDeltaChanged");

	UItemAlterationsListDetailWidget_C_HandleUpgradeLevelDeltaChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemAlterationsListDetailWidget.ItemAlterationsListDetailWidget_C.ExecuteUbergraph_ItemAlterationsListDetailWidget
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemAlterationsListDetailWidget_C::ExecuteUbergraph_ItemAlterationsListDetailWidget(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ItemAlterationsListDetailWidget.ItemAlterationsListDetailWidget_C.ExecuteUbergraph_ItemAlterationsListDetailWidget");

	UItemAlterationsListDetailWidget_C_ExecuteUbergraph_ItemAlterationsListDetailWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
