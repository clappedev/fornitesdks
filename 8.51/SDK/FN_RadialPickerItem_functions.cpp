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

// Function RadialPickerItem.RadialPickerItem_C.UpdateSelectionColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Selected                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URadialPickerItem_C::UpdateSelectionColor(bool Selected)
{
	static auto fn = UObject::FindObject<UFunction>("Function RadialPickerItem.RadialPickerItem_C.UpdateSelectionColor");

	URadialPickerItem_C_UpdateSelectionColor_Params params;
	params.Selected = Selected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RadialPickerItem.RadialPickerItem_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply URadialPickerItem_C::OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function RadialPickerItem.RadialPickerItem_C.OnMouseButtonDown");

	URadialPickerItem_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RadialPickerItem.RadialPickerItem_C.SetShowImageAndLabel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ShowImageAndLabel              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URadialPickerItem_C::SetShowImageAndLabel(bool ShowImageAndLabel)
{
	static auto fn = UObject::FindObject<UFunction>("Function RadialPickerItem.RadialPickerItem_C.SetShowImageAndLabel");

	URadialPickerItem_C_SetShowImageAndLabel_Params params;
	params.ShowImageAndLabel = ShowImageAndLabel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RadialPickerItem.RadialPickerItem_C.SetItemContent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*               Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Option_Enabled                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Radial_Item_Index              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URadialPickerItem_C::SetItemContent(class UFortItem* Item, bool Option_Enabled, int Radial_Item_Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function RadialPickerItem.RadialPickerItem_C.SetItemContent");

	URadialPickerItem_C_SetItemContent_Params params;
	params.Item = Item;
	params.Option_Enabled = Option_Enabled;
	params.Radial_Item_Index = Radial_Item_Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RadialPickerItem.RadialPickerItem_C.SetSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsSelected                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URadialPickerItem_C::SetSelected(bool IsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function RadialPickerItem.RadialPickerItem_C.SetSelected");

	URadialPickerItem_C_SetSelected_Params params;
	params.IsSelected = IsSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RadialPickerItem.RadialPickerItem_C.SetImageAndLabelContent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FSlateBrush             Brush                          (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           Option_Enabled                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            RadialItemIndex                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URadialPickerItem_C::SetImageAndLabelContent(struct FText Text, struct FSlateBrush Brush, bool Option_Enabled, int RadialItemIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function RadialPickerItem.RadialPickerItem_C.SetImageAndLabelContent");

	URadialPickerItem_C_SetImageAndLabelContent_Params params;
	params.Text = Text;
	params.Brush = Brush;
	params.Option_Enabled = Option_Enabled;
	params.RadialItemIndex = RadialItemIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RadialPickerItem.RadialPickerItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void URadialPickerItem_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function RadialPickerItem.RadialPickerItem_C.Construct");

	URadialPickerItem_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RadialPickerItem.RadialPickerItem_C.ExecuteUbergraph_RadialPickerItem
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URadialPickerItem_C::ExecuteUbergraph_RadialPickerItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function RadialPickerItem.RadialPickerItem_C.ExecuteUbergraph_RadialPickerItem");

	URadialPickerItem_C_ExecuteUbergraph_RadialPickerItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RadialPickerItem.RadialPickerItem_C.On Item Touched__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URadialPickerItem_C*     Picked_Option                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void URadialPickerItem_C::On_Item_Touched__DelegateSignature(class URadialPickerItem_C* Picked_Option)
{
	static auto fn = UObject::FindObject<UFunction>("Function RadialPickerItem.RadialPickerItem_C.On Item Touched__DelegateSignature");

	URadialPickerItem_C_On_Item_Touched__DelegateSignature_Params params;
	params.Picked_Option = Picked_Option;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
