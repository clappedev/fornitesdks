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

// Function WebPurchase.WebPurchase_C.HandleBack
struct UWebPurchase_C_HandleBack_Params
{
	bool                                               bPassThrough;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WebPurchase.WebPurchase_C.BindDelegates
struct UWebPurchase_C_BindDelegates_Params
{
};

// Function WebPurchase.WebPurchase_C.Dismiss
struct UWebPurchase_C_Dismiss_Params
{
};

// Function WebPurchase.WebPurchase_C.Display
struct UWebPurchase_C_Display_Params
{
	class UWidget*                                     WebWidget;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     AttemptedMTXOfferId;                                      // (Parm, ZeroConstructor)
};

// Function WebPurchase.WebPurchase_C.OnActivated
struct UWebPurchase_C_OnActivated_Params
{
};

// Function WebPurchase.WebPurchase_C.ExecuteUbergraph_WebPurchase
struct UWebPurchase_C_ExecuteUbergraph_WebPurchase_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
