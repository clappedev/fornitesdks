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

// Function GiftBoxButton.GiftBoxButton_C.Construct
struct UGiftBoxButton_C_Construct_Params
{
};

// Function GiftBoxButton.GiftBoxButton_C.PlayGiftSelectedAnimation
struct UGiftBoxButton_C_PlayGiftSelectedAnimation_Params
{
	bool                                               bIsSelected;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GiftBoxButton.GiftBoxButton_C.ExecuteUbergraph_GiftBoxButton
struct UGiftBoxButton_C_ExecuteUbergraph_GiftBoxButton_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
