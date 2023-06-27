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

// Function HorizontalTabList.HorizontalTabList_C.SetVerticalAlignment
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EVerticalAlignment> FillVertically                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHorizontalTabList_C::SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> FillVertically)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function HorizontalTabList.HorizontalTabList_C.SetVerticalAlignment");

	UHorizontalTabList_C_SetVerticalAlignment_Params params;
	params.FillVertically = FillVertically;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HorizontalTabList.HorizontalTabList_C.UpdateGamepadKeyVisibility
// (Public, BlueprintCallable, BlueprintEvent)

void UHorizontalTabList_C::UpdateGamepadKeyVisibility()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function HorizontalTabList.HorizontalTabList_C.UpdateGamepadKeyVisibility");

	UHorizontalTabList_C_UpdateGamepadKeyVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HorizontalTabList.HorizontalTabList_C.Get Tab From Id
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   TabNameID                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UCommonButton*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UCommonButton* UHorizontalTabList_C::Get_Tab_From_Id(const struct FName& TabNameID)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function HorizontalTabList.HorizontalTabList_C.Get Tab From Id");

	UHorizontalTabList_C_Get_Tab_From_Id_Params params;
	params.TabNameID = TabNameID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HorizontalTabList.HorizontalTabList_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHorizontalTabList_C::Construct()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function HorizontalTabList.HorizontalTabList_C.Construct");

	UHorizontalTabList_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HorizontalTabList.HorizontalTabList_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHorizontalTabList_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function HorizontalTabList.HorizontalTabList_C.PreConstruct");

	UHorizontalTabList_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HorizontalTabList.HorizontalTabList_C.Previous Visibility
// (BlueprintCallable, BlueprintEvent)

void UHorizontalTabList_C::Previous_Visibility()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function HorizontalTabList.HorizontalTabList_C.Previous Visibility");

	UHorizontalTabList_C_Previous_Visibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HorizontalTabList.HorizontalTabList_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   TabId                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHorizontalTabList_C::CustomEvent_1(const struct FName& TabId)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function HorizontalTabList.HorizontalTabList_C.CustomEvent_1");

	UHorizontalTabList_C_CustomEvent_1_Params params;
	params.TabId = TabId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HorizontalTabList.HorizontalTabList_C.HandleTabCreated
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FName                   TabNameID                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UCommonButton*           TabButton                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UHorizontalTabList_C::HandleTabCreated(const struct FName& TabNameID, class UCommonButton* TabButton)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function HorizontalTabList.HorizontalTabList_C.HandleTabCreated");

	UHorizontalTabList_C_HandleTabCreated_Params params;
	params.TabNameID = TabNameID;
	params.TabButton = TabButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HorizontalTabList.HorizontalTabList_C.HandleTabRemoved
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FName                   TabNameID                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UCommonButton*           TabButton                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UHorizontalTabList_C::HandleTabRemoved(const struct FName& TabNameID, class UCommonButton* TabButton)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function HorizontalTabList.HorizontalTabList_C.HandleTabRemoved");

	UHorizontalTabList_C_HandleTabRemoved_Params params;
	params.TabNameID = TabNameID;
	params.TabButton = TabButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HorizontalTabList.HorizontalTabList_C.HandleOnInputMethodChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ECommonInputType               bNewInputType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHorizontalTabList_C::HandleOnInputMethodChanged(ECommonInputType bNewInputType)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function HorizontalTabList.HorizontalTabList_C.HandleOnInputMethodChanged");

	UHorizontalTabList_C_HandleOnInputMethodChanged_Params params;
	params.bNewInputType = bNewInputType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HorizontalTabList.HorizontalTabList_C.ExecuteUbergraph_HorizontalTabList
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHorizontalTabList_C::ExecuteUbergraph_HorizontalTabList(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function HorizontalTabList.HorizontalTabList_C.ExecuteUbergraph_HorizontalTabList");

	UHorizontalTabList_C_ExecuteUbergraph_HorizontalTabList_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
