#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x19 (0x8A1 - 0x888)
// WidgetBlueprintGeneratedClass GlobalActionKeybindWidget.GlobalActionKeybindWidget_C
class UGlobalActionKeybindWidget_C : public UActionDetailsSourceKeybindWidget_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x888(0x8)(Transient, DuplicateTransient)
	enum class EFortGlobalAction                 GlobalAction;                                      // 0x890(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5B37[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortStandardGlobalActionDetailsDataSource* TypedActionSource;                                 // 0x898(0x8)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortGlobalActionDetailsFunctionContext ActionDetailsContext;                              // 0x8A0(0x1)(Edit, BlueprintVisible, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GlobalActionKeybindWidget_C");
		return Clss;
	}

	void PropagateActionDetailsContext();
	void SetActionDetailsContext(const struct FFortGlobalActionDetailsFunctionContext& Value);
	void SetGlobalAction(enum class EFortGlobalAction Value);
	void PropagateGlobalAction();
	void OnInitialized();
	void ExecuteUbergraph_GlobalActionKeybindWidget(int32 EntryPoint, const struct FFortGlobalActionDetailsFunctionContext& Temp_struct_Variable, class UFortStandardGlobalActionDetailsDataSource* CallFunc_ConstructWithDefaultContexts_ReturnValue, UInterfaceProperty_ CallFunc_SetActionSource_Value_CastInput);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
