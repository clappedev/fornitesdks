#pragma once

// Name: Fortnite, Version: 1.8.2

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum GameSubCatalog.ECatalogRequirementType
enum class ECatalogRequirementType : uint8_t
{

};


// Enum GameSubCatalog.ECatalogOfferType
enum class ECatalogOfferType : uint8_t
{

};


// Enum GameSubCatalog.ECatalogSaleType
enum class ECatalogSaleType : uint8_t
{

};


// Enum GameSubCatalog.EAppStore
enum class EAppStore : uint8_t
{

};


// Enum GameSubCatalog.EStoreCurrencyType
enum class EStoreCurrencyType : uint8_t
{

};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct GameSubCatalog.CatalogPurchaseNotification
// 0x0020
struct FCatalogPurchaseNotification
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct GameSubCatalog.CatalogDownload
// 0x0020
struct FCatalogDownload
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct GameSubCatalog.Storefront
// 0x0020
struct FStorefront
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0010(0x0010) MISSED OFFSET
};

// ScriptStruct GameSubCatalog.CatalogOffer
// 0x01D0
struct FCatalogOffer
{
	unsigned char                                      UnknownData00[0x1D0];                                     // 0x0000(0x01D0) MISSED OFFSET
};

// ScriptStruct GameSubCatalog.CatalogOfferRequirement
// 0x0018
struct FCatalogOfferRequirement
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct GameSubCatalog.CatalogMetaAssetInfo
// 0x0030
struct FCatalogMetaAssetInfo
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct GameSubCatalog.ItemQuantity
// 0x0038
struct FItemQuantity
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0000(0x0038) MISSED OFFSET
};

// ScriptStruct GameSubCatalog.CatalogDynamicBundle
// 0x0030
struct FCatalogDynamicBundle
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct GameSubCatalog.CatalogDynamicBundleItem
// 0x0078
struct FCatalogDynamicBundleItem
{
	struct FItemQuantity                               Item;                                                     // 0x0000(0x0038) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x40];                                      // 0x0038(0x0040) MISSED OFFSET
};

// ScriptStruct GameSubCatalog.CatalogItemPrice
// 0x0048
struct FCatalogItemPrice
{
	unsigned char                                      UnknownData00[0x48];                                      // 0x0000(0x0048) MISSED OFFSET
};

// ScriptStruct GameSubCatalog.CatalogKeyValue
// 0x0020
struct FCatalogKeyValue
{
	struct FString                                     Key;                                                      // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0010(0x0010) MISSED OFFSET
};

// ScriptStruct GameSubCatalog.CatalogItemSalePrice
// 0x0018
struct FCatalogItemSalePrice
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct GameSubCatalog.CatalogPurchaseInfo
// 0x0030
struct FCatalogPurchaseInfo
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct GameSubCatalog.CatalogReceiptInfo
// 0x0048
struct FCatalogReceiptInfo
{
	unsigned char                                      UnknownData00[0x48];                                      // 0x0000(0x0048) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
