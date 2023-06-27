#pragma once

// Fortnite (14.30) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class PurchaseFlow.PurchaseFlowJSBridge
// 0x0010 (0x0038 - 0x0028)
class UPurchaseFlowJSBridge : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class PurchaseFlow.PurchaseFlowJSBridge");
		
		return ptr;
	}


	void RequestClose(const struct FString& CloseInfo);
	void Receipt(const struct FPurchaseFlowReceiptParam& Receipt);
	bool LaunchValidatedExternalBrowserUrl(const struct FString& AllowedBrowserID, const struct FString& URL);
	bool LaunchExternalBrowserUrl(const struct FString& URL);
	struct FString GetExternalBrowserPath(const struct FString& BrowserId);
	struct FString GetExternalBrowserName(const struct FString& BrowserId);
	struct FString GetDefaultExternalBrowserID(const struct FString& URL);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
