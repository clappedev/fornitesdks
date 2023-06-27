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

// Function PurchaseUnavailable.PurchaseUnavailable_C.OnUpdateTextStyle
struct UPurchaseUnavailable_C_OnUpdateTextStyle_Params
{
	struct FText                                       OfferDisplayName;                                         // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function PurchaseUnavailable.PurchaseUnavailable_C.ExecuteUbergraph_PurchaseUnavailable
struct UPurchaseUnavailable_C_ExecuteUbergraph_PurchaseUnavailable_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
