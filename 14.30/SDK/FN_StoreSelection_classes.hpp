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

// Class StoreSelection.FortStoreSelectionData
// 0x0058 (0x03C8 - 0x0370)
class UFortStoreSelectionData : public UFortGameFeatureData
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0370(0x0028) UNKNOWN PROPERTY: SoftClassProperty StoreSelection.FortStoreSelectionData.StoreSelectionScreenClass
	struct FText                                       RegularStoreSelectedText;                                 // 0x0398(0x0018) (Edit)
	struct FText                                       NonRegularStoreSelectedText;                              // 0x03B0(0x0018) (Edit)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class StoreSelection.FortStoreSelectionData");
		
		return ptr;
	}

};


// Class StoreSelection.FortStoreSelectionOptionEntry
// 0x0020 (0x0BC0 - 0x0BA0)
class UFortStoreSelectionOptionEntry : public UCommonButton
{
public:
	class UFortLazyImage*                              Image_Icon;                                               // 0x0BA0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCommonTextBlock*                            Text_Description;                                         // 0x0BA8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCommonTextBlock*                            Text_Price;                                               // 0x0BB0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCommonRichTextBlock*                        RichText_Label;                                           // 0x0BB8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class StoreSelection.FortStoreSelectionOptionEntry");
		
		return ptr;
	}

};


// Class StoreSelection.FortStoreSelectionScreen
// 0x03D8 (0x0818 - 0x0440)
class UFortStoreSelectionScreen : public UCommonActivatablePanel
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0440(0x0008) MISSED OFFSET
	class UCommonButtonGroup*                          EntryBoxButtonGroup;                                      // 0x0448(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UFortRealMoneyOffer*                         StoreOffer;                                               // 0x0450(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCommonLoadGuard*                            StoreOfferLoadGuard;                                      // 0x0458(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCommonTextBlock*                            Text_Header;                                              // 0x0460(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDynamicEntryBox*                            DynamicEntryBox_Options;                                  // 0x0468(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCommonButton*                               Button_Continue;                                          // 0x0470(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCommonButton*                               Button_Cancel;                                            // 0x0478(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCommonRichTextBlock*                        RichText_InitiallySelectedHint;                           // 0x0480(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TScriptInterface<class UPurchaseChoiceRequesterInterface> PurchaseChoiceOwner;                                      // 0x0488(0x0010) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<struct FItemData>                           StoreOptions;                                             // 0x0498(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData01[0x28];                                      // 0x04A8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty StoreSelection.FortStoreSelectionScreen.SoftDisplayAsset
	struct FItemData                                   ItemData[0xB];                                            // 0x04D0(0x0048) (Edit)
	struct FText                                       OptionalLabels[0x2];                                      // 0x07E8(0x0018) (Edit)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class StoreSelection.FortStoreSelectionScreen");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
