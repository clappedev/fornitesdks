#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x10 (0x888 - 0x878)
// WidgetBlueprintGeneratedClass ActionDetailsSourceKeybindWidget.ActionDetailsSourceKeybindWidget_C
class UActionDetailsSourceKeybindWidget_C : public UKeybindWidget_C
{
public:
	UInterfaceProperty_                          ActionSource;                                      // 0x878(0x10)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ActionDetailsSourceKeybindWidget_C");
		return Clss;
	}

	void HandleActionSourceValueChange(class UObject* Source);
	void BindActionSourceEvents(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void UnbindActionSourceEvents(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void SetActionSource(UInterfaceProperty_ Value, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue1, bool CallFunc_NotEqual_ObjectObject_ReturnValue);
	void UpdateInputAction(const struct FFortGlobalActionDetails& ActionDetails, enum class EFortKeybindForcedHoldStatus Temp_byte_Variable, enum class EFortKeybindForcedHoldStatus Temp_byte_Variable1, bool Temp_bool_Variable, const struct FFortGlobalActionDetails& CallFunc_GetValue_ReturnValue, enum class EFortKeybindForcedHoldStatus K2Node_Select_Default, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
