// Fortnite (14.30) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PurchaseFlow.PurchaseFlowJSBridge.RequestClose
// (Final, Native, Public)
// Parameters:
// struct FString                 CloseInfo                      (Parm, ZeroConstructor)

void UPurchaseFlowJSBridge::RequestClose(const struct FString& CloseInfo)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PurchaseFlow.PurchaseFlowJSBridge.RequestClose");

	UPurchaseFlowJSBridge_RequestClose_Params params;
	params.CloseInfo = CloseInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PurchaseFlow.PurchaseFlowJSBridge.Receipt
// (Final, Native, Public)
// Parameters:
// struct FPurchaseFlowReceiptParam Receipt                        (Parm)

void UPurchaseFlowJSBridge::Receipt(const struct FPurchaseFlowReceiptParam& Receipt)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PurchaseFlow.PurchaseFlowJSBridge.Receipt");

	UPurchaseFlowJSBridge_Receipt_Params params;
	params.Receipt = Receipt;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PurchaseFlow.PurchaseFlowJSBridge.LaunchValidatedExternalBrowserUrl
// (Final, Native, Public)
// Parameters:
// struct FString                 AllowedBrowserID               (Parm, ZeroConstructor)
// struct FString                 URL                            (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPurchaseFlowJSBridge::LaunchValidatedExternalBrowserUrl(const struct FString& AllowedBrowserID, const struct FString& URL)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PurchaseFlow.PurchaseFlowJSBridge.LaunchValidatedExternalBrowserUrl");

	UPurchaseFlowJSBridge_LaunchValidatedExternalBrowserUrl_Params params;
	params.AllowedBrowserID = AllowedBrowserID;
	params.URL = URL;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PurchaseFlow.PurchaseFlowJSBridge.LaunchExternalBrowserUrl
// (Final, Native, Public)
// Parameters:
// struct FString                 URL                            (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPurchaseFlowJSBridge::LaunchExternalBrowserUrl(const struct FString& URL)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PurchaseFlow.PurchaseFlowJSBridge.LaunchExternalBrowserUrl");

	UPurchaseFlowJSBridge_LaunchExternalBrowserUrl_Params params;
	params.URL = URL;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PurchaseFlow.PurchaseFlowJSBridge.GetExternalBrowserPath
// (Final, Native, Public)
// Parameters:
// struct FString                 BrowserId                      (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UPurchaseFlowJSBridge::GetExternalBrowserPath(const struct FString& BrowserId)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PurchaseFlow.PurchaseFlowJSBridge.GetExternalBrowserPath");

	UPurchaseFlowJSBridge_GetExternalBrowserPath_Params params;
	params.BrowserId = BrowserId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PurchaseFlow.PurchaseFlowJSBridge.GetExternalBrowserName
// (Final, Native, Public)
// Parameters:
// struct FString                 BrowserId                      (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UPurchaseFlowJSBridge::GetExternalBrowserName(const struct FString& BrowserId)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PurchaseFlow.PurchaseFlowJSBridge.GetExternalBrowserName");

	UPurchaseFlowJSBridge_GetExternalBrowserName_Params params;
	params.BrowserId = BrowserId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PurchaseFlow.PurchaseFlowJSBridge.GetDefaultExternalBrowserID
// (Final, Native, Public)
// Parameters:
// struct FString                 URL                            (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UPurchaseFlowJSBridge::GetDefaultExternalBrowserID(const struct FString& URL)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PurchaseFlow.PurchaseFlowJSBridge.GetDefaultExternalBrowserID");

	UPurchaseFlowJSBridge_GetDefaultExternalBrowserID_Params params;
	params.URL = URL;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
