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

// Function AthenaTabsScreen.AthenaTabsScreen_C.SetTopBar
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTopBar_C*               inTopbar                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAthenaTabsScreen_C::SetTopBar(class UTopBar_C* inTopbar)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTabsScreen.AthenaTabsScreen_C.SetTopBar");

	UAthenaTabsScreen_C_SetTopBar_Params params;
	params.inTopbar = inTopbar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTabsScreen.AthenaTabsScreen_C.HandleTabSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   TabName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaTabsScreen_C::HandleTabSelected(struct FName TabName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTabsScreen.AthenaTabsScreen_C.HandleTabSelected");

	UAthenaTabsScreen_C_HandleTabSelected_Params params;
	params.TabName = TabName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTabsScreen.AthenaTabsScreen_C.HandleTabCreated
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   TabId                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UCommonButton*           TabButton                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAthenaTabsScreen_C::HandleTabCreated(struct FName TabId, class UCommonButton* TabButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTabsScreen.AthenaTabsScreen_C.HandleTabCreated");

	UAthenaTabsScreen_C_HandleTabCreated_Params params;
	params.TabId = TabId;
	params.TabButton = TabButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTabsScreen.AthenaTabsScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaTabsScreen_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTabsScreen.AthenaTabsScreen_C.Construct");

	UAthenaTabsScreen_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTabsScreen.AthenaTabsScreen_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAthenaTabsScreen_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTabsScreen.AthenaTabsScreen_C.OnActivated");

	UAthenaTabsScreen_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTabsScreen.AthenaTabsScreen_C.BndEvt__TopTabList_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// struct FName                   TabId                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UCommonButton*           TabButton                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAthenaTabsScreen_C::BndEvt__TopTabList_K2Node_ComponentBoundEvent(struct FName TabId, class UCommonButton* TabButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTabsScreen.AthenaTabsScreen_C.BndEvt__TopTabList_K2Node_ComponentBoundEvent");

	UAthenaTabsScreen_C_BndEvt__TopTabList_K2Node_ComponentBoundEvent_Params params;
	params.TabId = TabId;
	params.TabButton = TabButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTabsScreen.AthenaTabsScreen_C.OnDeactivated
// (Event, Protected, BlueprintEvent)

void UAthenaTabsScreen_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTabsScreen.AthenaTabsScreen_C.OnDeactivated");

	UAthenaTabsScreen_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTabsScreen.AthenaTabsScreen_C.HandleTabContentCreated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   TabId                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UCommonUserWidget*       TabWidget                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAthenaTabsScreen_C::HandleTabContentCreated(struct FName TabId, class UCommonUserWidget* TabWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTabsScreen.AthenaTabsScreen_C.HandleTabContentCreated");

	UAthenaTabsScreen_C_HandleTabContentCreated_Params params;
	params.TabId = TabId;
	params.TabWidget = TabWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTabsScreen.AthenaTabsScreen_C.BndEvt__Social_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAthenaTabsScreen_C::BndEvt__Social_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTabsScreen.AthenaTabsScreen_C.BndEvt__Social_K2Node_ComponentBoundEvent");

	UAthenaTabsScreen_C_BndEvt__Social_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTabsScreen.AthenaTabsScreen_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaTabsScreen_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTabsScreen.AthenaTabsScreen_C.PreConstruct");

	UAthenaTabsScreen_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTabsScreen.AthenaTabsScreen_C.DisableTabsHotfixedOffTabs
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   TabId                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UCommonButton*           NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAthenaTabsScreen_C::DisableTabsHotfixedOffTabs(struct FName TabId, class UCommonButton* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTabsScreen.AthenaTabsScreen_C.DisableTabsHotfixedOffTabs");

	UAthenaTabsScreen_C_DisableTabsHotfixedOffTabs_Params params;
	params.TabId = TabId;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTabsScreen.AthenaTabsScreen_C.ShowReplayBrowser
// (Event, Protected, BlueprintEvent)

void UAthenaTabsScreen_C::ShowReplayBrowser()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTabsScreen.AthenaTabsScreen_C.ShowReplayBrowser");

	UAthenaTabsScreen_C_ShowReplayBrowser_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTabsScreen.AthenaTabsScreen_C.SetActiveInvitesCount
// (Event, Protected, BlueprintEvent)
// Parameters:
// int                            NewActiveInvitesCount          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaTabsScreen_C::SetActiveInvitesCount(int NewActiveInvitesCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTabsScreen.AthenaTabsScreen_C.SetActiveInvitesCount");

	UAthenaTabsScreen_C_SetActiveInvitesCount_Params params;
	params.NewActiveInvitesCount = NewActiveInvitesCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTabsScreen.AthenaTabsScreen_C.SetOnlineFriendsCount
// (Event, Protected, BlueprintEvent)
// Parameters:
// int                            NewOnlineFriendsCount          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaTabsScreen_C::SetOnlineFriendsCount(int NewOnlineFriendsCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTabsScreen.AthenaTabsScreen_C.SetOnlineFriendsCount");

	UAthenaTabsScreen_C_SetOnlineFriendsCount_Params params;
	params.NewOnlineFriendsCount = NewOnlineFriendsCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTabsScreen.AthenaTabsScreen_C.BndEvt__LargeMenuButton_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAthenaTabsScreen_C::BndEvt__LargeMenuButton_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTabsScreen.AthenaTabsScreen_C.BndEvt__LargeMenuButton_K2Node_ComponentBoundEvent");

	UAthenaTabsScreen_C_BndEvt__LargeMenuButton_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTabsScreen.AthenaTabsScreen_C.ExecuteUbergraph_AthenaTabsScreen
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaTabsScreen_C::ExecuteUbergraph_AthenaTabsScreen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTabsScreen.AthenaTabsScreen_C.ExecuteUbergraph_AthenaTabsScreen");

	UAthenaTabsScreen_C_ExecuteUbergraph_AthenaTabsScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
