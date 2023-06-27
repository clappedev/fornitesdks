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

// Function WebPurchase.WebPurchase_C.HandleBack
struct UWebPurchase_C_HandleBack_Params
{
	bool                                               bPassThrough;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WebPurchase.WebPurchase_C.BindDelegates
struct UWebPurchase_C_BindDelegates_Params
{
};

// Function WebPurchase.WebPurchase_C.BP_OnActivated
struct UWebPurchase_C_BP_OnActivated_Params
{
};

// Function WebPurchase.WebPurchase_C.ExecuteUbergraph_WebPurchase
struct UWebPurchase_C_ExecuteUbergraph_WebPurchase_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
