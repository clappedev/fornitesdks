
#include "../SDK.h"

// Name: Fortnite, Version: 1.9.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function PurchaseFlow.PurchaseFlowJSBridge.RequestClose
// (Final, Native, Public)

void UPurchaseFlowJSBridge::RequestClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function PurchaseFlow.PurchaseFlowJSBridge.RequestClose");

	UPurchaseFlowJSBridge_RequestClose_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PurchaseFlow.PurchaseFlowJSBridge.RECEIPT
// (Final, Native, Public)
// Parameters:
// struct FPurchaseFlowReceiptParam RECEIPT                        (Parm)

void UPurchaseFlowJSBridge::RECEIPT(const struct FPurchaseFlowReceiptParam& RECEIPT)
{
	static auto fn = UObject::FindObject<UFunction>("Function PurchaseFlow.PurchaseFlowJSBridge.RECEIPT");

	UPurchaseFlowJSBridge_RECEIPT_Params params;
	params.RECEIPT = RECEIPT;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
