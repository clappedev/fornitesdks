#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x20 (0x2C8 - 0x2A8)
// WidgetBlueprintGeneratedClass CreativeLobbyAd.CreativeLobbyAd_C
class UCreativeLobbyAd_C : public UFortCreativeAdTile
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2A8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonTextBlock*                      Text_Description;                                  // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Text_Header;                                       // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Text_SubHeader;                                    // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CreativeLobbyAd_C");
		return Clss;
	}

	void OnCMSDataUpdated();
	void ExecuteUbergraph_CreativeLobbyAd(int32 EntryPoint, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue1, class FText CallFunc_TextToUpper_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue1, class FText CallFunc_Conv_StringToText_ReturnValue2, class FText CallFunc_TextToUpper_ReturnValue2);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
