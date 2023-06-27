#pragma once

// Fortnite (1.11) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MulchRefundItemQuantityList.MulchRefundItemQuantityList_C.AddListEntry
struct UMulchRefundItemQuantityList_C_AddListEntry_Params
{
	class UFortItemQuantityListEntryBase**             ListEntry;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MulchRefundItemQuantityList.MulchRefundItemQuantityList_C.ExecuteUbergraph_MulchRefundItemQuantityList
struct UMulchRefundItemQuantityList_C_ExecuteUbergraph_MulchRefundItemQuantityList_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
