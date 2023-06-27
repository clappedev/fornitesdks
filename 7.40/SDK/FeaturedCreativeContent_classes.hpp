#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x10 (0x240 - 0x230)
// WidgetBlueprintGeneratedClass FeaturedCreativeContent.FeaturedCreativeContent_C
class UFeaturedCreativeContent_C : public UFeaturedCreativeContent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCMSImageSlideShow_C*                  CMSImageSlideShow;                                 // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FeaturedCreativeContent_C");
		return Clss;
	}

	void OnSetMediaURLs(TArray<class FString>& MediaURLs);
	void ExecuteUbergraph_FeaturedCreativeContent(int32 EntryPoint, TArray<class FString>& K2Node_Event_MediaURLs);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
