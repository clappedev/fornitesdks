#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function InvitePopupMenu.InvitePopupMenu_C.GetNetId
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FUniqueNetIdRepl            NetId                                                            (Parm, OutParm, HasGetValueTypeHash)
// bool                               bIsConsoleUniqueId                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsNetIdFromLocalPlayersPlatform_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor)

void UInvitePopupMenu_C::GetNetId(struct FUniqueNetIdRepl* NetId, bool* bIsConsoleUniqueId, class UFortPartyContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsNetIdFromLocalPlayersPlatform_ReturnValue)
{
	static auto Func = Class->GetFunction("InvitePopupMenu_C", "GetNetId");

	Params::UInvitePopupMenu_C_GetNetId_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_IsNetIdFromLocalPlayersPlatform_ReturnValue = CallFunc_IsNetIdFromLocalPlayersPlatform_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
	if (NetId != nullptr)
		*NetId = Parms.NetId;

	if (bIsConsoleUniqueId != nullptr)
		*bIsConsoleUniqueId = Parms.bIsConsoleUniqueId;

}

// Function InvitePopupMenu.InvitePopupMenu_C.InitializeValues
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl            InUniqueNetId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            InConsoleNetId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class FText                        InPlayerName                                                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UInvitePopupMenu_C::InitializeValues(const struct FUniqueNetIdRepl& InUniqueNetId, const struct FUniqueNetIdRepl& InConsoleNetId, class FText InPlayerName)
{
	static auto Func = Class->GetFunction("InvitePopupMenu_C", "InitializeValues");

	Params::UInvitePopupMenu_C_InitializeValues_Params Parms;
	Parms.InUniqueNetId = InUniqueNetId;
	Parms.InConsoleNetId = InConsoleNetId;
	Parms.InPlayerName = InPlayerName;

	UObject::ProcessEvent(Func, &Parms);
}

// Function InvitePopupMenu.InvitePopupMenu_C.InvitePlayerToParty
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl            CallFunc_GetNetId_NetId                                          (HasGetValueTypeHash)
// bool                               CallFunc_GetNetId_bIsConsoleUniqueId                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInvitePopupMenu_C::InvitePlayerToParty(const struct FUniqueNetIdRepl& CallFunc_GetNetId_NetId, bool CallFunc_GetNetId_bIsConsoleUniqueId, class UFortPartyContext* CallFunc_GetContext_ReturnValue)
{
	static auto Func = Class->GetFunction("InvitePopupMenu_C", "InvitePlayerToParty");

	Params::UInvitePopupMenu_C_InvitePlayerToParty_Params Parms;
	Parms.CallFunc_GetNetId_NetId = CallFunc_GetNetId_NetId;
	Parms.CallFunc_GetNetId_bIsConsoleUniqueId = CallFunc_GetNetId_bIsConsoleUniqueId;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

// Function InvitePopupMenu.InvitePopupMenu_C.InvitePlayerAsFriend
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortFriendRequestStatusCallFunc_GetMcpFriendRequestStatusForPlayer_ReturnValue          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInvitePopupMenu_C::InvitePlayerAsFriend(class UFortPartyContext* CallFunc_GetContext_ReturnValue, class UFortPartyContext* CallFunc_GetContext_ReturnValue1, enum class EFortFriendRequestStatus CallFunc_GetMcpFriendRequestStatusForPlayer_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UFortPartyContext* CallFunc_GetContext_ReturnValue2)
{
	static auto Func = Class->GetFunction("InvitePopupMenu_C", "InvitePlayerAsFriend");

	Params::UInvitePopupMenu_C_InvitePlayerAsFriend_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue1 = CallFunc_GetContext_ReturnValue1;
	Parms.CallFunc_GetMcpFriendRequestStatusForPlayer_ReturnValue = CallFunc_GetMcpFriendRequestStatusForPlayer_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetContext_ReturnValue2 = CallFunc_GetContext_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);
}

// Function InvitePopupMenu.InvitePopupMenu_C.CanAddAsFriend
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               bCanFriendPlayer                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortFriendRequestStatusTemp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            CallFunc_GetNetId_NetId                                          (HasGetValueTypeHash)
// bool                               CallFunc_GetNetId_bIsConsoleUniqueId                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortFriendRequestStatusCallFunc_GetMcpFriendRequestStatusForPlayer_ReturnValue          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UInvitePopupMenu_C::CanAddAsFriend(bool* bCanFriendPlayer, enum class EFortFriendRequestStatus Temp_byte_Variable, bool Temp_bool_Variable, bool Temp_bool_Variable1, bool Temp_bool_Variable2, bool Temp_bool_Variable3, class UFortPartyContext* CallFunc_GetContext_ReturnValue, const struct FUniqueNetIdRepl& CallFunc_GetNetId_NetId, bool CallFunc_GetNetId_bIsConsoleUniqueId, enum class EFortFriendRequestStatus CallFunc_GetMcpFriendRequestStatusForPlayer_ReturnValue, bool K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("InvitePopupMenu_C", "CanAddAsFriend");

	Params::UInvitePopupMenu_C_CanAddAsFriend_Params Parms;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.Temp_bool_Variable3 = Temp_bool_Variable3;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetNetId_NetId = CallFunc_GetNetId_NetId;
	Parms.CallFunc_GetNetId_bIsConsoleUniqueId = CallFunc_GetNetId_bIsConsoleUniqueId;
	Parms.CallFunc_GetMcpFriendRequestStatusForPlayer_ReturnValue = CallFunc_GetMcpFriendRequestStatusForPlayer_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);
	if (bCanFriendPlayer != nullptr)
		*bCanFriendPlayer = Parms.bCanFriendPlayer;

}

