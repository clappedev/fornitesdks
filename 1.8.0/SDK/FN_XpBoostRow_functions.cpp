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

// Function XpBoostRow.XpBoostRow_C.HasBoost
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UFortAccountItemDefinition* AccountItemDef                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UXpBoostRow_C::HasBoost(class UFortAccountItemDefinition* AccountItemDef, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function XpBoostRow.XpBoostRow_C.HasBoost");

	UXpBoostRow_C_HasBoost_Params params;
	params.AccountItemDef = AccountItemDef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function XpBoostRow.XpBoostRow_C.Update Boost Material
// (Public, BlueprintCallable, BlueprintEvent)

void UXpBoostRow_C::Update_Boost_Material()
{
	static auto fn = UObject::FindObject<UFunction>("Function XpBoostRow.XpBoostRow_C.Update Boost Material");

	UXpBoostRow_C_Update_Boost_Material_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function XpBoostRow.XpBoostRow_C.Center On Row
// (Public, BlueprintCallable, BlueprintEvent)

void UXpBoostRow_C::Center_On_Row()
{
	static auto fn = UObject::FindObject<UFunction>("Function XpBoostRow.XpBoostRow_C.Center On Row");

	UXpBoostRow_C_Center_On_Row_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function XpBoostRow.XpBoostRow_C.Update Party Member
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Row_Has_Party_Member           (Parm, ZeroConstructor, IsPlainOldData)
// struct FFortTeamMemberInfo     Party_Members_Info             (Parm)

void UXpBoostRow_C::Update_Party_Member(bool Row_Has_Party_Member, const struct FFortTeamMemberInfo& Party_Members_Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function XpBoostRow.XpBoostRow_C.Update Party Member");

	UXpBoostRow_C_Update_Party_Member_Params params;
	params.Row_Has_Party_Member = Row_Has_Party_Member;
	params.Party_Members_Info = Party_Members_Info;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function XpBoostRow.XpBoostRow_C.OnMCPRequestComplete_13866D8D449A2AA167E306B6A172BD62
// (BlueprintCallable, BlueprintEvent)

void UXpBoostRow_C::OnMCPRequestComplete_13866D8D449A2AA167E306B6A172BD62()
{
	static auto fn = UObject::FindObject<UFunction>("Function XpBoostRow.XpBoostRow_C.OnMCPRequestComplete_13866D8D449A2AA167E306B6A172BD62");

	UXpBoostRow_C_OnMCPRequestComplete_13866D8D449A2AA167E306B6A172BD62_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function XpBoostRow.XpBoostRow_C.DialogResult_9BF60C804C82DAA0C1A2839132130883
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortDialogResult              Result                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ResultName                     (Parm, ZeroConstructor, IsPlainOldData)

void UXpBoostRow_C::DialogResult_9BF60C804C82DAA0C1A2839132130883(EFortDialogResult Result, const struct FName& ResultName)
{
	static auto fn = UObject::FindObject<UFunction>("Function XpBoostRow.XpBoostRow_C.DialogResult_9BF60C804C82DAA0C1A2839132130883");

	UXpBoostRow_C_DialogResult_9BF60C804C82DAA0C1A2839132130883_Params params;
	params.Result = Result;
	params.ResultName = ResultName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function XpBoostRow.XpBoostRow_C.DialogResult_8D859C4A4CE7EC02F6B02CA6729E58B0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortDialogResult              Result                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ResultName                     (Parm, ZeroConstructor, IsPlainOldData)

void UXpBoostRow_C::DialogResult_8D859C4A4CE7EC02F6B02CA6729E58B0(EFortDialogResult Result, const struct FName& ResultName)
{
	static auto fn = UObject::FindObject<UFunction>("Function XpBoostRow.XpBoostRow_C.DialogResult_8D859C4A4CE7EC02F6B02CA6729E58B0");

	UXpBoostRow_C_DialogResult_8D859C4A4CE7EC02F6B02CA6729E58B0_Params params;
	params.Result = Result;
	params.ResultName = ResultName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function XpBoostRow.XpBoostRow_C.OnMCPRequestComplete_59B43F5044B96A114CC64595A3818F3C
// (BlueprintCallable, BlueprintEvent)

void UXpBoostRow_C::OnMCPRequestComplete_59B43F5044B96A114CC64595A3818F3C()
{
	static auto fn = UObject::FindObject<UFunction>("Function XpBoostRow.XpBoostRow_C.OnMCPRequestComplete_59B43F5044B96A114CC64595A3818F3C");

	UXpBoostRow_C_OnMCPRequestComplete_59B43F5044B96A114CC64595A3818F3C_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function XpBoostRow.XpBoostRow_C.BndEvt__GiveXPButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (Parm, ZeroConstructor, IsPlainOldData)

void UXpBoostRow_C::BndEvt__GiveXPButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function XpBoostRow.XpBoostRow_C.BndEvt__GiveXPButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");

	UXpBoostRow_C_BndEvt__GiveXPButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function XpBoostRow.XpBoostRow_C.ExecuteUbergraph_XpBoostRow
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UXpBoostRow_C::ExecuteUbergraph_XpBoostRow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function XpBoostRow.XpBoostRow_C.ExecuteUbergraph_XpBoostRow");

	UXpBoostRow_C_ExecuteUbergraph_XpBoostRow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function XpBoostRow.XpBoostRow_C.Give Boost Clicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl        Player_to_Boost                (Parm)

void UXpBoostRow_C::Give_Boost_Clicked__DelegateSignature(const struct FUniqueNetIdRepl& Player_to_Boost)
{
	static auto fn = UObject::FindObject<UFunction>("Function XpBoostRow.XpBoostRow_C.Give Boost Clicked__DelegateSignature");

	UXpBoostRow_C_Give_Boost_Clicked__DelegateSignature_Params params;
	params.Player_to_Boost = Player_to_Boost;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
