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

// Class GooglePAD.GooglePADFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UGooglePADFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class GooglePAD.GooglePADFunctionLibrary");
		
		return ptr;
	}


	EGooglePADErrorCode STATIC_ShowCellularDataConfirmation();
	EGooglePADErrorCode STATIC_RequestRemoval(const struct FString& Name);
	EGooglePADErrorCode STATIC_RequestInfo(TArray<struct FString> AssetPacks);
	EGooglePADErrorCode STATIC_RequestDownload(TArray<struct FString> AssetPacks);
	void STATIC_ReleaseDownloadState(int State);
	void STATIC_ReleaseAssetPackLocation(int Location);
	int STATIC_GetTotalBytesToDownload(int State);
	EGooglePADStorageMethod STATIC_GetStorageMethod(int Location);
	EGooglePADErrorCode STATIC_GetShowCellularDataConfirmationStatus(EGooglePADCellularDataConfirmStatus* Status);
	EGooglePADDownloadStatus STATIC_GetDownloadStatus(int State);
	EGooglePADErrorCode STATIC_GetDownloadState(const struct FString& Name, int* State);
	int STATIC_GetBytesDownloaded(int State);
	struct FString STATIC_GetAssetsPath(int Location);
	EGooglePADErrorCode STATIC_GetAssetPackLocation(const struct FString& Name, int* Location);
	EGooglePADErrorCode STATIC_CancelDownload(TArray<struct FString> AssetPacks);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
