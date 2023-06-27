// Fortnite (9.1) SDK
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

// Function AthenaLobbyPlayerPanel.AthenaLobbyPlayerPanel_C.OnMouseButtonDown_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UAthenaLobbyPlayerPanel_C::OnMouseButtonDown_1(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobbyPlayerPanel.AthenaLobbyPlayerPanel_C.OnMouseButtonDown_1");

	UAthenaLobbyPlayerPanel_C_OnMouseButtonDown_1_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AthenaLobbyPlayerPanel.AthenaLobbyPlayerPanel_C.Cancel
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaLobbyPlayerPanel_C::Cancel()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobbyPlayerPanel.AthenaLobbyPlayerPanel_C.Cancel");

	UAthenaLobbyPlayerPanel_C_Cancel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobbyPlayerPanel.AthenaLobbyPlayerPanel_C.Focus
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaLobbyPlayerPanel_C::Focus()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobbyPlayerPanel.AthenaLobbyPlayerPanel_C.Focus");

	UAthenaLobbyPlayerPanel_C_Focus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobbyPlayerPanel.AthenaLobbyPlayerPanel_C.OnHasBattlePassUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bHasBattlePass                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaLobbyPlayerPanel_C::OnHasBattlePassUpdated(bool bHasBattlePass)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobbyPlayerPanel.AthenaLobbyPlayerPanel_C.OnHasBattlePassUpdated");

	UAthenaLobbyPlayerPanel_C_OnHasBattlePassUpdated_Params params;
	params.bHasBattlePass = bHasBattlePass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobbyPlayerPanel.AthenaLobbyPlayerPanel_C.OnFriendStatusUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:
// EFortFriendRequestStatus       FriendRequestStatus            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaLobbyPlayerPanel_C::OnFriendStatusUpdated(EFortFriendRequestStatus FriendRequestStatus)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobbyPlayerPanel.AthenaLobbyPlayerPanel_C.OnFriendStatusUpdated");

	UAthenaLobbyPlayerPanel_C_OnFriendStatusUpdated_Params params;
	params.FriendRequestStatus = FriendRequestStatus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobbyPlayerPanel.AthenaLobbyPlayerPanel_C.OnIsMutedUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bIsMuted                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaLobbyPlayerPanel_C::OnIsMutedUpdated(bool bIsMuted)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobbyPlayerPanel.AthenaLobbyPlayerPanel_C.OnIsMutedUpdated");

	UAthenaLobbyPlayerPanel_C_OnIsMutedUpdated_Params params;
	params.bIsMuted = bIsMuted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobbyPlayerPanel.AthenaLobbyPlayerPanel_C.ExecuteUbergraph_AthenaLobbyPlayerPanel
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaLobbyPlayerPanel_C::ExecuteUbergraph_AthenaLobbyPlayerPanel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobbyPlayerPanel.AthenaLobbyPlayerPanel_C.ExecuteUbergraph_AthenaLobbyPlayerPanel");

	UAthenaLobbyPlayerPanel_C_ExecuteUbergraph_AthenaLobbyPlayerPanel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobbyPlayerPanel.AthenaLobbyPlayerPanel_C.OnClosed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UAthenaLobbyPlayerPanel_C::OnClosed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobbyPlayerPanel.AthenaLobbyPlayerPanel_C.OnClosed__DelegateSignature");

	UAthenaLobbyPlayerPanel_C_OnClosed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobbyPlayerPanel.AthenaLobbyPlayerPanel_C.OnGadgetsClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UAthenaLobbyPlayerPanel_C::OnGadgetsClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobbyPlayerPanel.AthenaLobbyPlayerPanel_C.OnGadgetsClicked__DelegateSignature");

	UAthenaLobbyPlayerPanel_C_OnGadgetsClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
