// Fortnite (1.11) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.InitSpeakerMaterial
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaTeamMemberInfo_C::InitSpeakerMaterial()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.InitSpeakerMaterial");

	UAthenaTeamMemberInfo_C_InitSpeakerMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.UpdateUniqueID
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAthenaTeamMemberInfo_C::UpdateUniqueID()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.UpdateUniqueID");

	UAthenaTeamMemberInfo_C_UpdateUniqueID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.SendFriendInvite
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAthenaTeamMemberInfo_C::SendFriendInvite()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.SendFriendInvite");

	UAthenaTeamMemberInfo_C_SendFriendInvite_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.CanFriend
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           CanFriend                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAthenaTeamMemberInfo_C::CanFriend(bool* CanFriend)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.CanFriend");

	UAthenaTeamMemberInfo_C_CanFriend_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanFriend != nullptr)
		*CanFriend = params.CanFriend;
}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.SetPlayerDisconnected
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAthenaTeamMemberInfo_C::SetPlayerDisconnected()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.SetPlayerDisconnected");

	UAthenaTeamMemberInfo_C_SetPlayerDisconnected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.SetTalking
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NewTalking                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaTeamMemberInfo_C::SetTalking(bool NewTalking)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.SetTalking");

	UAthenaTeamMemberInfo_C_SetTalking_Params params;
	params.NewTalking = NewTalking;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.UpdateMicIcon
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaTeamMemberInfo_C::UpdateMicIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.UpdateMicIcon");

	UAthenaTeamMemberInfo_C_UpdateMicIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.SetMuted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NewMuted                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaTeamMemberInfo_C::SetMuted(bool NewMuted)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.SetMuted");

	UAthenaTeamMemberInfo_C_SetMuted_Params params;
	params.NewMuted = NewMuted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.SetReviving
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Reviving                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaTeamMemberInfo_C::SetReviving(bool Reviving)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.SetReviving");

	UAthenaTeamMemberInfo_C_SetReviving_Params params;
	params.Reviving = Reviving;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.UpdatePlayerName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAthenaTeamMemberInfo_C::UpdatePlayerName()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.UpdatePlayerName");

	UAthenaTeamMemberInfo_C_UpdatePlayerName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.SetDBNO
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           DBNO                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaTeamMemberInfo_C::SetDBNO(bool DBNO)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.SetDBNO");

	UAthenaTeamMemberInfo_C_SetDBNO_Params params;
	params.DBNO = DBNO;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.SetDead
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Dead                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaTeamMemberInfo_C::SetDead(bool Dead)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.SetDead");

	UAthenaTeamMemberInfo_C_SetDead_Params params;
	params.Dead = Dead;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.UpdatePS
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerStateAthena*  InPlayerState                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaTeamMemberInfo_C::UpdatePS(class AFortPlayerStateAthena* InPlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.UpdatePS");

	UAthenaTeamMemberInfo_C_UpdatePS_Params params;
	params.InPlayerState = InPlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.SetShield
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaTeamMemberInfo_C::SetShield(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.SetShield");

	UAthenaTeamMemberInfo_C_SetShield_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.SetHealth
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaTeamMemberInfo_C::SetHealth(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.SetHealth");

	UAthenaTeamMemberInfo_C_SetHealth_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.DisplayAddFriendIfApplicable
// (BlueprintCallable, BlueprintEvent)

void UAthenaTeamMemberInfo_C::DisplayAddFriendIfApplicable()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.DisplayAddFriendIfApplicable");

	UAthenaTeamMemberInfo_C_DisplayAddFriendIfApplicable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.BndEvt__AddFriendButton_K2Node_ComponentBoundEvent_11_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaTeamMemberInfo_C::BndEvt__AddFriendButton_K2Node_ComponentBoundEvent_11_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.BndEvt__AddFriendButton_K2Node_ComponentBoundEvent_11_CommonButtonClicked__DelegateSignature");

	UAthenaTeamMemberInfo_C_BndEvt__AddFriendButton_K2Node_ComponentBoundEvent_11_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaTeamMemberInfo_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.Construct");

	UAthenaTeamMemberInfo_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.DisplayAddFriend_NoAnim
// (BlueprintCallable, BlueprintEvent)

void UAthenaTeamMemberInfo_C::DisplayAddFriend_NoAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.DisplayAddFriend_NoAnim");

	UAthenaTeamMemberInfo_C_DisplayAddFriend_NoAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.ExecuteUbergraph_AthenaTeamMemberInfo
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaTeamMemberInfo_C::ExecuteUbergraph_AthenaTeamMemberInfo(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.ExecuteUbergraph_AthenaTeamMemberInfo");

	UAthenaTeamMemberInfo_C_ExecuteUbergraph_AthenaTeamMemberInfo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
