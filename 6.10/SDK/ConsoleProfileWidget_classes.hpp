#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x10 (0x228 - 0x218)
// WidgetBlueprintGeneratedClass ConsoleProfileWidget.ConsoleProfileWidget_C
class UConsoleProfileWidget_C : public UUserWidget
{
public:
	class UCommonTextBlock*                      DisplayName;                                       // 0x218(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Prefix;                                            // 0x220(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ConsoleProfileWidget_C");
		return Clss;
	}

	void SetDisplayName(class FText DisplayName);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
