#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x8 (0x218 - 0x210)
// WidgetBlueprintGeneratedClass ActiveModifierItemHUD.ActiveModifierItemHUD_C
class UActiveModifierItemHUD_C : public UCommonUserWidget
{
public:
	class UImage*                                ImageModifier;                                     // 0x210(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ActiveModifierItemHUD_C");
		return Clss;
	}

	void AssignIcon(const struct FSlateBrush& InIconSlateBrush);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
