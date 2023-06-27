#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x8 (0x3F8 - 0x3F0)
// WidgetBlueprintGeneratedClass Button_BuildingInteract.Button_BuildingInteract_C
class UButton_BuildingInteract_C : public UCommonBacchusButton_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3F0(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Button_BuildingInteract_C");
		return Clss;
	}

	void OnClicked();
	void ExecuteUbergraph_Button_BuildingInteract(int32 EntryPoint, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
