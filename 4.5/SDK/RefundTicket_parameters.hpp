#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x0 (0x0 - 0x0)
// Function RefundTicket.RefundTicket_C.ConsumeEvent
struct URefundTicket_C_ConsumeEvent_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function RefundTicket.RefundTicket_C.IsConsumed
struct URefundTicket_C_IsConsumed_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function RefundTicket.RefundTicket_C.PendingEvent
struct URefundTicket_C_PendingEvent_Params
{
public:
	bool                                         IsPending;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x5 (0x5 - 0x0)
// Function RefundTicket.RefundTicket_C.ExecuteUbergraph_RefundTicket
struct URefundTicket_C_ExecuteUbergraph_RefundTicket_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_isPending;                      // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
