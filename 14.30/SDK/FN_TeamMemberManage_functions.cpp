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

// Function TeamMemberManage.TeamMemberManage_C.BndEvt__CloseProfileButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTeamMemberManage_C::BndEvt__CloseProfileButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function TeamMemberManage.TeamMemberManage_C.BndEvt__CloseProfileButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");

	UTeamMemberManage_C_BndEvt__CloseProfileButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeamMemberManage.TeamMemberManage_C.OnParticipationChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bIsParticipating               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTeamMemberManage_C::OnParticipationChanged(bool bIsParticipating)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function TeamMemberManage.TeamMemberManage_C.OnParticipationChanged");

	UTeamMemberManage_C_OnParticipationChanged_Params params;
	params.bIsParticipating = bIsParticipating;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeamMemberManage.TeamMemberManage_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)

void UTeamMemberManage_C::BP_OnActivated()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function TeamMemberManage.TeamMemberManage_C.BP_OnActivated");

	UTeamMemberManage_C_BP_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeamMemberManage.TeamMemberManage_C.BndEvt__BP_LocalPlayerBannerEditor_K2Node_ComponentBoundEvent_1_CloseBannerEditor__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FName                   IconId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ColorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTeamMemberManage_C::BndEvt__BP_LocalPlayerBannerEditor_K2Node_ComponentBoundEvent_1_CloseBannerEditor__DelegateSignature(const struct FName& IconId, const struct FName& ColorId)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function TeamMemberManage.TeamMemberManage_C.BndEvt__BP_LocalPlayerBannerEditor_K2Node_ComponentBoundEvent_1_CloseBannerEditor__DelegateSignature");

	UTeamMemberManage_C_BndEvt__BP_LocalPlayerBannerEditor_K2Node_ComponentBoundEvent_1_CloseBannerEditor__DelegateSignature_Params params;
	params.IconId = IconId;
	params.ColorId = ColorId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeamMemberManage.TeamMemberManage_C.BP_OnDeactivated
// (Event, Protected, BlueprintEvent)

void UTeamMemberManage_C::BP_OnDeactivated()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function TeamMemberManage.TeamMemberManage_C.BP_OnDeactivated");

	UTeamMemberManage_C_BP_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeamMemberManage.TeamMemberManage_C.BndEvt__ContentSwitcher_K2Node_ComponentBoundEvent_2_OnActiveWidgetChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget*                 ActiveWidget                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            ActiveWidgetIndex              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTeamMemberManage_C::BndEvt__ContentSwitcher_K2Node_ComponentBoundEvent_2_OnActiveWidgetChanged__DelegateSignature(class UWidget* ActiveWidget, int ActiveWidgetIndex)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function TeamMemberManage.TeamMemberManage_C.BndEvt__ContentSwitcher_K2Node_ComponentBoundEvent_2_OnActiveWidgetChanged__DelegateSignature");

	UTeamMemberManage_C_BndEvt__ContentSwitcher_K2Node_ComponentBoundEvent_2_OnActiveWidgetChanged__DelegateSignature_Params params;
	params.ActiveWidget = ActiveWidget;
	params.ActiveWidgetIndex = ActiveWidgetIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeamMemberManage.TeamMemberManage_C.OpenBannerEditor
// (Event, Protected, BlueprintEvent)

void UTeamMemberManage_C::OpenBannerEditor()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function TeamMemberManage.TeamMemberManage_C.OpenBannerEditor");

	UTeamMemberManage_C_OpenBannerEditor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeamMemberManage.TeamMemberManage_C.ExecuteUbergraph_TeamMemberManage
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTeamMemberManage_C::ExecuteUbergraph_TeamMemberManage(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function TeamMemberManage.TeamMemberManage_C.ExecuteUbergraph_TeamMemberManage");

	UTeamMemberManage_C_ExecuteUbergraph_TeamMemberManage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
