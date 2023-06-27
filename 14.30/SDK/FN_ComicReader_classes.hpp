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

// Class ComicReader.ComicBook
// 0x0018 (0x0048 - 0x0030)
class UComicBook : public UDataAsset
{
public:
	TArray<class UFortComicPage*>                      Pages;                                                    // 0x0030(0x0010) (Edit, ExportObject, ZeroConstructor)
	int                                                ExportStartingWithPageIndex;                              // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                PagesToExport;                                            // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class ComicReader.ComicBook");
		
		return ptr;
	}


	void CopyToClipboardForCMS();
};


// Class ComicReader.FortComicReader
// 0x0098 (0x01A0 - 0x0108)
class UFortComicReader : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0108(0x0028) MISSED OFFSET
	TArray<class UFortComicPage*>                      Pages;                                                    // 0x0130(0x0010) (ZeroConstructor, Transient)
	struct FFortComicPanelReference                    CurrentPanel;                                             // 0x0140(0x0008) (Edit)
	EFortComicViewMode                                 ViewMode;                                                 // 0x0148(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0149(0x0007) MISSED OFFSET
	unsigned char                                      UnknownData02[0x10];                                      // 0x0149(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty ComicReader.FortComicReader.BP_OnPanelChanged
	unsigned char                                      UnknownData03[0x10];                                      // 0x0160(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty ComicReader.FortComicReader.BP_OnNext
	unsigned char                                      UnknownData04[0x10];                                      // 0x0170(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty ComicReader.FortComicReader.BP_OnPrevious
	unsigned char                                      UnknownData05[0x10];                                      // 0x0180(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty ComicReader.FortComicReader.BP_OnViewModeChanged
	unsigned char                                      UnknownData06[0x10];                                      // 0x0190(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty ComicReader.FortComicReader.BP_OnHoverZoneChanged

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class ComicReader.FortComicReader");
		
		return ptr;
	}


	void ToggleViewMode();
	void SetCurrentPage(int InPageIndex);
	void Previous();
	void Next();
	EFortComicViewMode GetViewMode();
	int GetTotalPageNumber();
	int GetNumPanelsOnPage(int InPageNum);
	int GetCurrentPanelIndex();
	int GetCurrentPageNumber();
	int GetCurrentPageIndex();
};


// Class ComicReader.FortComicScreen
// 0x0020 (0x03C0 - 0x03A0)
class UFortComicScreen : public UAthenaSpatialScreen
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x03A0(0x0010) MISSED OFFSET
	class UFortComicReader*                            ComicReader;                                              // 0x03B0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      LoadingSpinner;                                           // 0x03B8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class ComicReader.FortComicScreen");
		
		return ptr;
	}


	void UpdateShowContinueOnLastPage(bool InShowContinue);
	void UpdateComicTitle(const struct FString& InComicTitle);
	void OnPreProcessedNavInput(EUINavigation NavInput);
	void HandlePreprocessorNavInput(EUINavigation InNavDirection);
};


// Class ComicReader.SaveData_ComicBook
// 0x0008 (0x0048 - 0x0040)
class USaveData_ComicBook : public USaveData
{
public:
	int                                                LastPage;                                                 // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class ComicReader.SaveData_ComicBook");
		
		return ptr;
	}

};


// Class ComicReader.FortComicPage
// 0x0098 (0x00C0 - 0x0028)
class UFortComicPage : public UObject
{
public:
	struct FSlateBrush                                 PageBrush;                                                // 0x0028(0x0088) (Edit)
	TArray<struct FFortComicPanel>                     Panels;                                                   // 0x00B0(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class ComicReader.FortComicPage");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
