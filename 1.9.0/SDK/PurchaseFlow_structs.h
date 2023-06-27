#pragma once

// Name: Fortnite, Version: 1.9.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct PurchaseFlow.PurchaseFlowReceiptParam
// 0x0030
struct FPurchaseFlowReceiptParam
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct PurchaseFlow.PurchaseFlowOffer
// 0x0038
struct FPurchaseFlowOffer
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0000(0x0038) MISSED OFFSET
};

// ScriptStruct PurchaseFlow.PurchaseFlowItem
// 0x0030
struct FPurchaseFlowItem
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
