#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x10 (0x220 - 0x210)
// WidgetBlueprintGeneratedClass ThirdPartyTab.ThirdPartyTab_C
class UThirdPartyTab_C : public UCommonUserWidget
{
public:
	class UFortRichTextBlock*                    FortRichTextBlock_0;                               // 0x210(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            ScrollBox_2;                                       // 0x218(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ThirdPartyTab_C");
		return Clss;
	}

	void Activate_Scroll_Box(class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsMobileApp_ReturnValue, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