// Function InvitePopupMenu.InvitePopupMenu_C.CanInviteToParty
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               CanInviteToParty                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FUniqueNetIdRepl            CallFunc_GetNetId_NetId                                          (HasGetValueTypeHash)
// bool                               CallFunc_GetNetId_bIsConsoleUniqueId                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortPartyRestriction   CallFunc_CanBeInvitedNetID_FailReason                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanBeInvitedNetID_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UInvitePopupMenu_C::CanInviteToParty(bool* CanInviteToParty, const struct FUniqueNetIdRepl& CallFunc_GetNetId_NetId, bool CallFunc_GetNetId_bIsConsoleUniqueId, class UFortPartyContext* CallFunc_GetContext_ReturnValue, enum class EFortPartyRestriction CallFunc_CanBeInvitedNetID_FailReason, bool CallFunc_CanBeInvitedNetID_ReturnValue)
{
	static auto Func = Class->GetFunction("InvitePopupMenu_C", "CanInviteToParty");

	Params::UInvitePopupMenu_C_CanInviteToParty_Params Parms;
	Parms.CallFunc_GetNetId_NetId = CallFunc_GetNetId_NetId;
	Parms.CallFunc_GetNetId_bIsConsoleUniqueId = CallFunc_GetNetId_bIsConsoleUniqueId;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_CanBeInvitedNetID_FailReason = CallFunc_CanBeInvitedNetID_FailReason;
	Parms.CallFunc_CanBeInvitedNetID_ReturnValue = CallFunc_CanBeInvitedNetID_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
	if (CanInviteToParty != nullptr)
		*CanInviteToParty = Parms.CanInviteToParty;

}

// Function InvitePopupMenu.InvitePopupMenu_C.BndEvt__InviteToPartyButton_K2Node_ComponentBoundEvent_116_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInvitePopupMenu_C::BndEvt__InviteToPartyButton_K2Node_ComponentBoundEvent_116_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("InvitePopupMenu_C", "BndEvt__InviteToPartyButton_K2Node_ComponentBoundEvent_116_CommonButtonClicked__DelegateSignature");

	Params::UInvitePopupMenu_C_BndEvt__InviteToPartyButton_K2Node_ComponentBoundEvent_116_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}

// Function InvitePopupMenu.InvitePopupMenu_C.BndEvt__InviteAsFriendButton_K2Node_ComponentBoundEvent_133_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInvitePopupMenu_C::BndEvt__InviteAsFriendButton_K2Node_ComponentBoundEvent_133_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("InvitePopupMenu_C", "BndEvt__InviteAsFriendButton_K2Node_ComponentBoundEvent_133_CommonButtonClicked__DelegateSignature");

	Params::UInvitePopupMenu_C_BndEvt__InviteAsFriendButton_K2Node_ComponentBoundEvent_133_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}

// Function InvitePopupMenu.InvitePopupMenu_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_153_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInvitePopupMenu_C::BndEvt__CancelButton_K2Node_ComponentBoundEvent_153_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("InvitePopupMenu_C", "BndEvt__CancelButton_K2Node_ComponentBoundEvent_153_CommonButtonClicked__DelegateSignature");

	Params::UInvitePopupMenu_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_153_CommonButtonClicked__DelegateSignature_Params Parms;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}

// Function InvitePopupMenu.InvitePopupMenu_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UInvitePopupMenu_C::OnActivated()
{
	static auto Func = Class->GetFunction("InvitePopupMenu_C", "OnActivated");

	Params::UInvitePopupMenu_C_OnActivated_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function InvitePopupMenu.InvitePopupMenu_C.ExecuteUbergraph_InvitePopupMenu
// ()
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button1                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanAddAsFriend_bCanFriendPlayer                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanInviteToParty_CanInviteToParty                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button2                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortFriendRequestStatusCallFunc_GetMcpFriendRequestStatusForPlayer_ReturnValue          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UInvitePopupMenu_C::ExecuteUbergraph_InvitePopupMenu(int32 EntryPoint, class UCommonButton* K2Node_ComponentBoundEvent_Button1, class UCommonButton* K2Node_ComponentBoundEvent_Button, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, bool CallFunc_CanAddAsFriend_bCanFriendPlayer, bool CallFunc_CanInviteToParty_CanInviteToParty, class UCommonButton* K2Node_ComponentBoundEvent_Button2, class UFortPartyContext* CallFunc_GetContext_ReturnValue, enum class EFortFriendRequestStatus CallFunc_GetMcpFriendRequestStatusForPlayer_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static auto Func = Class->GetFunction("InvitePopupMenu_C", "ExecuteUbergraph_InvitePopupMenu");

	Params::UInvitePopupMenu_C_ExecuteUbergraph_InvitePopupMenu_Params Parms;
	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Button1 = K2Node_ComponentBoundEvent_Button1;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.CallFunc_CanAddAsFriend_bCanFriendPlayer = CallFunc_CanAddAsFriend_bCanFriendPlayer;
	Parms.CallFunc_CanInviteToParty_CanInviteToParty = CallFunc_CanInviteToParty_CanInviteToParty;
	Parms.K2Node_ComponentBoundEvent_Button2 = K2Node_ComponentBoundEvent_Button2;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetMcpFriendRequestStatusForPlayer_ReturnValue = CallFunc_GetMcpFriendRequestStatusForPlayer_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
