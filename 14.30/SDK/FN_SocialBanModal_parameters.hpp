#pragma once

// Fortnite (14.30) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function SocialBanModal.SocialBanModal_C.OnDisplayModeSet
struct USocialBanModal_C_OnDisplayModeSet_Params
{
	bool                                               bIsBanned;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SocialBanModal.SocialBanModal_C.ExecuteUbergraph_SocialBanModal
struct USocialBanModal_C_ExecuteUbergraph_SocialBanModal_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SocialBanModal.SocialBanModal_C.OnCloseSucceeded__DelegateSignature
struct USocialBanModal_C_OnCloseSucceeded__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
