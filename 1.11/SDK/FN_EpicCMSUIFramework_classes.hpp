#pragma once

// Fortnite (1.11) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class EpicCMSUIFramework.EpicCMSScreenBase
// 0x0090 (0x0450 - 0x03C0)
class UEpicCMSScreenBase : public UCommonActivatablePanel
{
public:
	struct FString                                     TileSetFieldName;                                         // 0x03C0(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x28];                                      // 0x03D0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty EpicCMSUIFramework.EpicCMSScreenBase.TileTypeToTileClassDataTable
	unsigned char                                      UnknownData01[0x28];                                      // 0x03F8(0x0028) UNKNOWN PROPERTY: SoftClassProperty EpicCMSUIFramework.EpicCMSScreenBase.LayoutErrorClass
	unsigned char                                      UnknownData02[0x28];                                      // 0x0420(0x0028) UNKNOWN PROPERTY: SoftObjectProperty EpicCMSUIFramework.EpicCMSScreenBase.LayoutTypeToLayoutClassDataTable
	unsigned char                                      UnknownData03[0x8];                                       // 0x0448(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EpicCMSUIFramework.EpicCMSScreenBase");
		return ptr;
	}

};


// Class EpicCMSUIFramework.EpicCMSImage
// 0x0018 (0x0228 - 0x0210)
class UEpicCMSImage : public UCommonLazyImage
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0210(0x0010) MISSED OFFSET
	bool                                               bDownloadingExternalMedia;                                // 0x0220(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0221(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EpicCMSUIFramework.EpicCMSImage");
		return ptr;
	}

};


// Class EpicCMSUIFramework.EpicCMSLayoutBase
// 0x0068 (0x0270 - 0x0208)
class UEpicCMSLayoutBase : public UUserWidget
{
public:
	TArray<struct FSlotDescription>                    CarouselSlotDescriptions;                                 // 0x0208(0x0010) (Edit, ZeroConstructor)
	class UClass*                                      CarouselClass;                                            // 0x0218(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0220(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EpicCMSUIFramework.EpicCMSLayoutBase");
		return ptr;
	}

};


// Class EpicCMSUIFramework.EpicCMSManager
// 0x00B8 (0x00E0 - 0x0028)
class UEpicCMSManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0028(0x0078) MISSED OFFSET
	struct FString                                     CmsEndpointOverride;                                      // 0x00A0(0x0010) (ZeroConstructor)
	bool                                               bRefreshing;                                              // 0x00B0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2F];                                      // 0x00B1(0x002F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EpicCMSUIFramework.EpicCMSManager");
		return ptr;
	}

};


// Class EpicCMSUIFramework.EpicCMSTileBase
// 0x0118 (0x0898 - 0x0780)
class UEpicCMSTileBase : public UCommonButton
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0780(0x0008) MISSED OFFSET
	class UClass*                                      DefaultTitleTextStyle;                                    // 0x0788(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      FeaturedTitleTextStyle;                                   // 0x0790(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FText                                       Title;                                                    // 0x0798(0x0018) (BlueprintVisible, BlueprintReadOnly)
	struct FString                                     Link;                                                     // 0x07B0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               bDownloadingExternalMedia;                                // 0x07C0(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bRefreshingMcpCatalog;                                    // 0x07C1(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xB6];                                      // 0x07C2(0x00B6) MISSED OFFSET
	class UCommonLazyImage*                            LazyImage_Icon;                                           // 0x0878(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCommonTextBlock*                            TitleTextBlock;                                           // 0x0880(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCommonTextBlock*                            SubtitleTextBlock;                                        // 0x0888(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCommonTextBlock*                            EyebrowTextBlock;                                         // 0x0890(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EpicCMSUIFramework.EpicCMSTileBase");
		return ptr;
	}


	void Launch();
	void DynamicHandleIconLoadingStateChanged(bool bIsLoading);
};


// Class EpicCMSUIFramework.EpicCMSTileCarousel
// 0x0050 (0x0258 - 0x0208)
class UEpicCMSTileCarousel : public UUserWidget
{
public:
	struct FSlateSound                                 PreviousButtonSound;                                      // 0x0208(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FSlateSound                                 NextButtonSound;                                          // 0x0220(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	class UCommonWidgetCarousel*                       Carousel;                                                 // 0x0238(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidget*                                     NextPageButton;                                           // 0x0240(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidget*                                     PreviousPageButton;                                       // 0x0248(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bShouldShowNavigationOnlyOnHover;                         // 0x0250(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bIsShowingNavigation;                                     // 0x0251(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0252(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EpicCMSUIFramework.EpicCMSTileCarousel");
		return ptr;
	}


	void SetCurrentPageByIndex(int PageIndex);
	void PreviousPage();
	void NextPage();
	void NavigationVisibilityChanged(bool bShowNavigation);
	void HandleTilePageAdded(class UWidget* TileWidget);
	int GetCurrentPageIndex();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
