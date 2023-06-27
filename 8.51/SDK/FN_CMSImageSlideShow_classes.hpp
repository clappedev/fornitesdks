#pragma once

// Fortnite (8.51) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass CMSImageSlideShow.CMSImageSlideShow_C
// 0x0028 (0x0258 - 0x0230)
class UCMSImageSlideShow_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0230(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UCommonWidgetCarousel*                       Images;                                                   // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	float                                              ScrollInterview;                                          // 0x0240(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0244(0x0004) MISSED OFFSET
	unsigned char                                      UnknownData01[0x10];                                      // 0x0244(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty CMSImageSlideShow.CMSImageSlideShow_C.CarouselIndexChanged

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CMSImageSlideShow.CMSImageSlideShow_C");
		return ptr;
	}


	void SetMediaURLs(TArray<struct FString> MediaURLs);
	void BndEvt__Images_K2Node_ComponentBoundEvent(class UCommonWidgetCarousel* CarouselWidget, int CurrentPageIndex);
	void ExecuteUbergraph_CMSImageSlideShow(int EntryPoint);
	void CarouselIndexChanged__DelegateSignature(int CurrentPageIndex);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
