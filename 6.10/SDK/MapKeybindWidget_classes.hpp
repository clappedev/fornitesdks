#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x10 (0x258 - 0x248)
// WidgetBlueprintGeneratedClass MapKeybindWidget.MapKeybindWidget_C
class UMapKeybindWidget_C : public UFortHUDElementWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x248(0x8)(Transient, DuplicateTransient)
	class UImage*                                BindingImage;                                      // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MapKeybindWidget_C");
		return Clss;
	}

	void UpdateKeybindWidget(class UTexture2D* PCIcon, class UTexture2D* XB1Icon, class UTexture2D* PS4Icon, enum class ECommonGamepadType Temp_byte_Variable, class UTexture2D* Temp_object_Variable, class UCommonInputSubsystem* CallFunc_GetContext_ReturnValue, enum class ECommonGamepadType CallFunc_GetCurrentGamepadType_ReturnValue, class UCommonInputSubsystem* CallFunc_GetContext_ReturnValue1, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UTexture2D* K2Node_Select_Default, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush1);
	void Construct();
	void Destruct();
	void ExecuteUbergraph_MapKeybindWidget(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
