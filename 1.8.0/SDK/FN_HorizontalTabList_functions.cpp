// Fortnite (1.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HorizontalTabList.HorizontalTabList_C.Get Tab From Id
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   TabNameID                      (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonButton*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonButton* UHorizontalTabList_C::Get_Tab_From_Id(const struct FName& TabNameID)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizontalTabList.HorizontalTabList_C.Get Tab From Id");

	UHorizontalTabList_C_Get_Tab_From_Id_Params params;
	params.TabNameID = TabNameID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HorizontalTabList.HorizontalTabList_C.ChangeInputBindings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle     NextBinding                    (Parm)
// struct FDataTableRowHandle     PreviousBinding                (Parm)

void UHorizontalTabList_C::ChangeInputBindings(const struct FDataTableRowHandle& NextBinding, const struct FDataTableRowHandle& PreviousBinding)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizontalTabList.HorizontalTabList_C.ChangeInputBindings");

	UHorizontalTabList_C_ChangeInputBindings_Params params;
	params.NextBinding = NextBinding;
	params.PreviousBinding = PreviousBinding;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HorizontalTabList.HorizontalTabList_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHorizontalTabList_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizontalTabList.HorizontalTabList_C.Construct");

	UHorizontalTabList_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HorizontalTabList.HorizontalTabList_C.Handle OnInputMethodChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bUsingGamepad                  (Parm, ZeroConstructor, IsPlainOldData)

void UHorizontalTabList_C::Handle_OnInputMethodChanged(bool bUsingGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizontalTabList.HorizontalTabList_C.Handle OnInputMethodChanged");

	UHorizontalTabList_C_Handle_OnInputMethodChanged_Params params;
	params.bUsingGamepad = bUsingGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HorizontalTabList.HorizontalTabList_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (Parm, ZeroConstructor, IsPlainOldData)

void UHorizontalTabList_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizontalTabList.HorizontalTabList_C.PreConstruct");

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
	static auto fn = UObject::FindObject<UFunction>("Function HorizontalTabList.HorizontalTabList_C.Previous Visibility");

	UHorizontalTabList_C_Previous_Visibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HorizontalTabList.HorizontalTabList_C.HandleTabCreated
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FName*                  TabNameID                      (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonButton**          TabButton                      (Parm, ZeroConstructor, IsPlainOldData)

void UHorizontalTabList_C::HandleTabCreated(struct FName* TabNameID, class UCommonButton** TabButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizontalTabList.HorizontalTabList_C.HandleTabCreated");

	UHorizontalTabList_C_HandleTabCreated_Params params;
	params.TabNameID = TabNameID;
	params.TabButton = TabButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HorizontalTabList.HorizontalTabList_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   TabId                          (Parm, ZeroConstructor, IsPlainOldData)

void UHorizontalTabList_C::CustomEvent_1(const struct FName& TabId)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizontalTabList.HorizontalTabList_C.CustomEvent_1");

	UHorizontalTabList_C_CustomEvent_1_Params params;
	params.TabId = TabId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HorizontalTabList.HorizontalTabList_C.ExecuteUbergraph_HorizontalTabList
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UHorizontalTabList_C::ExecuteUbergraph_HorizontalTabList(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HorizontalTabList.HorizontalTabList_C.ExecuteUbergraph_HorizontalTabList");

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
