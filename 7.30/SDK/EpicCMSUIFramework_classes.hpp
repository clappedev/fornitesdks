#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0xB0 (0x378 - 0x2C8)
// Class EpicCMSUIFramework.EpicCMSImage
class UEpicCMSImage : public UCommonLazyImage
{
public:
	UMulticastDelegateProperty_                  OnImageLoadingComplete;                            // 0x2C8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FSlateBrush                           LoadingFailFallback;                               // 0x2D8(0x88)(Edit, NativeAccessSpecifierPrivate)
	class UTexture2D*                            ExternalMedia;                                     // 0x360(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bDownloadingExternalMedia;                         // 0x368(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1011[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EpicCMSImage");
		return Clss;
	}

};

// 0x68 (0x290 - 0x228)
// Class EpicCMSUIFramework.EpicCMSLayoutBase
class UEpicCMSLayoutBase : public UUserWidget
{
public:
	TArray<struct FSlotDescription>              CarouselSlotDescriptions;                          // 0x228(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TSubclassOf<class UEpicCMSTileCarousel>      CarouselClass;                                     // 0x238(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1012[0x50];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EpicCMSLayoutBase");
		return Clss;
	}

};

// 0x88 (0xB0 - 0x28)
// Class EpicCMSUIFramework.EpicCMSManager
class UEpicCMSManager : public UObject
{
public:
	uint8                                        Pad_1013[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CmsEndpointOverride;                               // 0x40(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bRefreshing;                                       // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1014[0x5F];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EpicCMSManager");
		return Clss;
	}

};

// 0x90 (0x3A8 - 0x318)
// Class EpicCMSUIFramework.EpicCMSScreenBase
class UEpicCMSScreenBase : public UCommonActivatablePanel
{
public:
	class FString                                TileSetFieldName;                                  // 0x318(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UDataTable>             TileTypeToTileClassDataTable;                      // 0x328(0x28)(Edit, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSoftClassPtr<class UUserWidget>             LayoutErrorClass;                                  // 0x350(0x28)(Edit, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSoftObjectPtr<class UDataTable>             LayoutTypeToLayoutClassDataTable;                  // 0x378(0x28)(Edit, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1015[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EpicCMSScreenBase");
		return Clss;
	}

};

// 0x18 (0x248 - 0x230)
// Class EpicCMSUIFramework.EpicCMSSimpleMessage
class UEpicCMSSimpleMessage : public UCommonUserWidget
{
public:
	class UCommonTextBlock*                      TitleText;                                         // 0x230(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonTextBlock*                      BodyText;                                          // 0x238(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UEpicCMSImage*                         PrimaryImage;                                      // 0x240(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EpicCMSSimpleMessage");
		return Clss;
	}

};

// 0x110 (0xC38 - 0xB28)
// Class EpicCMSUIFramework.EpicCMSTileBase
class UEpicCMSTileBase : public UCommonButton
{
public:
	uint8                                        Pad_1016[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UCommonTextStyle>          DefaultTitleTextStyle;                             // 0xB30(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UCommonTextStyle>          FeaturedTitleTextStyle;                            // 0xB38(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FText                                  Title;                                             // 0xB40(0x18)(BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	class FString                                Link;                                              // 0xB58(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bDownloadingExternalMedia;                         // 0xB68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bRefreshingMcpCatalog;                             // 0xB69(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1017[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            ExternalMedia;                                     // 0xB70(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1018[0xA0];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonLazyImage*                      LazyImage_Icon;                                    // 0xC18(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      TitleTextBlock;                                    // 0xC20(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      SubtitleTextBlock;                                 // 0xC28(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      EyebrowTextBlock;                                  // 0xC30(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EpicCMSTileBase");
		return Clss;
	}

	void Launch();
};

// 0x50 (0x278 - 0x228)
// Class EpicCMSUIFramework.EpicCMSTileCarousel
class UEpicCMSTileCarousel : public UUserWidget
{
public:
	struct FSlateSound                           PreviousButtonSound;                               // 0x228(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FSlateSound                           NextButtonSound;                                   // 0x240(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	class UCommonWidgetCarousel*                 Carousel;                                          // 0x258(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidget*                               NextPageButton;                                    // 0x260(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidget*                               PreviousPageButton;                                // 0x268(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bShouldShowNavigationOnlyOnHover;                  // 0x270(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsShowingNavigation;                              // 0x271(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1019[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EpicCMSTileCarousel");
		return Clss;
	}

	void SetCurrentPageByIndex(int32 PageIndex);
	void PreviousPage();
	void NextPage();
	void NavigationVisibilityChanged(bool bShowNavigation);
	void HandleTilePageAdded(class UWidget* TileWidget);
	int32 GetCurrentPageIndex();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
