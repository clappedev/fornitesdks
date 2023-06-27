#pragma once

// Fortnite (1.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function XpBoostRow.XpBoostRow_C.HasBoost
struct UXpBoostRow_C_HasBoost_Params
{
	class UFortAccountItemDefinition*                  AccountItemDef;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function XpBoostRow.XpBoostRow_C.Update Boost Material
struct UXpBoostRow_C_Update_Boost_Material_Params
{
};

// Function XpBoostRow.XpBoostRow_C.Center On Row
struct UXpBoostRow_C_Center_On_Row_Params
{
};

// Function XpBoostRow.XpBoostRow_C.Update Party Member
struct UXpBoostRow_C_Update_Party_Member_Params
{
	bool                                               Row_Has_Party_Member;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FFortTeamMemberInfo                         Party_Members_Info;                                       // (Parm)
};

// Function XpBoostRow.XpBoostRow_C.OnMCPRequestComplete_13866D8D449A2AA167E306B6A172BD62
struct UXpBoostRow_C_OnMCPRequestComplete_13866D8D449A2AA167E306B6A172BD62_Params
{
};

// Function XpBoostRow.XpBoostRow_C.DialogResult_9BF60C804C82DAA0C1A2839132130883
struct UXpBoostRow_C_DialogResult_9BF60C804C82DAA0C1A2839132130883_Params
{
	EFortDialogResult                                  Result;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ResultName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function XpBoostRow.XpBoostRow_C.DialogResult_8D859C4A4CE7EC02F6B02CA6729E58B0
struct UXpBoostRow_C_DialogResult_8D859C4A4CE7EC02F6B02CA6729E58B0_Params
{
	EFortDialogResult                                  Result;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ResultName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function XpBoostRow.XpBoostRow_C.OnMCPRequestComplete_59B43F5044B96A114CC64595A3818F3C
struct UXpBoostRow_C_OnMCPRequestComplete_59B43F5044B96A114CC64595A3818F3C_Params
{
};

// Function XpBoostRow.XpBoostRow_C.BndEvt__GiveXPButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
struct UXpBoostRow_C_BndEvt__GiveXPButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function XpBoostRow.XpBoostRow_C.ExecuteUbergraph_XpBoostRow
struct UXpBoostRow_C_ExecuteUbergraph_XpBoostRow_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function XpBoostRow.XpBoostRow_C.Give Boost Clicked__DelegateSignature
struct UXpBoostRow_C_Give_Boost_Clicked__DelegateSignature_Params
{
	struct FUniqueNetIdRepl                            Player_to_Boost;                                          // (Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
