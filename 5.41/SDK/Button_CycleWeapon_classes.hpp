#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x8 (0x3D8 - 0x3D0)
// WidgetBlueprintGeneratedClass Button_CycleWeapon.Button_CycleWeapon_C
class UButton_CycleWeapon_C : public UCommonBacchusButton_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3D0(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Button_CycleWeapon_C");
		return Clss;
	}

	void OnClicked();
	void ExecuteUbergraph_Button_CycleWeapon(int32 EntryPoint, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
