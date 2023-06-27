#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x28 (0x3F8 - 0x3D0)
// WidgetBlueprintGeneratedClass Button_EmoteMenu.Button_EmoteMenu_C
class UButton_EmoteMenu_C : public UCommonBacchusButton_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3D0(0x8)(Transient, DuplicateTransient)
	struct FGameplayTagContainer                 Dancer;                                            // 0x3D8(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Button_EmoteMenu_C");
		return Clss;
	}

	void OnClicked();
	void ExecuteUbergraph_Button_EmoteMenu(int32 EntryPoint, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
